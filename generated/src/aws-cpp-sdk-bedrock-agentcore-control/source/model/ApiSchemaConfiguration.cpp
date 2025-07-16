/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ApiSchemaConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

ApiSchemaConfiguration::ApiSchemaConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ApiSchemaConfiguration& ApiSchemaConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3"))
  {
    m_s3 = jsonValue.GetObject("s3");
    m_s3HasBeenSet = true;
  }
  if(jsonValue.ValueExists("inlinePayload"))
  {
    m_inlinePayload = jsonValue.GetString("inlinePayload");
    m_inlinePayloadHasBeenSet = true;
  }
  return *this;
}

JsonValue ApiSchemaConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_s3HasBeenSet)
  {
   payload.WithObject("s3", m_s3.Jsonize());

  }

  if(m_inlinePayloadHasBeenSet)
  {
   payload.WithString("inlinePayload", m_inlinePayload);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
