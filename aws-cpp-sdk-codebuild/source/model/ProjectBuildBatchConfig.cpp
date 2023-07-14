/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ProjectBuildBatchConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

ProjectBuildBatchConfig::ProjectBuildBatchConfig() : 
    m_serviceRoleHasBeenSet(false),
    m_combineArtifacts(false),
    m_combineArtifactsHasBeenSet(false),
    m_restrictionsHasBeenSet(false),
    m_timeoutInMins(0),
    m_timeoutInMinsHasBeenSet(false),
    m_batchReportMode(BatchReportModeType::NOT_SET),
    m_batchReportModeHasBeenSet(false)
{
}

ProjectBuildBatchConfig::ProjectBuildBatchConfig(JsonView jsonValue) : 
    m_serviceRoleHasBeenSet(false),
    m_combineArtifacts(false),
    m_combineArtifactsHasBeenSet(false),
    m_restrictionsHasBeenSet(false),
    m_timeoutInMins(0),
    m_timeoutInMinsHasBeenSet(false),
    m_batchReportMode(BatchReportModeType::NOT_SET),
    m_batchReportModeHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectBuildBatchConfig& ProjectBuildBatchConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serviceRole"))
  {
    m_serviceRole = jsonValue.GetString("serviceRole");

    m_serviceRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("combineArtifacts"))
  {
    m_combineArtifacts = jsonValue.GetBool("combineArtifacts");

    m_combineArtifactsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("restrictions"))
  {
    m_restrictions = jsonValue.GetObject("restrictions");

    m_restrictionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeoutInMins"))
  {
    m_timeoutInMins = jsonValue.GetInteger("timeoutInMins");

    m_timeoutInMinsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("batchReportMode"))
  {
    m_batchReportMode = BatchReportModeTypeMapper::GetBatchReportModeTypeForName(jsonValue.GetString("batchReportMode"));

    m_batchReportModeHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectBuildBatchConfig::Jsonize() const
{
  JsonValue payload;

  if(m_serviceRoleHasBeenSet)
  {
   payload.WithString("serviceRole", m_serviceRole);

  }

  if(m_combineArtifactsHasBeenSet)
  {
   payload.WithBool("combineArtifacts", m_combineArtifacts);

  }

  if(m_restrictionsHasBeenSet)
  {
   payload.WithObject("restrictions", m_restrictions.Jsonize());

  }

  if(m_timeoutInMinsHasBeenSet)
  {
   payload.WithInteger("timeoutInMins", m_timeoutInMins);

  }

  if(m_batchReportModeHasBeenSet)
  {
   payload.WithString("batchReportMode", BatchReportModeTypeMapper::GetNameForBatchReportModeType(m_batchReportMode));
  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
