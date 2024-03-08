/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DeleteProjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteProjectRequest::DeleteProjectRequest() : 
    m_domainIdentifierHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_skipDeletionCheck(false),
    m_skipDeletionCheckHasBeenSet(false)
{
}

Aws::String DeleteProjectRequest::SerializePayload() const
{
  return {};
}

void DeleteProjectRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_skipDeletionCheckHasBeenSet)
    {
      ss << m_skipDeletionCheck;
      uri.AddQueryStringParameter("skipDeletionCheck", ss.str());
      ss.str("");
    }

}



