/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/MatchingWorkflowSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

MatchingWorkflowSummary::MatchingWorkflowSummary() : 
    m_createdAtHasBeenSet(false),
    m_resolutionType(ResolutionType::NOT_SET),
    m_resolutionTypeHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_workflowArnHasBeenSet(false),
    m_workflowNameHasBeenSet(false)
{
}

MatchingWorkflowSummary::MatchingWorkflowSummary(JsonView jsonValue) : 
    m_createdAtHasBeenSet(false),
    m_resolutionType(ResolutionType::NOT_SET),
    m_resolutionTypeHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_workflowArnHasBeenSet(false),
    m_workflowNameHasBeenSet(false)
{
  *this = jsonValue;
}

MatchingWorkflowSummary& MatchingWorkflowSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resolutionType"))
  {
    m_resolutionType = ResolutionTypeMapper::GetResolutionTypeForName(jsonValue.GetString("resolutionType"));

    m_resolutionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workflowArn"))
  {
    m_workflowArn = jsonValue.GetString("workflowArn");

    m_workflowArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workflowName"))
  {
    m_workflowName = jsonValue.GetString("workflowName");

    m_workflowNameHasBeenSet = true;
  }

  return *this;
}

JsonValue MatchingWorkflowSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_resolutionTypeHasBeenSet)
  {
   payload.WithString("resolutionType", ResolutionTypeMapper::GetNameForResolutionType(m_resolutionType));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_workflowArnHasBeenSet)
  {
   payload.WithString("workflowArn", m_workflowArn);

  }

  if(m_workflowNameHasBeenSet)
  {
   payload.WithString("workflowName", m_workflowName);

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
