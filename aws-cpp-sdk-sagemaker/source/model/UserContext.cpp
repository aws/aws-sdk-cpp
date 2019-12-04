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

#include <aws/sagemaker/model/UserContext.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

UserContext::UserContext() : 
    m_userProfileArnHasBeenSet(false),
    m_userProfileNameHasBeenSet(false),
    m_domainIdHasBeenSet(false)
{
}

UserContext::UserContext(JsonView jsonValue) : 
    m_userProfileArnHasBeenSet(false),
    m_userProfileNameHasBeenSet(false),
    m_domainIdHasBeenSet(false)
{
  *this = jsonValue;
}

UserContext& UserContext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserProfileArn"))
  {
    m_userProfileArn = jsonValue.GetString("UserProfileArn");

    m_userProfileArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserProfileName"))
  {
    m_userProfileName = jsonValue.GetString("UserProfileName");

    m_userProfileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainId"))
  {
    m_domainId = jsonValue.GetString("DomainId");

    m_domainIdHasBeenSet = true;
  }

  return *this;
}

JsonValue UserContext::Jsonize() const
{
  JsonValue payload;

  if(m_userProfileArnHasBeenSet)
  {
   payload.WithString("UserProfileArn", m_userProfileArn);

  }

  if(m_userProfileNameHasBeenSet)
  {
   payload.WithString("UserProfileName", m_userProfileName);

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
