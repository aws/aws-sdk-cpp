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

#include <aws/appstream/model/ServiceAccountCredentials.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

ServiceAccountCredentials::ServiceAccountCredentials() : 
    m_accountNameHasBeenSet(false),
    m_accountPasswordHasBeenSet(false)
{
}

ServiceAccountCredentials::ServiceAccountCredentials(const JsonValue& jsonValue) : 
    m_accountNameHasBeenSet(false),
    m_accountPasswordHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceAccountCredentials& ServiceAccountCredentials::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("AccountName"))
  {
    m_accountName = jsonValue.GetString("AccountName");

    m_accountNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountPassword"))
  {
    m_accountPassword = jsonValue.GetString("AccountPassword");

    m_accountPasswordHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceAccountCredentials::Jsonize() const
{
  JsonValue payload;

  if(m_accountNameHasBeenSet)
  {
   payload.WithString("AccountName", m_accountName);

  }

  if(m_accountPasswordHasBeenSet)
  {
   payload.WithString("AccountPassword", m_accountPassword);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
