/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/OpenSearchManagedClusterConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

OpenSearchManagedClusterConfiguration::OpenSearchManagedClusterConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

OpenSearchManagedClusterConfiguration& OpenSearchManagedClusterConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("domainEndpoint"))
  {
    m_domainEndpoint = jsonValue.GetString("domainEndpoint");
    m_domainEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("domainArn"))
  {
    m_domainArn = jsonValue.GetString("domainArn");
    m_domainArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vectorIndexName"))
  {
    m_vectorIndexName = jsonValue.GetString("vectorIndexName");
    m_vectorIndexNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fieldMapping"))
  {
    m_fieldMapping = jsonValue.GetObject("fieldMapping");
    m_fieldMappingHasBeenSet = true;
  }
  return *this;
}

JsonValue OpenSearchManagedClusterConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_domainEndpointHasBeenSet)
  {
   payload.WithString("domainEndpoint", m_domainEndpoint);

  }

  if(m_domainArnHasBeenSet)
  {
   payload.WithString("domainArn", m_domainArn);

  }

  if(m_vectorIndexNameHasBeenSet)
  {
   payload.WithString("vectorIndexName", m_vectorIndexName);

  }

  if(m_fieldMappingHasBeenSet)
  {
   payload.WithObject("fieldMapping", m_fieldMapping.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
