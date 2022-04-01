/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/ExecutionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

ExecutionConfiguration::ExecutionConfiguration() : 
    m_jobTimeoutMinutes(0),
    m_jobTimeoutMinutesHasBeenSet(false),
    m_accountsCleanup(false),
    m_accountsCleanupHasBeenSet(false),
    m_appPackagesCleanup(false),
    m_appPackagesCleanupHasBeenSet(false),
    m_videoCapture(false),
    m_videoCaptureHasBeenSet(false),
    m_skipAppResign(false),
    m_skipAppResignHasBeenSet(false)
{
}

ExecutionConfiguration::ExecutionConfiguration(JsonView jsonValue) : 
    m_jobTimeoutMinutes(0),
    m_jobTimeoutMinutesHasBeenSet(false),
    m_accountsCleanup(false),
    m_accountsCleanupHasBeenSet(false),
    m_appPackagesCleanup(false),
    m_appPackagesCleanupHasBeenSet(false),
    m_videoCapture(false),
    m_videoCaptureHasBeenSet(false),
    m_skipAppResign(false),
    m_skipAppResignHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionConfiguration& ExecutionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jobTimeoutMinutes"))
  {
    m_jobTimeoutMinutes = jsonValue.GetInteger("jobTimeoutMinutes");

    m_jobTimeoutMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accountsCleanup"))
  {
    m_accountsCleanup = jsonValue.GetBool("accountsCleanup");

    m_accountsCleanupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appPackagesCleanup"))
  {
    m_appPackagesCleanup = jsonValue.GetBool("appPackagesCleanup");

    m_appPackagesCleanupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("videoCapture"))
  {
    m_videoCapture = jsonValue.GetBool("videoCapture");

    m_videoCaptureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("skipAppResign"))
  {
    m_skipAppResign = jsonValue.GetBool("skipAppResign");

    m_skipAppResignHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_jobTimeoutMinutesHasBeenSet)
  {
   payload.WithInteger("jobTimeoutMinutes", m_jobTimeoutMinutes);

  }

  if(m_accountsCleanupHasBeenSet)
  {
   payload.WithBool("accountsCleanup", m_accountsCleanup);

  }

  if(m_appPackagesCleanupHasBeenSet)
  {
   payload.WithBool("appPackagesCleanup", m_appPackagesCleanup);

  }

  if(m_videoCaptureHasBeenSet)
  {
   payload.WithBool("videoCapture", m_videoCapture);

  }

  if(m_skipAppResignHasBeenSet)
  {
   payload.WithBool("skipAppResign", m_skipAppResign);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
