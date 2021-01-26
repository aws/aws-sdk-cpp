/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/DescribeChannelModeratedByAppInstanceUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeChannelModeratedByAppInstanceUserRequest::DescribeChannelModeratedByAppInstanceUserRequest() : 
    m_channelArnHasBeenSet(false),
    m_appInstanceUserArnHasBeenSet(false)
{
}

Aws::String DescribeChannelModeratedByAppInstanceUserRequest::SerializePayload() const
{
  return {};
}

void DescribeChannelModeratedByAppInstanceUserRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_appInstanceUserArnHasBeenSet)
    {
      ss << m_appInstanceUserArn;
      uri.AddQueryStringParameter("app-instance-user-arn", ss.str());
      ss.str("");
    }

}



