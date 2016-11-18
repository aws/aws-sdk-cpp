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
#include <aws/cognito-idp/model/SmsConfigurationType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

SmsConfigurationType::SmsConfigurationType() : 
    m_snsCallerArnHasBeenSet(false),
    m_externalIdHasBeenSet(false)
{
}

SmsConfigurationType::SmsConfigurationType(const JsonValue& jsonValue) : 
    m_snsCallerArnHasBeenSet(false),
    m_externalIdHasBeenSet(false)
{
  *this = jsonValue;
}

SmsConfigurationType& SmsConfigurationType::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("SnsCallerArn"))
  {
    m_snsCallerArn = jsonValue.GetString("SnsCallerArn");

    m_snsCallerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExternalId"))
  {
    m_externalId = jsonValue.GetString("ExternalId");

    m_externalIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SmsConfigurationType::Jsonize() const
{
  JsonValue payload;

  if(m_snsCallerArnHasBeenSet)
  {
   payload.WithString("SnsCallerArn", m_snsCallerArn);

  }

  if(m_externalIdHasBeenSet)
  {
   payload.WithString("ExternalId", m_externalId);

  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws