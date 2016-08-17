/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

DeploymentOverview::DeploymentOverview() : 
    m_pending(0),
    m_pendingHasBeenSet(false),
    m_inProgress(0),
    m_inProgressHasBeenSet(false),
    m_succeeded(0),
    m_succeededHasBeenSet(false),
    m_failed(0),
    m_failedHasBeenSet(false),
    m_skipped(0),
    m_skippedHasBeenSet(false)
{
}

DeploymentOverview::DeploymentOverview(const JsonValue& jsonValue) : 
    m_pending(0),
    m_pendingHasBeenSet(false),
    m_inProgress(0),
    m_inProgressHasBeenSet(false),
    m_succeeded(0),
    m_succeededHasBeenSet(false),
    m_failed(0),
    m_failedHasBeenSet(false),
    m_skipped(0),
    m_skippedHasBeenSet(false)
{
  *this = jsonValue;
}

DeploymentOverview& DeploymentOverview::operator =(const JsonValue& jsonValue)
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

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws