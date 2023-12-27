/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DisassociateTrafficDistributionGroupUserRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DisassociateTrafficDistributionGroupUserRequest::DisassociateTrafficDistributionGroupUserRequest() : 
    m_trafficDistributionGroupIdHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

Aws::String DisassociateTrafficDistributionGroupUserRequest::SerializePayload() const
{
  return {};
}

void DisassociateTrafficDistributionGroupUserRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_userIdHasBeenSet)
    {
      ss << m_userId;
      uri.AddQueryStringParameter("UserId", ss.str());
      ss.str("");
    }

    if(m_instanceIdHasBeenSet)
    {
      ss << m_instanceId;
      uri.AddQueryStringParameter("InstanceId", ss.str());
      ss.str("");
    }

}



