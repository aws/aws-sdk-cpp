/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/DeleteAssessmentFrameworkShareRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteAssessmentFrameworkShareRequest::DeleteAssessmentFrameworkShareRequest() : 
    m_requestIdHasBeenSet(false),
    m_requestType(ShareRequestType::NOT_SET),
    m_requestTypeHasBeenSet(false)
{
}

Aws::String DeleteAssessmentFrameworkShareRequest::SerializePayload() const
{
  return {};
}

void DeleteAssessmentFrameworkShareRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_requestTypeHasBeenSet)
    {
      ss << ShareRequestTypeMapper::GetNameForShareRequestType(m_requestType);
      uri.AddQueryStringParameter("requestType", ss.str());
      ss.str("");
    }

}



