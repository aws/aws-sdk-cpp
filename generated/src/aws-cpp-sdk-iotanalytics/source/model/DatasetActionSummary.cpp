/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/DatasetActionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

DatasetActionSummary::DatasetActionSummary() : 
    m_actionNameHasBeenSet(false),
    m_actionType(DatasetActionType::NOT_SET),
    m_actionTypeHasBeenSet(false)
{
}

DatasetActionSummary::DatasetActionSummary(JsonView jsonValue) : 
    m_actionNameHasBeenSet(false),
    m_actionType(DatasetActionType::NOT_SET),
    m_actionTypeHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetActionSummary& DatasetActionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionName"))
  {
    m_actionName = jsonValue.GetString("actionName");

    m_actionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("actionType"))
  {
    m_actionType = DatasetActionTypeMapper::GetDatasetActionTypeForName(jsonValue.GetString("actionType"));

    m_actionTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetActionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("actionName", m_actionName);

  }

  if(m_actionTypeHasBeenSet)
  {
   payload.WithString("actionType", DatasetActionTypeMapper::GetNameForDatasetActionType(m_actionType));
  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
