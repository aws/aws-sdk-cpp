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
    m_updatedHasBeenSet(false)
{
}

PipelineMetadata::PipelineMetadata(JsonView jsonValue) : 
    m_pipelineArnHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_updatedHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
