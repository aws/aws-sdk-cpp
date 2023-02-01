/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/GetResourceEventConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetResourceEventConfigurationRequest::GetResourceEventConfigurationRequest() : 
    m_identifierHasBeenSet(false),
    m_identifierType(IdentifierType::NOT_SET),
    m_identifierTypeHasBeenSet(false),
    m_partnerType(EventNotificationPartnerType::NOT_SET),
    m_partnerTypeHasBeenSet(false)
{
}

Aws::String GetResourceEventConfigurationRequest::SerializePayload() const
{
  return {};
}

void GetResourceEventConfigurationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_identifierTypeHasBeenSet)
    {
      ss << IdentifierTypeMapper::GetNameForIdentifierType(m_identifierType);
      uri.AddQueryStringParameter("identifierType", ss.str());
      ss.str("");
    }

    if(m_partnerTypeHasBeenSet)
    {
      ss << EventNotificationPartnerTypeMapper::GetNameForEventNotificationPartnerType(m_partnerType);
      uri.AddQueryStringParameter("partnerType", ss.str());
      ss.str("");
    }

}



