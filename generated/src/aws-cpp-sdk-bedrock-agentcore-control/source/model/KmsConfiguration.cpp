/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/KmsConfiguration.h>
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

KmsConfiguration::KmsConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

KmsConfiguration& KmsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("keyType"))
  {
    m_keyType = KeyTypeMapper::GetKeyTypeForName(jsonValue.GetString("keyType"));
    m_keyTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  return *this;
}

JsonValue KmsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_keyTypeHasBeenSet)
  {
   payload.WithString("keyType", KeyTypeMapper::GetNameForKeyType(m_keyType));
  }

  if(m_kmsKeyArnHasBeenSet)
  {
   payload.WithString("kmsKeyArn", m_kmsKeyArn);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
