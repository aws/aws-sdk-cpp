/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DocumentOutputFormat.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockDataAutomation
{
namespace Model
{

DocumentOutputFormat::DocumentOutputFormat(JsonView jsonValue)
{
  *this = jsonValue;
}

DocumentOutputFormat& DocumentOutputFormat::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("textFormat"))
  {
    m_textFormat = jsonValue.GetObject("textFormat");
    m_textFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("additionalFileFormat"))
  {
    m_additionalFileFormat = jsonValue.GetObject("additionalFileFormat");
    m_additionalFileFormatHasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentOutputFormat::Jsonize() const
{
  JsonValue payload;

  if(m_textFormatHasBeenSet)
  {
   payload.WithObject("textFormat", m_textFormat.Jsonize());

  }

  if(m_additionalFileFormatHasBeenSet)
  {
   payload.WithObject("additionalFileFormat", m_additionalFileFormat.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
