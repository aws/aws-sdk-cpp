/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/GameSessionDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

GameSessionDetail::GameSessionDetail() : 
    m_gameSessionHasBeenSet(false),
    m_protectionPolicy(ProtectionPolicy::NOT_SET),
    m_protectionPolicyHasBeenSet(false)
{
}

GameSessionDetail::GameSessionDetail(JsonView jsonValue) : 
    m_gameSessionHasBeenSet(false),
    m_protectionPolicy(ProtectionPolicy::NOT_SET),
    m_protectionPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

GameSessionDetail& GameSessionDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GameSession"))
  {
    m_gameSession = jsonValue.GetObject("GameSession");

    m_gameSessionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProtectionPolicy"))
  {
    m_protectionPolicy = ProtectionPolicyMapper::GetProtectionPolicyForName(jsonValue.GetString("ProtectionPolicy"));

    m_protectionPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue GameSessionDetail::Jsonize() const
{
  JsonValue payload;

  if(m_gameSessionHasBeenSet)
  {
   payload.WithObject("GameSession", m_gameSession.Jsonize());

  }

  if(m_protectionPolicyHasBeenSet)
  {
   payload.WithString("ProtectionPolicy", ProtectionPolicyMapper::GetNameForProtectionPolicy(m_protectionPolicy));
  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
