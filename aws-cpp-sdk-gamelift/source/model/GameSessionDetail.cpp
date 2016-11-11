/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

GameSessionDetail::GameSessionDetail(const JsonValue& jsonValue) : 
    m_gameSessionHasBeenSet(false),
    m_protectionPolicy(ProtectionPolicy::NOT_SET),
    m_protectionPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

GameSessionDetail& GameSessionDetail::operator =(const JsonValue& jsonValue)
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