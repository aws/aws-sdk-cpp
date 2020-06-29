/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeSubscribedWorkteamResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeSubscribedWorkteamResult::DescribeSubscribedWorkteamResult()
{
}

DescribeSubscribedWorkteamResult::DescribeSubscribedWorkteamResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSubscribedWorkteamResult& DescribeSubscribedWorkteamResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SubscribedWorkteam"))
  {
    m_subscribedWorkteam = jsonValue.GetObject("SubscribedWorkteam");

  }



  return *this;
}
