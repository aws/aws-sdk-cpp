/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/GetConfigurationProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetConfigurationProfileResult::GetConfigurationProfileResult()
{
}

GetConfigurationProfileResult::GetConfigurationProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetConfigurationProfileResult& GetConfigurationProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("LocationUri"))
  {
    m_locationUri = jsonValue.GetString("LocationUri");

  }

  if(jsonValue.ValueExists("RetrievalRoleArn"))
  {
    m_retrievalRoleArn = jsonValue.GetString("RetrievalRoleArn");

  }

  if(jsonValue.ValueExists("Validators"))
  {
    Aws::Utils::Array<JsonView> validatorsJsonList = jsonValue.GetArray("Validators");
    for(unsigned validatorsIndex = 0; validatorsIndex < validatorsJsonList.GetLength(); ++validatorsIndex)
    {
      m_validators.push_back(validatorsJsonList[validatorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

  }



  return *this;
}
