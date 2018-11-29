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

#include <aws/sagemaker/model/CognitoMemberDefinition.h>
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

CognitoMemberDefinition::CognitoMemberDefinition() : 
    m_userPoolHasBeenSet(false),
    m_userGroupHasBeenSet(false),
    m_clientIdHasBeenSet(false)
{
}

CognitoMemberDefinition::CognitoMemberDefinition(JsonView jsonValue) : 
    m_userPoolHasBeenSet(false),
    m_userGroupHasBeenSet(false),
    m_clientIdHasBeenSet(false)
{
  *this = jsonValue;
}

CognitoMemberDefinition& CognitoMemberDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UserPool"))
  {
    m_userPool = jsonValue.GetString("UserPool");

    m_userPoolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserGroup"))
  {
    m_userGroup = jsonValue.GetString("UserGroup");

    m_userGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientId"))
  {
    m_clientId = jsonValue.GetString("ClientId");

    m_clientIdHasBeenSet = true;
  }

  return *this;
}

JsonValue CognitoMemberDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_userPoolHasBeenSet)
  {
   payload.WithString("UserPool", m_userPool);

  }

  if(m_userGroupHasBeenSet)
  {
   payload.WithString("UserGroup", m_userGroup);

  }

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("ClientId", m_clientId);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
