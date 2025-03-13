/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/DescribeAccessPolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAccessPolicyResult::DescribeAccessPolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAccessPolicyResult& DescribeAccessPolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("accessPolicyId"))
  {
    m_accessPolicyId = jsonValue.GetString("accessPolicyId");
    m_accessPolicyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accessPolicyArn"))
  {
    m_accessPolicyArn = jsonValue.GetString("accessPolicyArn");
    m_accessPolicyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accessPolicyIdentity"))
  {
    m_accessPolicyIdentity = jsonValue.GetObject("accessPolicyIdentity");
    m_accessPolicyIdentityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accessPolicyResource"))
  {
    m_accessPolicyResource = jsonValue.GetObject("accessPolicyResource");
    m_accessPolicyResourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accessPolicyPermission"))
  {
    m_accessPolicyPermission = PermissionMapper::GetPermissionForName(jsonValue.GetString("accessPolicyPermission"));
    m_accessPolicyPermissionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accessPolicyCreationDate"))
  {
    m_accessPolicyCreationDate = jsonValue.GetDouble("accessPolicyCreationDate");
    m_accessPolicyCreationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accessPolicyLastUpdateDate"))
  {
    m_accessPolicyLastUpdateDate = jsonValue.GetDouble("accessPolicyLastUpdateDate");
    m_accessPolicyLastUpdateDateHasBeenSet = true;
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
