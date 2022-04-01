/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/DisableOrganizationAdminAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DisableOrganizationAdminAccountRequest::DisableOrganizationAdminAccountRequest() : 
    m_adminAccountIdHasBeenSet(false)
{
}

Aws::String DisableOrganizationAdminAccountRequest::SerializePayload() const
{
  return {};
}

void DisableOrganizationAdminAccountRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_adminAccountIdHasBeenSet)
    {
      ss << m_adminAccountId;
      uri.AddQueryStringParameter("adminAccountId", ss.str());
      ss.str("");
    }

}



