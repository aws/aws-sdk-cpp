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

#include <aws/iot/model/AuthorizerSummary.h>
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

AuthorizerSummary::AuthorizerSummary() : 
    m_authorizerNameHasBeenSet(false),
    m_authorizerArnHasBeenSet(false)
{
}

AuthorizerSummary::AuthorizerSummary(const JsonValue& jsonValue) : 
    m_authorizerNameHasBeenSet(false),
    m_authorizerArnHasBeenSet(false)
{
  *this = jsonValue;
}

AuthorizerSummary& AuthorizerSummary::operator =(const JsonValue& jsonValue)
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

  return *this;
}

JsonValue AuthorizerSummary::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
