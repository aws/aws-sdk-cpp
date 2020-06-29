/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/TerminologyData.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Translate
{
namespace Model
{

TerminologyData::TerminologyData() : 
    m_fileHasBeenSet(false),
    m_format(TerminologyDataFormat::NOT_SET),
    m_formatHasBeenSet(false)
{
}

TerminologyData::TerminologyData(JsonView jsonValue) : 
    m_fileHasBeenSet(false),
    m_format(TerminologyDataFormat::NOT_SET),
    m_formatHasBeenSet(false)
{
  *this = jsonValue;
}

TerminologyData& TerminologyData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("File"))
  {
    m_file = HashingUtils::Base64Decode(jsonValue.GetString("File"));
    m_fileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Format"))
  {
    m_format = TerminologyDataFormatMapper::GetTerminologyDataFormatForName(jsonValue.GetString("Format"));

    m_formatHasBeenSet = true;
  }

  return *this;
}

JsonValue TerminologyData::Jsonize() const
{
  JsonValue payload;

  if(m_fileHasBeenSet)
  {
   payload.WithString("File", HashingUtils::Base64Encode(m_file));
  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("Format", TerminologyDataFormatMapper::GetNameForTerminologyDataFormat(m_format));
  }

  return payload;
}

} // namespace Model
} // namespace Translate
} // namespace Aws
