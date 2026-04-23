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

#include <aws/sms/model/ReplicationRunStageDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SMS
{
namespace Model
{

ReplicationRunStageDetails::ReplicationRunStageDetails() : 
    m_stageHasBeenSet(false),
    m_stageProgressHasBeenSet(false)
{
}

ReplicationRunStageDetails::ReplicationRunStageDetails(JsonView jsonValue) : 
    m_stageHasBeenSet(false),
    m_stageProgressHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationRunStageDetails& ReplicationRunStageDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stage"))
  {
    m_stage = jsonValue.GetString("stage");

    m_stageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stageProgress"))
  {
    m_stageProgress = jsonValue.GetString("stageProgress");

    m_stageProgressHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationRunStageDetails::Jsonize() const
{
  JsonValue payload;

  if(m_stageHasBeenSet)
  {
   payload.WithString("stage", m_stage);

  }

  if(m_stageProgressHasBeenSet)
  {
   payload.WithString("stageProgress", m_stageProgress);

  }

  return payload;
}

} // namespace Model
} // namespace SMS
} // namespace Aws
