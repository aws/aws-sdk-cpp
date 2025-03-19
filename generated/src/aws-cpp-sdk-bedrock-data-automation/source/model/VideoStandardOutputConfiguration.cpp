/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/VideoStandardOutputConfiguration.h>
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

VideoStandardOutputConfiguration::VideoStandardOutputConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

VideoStandardOutputConfiguration& VideoStandardOutputConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("extraction"))
  {
    m_extraction = jsonValue.GetObject("extraction");
    m_extractionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("generativeField"))
  {
    m_generativeField = jsonValue.GetObject("generativeField");
    m_generativeFieldHasBeenSet = true;
  }
  return *this;
}

JsonValue VideoStandardOutputConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_extractionHasBeenSet)
  {
   payload.WithObject("extraction", m_extraction.Jsonize());

  }

  if(m_generativeFieldHasBeenSet)
  {
   payload.WithObject("generativeField", m_generativeField.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
