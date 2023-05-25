/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PipelineMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

PipelineMetadata::PipelineMetadata() : 
    m_pipelineArnHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_updatedHasBeenSet(false),
    m_pollingDisabledAtHasBeenSet(false)
{
}

PipelineMetadata::PipelineMetadata(JsonView jsonValue) : 
    m_pipelineArnHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_updatedHasBeenSet(false),
    m_pollingDisabledAtHasBeenSet(false)
{
  *this = jsonValue;
}

PipelineMetadata& PipelineMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pipelineArn"))
  {
    m_pipelineArn = jsonValue.GetString("pipelineArn");

    m_pipelineArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetDouble("created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updated"))
  {
    m_updated = jsonValue.GetDouble("updated");

    m_updatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pollingDisabledAt"))
  {
    m_pollingDisabledAt = jsonValue.GetDouble("pollingDisabledAt");

    m_pollingDisabledAtHasBeenSet = true;
  }

  return *this;
}

JsonValue PipelineMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_pipelineArnHasBeenSet)
  {
   payload.WithString("pipelineArn", m_pipelineArn);

  }

  if(m_createdHasBeenSet)
  {
   payload.WithDouble("created", m_created.SecondsWithMSPrecision());
  }

  if(m_updatedHasBeenSet)
  {
   payload.WithDouble("updated", m_updated.SecondsWithMSPrecision());
  }

  if(m_pollingDisabledAtHasBeenSet)
  {
   payload.WithDouble("pollingDisabledAt", m_pollingDisabledAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
