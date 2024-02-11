/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/GetAdminScopeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::FMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAdminScopeResult::GetAdminScopeResult() : 
    m_status(OrganizationStatus::NOT_SET)
{
}

GetAdminScopeResult::GetAdminScopeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(OrganizationStatus::NOT_SET)
{
  *this = result;
}

GetAdminScopeResult& GetAdminScopeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AdminScope"))
  {
    m_adminScope = jsonValue.GetObject("AdminScope");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = OrganizationStatusMapper::GetOrganizationStatusForName(jsonValue.GetString("Status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
