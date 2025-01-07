﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DeleteDataSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteDataSourceRequest::DeleteDataSourceRequest() : 
    m_domainIdentifierHasBeenSet(false),
    m_identifierHasBeenSet(false),
    m_retainPermissionsOnRevokeFailure(false),
    m_retainPermissionsOnRevokeFailureHasBeenSet(false)
{
}

Aws::String DeleteDataSourceRequest::SerializePayload() const
{
  return {};
}

void DeleteDataSourceRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_retainPermissionsOnRevokeFailureHasBeenSet)
    {
      ss << m_retainPermissionsOnRevokeFailure;
      uri.AddQueryStringParameter("retainPermissionsOnRevokeFailure", ss.str());
      ss.str("");
    }

}



