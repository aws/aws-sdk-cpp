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
    m_linkedToGitHubHasBeenSet(false)
{
}

ApplicationInfo::ApplicationInfo(const JsonValue& jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_linkedToGitHub(false),
    m_linkedToGitHubHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationInfo& ApplicationInfo::operator =(const JsonValue& jsonValue)
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

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws