/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DeletePushNotificationRegistrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DeletePushNotificationRegistrationRequest::SerializePayload() const
{
  return {};
}

void DeletePushNotificationRegistrationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_contactIdHasBeenSet)
    {
      ss << m_contactId;
      uri.AddQueryStringParameter("contactId", ss.str());
      ss.str("");
    }

}



