/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/DescribeHubResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeHubResult::DescribeHubResult() : 
    m_autoEnableControls(false)
{
}

DescribeHubResult::DescribeHubResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_autoEnableControls(false)
{
  *this = result;
}

DescribeHubResult& DescribeHubResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HubArn"))
  {
    m_hubArn = jsonValue.GetString("HubArn");

  }

  if(jsonValue.ValueExists("SubscribedAt"))
  {
    m_subscribedAt = jsonValue.GetString("SubscribedAt");

  }

  if(jsonValue.ValueExists("AutoEnableControls"))
  {
    m_autoEnableControls = jsonValue.GetBool("AutoEnableControls");

  }



  return *this;
}
