/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/DescribeChannelMembershipForAppInstanceUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeChannelMembershipForAppInstanceUserRequest::DescribeChannelMembershipForAppInstanceUserRequest() : 
    m_channelArnHasBeenSet(false),
    m_appInstanceUserArnHasBeenSet(false)
{
}

Aws::String DescribeChannelMembershipForAppInstanceUserRequest::SerializePayload() const
{
  return {};
}

void DescribeChannelMembershipForAppInstanceUserRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_appInstanceUserArnHasBeenSet)
    {
      ss << m_appInstanceUserArn;
      uri.AddQueryStringParameter("app-instance-user-arn", ss.str());
      ss.str("");
    }

}



