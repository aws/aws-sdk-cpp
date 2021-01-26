/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/StepDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

StepDetail::StepDetail() : 
    m_stepConfigHasBeenSet(false),
    m_executionStatusDetailHasBeenSet(false)
{
}

StepDetail::StepDetail(JsonView jsonValue) : 
    m_stepConfigHasBeenSet(false),
    m_executionStatusDetailHasBeenSet(false)
{
  *this = jsonValue;
}

StepDetail& StepDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StepConfig"))
  {
    m_stepConfig = jsonValue.GetObject("StepConfig");

    m_stepConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExecutionStatusDetail"))
  {
    m_executionStatusDetail = jsonValue.GetObject("ExecutionStatusDetail");

    m_executionStatusDetailHasBeenSet = true;
  }

  return *this;
}

JsonValue StepDetail::Jsonize() const
{
  JsonValue payload;

  if(m_stepConfigHasBeenSet)
  {
   payload.WithObject("StepConfig", m_stepConfig.Jsonize());

  }

  if(m_executionStatusDetailHasBeenSet)
  {
   payload.WithObject("ExecutionStatusDetail", m_executionStatusDetail.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
