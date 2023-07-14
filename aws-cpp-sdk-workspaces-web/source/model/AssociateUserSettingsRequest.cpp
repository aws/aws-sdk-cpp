/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/AssociateUserSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkSpacesWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

AssociateUserSettingsRequest::AssociateUserSettingsRequest() : 
    m_portalArnHasBeenSet(false),
    m_userSettingsArnHasBeenSet(false)
{
}

Aws::String AssociateUserSettingsRequest::SerializePayload() const
{
  return {};
}

void AssociateUserSettingsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_userSettingsArnHasBeenSet)
    {
      ss << m_userSettingsArn;
      uri.AddQueryStringParameter("userSettingsArn", ss.str());
      ss.str("");
    }

}



