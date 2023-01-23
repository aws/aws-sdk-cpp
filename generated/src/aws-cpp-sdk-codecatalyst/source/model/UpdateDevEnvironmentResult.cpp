/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/UpdateDevEnvironmentResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCatalyst::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateDevEnvironmentResult::UpdateDevEnvironmentResult() : 
    m_instanceType(InstanceType::NOT_SET),
    m_inactivityTimeoutMinutes(0)
{
}

UpdateDevEnvironmentResult::UpdateDevEnvironmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_instanceType(InstanceType::NOT_SET),
    m_inactivityTimeoutMinutes(0)
{
  *this = result;
}

UpdateDevEnvironmentResult& UpdateDevEnvironmentResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("spaceName"))
  {
    m_spaceName = jsonValue.GetString("spaceName");

  }

  if(jsonValue.ValueExists("projectName"))
  {
    m_projectName = jsonValue.GetString("projectName");

  }

  if(jsonValue.ValueExists("alias"))
  {
    m_alias = jsonValue.GetString("alias");

  }

  if(jsonValue.ValueExists("ides"))
  {
    Aws::Utils::Array<JsonView> idesJsonList = jsonValue.GetArray("ides");
    for(unsigned idesIndex = 0; idesIndex < idesJsonList.GetLength(); ++idesIndex)
    {
      m_ides.push_back(idesJsonList[idesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(jsonValue.GetString("instanceType"));

  }

  if(jsonValue.ValueExists("inactivityTimeoutMinutes"))
  {
    m_inactivityTimeoutMinutes = jsonValue.GetInteger("inactivityTimeoutMinutes");

  }

  if(jsonValue.ValueExists("clientToken"))
  {
    m_clientToken = jsonValue.GetString("clientToken");

  }



  return *this;
}
