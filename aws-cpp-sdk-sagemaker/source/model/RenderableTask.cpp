/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RenderableTask.h>
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

RenderableTask::RenderableTask() : 
    m_inputHasBeenSet(false)
{
}

RenderableTask::RenderableTask(JsonView jsonValue) : 
    m_inputHasBeenSet(false)
{
  *this = jsonValue;
}

RenderableTask& RenderableTask::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Input"))
  {
    m_input = jsonValue.GetString("Input");

    m_inputHasBeenSet = true;
  }

  return *this;
}

JsonValue RenderableTask::Jsonize() const
{
  JsonValue payload;

  if(m_inputHasBeenSet)
  {
   payload.WithString("Input", m_input);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
