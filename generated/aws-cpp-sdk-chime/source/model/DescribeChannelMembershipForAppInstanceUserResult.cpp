/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/DescribeChannelMembershipForAppInstanceUserResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeChannelMembershipForAppInstanceUserResult::DescribeChannelMembershipForAppInstanceUserResult()
{
}

DescribeChannelMembershipForAppInstanceUserResult::DescribeChannelMembershipForAppInstanceUserResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeChannelMembershipForAppInstanceUserResult& DescribeChannelMembershipForAppInstanceUserResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChannelMembership"))
  {
    m_channelMembership = jsonValue.GetObject("ChannelMembership");

  }



  return *this;
}
