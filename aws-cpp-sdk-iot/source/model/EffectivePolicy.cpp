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

#include <aws/iot/model/EffectivePolicy.h>
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

EffectivePolicy::EffectivePolicy() : 
    m_policyNameHasBeenSet(false),
    m_policyArnHasBeenSet(false),
    m_policyDocumentHasBeenSet(false)
{
}

EffectivePolicy::EffectivePolicy(const JsonValue& jsonValue) : 
    m_policyNameHasBeenSet(false),
    m_policyArnHasBeenSet(false),
    m_policyDocumentHasBeenSet(false)
{
  *this = jsonValue;
}

EffectivePolicy& EffectivePolicy::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("policyName"))
  {
    m_policyName = jsonValue.GetString("policyName");

    m_policyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policyArn"))
  {
    m_policyArn = jsonValue.GetString("policyArn");

    m_policyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("policyDocument"))
  {
    m_policyDocument = jsonValue.GetString("policyDocument");

    m_policyDocumentHasBeenSet = true;
  }

  return *this;
}

JsonValue EffectivePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_policyNameHasBeenSet)
  {
   payload.WithString("policyName", m_policyName);

  }

  if(m_policyArnHasBeenSet)
  {
   payload.WithString("policyArn", m_policyArn);

  }

  if(m_policyDocumentHasBeenSet)
  {
   payload.WithString("policyDocument", m_policyDocument);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
