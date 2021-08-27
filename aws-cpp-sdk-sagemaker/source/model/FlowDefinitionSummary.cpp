/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/FlowDefinitionSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

FlowDefinitionSummary::FlowDefinitionSummary() : 
    m_flowDefinitionNameHasBeenSet(false),
    m_flowDefinitionArnHasBeenSet(false),
    m_flowDefinitionStatus(FlowDefinitionStatus::NOT_SET),
    m_flowDefinitionStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

FlowDefinitionSummary::FlowDefinitionSummary(JsonView jsonValue) : 
    m_flowDefinitionNameHasBeenSet(false),
    m_flowDefinitionArnHasBeenSet(false),
    m_flowDefinitionStatus(FlowDefinitionStatus::NOT_SET),
    m_flowDefinitionStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

FlowDefinitionSummary& FlowDefinitionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FlowDefinitionName"))
  {
    m_flowDefinitionName = jsonValue.GetString("FlowDefinitionName");

    m_flowDefinitionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FlowDefinitionArn"))
  {
    m_flowDefinitionArn = jsonValue.GetString("FlowDefinitionArn");

    m_flowDefinitionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FlowDefinitionStatus"))
  {
    m_flowDefinitionStatus = FlowDefinitionStatusMapper::GetFlowDefinitionStatusForName(jsonValue.GetString("FlowDefinitionStatus"));

    m_flowDefinitionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue FlowDefinitionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_flowDefinitionNameHasBeenSet)
  {
   payload.WithString("FlowDefinitionName", m_flowDefinitionName);

  }

  if(m_flowDefinitionArnHasBeenSet)
  {
   payload.WithString("FlowDefinitionArn", m_flowDefinitionArn);

  }

  if(m_flowDefinitionStatusHasBeenSet)
  {
   payload.WithString("FlowDefinitionStatus", FlowDefinitionStatusMapper::GetNameForFlowDefinitionStatus(m_flowDefinitionStatus));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
