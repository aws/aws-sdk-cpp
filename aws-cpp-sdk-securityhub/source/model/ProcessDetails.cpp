/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/securityhub/model/ProcessDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

ProcessDetails::ProcessDetails() : 
    m_nameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_pid(0),
    m_pidHasBeenSet(false),
    m_parentPid(0),
    m_parentPidHasBeenSet(false),
    m_launchedAtHasBeenSet(false),
    m_terminatedAtHasBeenSet(false)
{
}

ProcessDetails::ProcessDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_pathHasBeenSet(false),
    m_pid(0),
    m_pidHasBeenSet(false),
    m_parentPid(0),
    m_parentPidHasBeenSet(false),
    m_launchedAtHasBeenSet(false),
    m_terminatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

ProcessDetails& ProcessDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Pid"))
  {
    m_pid = jsonValue.GetInteger("Pid");

    m_pidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParentPid"))
  {
    m_parentPid = jsonValue.GetInteger("ParentPid");

    m_parentPidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LaunchedAt"))
  {
    m_launchedAt = jsonValue.GetString("LaunchedAt");

    m_launchedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TerminatedAt"))
  {
    m_terminatedAt = jsonValue.GetString("TerminatedAt");

    m_terminatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue ProcessDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  if(m_pidHasBeenSet)
  {
   payload.WithInteger("Pid", m_pid);

  }

  if(m_parentPidHasBeenSet)
  {
   payload.WithInteger("ParentPid", m_parentPid);

  }

  if(m_launchedAtHasBeenSet)
  {
   payload.WithString("LaunchedAt", m_launchedAt);

  }

  if(m_terminatedAtHasBeenSet)
  {
   payload.WithString("TerminatedAt", m_terminatedAt);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
