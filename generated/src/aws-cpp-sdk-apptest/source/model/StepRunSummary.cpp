/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/StepRunSummary.h>
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

StepRunSummary::StepRunSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

StepRunSummary& StepRunSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("mainframeAction"))
  {
    m_mainframeAction = jsonValue.GetObject("mainframeAction");
    m_mainframeActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("compareAction"))
  {
    m_compareAction = jsonValue.GetObject("compareAction");
    m_compareActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceAction"))
  {
    m_resourceAction = jsonValue.GetObject("resourceAction");
    m_resourceActionHasBeenSet = true;
  }
  return *this;
}

JsonValue StepRunSummary::Jsonize() const
{
  JsonValue payload;

  if(m_mainframeActionHasBeenSet)
  {
   payload.WithObject("mainframeAction", m_mainframeAction.Jsonize());

  }

  if(m_compareActionHasBeenSet)
  {
   payload.WithObject("compareAction", m_compareAction.Jsonize());

  }

  if(m_resourceActionHasBeenSet)
  {
   payload.WithObject("resourceAction", m_resourceAction.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
