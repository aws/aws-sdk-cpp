/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsElasticsearchDomainDetails.h>
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

AwsElasticsearchDomainDetails::AwsElasticsearchDomainDetails() : 
    m_accessPoliciesHasBeenSet(false),
    m_domainEndpointOptionsHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_elasticsearchVersionHasBeenSet(false),
    m_encryptionAtRestOptionsHasBeenSet(false),
    m_nodeToNodeEncryptionOptionsHasBeenSet(false),
    m_vPCOptionsHasBeenSet(false)
{
}

AwsElasticsearchDomainDetails::AwsElasticsearchDomainDetails(JsonView jsonValue) : 
    m_accessPoliciesHasBeenSet(false),
    m_domainEndpointOptionsHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_endpointsHasBeenSet(false),
    m_elasticsearchVersionHasBeenSet(false),
    m_encryptionAtRestOptionsHasBeenSet(false),
    m_nodeToNodeEncryptionOptionsHasBeenSet(false),
    m_vPCOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsElasticsearchDomainDetails& AwsElasticsearchDomainDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccessPolicies"))
  {
    m_accessPolicies = jsonValue.GetString("AccessPolicies");

    m_accessPoliciesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainEndpointOptions"))
  {
    m_domainEndpointOptions = jsonValue.GetObject("DomainEndpointOptions");

    m_domainEndpointOptionsHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("Endpoint"))
  {
    m_endpoint = jsonValue.GetString("Endpoint");

    m_endpointHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Endpoints"))
  {
    Aws::Map<Aws::String, JsonView> endpointsJsonMap = jsonValue.GetObject("Endpoints").GetAllObjects();
    for(auto& endpointsItem : endpointsJsonMap)
    {
      m_endpoints[endpointsItem.first] = endpointsItem.second.AsString();
    }
    m_endpointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ElasticsearchVersion"))
  {
    m_elasticsearchVersion = jsonValue.GetString("ElasticsearchVersion");

    m_elasticsearchVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionAtRestOptions"))
  {
    m_encryptionAtRestOptions = jsonValue.GetObject("EncryptionAtRestOptions");

    m_encryptionAtRestOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NodeToNodeEncryptionOptions"))
  {
    m_nodeToNodeEncryptionOptions = jsonValue.GetObject("NodeToNodeEncryptionOptions");

    m_nodeToNodeEncryptionOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VPCOptions"))
  {
    m_vPCOptions = jsonValue.GetObject("VPCOptions");

    m_vPCOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsElasticsearchDomainDetails::Jsonize() const
{
  JsonValue payload;

  if(m_accessPoliciesHasBeenSet)
  {
   payload.WithString("AccessPolicies", m_accessPolicies);

  }

  if(m_domainEndpointOptionsHasBeenSet)
  {
   payload.WithObject("DomainEndpointOptions", m_domainEndpointOptions.Jsonize());

  }

  if(m_domainIdHasBeenSet)
  {
   payload.WithString("DomainId", m_domainId);

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_endpointHasBeenSet)
  {
   payload.WithString("Endpoint", m_endpoint);

  }

  if(m_endpointsHasBeenSet)
  {
   JsonValue endpointsJsonMap;
   for(auto& endpointsItem : m_endpoints)
   {
     endpointsJsonMap.WithString(endpointsItem.first, endpointsItem.second);
   }
   payload.WithObject("Endpoints", std::move(endpointsJsonMap));

  }

  if(m_elasticsearchVersionHasBeenSet)
  {
   payload.WithString("ElasticsearchVersion", m_elasticsearchVersion);

  }

  if(m_encryptionAtRestOptionsHasBeenSet)
  {
   payload.WithObject("EncryptionAtRestOptions", m_encryptionAtRestOptions.Jsonize());

  }

  if(m_nodeToNodeEncryptionOptionsHasBeenSet)
  {
   payload.WithObject("NodeToNodeEncryptionOptions", m_nodeToNodeEncryptionOptions.Jsonize());

  }

  if(m_vPCOptionsHasBeenSet)
  {
   payload.WithObject("VPCOptions", m_vPCOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
