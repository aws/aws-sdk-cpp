/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ServiceNowConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

ServiceNowConfiguration::ServiceNowConfiguration() : 
    m_hostUrlHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_serviceNowBuildVersion(ServiceNowBuildVersionType::NOT_SET),
    m_serviceNowBuildVersionHasBeenSet(false),
    m_knowledgeArticleConfigurationHasBeenSet(false),
    m_serviceCatalogConfigurationHasBeenSet(false)
{
}

ServiceNowConfiguration::ServiceNowConfiguration(JsonView jsonValue) : 
    m_hostUrlHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_serviceNowBuildVersion(ServiceNowBuildVersionType::NOT_SET),
    m_serviceNowBuildVersionHasBeenSet(false),
    m_knowledgeArticleConfigurationHasBeenSet(false),
    m_serviceCatalogConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceNowConfiguration& ServiceNowConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HostUrl"))
  {
    m_hostUrl = jsonValue.GetString("HostUrl");

    m_hostUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

    m_secretArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceNowBuildVersion"))
  {
    m_serviceNowBuildVersion = ServiceNowBuildVersionTypeMapper::GetServiceNowBuildVersionTypeForName(jsonValue.GetString("ServiceNowBuildVersion"));

    m_serviceNowBuildVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("KnowledgeArticleConfiguration"))
  {
    m_knowledgeArticleConfiguration = jsonValue.GetObject("KnowledgeArticleConfiguration");

    m_knowledgeArticleConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceCatalogConfiguration"))
  {
    m_serviceCatalogConfiguration = jsonValue.GetObject("ServiceCatalogConfiguration");

    m_serviceCatalogConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceNowConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_hostUrlHasBeenSet)
  {
   payload.WithString("HostUrl", m_hostUrl);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  if(m_serviceNowBuildVersionHasBeenSet)
  {
   payload.WithString("ServiceNowBuildVersion", ServiceNowBuildVersionTypeMapper::GetNameForServiceNowBuildVersionType(m_serviceNowBuildVersion));
  }

  if(m_knowledgeArticleConfigurationHasBeenSet)
  {
   payload.WithObject("KnowledgeArticleConfiguration", m_knowledgeArticleConfiguration.Jsonize());

  }

  if(m_serviceCatalogConfigurationHasBeenSet)
  {
   payload.WithObject("ServiceCatalogConfiguration", m_serviceCatalogConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
