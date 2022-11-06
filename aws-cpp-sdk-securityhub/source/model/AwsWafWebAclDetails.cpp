/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsWafWebAclDetails.h>
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

AwsWafWebAclDetails::AwsWafWebAclDetails() : 
    m_nameHasBeenSet(false),
    m_defaultActionHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_webAclIdHasBeenSet(false)
{
}

AwsWafWebAclDetails::AwsWafWebAclDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_defaultActionHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_webAclIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsWafWebAclDetails& AwsWafWebAclDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultAction"))
  {
    m_defaultAction = jsonValue.GetString("DefaultAction");

    m_defaultActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rules"))
  {
    Aws::Utils::Array<JsonView> rulesJsonList = jsonValue.GetArray("Rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WebAclId"))
  {
    m_webAclId = jsonValue.GetString("WebAclId");

    m_webAclIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsWafWebAclDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_defaultActionHasBeenSet)
  {
   payload.WithString("DefaultAction", m_defaultAction);

  }

  if(m_rulesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("Rules", std::move(rulesJsonList));

  }

  if(m_webAclIdHasBeenSet)
  {
   payload.WithString("WebAclId", m_webAclId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
