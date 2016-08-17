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
#include <aws/storagegateway/model/ChapInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

ChapInfo::ChapInfo() : 
    m_targetARNHasBeenSet(false),
    m_secretToAuthenticateInitiatorHasBeenSet(false),
    m_initiatorNameHasBeenSet(false),
    m_secretToAuthenticateTargetHasBeenSet(false)
{
}

ChapInfo::ChapInfo(const JsonValue& jsonValue) : 
    m_targetARNHasBeenSet(false),
    m_secretToAuthenticateInitiatorHasBeenSet(false),
    m_initiatorNameHasBeenSet(false),
    m_secretToAuthenticateTargetHasBeenSet(false)
{
  *this = jsonValue;
}

ChapInfo& ChapInfo::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("TargetARN"))
  {
    m_targetARN = jsonValue.GetString("TargetARN");

    m_targetARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretToAuthenticateInitiator"))
  {
    m_secretToAuthenticateInitiator = jsonValue.GetString("SecretToAuthenticateInitiator");

    m_secretToAuthenticateInitiatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InitiatorName"))
  {
    m_initiatorName = jsonValue.GetString("InitiatorName");

    m_initiatorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretToAuthenticateTarget"))
  {
    m_secretToAuthenticateTarget = jsonValue.GetString("SecretToAuthenticateTarget");

    m_secretToAuthenticateTargetHasBeenSet = true;
  }

  return *this;
}

JsonValue ChapInfo::Jsonize() const
{
  JsonValue payload;

  if(m_targetARNHasBeenSet)
  {
   payload.WithString("TargetARN", m_targetARN);

  }

  if(m_secretToAuthenticateInitiatorHasBeenSet)
  {
   payload.WithString("SecretToAuthenticateInitiator", m_secretToAuthenticateInitiator);

  }

  if(m_initiatorNameHasBeenSet)
  {
   payload.WithString("InitiatorName", m_initiatorName);

  }

  if(m_secretToAuthenticateTargetHasBeenSet)
  {
   payload.WithString("SecretToAuthenticateTarget", m_secretToAuthenticateTarget);

  }

  return payload;
}

} // namespace Model
} // namespace StorageGateway
} // namespace Aws