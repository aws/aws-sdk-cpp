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

DataSourceConfiguration::DataSourceConfiguration() : 
    m_s3ConfigurationHasBeenSet(false),
    m_type(DataSourceType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

DataSourceConfiguration::DataSourceConfiguration(JsonView jsonValue) : 
    m_s3ConfigurationHasBeenSet(false),
    m_type(DataSourceType::NOT_SET),
    m_typeHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceConfiguration& DataSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3Configuration"))
  {
    m_s3Configuration = jsonValue.GetObject("s3Configuration");

    m_s3ConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = DataSourceTypeMapper::GetDataSourceTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_s3ConfigurationHasBeenSet)
  {
   payload.WithObject("s3Configuration", m_s3Configuration.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", DataSourceTypeMapper::GetNameForDataSourceType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
