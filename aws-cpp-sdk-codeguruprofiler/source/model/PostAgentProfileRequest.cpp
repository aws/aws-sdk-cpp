/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
