/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DisassociateApprovedOriginRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DisassociateApprovedOriginRequest::DisassociateApprovedOriginRequest() : 
    m_instanceIdHasBeenSet(false),
    m_originHasBeenSet(false)
{
}

Aws::String DisassociateApprovedOriginRequest::SerializePayload() const
{
  return {};
}

void DisassociateApprovedOriginRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_originHasBeenSet)
    {
      ss << m_origin;
      uri.AddQueryStringParameter("origin", ss.str());
      ss.str("");
    }

}



