/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/DeleteAllowListRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteAllowListRequest::DeleteAllowListRequest() : 
    m_idHasBeenSet(false),
    m_ignoreJobChecksHasBeenSet(false)
{
}

Aws::String DeleteAllowListRequest::SerializePayload() const
{
  return {};
}

void DeleteAllowListRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_ignoreJobChecksHasBeenSet)
    {
      ss << m_ignoreJobChecks;
      uri.AddQueryStringParameter("ignoreJobChecks", ss.str());
      ss.str("");
    }

}



