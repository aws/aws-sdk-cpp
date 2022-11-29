/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableCellImageSizingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

TableCellImageSizingConfiguration::TableCellImageSizingConfiguration() : 
    m_tableCellImageScalingConfiguration(TableCellImageScalingConfiguration::NOT_SET),
    m_tableCellImageScalingConfigurationHasBeenSet(false)
{
}

TableCellImageSizingConfiguration::TableCellImageSizingConfiguration(JsonView jsonValue) : 
    m_tableCellImageScalingConfiguration(TableCellImageScalingConfiguration::NOT_SET),
    m_tableCellImageScalingConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

TableCellImageSizingConfiguration& TableCellImageSizingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TableCellImageScalingConfiguration"))
  {
    m_tableCellImageScalingConfiguration = TableCellImageScalingConfigurationMapper::GetTableCellImageScalingConfigurationForName(jsonValue.GetString("TableCellImageScalingConfiguration"));

    m_tableCellImageScalingConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue TableCellImageSizingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_tableCellImageScalingConfigurationHasBeenSet)
  {
   payload.WithString("TableCellImageScalingConfiguration", TableCellImageScalingConfigurationMapper::GetNameForTableCellImageScalingConfiguration(m_tableCellImageScalingConfiguration));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
