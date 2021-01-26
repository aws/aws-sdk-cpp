/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mobile/model/UpdateProjectRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Mobile::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws::Http;
using namespace Aws;

UpdateProjectRequest::UpdateProjectRequest() : 
    m_projectIdHasBeenSet(false)
{
}


void UpdateProjectRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_projectIdHasBeenSet)
    {
      ss << m_projectId;
      uri.AddQueryStringParameter("projectId", ss.str());
      ss.str("");
    }

}

