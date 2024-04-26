/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/SucceededInStageFilter.h>
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

SucceededInStageFilter::SucceededInStageFilter() : 
    m_stageNameHasBeenSet(false)
{
}

SucceededInStageFilter::SucceededInStageFilter(JsonView jsonValue) : 
    m_stageNameHasBeenSet(false)
{
  *this = jsonValue;
}

SucceededInStageFilter& SucceededInStageFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stageName"))
  {
    m_stageName = jsonValue.GetString("stageName");

    m_stageNameHasBeenSet = true;
  }

  return *this;
}

JsonValue SucceededInStageFilter::Jsonize() const
{
  JsonValue payload;

  if(m_stageNameHasBeenSet)
  {
   payload.WithString("stageName", m_stageName);

  }

  return payload;
}

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
