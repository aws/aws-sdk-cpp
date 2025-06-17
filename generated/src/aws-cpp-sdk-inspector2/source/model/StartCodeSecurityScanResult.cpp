/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/StartCodeSecurityScanResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartCodeSecurityScanResult::StartCodeSecurityScanResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartCodeSecurityScanResult& StartCodeSecurityScanResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("scanId"))
  {
    m_scanId = jsonValue.GetString("scanId");
    m_scanIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = CodeScanStatusMapper::GetCodeScanStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
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
