/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DeleteAccountAuditConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteAccountAuditConfigurationRequest::DeleteAccountAuditConfigurationRequest() : 
    m_deleteScheduledAudits(false),
    m_deleteScheduledAuditsHasBeenSet(false)
{
}

Aws::String DeleteAccountAuditConfigurationRequest::SerializePayload() const
{
  return {};
}

void DeleteAccountAuditConfigurationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_deleteScheduledAuditsHasBeenSet)
    {
      ss << m_deleteScheduledAudits;
      uri.AddQueryStringParameter("deleteScheduledAudits", ss.str());
      ss.str("");
    }

}



