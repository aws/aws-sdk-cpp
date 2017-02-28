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
#include <aws/dynamodb/model/TimeToLiveSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

TimeToLiveSpecification::TimeToLiveSpecification() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_attributeNameHasBeenSet(false)
{
}

TimeToLiveSpecification::TimeToLiveSpecification(const JsonValue& jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_attributeNameHasBeenSet(false)
{
  *this = jsonValue;
}

TimeToLiveSpecification& TimeToLiveSpecification::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttributeName"))
  {
    m_attributeName = jsonValue.GetString("AttributeName");

    m_attributeNameHasBeenSet = true;
  }

  return *this;
}

JsonValue TimeToLiveSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("AttributeName", m_attributeName);

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws