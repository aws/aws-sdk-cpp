/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
