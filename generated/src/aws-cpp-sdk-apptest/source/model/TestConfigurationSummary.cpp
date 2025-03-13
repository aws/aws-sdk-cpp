/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/TestConfigurationSummary.h>
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

TestConfigurationSummary::TestConfigurationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

TestConfigurationSummary& TestConfigurationSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("testConfigurationId"))
  {
    m_testConfigurationId = jsonValue.GetString("testConfigurationId");
    m_testConfigurationIdHasBeenSet = true;
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
  if(jsonValue.ValueExists("testConfigurationArn"))
  {
    m_testConfigurationArn = jsonValue.GetString("testConfigurationArn");
    m_testConfigurationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = TestConfigurationLifecycleMapper::GetTestConfigurationLifecycleForName(jsonValue.GetString("status"));
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

JsonValue TestConfigurationSummary::Jsonize() const
{
  JsonValue payload;

  if(m_testConfigurationIdHasBeenSet)
  {
   payload.WithString("testConfigurationId", m_testConfigurationId);

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

  if(m_testConfigurationArnHasBeenSet)
  {
   payload.WithString("testConfigurationArn", m_testConfigurationArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TestConfigurationLifecycleMapper::GetNameForTestConfigurationLifecycle(m_status));
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
