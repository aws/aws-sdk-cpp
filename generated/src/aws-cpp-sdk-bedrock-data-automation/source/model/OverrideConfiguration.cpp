/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/OverrideConfiguration.h>
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

OverrideConfiguration::OverrideConfiguration() : 
    m_documentHasBeenSet(false)
{
}

OverrideConfiguration::OverrideConfiguration(JsonView jsonValue)
  : OverrideConfiguration()
{
  *this = jsonValue;
}

OverrideConfiguration& OverrideConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("document"))
  {
    m_document = jsonValue.GetObject("document");

    m_documentHasBeenSet = true;
  }

  return *this;
}

JsonValue OverrideConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_documentHasBeenSet)
  {
   payload.WithObject("document", m_document.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
