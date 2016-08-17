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
#include <aws/inspector/model/FindingsFilter.h>
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

FindingsFilter::FindingsFilter() : 
    m_rulesPackageArnsHasBeenSet(false),
    m_ruleNamesHasBeenSet(false),
    m_severitiesHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_userAttributesHasBeenSet(false)
{
}

FindingsFilter::FindingsFilter(const JsonValue& jsonValue) : 
    m_rulesPackageArnsHasBeenSet(false),
    m_ruleNamesHasBeenSet(false),
    m_severitiesHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_userAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

FindingsFilter& FindingsFilter::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("rulesPackageArns"))
  {
    Array<JsonValue> rulesPackageArnsJsonList = jsonValue.GetArray("rulesPackageArns");
    for(unsigned rulesPackageArnsIndex = 0; rulesPackageArnsIndex < rulesPackageArnsJsonList.GetLength(); ++rulesPackageArnsIndex)
    {
      m_rulesPackageArns.push_back(rulesPackageArnsJsonList[rulesPackageArnsIndex].AsString());
    }
    m_rulesPackageArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleNames"))
  {
    Array<JsonValue> ruleNamesJsonList = jsonValue.GetArray("ruleNames");
    for(unsigned ruleNamesIndex = 0; ruleNamesIndex < ruleNamesJsonList.GetLength(); ++ruleNamesIndex)
    {
      m_ruleNames.push_back(ruleNamesJsonList[ruleNamesIndex].AsString());
    }
    m_ruleNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("severities"))
  {
    Array<JsonValue> severitiesJsonList = jsonValue.GetArray("severities");
    for(unsigned severitiesIndex = 0; severitiesIndex < severitiesJsonList.GetLength(); ++severitiesIndex)
    {
      m_severities.push_back(severitiesJsonList[severitiesIndex].AsString());
    }
    m_severitiesHasBeenSet = true;
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

JsonValue FindingsFilter::Jsonize() const
{
  JsonValue payload;

  if(m_rulesPackageArnsHasBeenSet)
  {
   Array<JsonValue> rulesPackageArnsJsonList(m_rulesPackageArns.size());
   for(unsigned rulesPackageArnsIndex = 0; rulesPackageArnsIndex < rulesPackageArnsJsonList.GetLength(); ++rulesPackageArnsIndex)
   {
     rulesPackageArnsJsonList[rulesPackageArnsIndex].AsString(m_rulesPackageArns[rulesPackageArnsIndex]);
   }
   payload.WithArray("rulesPackageArns", std::move(rulesPackageArnsJsonList));

  }

  if(m_ruleNamesHasBeenSet)
  {
   Array<JsonValue> ruleNamesJsonList(m_ruleNames.size());
   for(unsigned ruleNamesIndex = 0; ruleNamesIndex < ruleNamesJsonList.GetLength(); ++ruleNamesIndex)
   {
     ruleNamesJsonList[ruleNamesIndex].AsString(m_ruleNames[ruleNamesIndex]);
   }
   payload.WithArray("ruleNames", std::move(ruleNamesJsonList));

  }

  if(m_severitiesHasBeenSet)
  {
   Array<JsonValue> severitiesJsonList(m_severities.size());
   for(unsigned severitiesIndex = 0; severitiesIndex < severitiesJsonList.GetLength(); ++severitiesIndex)
   {
     severitiesJsonList[severitiesIndex].AsString(m_severities[severitiesIndex]);
   }
   payload.WithArray("severities", std::move(severitiesJsonList));

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