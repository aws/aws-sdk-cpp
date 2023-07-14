/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataSetUsageConfiguration.h>
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

DataSetUsageConfiguration::DataSetUsageConfiguration() : 
    m_disableUseAsDirectQuerySource(false),
    m_disableUseAsDirectQuerySourceHasBeenSet(false),
    m_disableUseAsImportedSource(false),
    m_disableUseAsImportedSourceHasBeenSet(false)
{
}

DataSetUsageConfiguration::DataSetUsageConfiguration(JsonView jsonValue) : 
    m_disableUseAsDirectQuerySource(false),
    m_disableUseAsDirectQuerySourceHasBeenSet(false),
    m_disableUseAsImportedSource(false),
    m_disableUseAsImportedSourceHasBeenSet(false)
{
  *this = jsonValue;
}

DataSetUsageConfiguration& DataSetUsageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DisableUseAsDirectQuerySource"))
  {
    m_disableUseAsDirectQuerySource = jsonValue.GetBool("DisableUseAsDirectQuerySource");

    m_disableUseAsDirectQuerySourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisableUseAsImportedSource"))
  {
    m_disableUseAsImportedSource = jsonValue.GetBool("DisableUseAsImportedSource");

    m_disableUseAsImportedSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSetUsageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_disableUseAsDirectQuerySourceHasBeenSet)
  {
   payload.WithBool("DisableUseAsDirectQuerySource", m_disableUseAsDirectQuerySource);

  }

  if(m_disableUseAsImportedSourceHasBeenSet)
  {
   payload.WithBool("DisableUseAsImportedSource", m_disableUseAsImportedSource);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
