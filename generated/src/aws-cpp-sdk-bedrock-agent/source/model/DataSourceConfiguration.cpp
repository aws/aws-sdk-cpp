/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/DataSourceConfiguration.h>
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

DataSourceConfiguration::DataSourceConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

DataSourceConfiguration& DataSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = DataSourceTypeMapper::GetDataSourceTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3Configuration"))
  {
    m_s3Configuration = jsonValue.GetObject("s3Configuration");
    m_s3ConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("webConfiguration"))
  {
    m_webConfiguration = jsonValue.GetObject("webConfiguration");
    m_webConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("confluenceConfiguration"))
  {
    m_confluenceConfiguration = jsonValue.GetObject("confluenceConfiguration");
    m_confluenceConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("salesforceConfiguration"))
  {
    m_salesforceConfiguration = jsonValue.GetObject("salesforceConfiguration");
    m_salesforceConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sharePointConfiguration"))
  {
    m_sharePointConfiguration = jsonValue.GetObject("sharePointConfiguration");
    m_sharePointConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue DataSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", DataSourceTypeMapper::GetNameForDataSourceType(m_type));
  }

  if(m_s3ConfigurationHasBeenSet)
  {
   payload.WithObject("s3Configuration", m_s3Configuration.Jsonize());

  }

  if(m_webConfigurationHasBeenSet)
  {
   payload.WithObject("webConfiguration", m_webConfiguration.Jsonize());

  }

  if(m_confluenceConfigurationHasBeenSet)
  {
   payload.WithObject("confluenceConfiguration", m_confluenceConfiguration.Jsonize());

  }

  if(m_salesforceConfigurationHasBeenSet)
  {
   payload.WithObject("salesforceConfiguration", m_salesforceConfiguration.Jsonize());

  }

  if(m_sharePointConfigurationHasBeenSet)
  {
   payload.WithObject("sharePointConfiguration", m_sharePointConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
