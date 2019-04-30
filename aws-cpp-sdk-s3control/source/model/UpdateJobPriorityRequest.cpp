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

#include <aws/s3control/model/UpdateJobPriorityRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Control::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdateJobPriorityRequest::UpdateJobPriorityRequest() : 
    m_accountIdHasBeenSet(false),
    m_jobIdHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false)
{
}

Aws::String UpdateJobPriorityRequest::SerializePayload() const
{
  return {};
}

void UpdateJobPriorityRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_priorityHasBeenSet)
    {
      ss << m_priority;
      uri.AddQueryStringParameter("priority", ss.str());
      ss.str("");
    }

}

Aws::Http::HeaderValueCollection UpdateJobPriorityRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_accountIdHasBeenSet)
  {
    ss << m_accountId;
    headers.emplace("x-amz-account-id",  ss.str());
    ss.str("");
  }

  return headers;
}
