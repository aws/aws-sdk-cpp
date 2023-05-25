/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/CreateComponentVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateComponentVersionResult::CreateComponentVersionResult()
{
}

CreateComponentVersionResult::CreateComponentVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateComponentVersionResult& CreateComponentVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("componentName"))
  {
    m_componentName = jsonValue.GetString("componentName");

  }

  if(jsonValue.ValueExists("componentVersion"))
  {
    m_componentVersion = jsonValue.GetString("componentVersion");

  }

  if(jsonValue.ValueExists("creationTimestamp"))
  {
    m_creationTimestamp = jsonValue.GetDouble("creationTimestamp");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = jsonValue.GetObject("status");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
