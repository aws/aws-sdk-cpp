/*
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

#include <aws/quicksight/model/CredentialPair.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

CredentialPair::CredentialPair() : 
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_alternateDataSourceParametersHasBeenSet(false)
{
}

CredentialPair::CredentialPair(JsonView jsonValue) : 
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_alternateDataSourceParametersHasBeenSet(false)
{
  *this = jsonValue;
}

CredentialPair& CredentialPair::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Username"))
  {
    m_username = jsonValue.GetString("Username");

    m_usernameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Password"))
  {
    m_password = jsonValue.GetString("Password");

    m_passwordHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AlternateDataSourceParameters"))
  {
    Array<JsonView> alternateDataSourceParametersJsonList = jsonValue.GetArray("AlternateDataSourceParameters");
    for(unsigned alternateDataSourceParametersIndex = 0; alternateDataSourceParametersIndex < alternateDataSourceParametersJsonList.GetLength(); ++alternateDataSourceParametersIndex)
    {
      m_alternateDataSourceParameters.push_back(alternateDataSourceParametersJsonList[alternateDataSourceParametersIndex].AsObject());
    }
    m_alternateDataSourceParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue CredentialPair::Jsonize() const
{
  JsonValue payload;

  if(m_usernameHasBeenSet)
  {
   payload.WithString("Username", m_username);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  if(m_alternateDataSourceParametersHasBeenSet)
  {
   Array<JsonValue> alternateDataSourceParametersJsonList(m_alternateDataSourceParameters.size());
   for(unsigned alternateDataSourceParametersIndex = 0; alternateDataSourceParametersIndex < alternateDataSourceParametersJsonList.GetLength(); ++alternateDataSourceParametersIndex)
   {
     alternateDataSourceParametersJsonList[alternateDataSourceParametersIndex].AsObject(m_alternateDataSourceParameters[alternateDataSourceParametersIndex].Jsonize());
   }
   payload.WithArray("AlternateDataSourceParameters", std::move(alternateDataSourceParametersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
