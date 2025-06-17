/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/BatchDisassociateCodeSecurityScanConfigurationResult.h>
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

BatchDisassociateCodeSecurityScanConfigurationResult::BatchDisassociateCodeSecurityScanConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDisassociateCodeSecurityScanConfigurationResult& BatchDisassociateCodeSecurityScanConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("failedAssociations"))
  {
    Aws::Utils::Array<JsonView> failedAssociationsJsonList = jsonValue.GetArray("failedAssociations");
    for(unsigned failedAssociationsIndex = 0; failedAssociationsIndex < failedAssociationsJsonList.GetLength(); ++failedAssociationsIndex)
    {
      m_failedAssociations.push_back(failedAssociationsJsonList[failedAssociationsIndex].AsObject());
    }
    m_failedAssociationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("successfulAssociations"))
  {
    Aws::Utils::Array<JsonView> successfulAssociationsJsonList = jsonValue.GetArray("successfulAssociations");
    for(unsigned successfulAssociationsIndex = 0; successfulAssociationsIndex < successfulAssociationsJsonList.GetLength(); ++successfulAssociationsIndex)
    {
      m_successfulAssociations.push_back(successfulAssociationsJsonList[successfulAssociationsIndex].AsObject());
    }
    m_successfulAssociationsHasBeenSet = true;
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
