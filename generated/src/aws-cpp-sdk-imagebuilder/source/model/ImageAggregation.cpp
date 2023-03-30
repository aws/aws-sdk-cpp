/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ImageAggregation.h>
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

ImageAggregation::ImageAggregation() : 
    m_imageBuildVersionArnHasBeenSet(false),
    m_severityCountsHasBeenSet(false)
{
}

ImageAggregation::ImageAggregation(JsonView jsonValue) : 
    m_imageBuildVersionArnHasBeenSet(false),
    m_severityCountsHasBeenSet(false)
{
  *this = jsonValue;
}

ImageAggregation& ImageAggregation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageBuildVersionArn"))
  {
    m_imageBuildVersionArn = jsonValue.GetString("imageBuildVersionArn");

    m_imageBuildVersionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("severityCounts"))
  {
    m_severityCounts = jsonValue.GetObject("severityCounts");

    m_severityCountsHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageAggregation::Jsonize() const
{
  JsonValue payload;

  if(m_imageBuildVersionArnHasBeenSet)
  {
   payload.WithString("imageBuildVersionArn", m_imageBuildVersionArn);

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
