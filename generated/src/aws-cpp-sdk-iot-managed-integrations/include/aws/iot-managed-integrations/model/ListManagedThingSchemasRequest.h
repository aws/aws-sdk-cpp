/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class ListManagedThingSchemasRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ListManagedThingSchemasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListManagedThingSchemas"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;

    AWS_IOTMANAGEDINTEGRATIONS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The managed thing id.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline ListManagedThingSchemasRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline ListManagedThingSchemasRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline ListManagedThingSchemasRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on an endpoint id.</p>
     */
    inline const Aws::String& GetEndpointIdFilter() const{ return m_endpointIdFilter; }
    inline bool EndpointIdFilterHasBeenSet() const { return m_endpointIdFilterHasBeenSet; }
    inline void SetEndpointIdFilter(const Aws::String& value) { m_endpointIdFilterHasBeenSet = true; m_endpointIdFilter = value; }
    inline void SetEndpointIdFilter(Aws::String&& value) { m_endpointIdFilterHasBeenSet = true; m_endpointIdFilter = std::move(value); }
    inline void SetEndpointIdFilter(const char* value) { m_endpointIdFilterHasBeenSet = true; m_endpointIdFilter.assign(value); }
    inline ListManagedThingSchemasRequest& WithEndpointIdFilter(const Aws::String& value) { SetEndpointIdFilter(value); return *this;}
    inline ListManagedThingSchemasRequest& WithEndpointIdFilter(Aws::String&& value) { SetEndpointIdFilter(std::move(value)); return *this;}
    inline ListManagedThingSchemasRequest& WithEndpointIdFilter(const char* value) { SetEndpointIdFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter on a capability id.</p>
     */
    inline const Aws::String& GetCapabilityIdFilter() const{ return m_capabilityIdFilter; }
    inline bool CapabilityIdFilterHasBeenSet() const { return m_capabilityIdFilterHasBeenSet; }
    inline void SetCapabilityIdFilter(const Aws::String& value) { m_capabilityIdFilterHasBeenSet = true; m_capabilityIdFilter = value; }
    inline void SetCapabilityIdFilter(Aws::String&& value) { m_capabilityIdFilterHasBeenSet = true; m_capabilityIdFilter = std::move(value); }
    inline void SetCapabilityIdFilter(const char* value) { m_capabilityIdFilterHasBeenSet = true; m_capabilityIdFilter.assign(value); }
    inline ListManagedThingSchemasRequest& WithCapabilityIdFilter(const Aws::String& value) { SetCapabilityIdFilter(value); return *this;}
    inline ListManagedThingSchemasRequest& WithCapabilityIdFilter(Aws::String&& value) { SetCapabilityIdFilter(std::move(value)); return *this;}
    inline ListManagedThingSchemasRequest& WithCapabilityIdFilter(const char* value) { SetCapabilityIdFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListManagedThingSchemasRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListManagedThingSchemasRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListManagedThingSchemasRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return at one time.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListManagedThingSchemasRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_endpointIdFilter;
    bool m_endpointIdFilterHasBeenSet = false;

    Aws::String m_capabilityIdFilter;
    bool m_capabilityIdFilterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
