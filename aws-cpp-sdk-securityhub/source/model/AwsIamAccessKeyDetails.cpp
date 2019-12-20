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

#include <aws/securityhub/model/AwsIamAccessKeyDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsIamAccessKeyDetails::AwsIamAccessKeyDetails() : 
    m_status(AwsIamAccessKeyStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_principalTypeHasBeenSet(false),
    m_principalNameHasBeenSet(false)
{
}

AwsIamAccessKeyDetails::AwsIamAccessKeyDetails(JsonView jsonValue) : 
    m_status(AwsIamAccessKeyStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_principalIdHasBeenSet(false),
    m_principalTypeHasBeenSet(false),
    m_principalNameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsIamAccessKeyDetails& AwsIamAccessKeyDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = AwsIamAccessKeyStatusMapper::GetAwsIamAccessKeyStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrincipalId"))
  {
    m_principalId = jsonValue.GetString("PrincipalId");

    m_principalIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrincipalType"))
  {
    m_principalType = jsonValue.GetString("PrincipalType");

    m_principalTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrincipalName"))
  {
    m_principalName = jsonValue.GetString("PrincipalName");

    m_principalNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsIamAccessKeyDetails::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", AwsIamAccessKeyStatusMapper::GetNameForAwsIamAccessKeyStatus(m_status));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt);

  }

  if(m_principalIdHasBeenSet)
  {
   payload.WithString("PrincipalId", m_principalId);

  }

  if(m_principalTypeHasBeenSet)
  {
   payload.WithString("PrincipalType", m_principalType);

  }

  if(m_principalNameHasBeenSet)
  {
   payload.WithString("PrincipalName", m_principalName);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
