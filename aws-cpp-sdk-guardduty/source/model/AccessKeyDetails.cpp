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

#include <aws/guardduty/model/AccessKeyDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

AccessKeyDetails::AccessKeyDetails() : 
    m_accessKeyIdHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_userTypeHasBeenSet(false)
{
}

AccessKeyDetails::AccessKeyDetails(const JsonValue& jsonValue) : 
    m_accessKeyIdHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_userNameHasBeenSet(false),
    m_userTypeHasBeenSet(false)
{
  *this = jsonValue;
}

AccessKeyDetails& AccessKeyDetails::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("accessKeyId"))
  {
    m_accessKeyId = jsonValue.GetString("accessKeyId");

    m_accessKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("principalId"))
  {
    m_principalId = jsonValue.GetString("principalId");

    m_principalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userName"))
  {
    m_userName = jsonValue.GetString("userName");

    m_userNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userType"))
  {
    m_userType = jsonValue.GetString("userType");

    m_userTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessKeyDetails::Jsonize() const
{
  JsonValue payload;

  if(m_accessKeyIdHasBeenSet)
  {
   payload.WithString("accessKeyId", m_accessKeyId);

  }

  if(m_principalIdHasBeenSet)
  {
   payload.WithString("principalId", m_principalId);

  }

  if(m_userNameHasBeenSet)
  {
   payload.WithString("userName", m_userName);

  }

  if(m_userTypeHasBeenSet)
  {
   payload.WithString("userType", m_userType);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
