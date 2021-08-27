/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/PostAgentProfileRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeGuruProfiler::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws::Http;
using namespace Aws;

PostAgentProfileRequest::PostAgentProfileRequest() : 
    m_profileToken(Aws::Utils::UUID::RandomUUID()),
    m_profileTokenHasBeenSet(true),
    m_profilingGroupNameHasBeenSet(false)
{
}


void PostAgentProfileRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_profileTokenHasBeenSet)
    {
      ss << m_profileToken;
      uri.AddQueryStringParameter("profileToken", ss.str());
      ss.str("");
    }

}

