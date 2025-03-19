/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/TestConfigurationLatestVersion.h>
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

TestConfigurationLatestVersion::TestConfigurationLatestVersion(JsonView jsonValue)
{
  *this = jsonValue;
}

TestConfigurationLatestVersion& TestConfigurationLatestVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetInteger("version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = TestConfigurationLifecycleMapper::GetTestConfigurationLifecycleForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue TestConfigurationLatestVersion::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithInteger("version", m_version);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TestConfigurationLifecycleMapper::GetNameForTestConfigurationLifecycle(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  return payload;
}

} // namespace Model
} // namespace AppTest
} // namespace Aws
