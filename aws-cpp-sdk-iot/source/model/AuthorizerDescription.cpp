﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/iot/model/AuthorizerDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

AuthorizerDescription::AuthorizerDescription() : 
    m_authorizerNameHasBeenSet(false),
    m_authorizerArnHasBeenSet(false),
    m_authorizerFunctionArnHasBeenSet(false),
    m_tokenKeyNameHasBeenSet(false),
    m_tokenSigningPublicKeysHasBeenSet(false),
    m_status(AuthorizerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
}

AuthorizerDescription::AuthorizerDescription(JsonView jsonValue) : 
    m_authorizerNameHasBeenSet(false),
    m_authorizerArnHasBeenSet(false),
    m_authorizerFunctionArnHasBeenSet(false),
    m_tokenKeyNameHasBeenSet(false),
    m_tokenSigningPublicKeysHasBeenSet(false),
    m_status(AuthorizerStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
  *this = jsonValue;
}

AuthorizerDescription& AuthorizerDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authorizerName"))
  {
    m_authorizerName = jsonValue.GetString("authorizerName");

    m_authorizerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authorizerArn"))
  {
    m_authorizerArn = jsonValue.GetString("authorizerArn");

    m_authorizerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("authorizerFunctionArn"))
  {
    m_authorizerFunctionArn = jsonValue.GetString("authorizerFunctionArn");

    m_authorizerFunctionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tokenKeyName"))
  {
    m_tokenKeyName = jsonValue.GetString("tokenKeyName");

    m_tokenKeyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tokenSigningPublicKeys"))
  {
    Aws::Map<Aws::String, JsonView> tokenSigningPublicKeysJsonMap = jsonValue.GetObject("tokenSigningPublicKeys").GetAllObjects();
    for(auto& tokenSigningPublicKeysItem : tokenSigningPublicKeysJsonMap)
    {
      m_tokenSigningPublicKeys[tokenSigningPublicKeysItem.first] = tokenSigningPublicKeysItem.second.AsString();
    }
    m_tokenSigningPublicKeysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AuthorizerStatusMapper::GetAuthorizerStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  return *this;
}

JsonValue AuthorizerDescription::Jsonize() const
{
  JsonValue payload;

  if(m_authorizerNameHasBeenSet)
  {
   payload.WithString("authorizerName", m_authorizerName);

  }

  if(m_authorizerArnHasBeenSet)
  {
   payload.WithString("authorizerArn", m_authorizerArn);

  }

  if(m_authorizerFunctionArnHasBeenSet)
  {
   payload.WithString("authorizerFunctionArn", m_authorizerFunctionArn);

  }

  if(m_tokenKeyNameHasBeenSet)
  {
   payload.WithString("tokenKeyName", m_tokenKeyName);

  }

  if(m_tokenSigningPublicKeysHasBeenSet)
  {
   JsonValue tokenSigningPublicKeysJsonMap;
   for(auto& tokenSigningPublicKeysItem : m_tokenSigningPublicKeys)
   {
     tokenSigningPublicKeysJsonMap.WithString(tokenSigningPublicKeysItem.first, tokenSigningPublicKeysItem.second);
   }
   payload.WithObject("tokenSigningPublicKeys", std::move(tokenSigningPublicKeysJsonMap));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AuthorizerStatusMapper::GetNameForAuthorizerStatus(m_status));
  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("creationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("lastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
