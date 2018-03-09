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

#include <aws/guardduty/model/Resource.h>
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

Resource::Resource() : 
    m_accessKeyDetailsHasBeenSet(false),
    m_instanceDetailsHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

Resource::Resource(const JsonValue& jsonValue) : 
    m_accessKeyDetailsHasBeenSet(false),
    m_instanceDetailsHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Resource& Resource::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("accessKeyDetails"))
  {
    m_accessKeyDetails = jsonValue.GetObject("accessKeyDetails");

    m_accessKeyDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceDetails"))
  {
    m_instanceDetails = jsonValue.GetObject("instanceDetails");

    m_instanceDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = jsonValue.GetString("resourceType");

    m_resourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Resource::Jsonize() const
{
  JsonValue payload;

  if(m_accessKeyDetailsHasBeenSet)
  {
   payload.WithObject("accessKeyDetails", m_accessKeyDetails.Jsonize());

  }

  if(m_instanceDetailsHasBeenSet)
  {
   payload.WithObject("instanceDetails", m_instanceDetails.Jsonize());

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
