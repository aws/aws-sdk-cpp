/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/ListManagedThingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListManagedThingsRequest::SerializePayload() const
{
  return {};
}

void ListManagedThingsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_ownerFilterHasBeenSet)
    {
      ss << m_ownerFilter;
      uri.AddQueryStringParameter("OwnerFilter", ss.str());
      ss.str("");
    }

    if(m_credentialLockerFilterHasBeenSet)
    {
      ss << m_credentialLockerFilter;
      uri.AddQueryStringParameter("CredentialLockerFilter", ss.str());
      ss.str("");
    }

    if(m_roleFilterHasBeenSet)
    {
      ss << RoleMapper::GetNameForRole(m_roleFilter);
      uri.AddQueryStringParameter("RoleFilter", ss.str());
      ss.str("");
    }

    if(m_parentControllerIdentifierFilterHasBeenSet)
    {
      ss << m_parentControllerIdentifierFilter;
      uri.AddQueryStringParameter("ParentControllerIdentifierFilter", ss.str());
      ss.str("");
    }

    if(m_connectorDestinationIdFilterHasBeenSet)
    {
      ss << m_connectorDestinationIdFilter;
      uri.AddQueryStringParameter("ConnectorDestinationIdFilter", ss.str());
      ss.str("");
    }

    if(m_connectorDeviceIdFilterHasBeenSet)
    {
      ss << m_connectorDeviceIdFilter;
      uri.AddQueryStringParameter("ConnectorDeviceIdFilter", ss.str());
      ss.str("");
    }

    if(m_serialNumberFilterHasBeenSet)
    {
      ss << m_serialNumberFilter;
      uri.AddQueryStringParameter("SerialNumberFilter", ss.str());
      ss.str("");
    }

    if(m_provisioningStatusFilterHasBeenSet)
    {
      ss << ProvisioningStatusMapper::GetNameForProvisioningStatus(m_provisioningStatusFilter);
      uri.AddQueryStringParameter("ProvisioningStatusFilter", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

}



