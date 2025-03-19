/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/ConversionSource.h>
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

ConversionSource::ConversionSource(JsonView jsonValue)
{
  *this = jsonValue;
}

ConversionSource& ConversionSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileFormat"))
  {
    m_fileFormat = ConversionSourceFormatMapper::GetConversionSourceFormatForName(jsonValue.GetString("fileFormat"));
    m_fileFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputFile"))
  {
    m_inputFile = jsonValue.GetObject("inputFile");
    m_inputFileHasBeenSet = true;
  }
  return *this;
}

JsonValue ConversionSource::Jsonize() const
{
  JsonValue payload;

  if(m_fileFormatHasBeenSet)
  {
   payload.WithString("fileFormat", ConversionSourceFormatMapper::GetNameForConversionSourceFormat(m_fileFormat));
  }

  if(m_inputFileHasBeenSet)
  {
   payload.WithObject("inputFile", m_inputFile.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace B2BI
} // namespace Aws
