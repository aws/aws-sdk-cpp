/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ClusterOperationV2Summary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

ClusterOperationV2Summary::ClusterOperationV2Summary() : 
    m_clusterArnHasBeenSet(false),
    m_clusterType(ClusterType::NOT_SET),
    m_clusterTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_operationArnHasBeenSet(false),
    m_operationStateHasBeenSet(false),
    m_operationTypeHasBeenSet(false)
{
}

ClusterOperationV2Summary::ClusterOperationV2Summary(JsonView jsonValue) : 
    m_clusterArnHasBeenSet(false),
    m_clusterType(ClusterType::NOT_SET),
    m_clusterTypeHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_operationArnHasBeenSet(false),
    m_operationStateHasBeenSet(false),
    m_operationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterOperationV2Summary& ClusterOperationV2Summary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clusterArn"))
  {
    m_clusterArn = jsonValue.GetString("clusterArn");

    m_clusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterType"))
  {
    m_clusterType = ClusterTypeMapper::GetClusterTypeForName(jsonValue.GetString("clusterType"));

    m_clusterTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operationArn"))
  {
    m_operationArn = jsonValue.GetString("operationArn");

    m_operationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operationState"))
  {
    m_operationState = jsonValue.GetString("operationState");

    m_operationStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operationType"))
  {
    m_operationType = jsonValue.GetString("operationType");

    m_operationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterOperationV2Summary::Jsonize() const
{
  JsonValue payload;

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("clusterArn", m_clusterArn);

  }

  if(m_clusterTypeHasBeenSet)
  {
   payload.WithString("clusterType", ClusterTypeMapper::GetNameForClusterType(m_clusterType));
  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_operationArnHasBeenSet)
  {
   payload.WithString("operationArn", m_operationArn);

  }

  if(m_operationStateHasBeenSet)
  {
   payload.WithString("operationState", m_operationState);

  }

  if(m_operationTypeHasBeenSet)
  {
   payload.WithString("operationType", m_operationType);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
