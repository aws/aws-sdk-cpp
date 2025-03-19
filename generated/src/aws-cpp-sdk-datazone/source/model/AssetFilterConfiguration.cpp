/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AssetFilterConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

AssetFilterConfiguration::AssetFilterConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

AssetFilterConfiguration& AssetFilterConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("columnConfiguration"))
  {
    m_columnConfiguration = jsonValue.GetObject("columnConfiguration");
    m_columnConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rowConfiguration"))
  {
    m_rowConfiguration = jsonValue.GetObject("rowConfiguration");
    m_rowConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetFilterConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_columnConfigurationHasBeenSet)
  {
   payload.WithObject("columnConfiguration", m_columnConfiguration.Jsonize());

  }

  if(m_rowConfigurationHasBeenSet)
  {
   payload.WithObject("rowConfiguration", m_rowConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
