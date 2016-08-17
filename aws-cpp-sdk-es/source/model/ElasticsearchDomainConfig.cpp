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
#include <aws/es/model/ElasticsearchDomainConfig.h>
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

ElasticsearchDomainConfig::ElasticsearchDomainConfig() : 
    m_elasticsearchVersionHasBeenSet(false),
    m_elasticsearchClusterConfigHasBeenSet(false),
    m_eBSOptionsHasBeenSet(false),
    m_accessPoliciesHasBeenSet(false),
    m_snapshotOptionsHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false)
{
}

ElasticsearchDomainConfig::ElasticsearchDomainConfig(const JsonValue& jsonValue) : 
    m_elasticsearchVersionHasBeenSet(false),
    m_elasticsearchClusterConfigHasBeenSet(false),
    m_eBSOptionsHasBeenSet(false),
    m_accessPoliciesHasBeenSet(false),
    m_snapshotOptionsHasBeenSet(false),
    m_advancedOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

ElasticsearchDomainConfig& ElasticsearchDomainConfig::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ElasticsearchVersion"))
  {
    m_elasticsearchVersion = jsonValue.GetObject("ElasticsearchVersion");

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
    m_accessPolicies = jsonValue.GetObject("AccessPolicies");

    m_accessPoliciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotOptions"))
  {
    m_snapshotOptions = jsonValue.GetObject("SnapshotOptions");

    m_snapshotOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdvancedOptions"))
  {
    m_advancedOptions = jsonValue.GetObject("AdvancedOptions");

    m_advancedOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ElasticsearchDomainConfig::Jsonize() const
{
  JsonValue payload;

  if(m_elasticsearchVersionHasBeenSet)
  {
   payload.WithObject("ElasticsearchVersion", m_elasticsearchVersion.Jsonize());

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
   payload.WithObject("AccessPolicies", m_accessPolicies.Jsonize());

  }

  if(m_snapshotOptionsHasBeenSet)
  {
   payload.WithObject("SnapshotOptions", m_snapshotOptions.Jsonize());

  }

  if(m_advancedOptionsHasBeenSet)
  {
   payload.WithObject("AdvancedOptions", m_advancedOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws