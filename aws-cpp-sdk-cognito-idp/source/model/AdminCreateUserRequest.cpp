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
#include <aws/cognito-idp/model/AdminCreateUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AdminCreateUserRequest::AdminCreateUserRequest() : 
    m_userPoolIdHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_userAttributesHasBeenSet(false),
    m_validationDataHasBeenSet(false),
    m_temporaryPasswordHasBeenSet(false),
    m_forceAliasCreation(false),
    m_forceAliasCreationHasBeenSet(false),
    m_messageAction(MessageActionType::NOT_SET),
    m_messageActionHasBeenSet(false),
    m_desiredDeliveryMediumsHasBeenSet(false)
{
}

Aws::String AdminCreateUserRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_userPoolIdHasBeenSet)
  {
   payload.WithString("UserPoolId", m_userPoolId);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_userAttributesHasBeenSet)
  {
   Array<JsonValue> userAttributesJsonList(m_userAttributes.size());
   for(unsigned userAttributesIndex = 0; userAttributesIndex < userAttributesJsonList.GetLength(); ++userAttributesIndex)
   {
     userAttributesJsonList[userAttributesIndex].AsObject(m_userAttributes[userAttributesIndex].Jsonize());
   }
   payload.WithArray("UserAttributes", std::move(userAttributesJsonList));

  }

  if(m_validationDataHasBeenSet)
  {
   Array<JsonValue> validationDataJsonList(m_validationData.size());
   for(unsigned validationDataIndex = 0; validationDataIndex < validationDataJsonList.GetLength(); ++validationDataIndex)
   {
     validationDataJsonList[validationDataIndex].AsObject(m_validationData[validationDataIndex].Jsonize());
   }
   payload.WithArray("ValidationData", std::move(validationDataJsonList));

  }

  if(m_temporaryPasswordHasBeenSet)
  {
   payload.WithString("TemporaryPassword", m_temporaryPassword);

  }

  if(m_forceAliasCreationHasBeenSet)
  {
   payload.WithBool("ForceAliasCreation", m_forceAliasCreation);

  }

  if(m_messageActionHasBeenSet)
  {
   payload.WithString("MessageAction", MessageActionTypeMapper::GetNameForMessageActionType(m_messageAction));
  }

  if(m_desiredDeliveryMediumsHasBeenSet)
  {
   Array<JsonValue> desiredDeliveryMediumsJsonList(m_desiredDeliveryMediums.size());
   for(unsigned desiredDeliveryMediumsIndex = 0; desiredDeliveryMediumsIndex < desiredDeliveryMediumsJsonList.GetLength(); ++desiredDeliveryMediumsIndex)
   {
     desiredDeliveryMediumsJsonList[desiredDeliveryMediumsIndex].AsString(DeliveryMediumTypeMapper::GetNameForDeliveryMediumType(m_desiredDeliveryMediums[desiredDeliveryMediumsIndex]));
   }
   payload.WithArray("DesiredDeliveryMediums", std::move(desiredDeliveryMediumsJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection AdminCreateUserRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSCognitoIdentityProviderService.AdminCreateUser"));
  return headers;

}



