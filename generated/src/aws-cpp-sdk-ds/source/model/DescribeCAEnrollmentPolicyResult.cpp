/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/DescribeCAEnrollmentPolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCAEnrollmentPolicyResult::DescribeCAEnrollmentPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeCAEnrollmentPolicyResult& DescribeCAEnrollmentPolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");
    m_directoryIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PcaConnectorArn"))
  {
    m_pcaConnectorArn = jsonValue.GetString("PcaConnectorArn");
    m_pcaConnectorArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CaEnrollmentPolicyStatus"))
  {
    m_caEnrollmentPolicyStatus = CaEnrollmentPolicyStatusMapper::GetCaEnrollmentPolicyStatusForName(jsonValue.GetString("CaEnrollmentPolicyStatus"));
    m_caEnrollmentPolicyStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("LastUpdatedDateTime");
    m_lastUpdatedDateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CaEnrollmentPolicyStatusReason"))
  {
    m_caEnrollmentPolicyStatusReason = jsonValue.GetString("CaEnrollmentPolicyStatusReason");
    m_caEnrollmentPolicyStatusReasonHasBeenSet = true;
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
