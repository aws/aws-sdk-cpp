/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/CreateConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::GroundStation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateConfigResult::CreateConfigResult() : 
    m_configType(ConfigCapabilityType::NOT_SET)
{
}

CreateConfigResult::CreateConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_configType(ConfigCapabilityType::NOT_SET)
{
  *this = result;
}

CreateConfigResult& CreateConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("configArn"))
  {
    m_configArn = jsonValue.GetString("configArn");

  }

  if(jsonValue.ValueExists("configId"))
  {
    m_configId = jsonValue.GetString("configId");

  }

  if(jsonValue.ValueExists("configType"))
  {
    m_configType = ConfigCapabilityTypeMapper::GetConfigCapabilityTypeForName(jsonValue.GetString("configType"));

  }



  return *this;
}
