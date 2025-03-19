/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/TestCaseSummary.h>
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

TestCaseSummary::TestCaseSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

TestCaseSummary& TestCaseSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("testCaseId"))
  {
    m_testCaseId = jsonValue.GetString("testCaseId");
    m_testCaseIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("testCaseArn"))
  {
    m_testCaseArn = jsonValue.GetString("testCaseArn");
    m_testCaseArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("latestVersion"))
  {
    m_latestVersion = jsonValue.GetInteger("latestVersion");
    m_latestVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = TestCaseLifecycleMapper::GetTestCaseLifecycleForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("lastUpdateTime");
    m_lastUpdateTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue TestCaseSummary::Jsonize() const
{
  JsonValue payload;

  if(m_testCaseIdHasBeenSet)
  {
   payload.WithString("testCaseId", m_testCaseId);

  }

  if(m_testCaseArnHasBeenSet)
  {
   payload.WithString("testCaseArn", m_testCaseArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_latestVersionHasBeenSet)
  {
   payload.WithInteger("latestVersion", m_latestVersion);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TestCaseLifecycleMapper::GetNameForTestCaseLifecycle(m_status));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
