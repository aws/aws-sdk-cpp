/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GetUserProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetUserProfileRequest::GetUserProfileRequest() : 
    m_domainIdentifierHasBeenSet(false),
    m_type(UserProfileType::NOT_SET),
    m_typeHasBeenSet(false),
    m_userIdentifierHasBeenSet(false)
{
}

Aws::String GetUserProfileRequest::SerializePayload() const
{
  return {};
}

void GetUserProfileRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_typeHasBeenSet)
    {
      ss << UserProfileTypeMapper::GetNameForUserProfileType(m_type);
      uri.AddQueryStringParameter("type", ss.str());
      ss.str("");
    }

}



