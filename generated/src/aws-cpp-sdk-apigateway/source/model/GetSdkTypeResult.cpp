/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetSdkTypeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSdkTypeResult::GetSdkTypeResult()
{
}

GetSdkTypeResult::GetSdkTypeResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSdkTypeResult& GetSdkTypeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("friendlyName"))
  {
    m_friendlyName = jsonValue.GetString("friendlyName");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("configurationProperties"))
  {
    Aws::Utils::Array<JsonView> configurationPropertiesJsonList = jsonValue.GetArray("configurationProperties");
    for(unsigned configurationPropertiesIndex = 0; configurationPropertiesIndex < configurationPropertiesJsonList.GetLength(); ++configurationPropertiesIndex)
    {
      m_configurationProperties.push_back(configurationPropertiesJsonList[configurationPropertiesIndex].AsObject());
    }
  }



  return *this;
}
