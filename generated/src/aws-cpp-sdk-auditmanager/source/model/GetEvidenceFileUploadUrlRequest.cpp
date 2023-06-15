/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/GetEvidenceFileUploadUrlRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetEvidenceFileUploadUrlRequest::GetEvidenceFileUploadUrlRequest() : 
    m_fileNameHasBeenSet(false)
{
}

Aws::String GetEvidenceFileUploadUrlRequest::SerializePayload() const
{
  return {};
}

void GetEvidenceFileUploadUrlRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_fileNameHasBeenSet)
    {
      ss << m_fileName;
      uri.AddQueryStringParameter("fileName", ss.str());
      ss.str("");
    }

}



