/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/JsonFormatDescriptor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutMetrics
{
namespace Model
{

JsonFormatDescriptor::JsonFormatDescriptor() : 
    m_fileCompression(JsonFileCompression::NOT_SET),
    m_fileCompressionHasBeenSet(false),
    m_charsetHasBeenSet(false)
{
}

JsonFormatDescriptor::JsonFormatDescriptor(JsonView jsonValue) : 
    m_fileCompression(JsonFileCompression::NOT_SET),
    m_fileCompressionHasBeenSet(false),
    m_charsetHasBeenSet(false)
{
  *this = jsonValue;
}

JsonFormatDescriptor& JsonFormatDescriptor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FileCompression"))
  {
    m_fileCompression = JsonFileCompressionMapper::GetJsonFileCompressionForName(jsonValue.GetString("FileCompression"));

    m_fileCompressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Charset"))
  {
    m_charset = jsonValue.GetString("Charset");

    m_charsetHasBeenSet = true;
  }

  return *this;
}

JsonValue JsonFormatDescriptor::Jsonize() const
{
  JsonValue payload;

  if(m_fileCompressionHasBeenSet)
  {
   payload.WithString("FileCompression", JsonFileCompressionMapper::GetNameForJsonFileCompression(m_fileCompression));
  }

  if(m_charsetHasBeenSet)
  {
   payload.WithString("Charset", m_charset);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
