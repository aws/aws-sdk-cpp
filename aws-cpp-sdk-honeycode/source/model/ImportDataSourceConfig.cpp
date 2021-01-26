/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/ImportDataSourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Honeycode
{
namespace Model
{

ImportDataSourceConfig::ImportDataSourceConfig() : 
    m_dataSourceUrlHasBeenSet(false)
{
}

ImportDataSourceConfig::ImportDataSourceConfig(JsonView jsonValue) : 
    m_dataSourceUrlHasBeenSet(false)
{
  *this = jsonValue;
}

ImportDataSourceConfig& ImportDataSourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataSourceUrl"))
  {
    m_dataSourceUrl = jsonValue.GetString("dataSourceUrl");

    m_dataSourceUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportDataSourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceUrlHasBeenSet)
  {
   payload.WithString("dataSourceUrl", m_dataSourceUrl);

  }

  return payload;
}

} // namespace Model
} // namespace Honeycode
} // namespace Aws
