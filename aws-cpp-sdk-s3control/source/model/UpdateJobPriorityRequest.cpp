﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
