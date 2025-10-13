/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/UserIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

UserIdentifier::UserIdentifier(JsonView jsonValue)
{
  *this = jsonValue;
}

UserIdentifier& UserIdentifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("userToken"))
  {
    m_userToken = jsonValue.GetString("userToken");
    m_userTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userId"))
  {
    m_userId = jsonValue.GetString("userId");
    m_userIdHasBeenSet = true;
  }
  return *this;
}

JsonValue UserIdentifier::Jsonize() const
{
  JsonValue payload;

  if(m_userTokenHasBeenSet)
  {
   payload.WithString("userToken", m_userToken);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
