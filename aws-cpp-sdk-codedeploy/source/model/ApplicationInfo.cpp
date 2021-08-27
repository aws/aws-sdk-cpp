/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/ApplicationInfo.h>
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

ApplicationInfo::ApplicationInfo() : 
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_linkedToGitHub(false),
    m_linkedToGitHubHasBeenSet(false),
    m_gitHubAccountNameHasBeenSet(false),
    m_computePlatform(ComputePlatform::NOT_SET),
    m_computePlatformHasBeenSet(false)
{
}

ApplicationInfo::ApplicationInfo(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_linkedToGitHub(false),
    m_linkedToGitHubHasBeenSet(false),
    m_gitHubAccountNameHasBeenSet(false),
    m_computePlatform(ComputePlatform::NOT_SET),
    m_computePlatformHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationInfo& ApplicationInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("applicationName"))
  {
    m_applicationName = jsonValue.GetString("applicationName");

    m_applicationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetDouble("createTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("linkedToGitHub"))
  {
    m_linkedToGitHub = jsonValue.GetBool("linkedToGitHub");

    m_linkedToGitHubHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gitHubAccountName"))
  {
    m_gitHubAccountName = jsonValue.GetString("gitHubAccountName");

    m_gitHubAccountNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("computePlatform"))
  {
    m_computePlatform = ComputePlatformMapper::GetComputePlatformForName(jsonValue.GetString("computePlatform"));

    m_computePlatformHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationInfo::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("applicationId", m_applicationId);

  }

  if(m_applicationNameHasBeenSet)
  {
   payload.WithString("applicationName", m_applicationName);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_linkedToGitHubHasBeenSet)
  {
   payload.WithBool("linkedToGitHub", m_linkedToGitHub);

  }

  if(m_gitHubAccountNameHasBeenSet)
  {
   payload.WithString("gitHubAccountName", m_gitHubAccountName);

  }

  if(m_computePlatformHasBeenSet)
  {
   payload.WithString("computePlatform", ComputePlatformMapper::GetNameForComputePlatform(m_computePlatform));
  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
