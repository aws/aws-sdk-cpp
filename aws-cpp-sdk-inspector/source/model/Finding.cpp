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
#include <aws/inspector/model/Finding.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

Finding::Finding() : 
    m_findingArnHasBeenSet(false),
    m_runArnHasBeenSet(false),
    m_rulesPackageArnHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_autoScalingGroupHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_findingHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_recommendationHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_userAttributesHasBeenSet(false)
{
}

Finding::Finding(const JsonValue& jsonValue) : 
    m_findingArnHasBeenSet(false),
    m_runArnHasBeenSet(false),
    m_rulesPackageArnHasBeenSet(false),
    m_ruleNameHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_autoScalingGroupHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_findingHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_recommendationHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_userAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

Finding& Finding::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("findingArn"))
  {
    m_findingArn = jsonValue.GetString("findingArn");

    m_findingArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("runArn"))
  {
    m_runArn = jsonValue.GetString("runArn");

    m_runArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("rulesPackageArn"))
  {
    m_rulesPackageArn = jsonValue.GetString("rulesPackageArn");

    m_rulesPackageArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleName"))
  {
    m_ruleName = jsonValue.GetString("ruleName");

    m_ruleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentId"))
  {
    m_agentId = jsonValue.GetString("agentId");

    m_agentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("autoScalingGroup"))
  {
    m_autoScalingGroup = jsonValue.GetString("autoScalingGroup");

    m_autoScalingGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("severity"))
  {
    m_severity = jsonValue.GetString("severity");

    m_severityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("finding"))
  {
    m_finding = jsonValue.GetObject("finding");

    m_findingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetObject("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("recommendation"))
  {
    m_recommendation = jsonValue.GetObject("recommendation");

    m_recommendationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attributes"))
  {
    Array<JsonValue> attributesJsonList = jsonValue.GetArray("attributes");
    for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
    {
      m_attributes.push_back(attributesJsonList[attributesIndex].AsObject());
    }
    m_attributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userAttributes"))
  {
    Array<JsonValue> userAttributesJsonList = jsonValue.GetArray("userAttributes");
    for(unsigned userAttributesIndex = 0; userAttributesIndex < userAttributesJsonList.GetLength(); ++userAttributesIndex)
    {
      m_userAttributes.push_back(userAttributesJsonList[userAttributesIndex].AsObject());
    }
    m_userAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue Finding::Jsonize() const
{
  JsonValue payload;

  if(m_findingArnHasBeenSet)
  {
   payload.WithString("findingArn", m_findingArn);

  }

  if(m_runArnHasBeenSet)
  {
   payload.WithString("runArn", m_runArn);

  }

  if(m_rulesPackageArnHasBeenSet)
  {
   payload.WithString("rulesPackageArn", m_rulesPackageArn);

  }

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("ruleName", m_ruleName);

  }

  if(m_agentIdHasBeenSet)
  {
   payload.WithString("agentId", m_agentId);

  }

  if(m_autoScalingGroupHasBeenSet)
  {
   payload.WithString("autoScalingGroup", m_autoScalingGroup);

  }

  if(m_severityHasBeenSet)
  {
   payload.WithString("severity", m_severity);

  }

  if(m_findingHasBeenSet)
  {
   payload.WithObject("finding", m_finding.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithObject("description", m_description.Jsonize());

  }

  if(m_recommendationHasBeenSet)
  {
   payload.WithObject("recommendation", m_recommendation.Jsonize());

  }

  if(m_attributesHasBeenSet)
  {
   Array<JsonValue> attributesJsonList(m_attributes.size());
   for(unsigned attributesIndex = 0; attributesIndex < attributesJsonList.GetLength(); ++attributesIndex)
   {
     attributesJsonList[attributesIndex].AsObject(m_attributes[attributesIndex].Jsonize());
   }
   payload.WithArray("attributes", std::move(attributesJsonList));

  }

  if(m_userAttributesHasBeenSet)
  {
   Array<JsonValue> userAttributesJsonList(m_userAttributes.size());
   for(unsigned userAttributesIndex = 0; userAttributesIndex < userAttributesJsonList.GetLength(); ++userAttributesIndex)
   {
     userAttributesJsonList[userAttributesIndex].AsObject(m_userAttributes[userAttributesIndex].Jsonize());
   }
   payload.WithArray("userAttributes", std::move(userAttributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws