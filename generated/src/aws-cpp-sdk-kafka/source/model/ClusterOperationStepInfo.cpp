/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ClusterOperationStepInfo.h>
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

ClusterOperationStepInfo::ClusterOperationStepInfo() : 
    m_stepStatusHasBeenSet(false)
{
}

ClusterOperationStepInfo::ClusterOperationStepInfo(JsonView jsonValue) : 
    m_stepStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterOperationStepInfo& ClusterOperationStepInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stepStatus"))
  {
    m_stepStatus = jsonValue.GetString("stepStatus");

    m_stepStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterOperationStepInfo::Jsonize() const
{
  JsonValue payload;

  if(m_stepStatusHasBeenSet)
  {
   payload.WithString("stepStatus", m_stepStatus);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
