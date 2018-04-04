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

#include <aws/config/model/ConfigurationAggregator.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ConfigurationAggregator::ConfigurationAggregator() : 
    m_configurationAggregatorNameHasBeenSet(false),
    m_configurationAggregatorArnHasBeenSet(false),
    m_accountAggregationSourcesHasBeenSet(false),
    m_organizationAggregationSourceHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
}

ConfigurationAggregator::ConfigurationAggregator(const JsonValue& jsonValue) : 
    m_configurationAggregatorNameHasBeenSet(false),
    m_configurationAggregatorArnHasBeenSet(false),
    m_accountAggregationSourcesHasBeenSet(false),
    m_organizationAggregationSourceHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurationAggregator& ConfigurationAggregator::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ConfigurationAggregatorName"))
  {
    m_configurationAggregatorName = jsonValue.GetString("ConfigurationAggregatorName");

    m_configurationAggregatorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigurationAggregatorArn"))
  {
    m_configurationAggregatorArn = jsonValue.GetString("ConfigurationAggregatorArn");

    m_configurationAggregatorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccountAggregationSources"))
  {
    Array<JsonValue> accountAggregationSourcesJsonList = jsonValue.GetArray("AccountAggregationSources");
    for(unsigned accountAggregationSourcesIndex = 0; accountAggregationSourcesIndex < accountAggregationSourcesJsonList.GetLength(); ++accountAggregationSourcesIndex)
    {
      m_accountAggregationSources.push_back(accountAggregationSourcesJsonList[accountAggregationSourcesIndex].AsObject());
    }
    m_accountAggregationSourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationAggregationSource"))
  {
    m_organizationAggregationSource = jsonValue.GetObject("OrganizationAggregationSource");

    m_organizationAggregationSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigurationAggregator::Jsonize() const
{
  JsonValue payload;

  if(m_configurationAggregatorNameHasBeenSet)
  {
   payload.WithString("ConfigurationAggregatorName", m_configurationAggregatorName);

  }

  if(m_configurationAggregatorArnHasBeenSet)
  {
   payload.WithString("ConfigurationAggregatorArn", m_configurationAggregatorArn);

  }

  if(m_accountAggregationSourcesHasBeenSet)
  {
   Array<JsonValue> accountAggregationSourcesJsonList(m_accountAggregationSources.size());
   for(unsigned accountAggregationSourcesIndex = 0; accountAggregationSourcesIndex < accountAggregationSourcesJsonList.GetLength(); ++accountAggregationSourcesIndex)
   {
     accountAggregationSourcesJsonList[accountAggregationSourcesIndex].AsObject(m_accountAggregationSources[accountAggregationSourcesIndex].Jsonize());
   }
   payload.WithArray("AccountAggregationSources", std::move(accountAggregationSourcesJsonList));

  }

  if(m_organizationAggregationSourceHasBeenSet)
  {
   payload.WithObject("OrganizationAggregationSource", m_organizationAggregationSource.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
