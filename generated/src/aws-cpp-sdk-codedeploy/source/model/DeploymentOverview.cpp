/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/DeploymentOverview.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

DeploymentOverview::DeploymentOverview(JsonView jsonValue)
{
  *this = jsonValue;
}

DeploymentOverview& DeploymentOverview::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Pending"))
  {
    m_pending = jsonValue.GetInt64("Pending");
    m_pendingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InProgress"))
  {
    m_inProgress = jsonValue.GetInt64("InProgress");
    m_inProgressHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Succeeded"))
  {
    m_succeeded = jsonValue.GetInt64("Succeeded");
    m_succeededHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Failed"))
  {
    m_failed = jsonValue.GetInt64("Failed");
    m_failedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Skipped"))
  {
    m_skipped = jsonValue.GetInt64("Skipped");
    m_skippedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Ready"))
  {
    m_ready = jsonValue.GetInt64("Ready");
    m_readyHasBeenSet = true;
  }
  return *this;
}

JsonValue DeploymentOverview::Jsonize() const
{
  JsonValue payload;

  if(m_pendingHasBeenSet)
  {
   payload.WithInt64("Pending", m_pending);

  }

  if(m_inProgressHasBeenSet)
  {
   payload.WithInt64("InProgress", m_inProgress);

  }

  if(m_succeededHasBeenSet)
  {
   payload.WithInt64("Succeeded", m_succeeded);

  }

  if(m_failedHasBeenSet)
  {
   payload.WithInt64("Failed", m_failed);

  }

  if(m_skippedHasBeenSet)
  {
   payload.WithInt64("Skipped", m_skipped);

  }

  if(m_readyHasBeenSet)
  {
   payload.WithInt64("Ready", m_ready);

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
