/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleethub/model/DescribeApplicationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTFleetHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeApplicationResult::DescribeApplicationResult() : 
    m_applicationState(ApplicationState::NOT_SET),
    m_applicationCreationDate(0),
    m_applicationLastUpdateDate(0)
{
}

DescribeApplicationResult::DescribeApplicationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_applicationState(ApplicationState::NOT_SET),
    m_applicationCreationDate(0),
    m_applicationLastUpdateDate(0)
{
  *this = result;
}

DescribeApplicationResult& DescribeApplicationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationId"))
  {
    m_applicationId = jsonValue.GetString("applicationId");

  }

  if(jsonValue.ValueExists("applicationArn"))
  {
    m_applicationArn = jsonValue.GetString("applicationArn");

  }

  if(jsonValue.ValueExists("applicationName"))
  {
    m_applicationName = jsonValue.GetString("applicationName");

  }

  if(jsonValue.ValueExists("applicationDescription"))
  {
    m_applicationDescription = jsonValue.GetString("applicationDescription");

  }

  if(jsonValue.ValueExists("applicationUrl"))
  {
    m_applicationUrl = jsonValue.GetString("applicationUrl");

  }

  if(jsonValue.ValueExists("applicationState"))
  {
    m_applicationState = ApplicationStateMapper::GetApplicationStateForName(jsonValue.GetString("applicationState"));

  }

  if(jsonValue.ValueExists("applicationCreationDate"))
  {
    m_applicationCreationDate = jsonValue.GetInt64("applicationCreationDate");

  }

  if(jsonValue.ValueExists("applicationLastUpdateDate"))
  {
    m_applicationLastUpdateDate = jsonValue.GetInt64("applicationLastUpdateDate");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("ssoClientId"))
  {
    m_ssoClientId = jsonValue.GetString("ssoClientId");

  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
