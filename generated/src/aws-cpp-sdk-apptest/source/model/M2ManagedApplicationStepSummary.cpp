/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/M2ManagedApplicationStepSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppTest
{
namespace Model
{

M2ManagedApplicationStepSummary::M2ManagedApplicationStepSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

M2ManagedApplicationStepSummary& M2ManagedApplicationStepSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stepInput"))
  {
    m_stepInput = jsonValue.GetObject("stepInput");
    m_stepInputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stepOutput"))
  {
    m_stepOutput = jsonValue.GetObject("stepOutput");
    m_stepOutputHasBeenSet = true;
  }
  return *this;
}

JsonValue M2ManagedApplicationStepSummary::Jsonize() const
{
  JsonValue payload;

  if(m_stepInputHasBeenSet)
  {
   payload.WithObject("stepInput", m_stepInput.Jsonize());

  }

  if(m_stepOutputHasBeenSet)
  {
   payload.WithObject("stepOutput", m_stepOutput.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
