/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RedshiftQueryEngineStorageConfiguration.h>
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

RedshiftQueryEngineStorageConfiguration::RedshiftQueryEngineStorageConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RedshiftQueryEngineStorageConfiguration& RedshiftQueryEngineStorageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = RedshiftQueryEngineStorageTypeMapper::GetRedshiftQueryEngineStorageTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("awsDataCatalogConfiguration"))
  {
    m_awsDataCatalogConfiguration = jsonValue.GetObject("awsDataCatalogConfiguration");
    m_awsDataCatalogConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("redshiftConfiguration"))
  {
    m_redshiftConfiguration = jsonValue.GetObject("redshiftConfiguration");
    m_redshiftConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue RedshiftQueryEngineStorageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RedshiftQueryEngineStorageTypeMapper::GetNameForRedshiftQueryEngineStorageType(m_type));
  }

  if(m_awsDataCatalogConfigurationHasBeenSet)
  {
   payload.WithObject("awsDataCatalogConfiguration", m_awsDataCatalogConfiguration.Jsonize());

  }

  if(m_redshiftConfigurationHasBeenSet)
  {
   payload.WithObject("redshiftConfiguration", m_redshiftConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
