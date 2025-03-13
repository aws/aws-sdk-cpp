/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/GetJobDocumentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetJobDocumentRequest::SerializePayload() const
{
  return {};
}

void GetJobDocumentRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_beforeSubstitutionHasBeenSet)
    {
      ss << m_beforeSubstitution;
      uri.AddQueryStringParameter("beforeSubstitution", ss.str());
      ss.str("");
    }

}



