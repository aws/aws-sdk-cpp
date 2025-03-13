/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ImagePipelineAggregation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

ImagePipelineAggregation::ImagePipelineAggregation(JsonView jsonValue)
{
  *this = jsonValue;
}

ImagePipelineAggregation& ImagePipelineAggregation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imagePipelineArn"))
  {
    m_imagePipelineArn = jsonValue.GetString("imagePipelineArn");
    m_imagePipelineArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("severityCounts"))
  {
    m_severityCounts = jsonValue.GetObject("severityCounts");
    m_severityCountsHasBeenSet = true;
  }
  return *this;
}

JsonValue ImagePipelineAggregation::Jsonize() const
{
  JsonValue payload;

  if(m_imagePipelineArnHasBeenSet)
  {
   payload.WithString("imagePipelineArn", m_imagePipelineArn);

  }

  if(m_severityCountsHasBeenSet)
  {
   payload.WithObject("severityCounts", m_severityCounts.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
