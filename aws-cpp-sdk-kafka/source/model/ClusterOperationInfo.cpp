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

#include <aws/kafka/model/ClusterOperationInfo.h>
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

ClusterOperationInfo::ClusterOperationInfo() : 
    m_clientRequestIdHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_operationArnHasBeenSet(false),
    m_operationStateHasBeenSet(false),
    m_operationTypeHasBeenSet(false),
    m_sourceClusterInfoHasBeenSet(false),
    m_targetClusterInfoHasBeenSet(false)
{
}

ClusterOperationInfo::ClusterOperationInfo(JsonView jsonValue) : 
    m_clientRequestIdHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_errorInfoHasBeenSet(false),
    m_operationArnHasBeenSet(false),
    m_operationStateHasBeenSet(false),
    m_operationTypeHasBeenSet(false),
    m_sourceClusterInfoHasBeenSet(false),
    m_targetClusterInfoHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterOperationInfo& ClusterOperationInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clientRequestId"))
  {
    m_clientRequestId = jsonValue.GetString("clientRequestId");

    m_clientRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterArn"))
  {
    m_clusterArn = jsonValue.GetString("clusterArn");

    m_clusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorInfo"))
  {
    m_errorInfo = jsonValue.GetObject("errorInfo");

    m_errorInfoHasBeenSet = true;
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

  if(jsonValue.ValueExists("sourceClusterInfo"))
  {
    m_sourceClusterInfo = jsonValue.GetObject("sourceClusterInfo");

    m_sourceClusterInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetClusterInfo"))
  {
    m_targetClusterInfo = jsonValue.GetObject("targetClusterInfo");

    m_targetClusterInfoHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterOperationInfo::Jsonize() const
{
  JsonValue payload;

  if(m_clientRequestIdHasBeenSet)
  {
   payload.WithString("clientRequestId", m_clientRequestId);

  }

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("clusterArn", m_clusterArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_errorInfoHasBeenSet)
  {
   payload.WithObject("errorInfo", m_errorInfo.Jsonize());

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

  if(m_sourceClusterInfoHasBeenSet)
  {
   payload.WithObject("sourceClusterInfo", m_sourceClusterInfo.Jsonize());

  }

  if(m_targetClusterInfoHasBeenSet)
  {
   payload.WithObject("targetClusterInfo", m_targetClusterInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
