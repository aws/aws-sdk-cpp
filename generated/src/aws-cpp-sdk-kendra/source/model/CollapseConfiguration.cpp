/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/CollapseConfiguration.h>
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

CollapseConfiguration::CollapseConfiguration() : 
    m_documentAttributeKeyHasBeenSet(false),
    m_sortingConfigurationsHasBeenSet(false),
    m_missingAttributeKeyStrategy(MissingAttributeKeyStrategy::NOT_SET),
    m_missingAttributeKeyStrategyHasBeenSet(false),
    m_expand(false),
    m_expandHasBeenSet(false),
    m_expandConfigurationHasBeenSet(false)
{
}

CollapseConfiguration::CollapseConfiguration(JsonView jsonValue) : 
    m_documentAttributeKeyHasBeenSet(false),
    m_sortingConfigurationsHasBeenSet(false),
    m_missingAttributeKeyStrategy(MissingAttributeKeyStrategy::NOT_SET),
    m_missingAttributeKeyStrategyHasBeenSet(false),
    m_expand(false),
    m_expandHasBeenSet(false),
    m_expandConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

CollapseConfiguration& CollapseConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DocumentAttributeKey"))
  {
    m_documentAttributeKey = jsonValue.GetString("DocumentAttributeKey");

    m_documentAttributeKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SortingConfigurations"))
  {
    Aws::Utils::Array<JsonView> sortingConfigurationsJsonList = jsonValue.GetArray("SortingConfigurations");
    for(unsigned sortingConfigurationsIndex = 0; sortingConfigurationsIndex < sortingConfigurationsJsonList.GetLength(); ++sortingConfigurationsIndex)
    {
      m_sortingConfigurations.push_back(sortingConfigurationsJsonList[sortingConfigurationsIndex].AsObject());
    }
    m_sortingConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MissingAttributeKeyStrategy"))
  {
    m_missingAttributeKeyStrategy = MissingAttributeKeyStrategyMapper::GetMissingAttributeKeyStrategyForName(jsonValue.GetString("MissingAttributeKeyStrategy"));

    m_missingAttributeKeyStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Expand"))
  {
    m_expand = jsonValue.GetBool("Expand");

    m_expandHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpandConfiguration"))
  {
    m_expandConfiguration = jsonValue.GetObject("ExpandConfiguration");

    m_expandConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue CollapseConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_documentAttributeKeyHasBeenSet)
  {
   payload.WithString("DocumentAttributeKey", m_documentAttributeKey);

  }

  if(m_sortingConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sortingConfigurationsJsonList(m_sortingConfigurations.size());
   for(unsigned sortingConfigurationsIndex = 0; sortingConfigurationsIndex < sortingConfigurationsJsonList.GetLength(); ++sortingConfigurationsIndex)
   {
     sortingConfigurationsJsonList[sortingConfigurationsIndex].AsObject(m_sortingConfigurations[sortingConfigurationsIndex].Jsonize());
   }
   payload.WithArray("SortingConfigurations", std::move(sortingConfigurationsJsonList));

  }

  if(m_missingAttributeKeyStrategyHasBeenSet)
  {
   payload.WithString("MissingAttributeKeyStrategy", MissingAttributeKeyStrategyMapper::GetNameForMissingAttributeKeyStrategy(m_missingAttributeKeyStrategy));
  }

  if(m_expandHasBeenSet)
  {
   payload.WithBool("Expand", m_expand);

  }

  if(m_expandConfigurationHasBeenSet)
  {
   payload.WithObject("ExpandConfiguration", m_expandConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
