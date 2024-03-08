/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateSessionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

RetrieveAndGenerateSessionConfiguration::RetrieveAndGenerateSessionConfiguration() : 
    m_kmsKeyArnHasBeenSet(false)
{
}

RetrieveAndGenerateSessionConfiguration::RetrieveAndGenerateSessionConfiguration(JsonView jsonValue) : 
    m_kmsKeyArnHasBeenSet(false)
{
  *this = jsonValue;
}

RetrieveAndGenerateSessionConfiguration& RetrieveAndGenerateSessionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");

    m_kmsKeyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue RetrieveAndGenerateSessionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
