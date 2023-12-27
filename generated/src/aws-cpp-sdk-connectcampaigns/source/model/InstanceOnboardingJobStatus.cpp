/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/InstanceOnboardingJobStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{

InstanceOnboardingJobStatus::InstanceOnboardingJobStatus() : 
    m_connectInstanceIdHasBeenSet(false),
    m_status(InstanceOnboardingJobStatusCode::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureCode(InstanceOnboardingJobFailureCode::NOT_SET),
    m_failureCodeHasBeenSet(false)
{
}

InstanceOnboardingJobStatus::InstanceOnboardingJobStatus(JsonView jsonValue) : 
    m_connectInstanceIdHasBeenSet(false),
    m_status(InstanceOnboardingJobStatusCode::NOT_SET),
    m_statusHasBeenSet(false),
    m_failureCode(InstanceOnboardingJobFailureCode::NOT_SET),
    m_failureCodeHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceOnboardingJobStatus& InstanceOnboardingJobStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connectInstanceId"))
  {
    m_connectInstanceId = jsonValue.GetString("connectInstanceId");

    m_connectInstanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = InstanceOnboardingJobStatusCodeMapper::GetInstanceOnboardingJobStatusCodeForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = InstanceOnboardingJobFailureCodeMapper::GetInstanceOnboardingJobFailureCodeForName(jsonValue.GetString("failureCode"));

    m_failureCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceOnboardingJobStatus::Jsonize() const
{
  JsonValue payload;

  if(m_connectInstanceIdHasBeenSet)
  {
   payload.WithString("connectInstanceId", m_connectInstanceId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", InstanceOnboardingJobStatusCodeMapper::GetNameForInstanceOnboardingJobStatusCode(m_status));
  }

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("failureCode", InstanceOnboardingJobFailureCodeMapper::GetNameForInstanceOnboardingJobFailureCode(m_failureCode));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
