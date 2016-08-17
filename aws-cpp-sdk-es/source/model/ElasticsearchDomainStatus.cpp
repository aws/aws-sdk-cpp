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
#include <aws/es/model/ElasticsearchDomainStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

ElasticsearchDomainStatus::ElasticsearchDomainStatus() : 
    m_domainIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_created(false),
    m_createdHasBeenSet(false),
    m_deleted(false),
    m_deletedHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_processing(false),
    m_processingHasBeenSet(false),
    m_elasticsearchVersionHasBeenSet(false),
    m_elasticsearchClusterConfigHasBeenSet(false),
    m_eBSOptionsHasBeenSet(false),
    m_accessPoliciesHasBeenSet(false),
    m_snapshotOptionsHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false)
{
}

ElasticsearchDomainStatus::ElasticsearchDomainStatus(const JsonValue& jsonValue) : 
    m_domainIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_aRNHasBeenSet(false),
    m_created(false),
    m_createdHasBeenSet(false),
    m_deleted(false),
    m_deletedHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_processing(false),
    m_processingHasBeenSet(false),
    m_elasticsearchVersionHasBeenSet(false),
    m_elasticsearchClusterConfigHasBeenSet(false),
    m_eBSOptionsHasBeenSet(false),
    m_accessPoliciesHasBeenSet(false),
    m_snapshotOptionsHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

ElasticsearchDomainStatus& ElasticsearchDomainStatus::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("DomainId"))
  {
    m_domainId = jsonValue.GetString("DomainId");

    m_domainIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

    m_aRNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Created"))
  {
    m_created = jsonValue.GetBool("Created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Deleted"))
  {
    m_deleted = jsonValue.GetBool("Deleted");

    m_deletedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Endpoint"))
  {
    m_endpoint = jsonValue.GetString("Endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Processing"))
  {
    m_processing = jsonValue.GetBool("Processing");

    m_processingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ElasticsearchVersion"))
  {
    m_elasticsearchVersion = jsonValue.GetString("ElasticsearchVersion");

    m_elasticsearchVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ElasticsearchClusterConfig"))
  {
    m_elasticsearchClusterConfig = jsonValue.GetObject("ElasticsearchClusterConfig");

    m_elasticsearchClusterConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EBSOptions"))
  {
    m_eBSOptions = jsonValue.GetObject("EBSOptions");

    m_eBSOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessPolicies"))
  {
    m_accessPolicies = jsonValue.GetString("AccessPolicies");

    m_accessPoliciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotOptions"))
  {
    m_snapshotOptions = jsonValue.GetObject("SnapshotOptions");

    m_snapshotOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdvancedOptions"))
  {
    Aws::Map<Aws::String, JsonValue> advancedOptionsJsonMap = jsonValue.GetObject("AdvancedOptions").GetAllObjects();
    for(auto& advancedOptionsItem : advancedOptionsJsonMap)
    {
      m_advancedOptions[advancedOptionsItem.first] = advancedOptionsItem.second.AsString();
    }
    m_advancedOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ElasticsearchDomainStatus::Jsonize() const
{
  JsonValue payload;

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  if(m_createdHasBeenSet)
  {
   payload.WithBool("Created", m_created);

  }

  if(m_deletedHasBeenSet)
  {
   payload.WithBool("Deleted", m_deleted);

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithString("Endpoint", m_endpoint);

  }

  if(m_processingHasBeenSet)
  {
   payload.WithBool("Processing", m_processing);

  }

  if(m_elasticsearchVersionHasBeenSet)
  {
   payload.WithString("ElasticsearchVersion", m_elasticsearchVersion);

  }

  if(m_elasticsearchClusterConfigHasBeenSet)
  {
   payload.WithObject("ElasticsearchClusterConfig", m_elasticsearchClusterConfig.Jsonize());

  }

  if(m_eBSOptionsHasBeenSet)
  {
   payload.WithObject("EBSOptions", m_eBSOptions.Jsonize());

  }

  if(m_accessPoliciesHasBeenSet)
  {
   payload.WithString("AccessPolicies", m_accessPolicies);

  }

  if(m_snapshotOptionsHasBeenSet)
  {
   payload.WithObject("SnapshotOptions", m_snapshotOptions.Jsonize());

  }

  if(m_advancedOptionsHasBeenSet)
  {
   JsonValue advancedOptionsJsonMap;
   for(auto& advancedOptionsItem : m_advancedOptions)
   {
     advancedOptionsJsonMap.WithString(advancedOptionsItem.first, advancedOptionsItem.second);
   }
   payload.WithObject("AdvancedOptions", std::move(advancedOptionsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws