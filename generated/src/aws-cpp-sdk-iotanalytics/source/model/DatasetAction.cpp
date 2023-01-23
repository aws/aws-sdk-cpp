/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/DatasetAction.h>
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

DatasetAction::DatasetAction() : 
    m_actionNameHasBeenSet(false),
    m_queryActionHasBeenSet(false),
    m_containerActionHasBeenSet(false)
{
}

DatasetAction::DatasetAction(JsonView jsonValue) : 
    m_actionNameHasBeenSet(false),
    m_queryActionHasBeenSet(false),
    m_containerActionHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetAction& DatasetAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("actionName"))
  {
    m_actionName = jsonValue.GetString("actionName");

    m_actionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("queryAction"))
  {
    m_queryAction = jsonValue.GetObject("queryAction");

    m_queryActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerAction"))
  {
    m_containerAction = jsonValue.GetObject("containerAction");

    m_containerActionHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetAction::Jsonize() const
{
  JsonValue payload;

  if(m_actionNameHasBeenSet)
  {
   payload.WithString("actionName", m_actionName);

  }

  if(m_queryActionHasBeenSet)
  {
   payload.WithObject("queryAction", m_queryAction.Jsonize());

  }

  if(m_containerActionHasBeenSet)
  {
   payload.WithObject("containerAction", m_containerAction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
