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
#include <aws/cognito-identity/model/IdentityDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CognitoIdentity
{
namespace Model
{

IdentityDescription::IdentityDescription() : 
    m_identityIdHasBeenSet(false),
    m_loginsHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
}

IdentityDescription::IdentityDescription(const JsonValue& jsonValue) : 
    m_identityIdHasBeenSet(false),
    m_loginsHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_lastModifiedDateHasBeenSet(false)
{
  *this = jsonValue;
}

IdentityDescription& IdentityDescription::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("IdentityId"))
  {
    m_identityId = jsonValue.GetString("IdentityId");

    m_identityIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Logins"))
  {
    Array<JsonValue> loginsJsonList = jsonValue.GetArray("Logins");
    for(unsigned loginsIndex = 0; loginsIndex < loginsJsonList.GetLength(); ++loginsIndex)
    {
      m_logins.push_back(loginsJsonList[loginsIndex].AsString());
    }
    m_loginsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("LastModifiedDate");

    m_lastModifiedDateHasBeenSet = true;
  }

  return *this;
}

JsonValue IdentityDescription::Jsonize() const
{
  JsonValue payload;

  if(m_identityIdHasBeenSet)
  {
   payload.WithString("IdentityId", m_identityId);

  }

  if(m_loginsHasBeenSet)
  {
   Array<JsonValue> loginsJsonList(m_logins.size());
   for(unsigned loginsIndex = 0; loginsIndex < loginsJsonList.GetLength(); ++loginsIndex)
   {
     loginsJsonList[loginsIndex].AsString(m_logins[loginsIndex]);
   }
   payload.WithArray("Logins", std::move(loginsJsonList));

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_lastModifiedDateHasBeenSet)
  {
   payload.WithDouble("LastModifiedDate", m_lastModifiedDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws