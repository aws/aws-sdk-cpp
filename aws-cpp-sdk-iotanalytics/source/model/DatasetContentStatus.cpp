﻿/*
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

#include <aws/iotanalytics/model/DatasetContentStatus.h>
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

DatasetContentStatus::DatasetContentStatus() : 
    m_state(DatasetContentState::NOT_SET),
    m_stateHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

DatasetContentStatus::DatasetContentStatus(JsonView jsonValue) : 
    m_state(DatasetContentState::NOT_SET),
    m_stateHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetContentStatus& DatasetContentStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("state"))
  {
    m_state = DatasetContentStateMapper::GetDatasetContentStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reason"))
  {
    m_reason = jsonValue.GetString("reason");

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetContentStatus::Jsonize() const
{
  JsonValue payload;

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", DatasetContentStateMapper::GetNameForDatasetContentState(m_state));
  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
