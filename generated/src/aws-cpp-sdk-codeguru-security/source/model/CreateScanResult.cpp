/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-security/model/CreateScanResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeGuruSecurity::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateScanResult::CreateScanResult() : 
    m_scanState(ScanState::NOT_SET)
{
}

CreateScanResult::CreateScanResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_scanState(ScanState::NOT_SET)
{
  *this = result;
}

CreateScanResult& CreateScanResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetObject("resourceId");

  }

  if(jsonValue.ValueExists("runId"))
  {
    m_runId = jsonValue.GetString("runId");

  }

  if(jsonValue.ValueExists("scanName"))
  {
    m_scanName = jsonValue.GetString("scanName");

  }

  if(jsonValue.ValueExists("scanNameArn"))
  {
    m_scanNameArn = jsonValue.GetString("scanNameArn");

  }

  if(jsonValue.ValueExists("scanState"))
  {
    m_scanState = ScanStateMapper::GetScanStateForName(jsonValue.GetString("scanState"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
