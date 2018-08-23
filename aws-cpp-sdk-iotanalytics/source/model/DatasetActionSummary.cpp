/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
