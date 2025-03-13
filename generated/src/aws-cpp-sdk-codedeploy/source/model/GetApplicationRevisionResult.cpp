/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/GetApplicationRevisionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeDeploy::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetApplicationRevisionResult::GetApplicationRevisionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetApplicationRevisionResult& GetApplicationRevisionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationName"))
  {
    m_applicationName = jsonValue.GetString("applicationName");
    m_applicationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetObject("revision");
    m_revisionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("revisionInfo"))
  {
    m_revisionInfo = jsonValue.GetObject("revisionInfo");
    m_revisionInfoHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
