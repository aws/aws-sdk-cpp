/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DocumentStandardOutputConfiguration.h>
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

DocumentStandardOutputConfiguration::DocumentStandardOutputConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DocumentStandardOutputConfiguration& DocumentStandardOutputConfiguration::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("outputFormat"))
  {
    m_outputFormat = jsonValue.GetObject("outputFormat");
    m_outputFormatHasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentStandardOutputConfiguration::Jsonize() const
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

  if(m_outputFormatHasBeenSet)
  {
   payload.WithObject("outputFormat", m_outputFormat.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
