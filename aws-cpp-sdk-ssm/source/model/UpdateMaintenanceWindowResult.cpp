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

#include <aws/ssm/model/UpdateMaintenanceWindowResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateMaintenanceWindowResult::UpdateMaintenanceWindowResult() : 
    m_duration(0),
    m_cutoff(0),
    m_allowUnassociatedTargets(false),
    m_enabled(false)
{
}

UpdateMaintenanceWindowResult::UpdateMaintenanceWindowResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_duration(0),
    m_cutoff(0),
    m_allowUnassociatedTargets(false),
    m_enabled(false)
{
  *this = result;
}

UpdateMaintenanceWindowResult& UpdateMaintenanceWindowResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("WindowId"))
  {
    m_windowId = jsonValue.GetString("WindowId");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Schedule"))
  {
    m_schedule = jsonValue.GetString("Schedule");

  }

  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetInteger("Duration");

  }

  if(jsonValue.ValueExists("Cutoff"))
  {
    m_cutoff = jsonValue.GetInteger("Cutoff");

  }

  if(jsonValue.ValueExists("AllowUnassociatedTargets"))
  {
    m_allowUnassociatedTargets = jsonValue.GetBool("AllowUnassociatedTargets");

  }

  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

  }



  return *this;
}
