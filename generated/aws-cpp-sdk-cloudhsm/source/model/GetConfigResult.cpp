/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/model/GetConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudHSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetConfigResult::GetConfigResult()
{
}

GetConfigResult::GetConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetConfigResult& GetConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConfigType"))
  {
    m_configType = jsonValue.GetString("ConfigType");

  }

  if(jsonValue.ValueExists("ConfigFile"))
  {
    m_configFile = jsonValue.GetString("ConfigFile");

  }

  if(jsonValue.ValueExists("ConfigCred"))
  {
    m_configCred = jsonValue.GetString("ConfigCred");

  }



  return *this;
}
