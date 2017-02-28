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
#include <aws/organizations/model/Root.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace Model
{

Root::Root() : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_policyTypesHasBeenSet(false)
{
}

Root::Root(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_policyTypesHasBeenSet(false)
{
  *this = jsonValue;
}

Root& Root::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicyTypes"))
  {
    Array<JsonValue> policyTypesJsonList = jsonValue.GetArray("PolicyTypes");
    for(unsigned policyTypesIndex = 0; policyTypesIndex < policyTypesJsonList.GetLength(); ++policyTypesIndex)
    {
      m_policyTypes.push_back(policyTypesJsonList[policyTypesIndex].AsObject());
    }
    m_policyTypesHasBeenSet = true;
  }

  return *this;
}

JsonValue Root::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_policyTypesHasBeenSet)
  {
   Array<JsonValue> policyTypesJsonList(m_policyTypes.size());
   for(unsigned policyTypesIndex = 0; policyTypesIndex < policyTypesJsonList.GetLength(); ++policyTypesIndex)
   {
     policyTypesJsonList[policyTypesIndex].AsObject(m_policyTypes[policyTypesIndex].Jsonize());
   }
   payload.WithArray("PolicyTypes", std::move(policyTypesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws