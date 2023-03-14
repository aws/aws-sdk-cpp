/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/DescribeOrganizationConfigurationResult.h>
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

DescribeOrganizationConfigurationResult::DescribeOrganizationConfigurationResult() : 
    m_maxAccountLimitReached(false)
{
}

DescribeOrganizationConfigurationResult::DescribeOrganizationConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_maxAccountLimitReached(false)
{
  *this = result;
}

DescribeOrganizationConfigurationResult& DescribeOrganizationConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("autoEnable"))
  {
    m_autoEnable = jsonValue.GetObject("autoEnable");

  }

  if(jsonValue.ValueExists("maxAccountLimitReached"))
  {
    m_maxAccountLimitReached = jsonValue.GetBool("maxAccountLimitReached");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
