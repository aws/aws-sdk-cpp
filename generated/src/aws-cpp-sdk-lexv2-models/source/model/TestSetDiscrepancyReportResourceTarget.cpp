/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestSetDiscrepancyReportResourceTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

TestSetDiscrepancyReportResourceTarget::TestSetDiscrepancyReportResourceTarget() : 
    m_botAliasTargetHasBeenSet(false)
{
}

TestSetDiscrepancyReportResourceTarget::TestSetDiscrepancyReportResourceTarget(JsonView jsonValue) : 
    m_botAliasTargetHasBeenSet(false)
{
  *this = jsonValue;
}

TestSetDiscrepancyReportResourceTarget& TestSetDiscrepancyReportResourceTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("botAliasTarget"))
  {
    m_botAliasTarget = jsonValue.GetObject("botAliasTarget");

    m_botAliasTargetHasBeenSet = true;
  }

  return *this;
}

JsonValue TestSetDiscrepancyReportResourceTarget::Jsonize() const
{
  JsonValue payload;

  if(m_botAliasTargetHasBeenSet)
  {
   payload.WithObject("botAliasTarget", m_botAliasTarget.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
