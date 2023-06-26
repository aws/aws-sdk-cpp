/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/DeleteGrantResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteGrantResult::DeleteGrantResult() : 
    m_status(GrantStatus::NOT_SET)
{
}

DeleteGrantResult::DeleteGrantResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(GrantStatus::NOT_SET)
{
  *this = result;
}

DeleteGrantResult& DeleteGrantResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GrantArn"))
  {
    m_grantArn = jsonValue.GetString("GrantArn");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = GrantStatusMapper::GetGrantStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
