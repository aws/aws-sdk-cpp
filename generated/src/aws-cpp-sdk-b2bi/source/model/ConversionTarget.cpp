/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/ConversionTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace B2BI
{
namespace Model
{

ConversionTarget::ConversionTarget(JsonView jsonValue)
{
  *this = jsonValue;
}

ConversionTarget& ConversionTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileFormat"))
  {
    m_fileFormat = ConversionTargetFormatMapper::GetConversionTargetFormatForName(jsonValue.GetString("fileFormat"));
    m_fileFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("formatDetails"))
  {
    m_formatDetails = jsonValue.GetObject("formatDetails");
    m_formatDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputSampleFile"))
  {
    m_outputSampleFile = jsonValue.GetObject("outputSampleFile");
    m_outputSampleFileHasBeenSet = true;
  }
  if(jsonValue.ValueExists("advancedOptions"))
  {
    m_advancedOptions = jsonValue.GetObject("advancedOptions");
    m_advancedOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue ConversionTarget::Jsonize() const
{
  JsonValue payload;

  if(m_fileFormatHasBeenSet)
  {
   payload.WithString("fileFormat", ConversionTargetFormatMapper::GetNameForConversionTargetFormat(m_fileFormat));
  }

  if(m_formatDetailsHasBeenSet)
  {
   payload.WithObject("formatDetails", m_formatDetails.Jsonize());

  }

  if(m_outputSampleFileHasBeenSet)
  {
   payload.WithObject("outputSampleFile", m_outputSampleFile.Jsonize());

  }

  if(m_advancedOptionsHasBeenSet)
  {
   payload.WithObject("advancedOptions", m_advancedOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
