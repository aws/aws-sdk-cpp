/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/DetectedJsonFormatDescriptor.h>
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

DetectedJsonFormatDescriptor::DetectedJsonFormatDescriptor() : 
    m_fileCompressionHasBeenSet(false),
    m_charsetHasBeenSet(false)
{
}

DetectedJsonFormatDescriptor::DetectedJsonFormatDescriptor(JsonView jsonValue) : 
    m_fileCompressionHasBeenSet(false),
    m_charsetHasBeenSet(false)
{
  *this = jsonValue;
}

DetectedJsonFormatDescriptor& DetectedJsonFormatDescriptor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FileCompression"))
  {
    m_fileCompression = jsonValue.GetObject("FileCompression");

    m_fileCompressionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Charset"))
  {
    m_charset = jsonValue.GetObject("Charset");

    m_charsetHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectedJsonFormatDescriptor::Jsonize() const
{
  JsonValue payload;

  if(m_fileCompressionHasBeenSet)
  {
   payload.WithObject("FileCompression", m_fileCompression.Jsonize());

  }

  if(m_charsetHasBeenSet)
  {
   payload.WithObject("Charset", m_charset.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
