/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/ApplicationDiscoveryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   */
  class ListServerNeighborsRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API ListServerNeighborsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServerNeighbors"; }

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Configuration ID of the server for which neighbors are being listed.</p>
     */
    inline const Aws::String& GetConfigurationId() const{ return m_configurationId; }
    inline bool ConfigurationIdHasBeenSet() const { return m_configurationIdHasBeenSet; }
    inline void SetConfigurationId(const Aws::String& value) { m_configurationIdHasBeenSet = true; m_configurationId = value; }
    inline void SetConfigurationId(Aws::String&& value) { m_configurationIdHasBeenSet = true; m_configurationId = std::move(value); }
    inline void SetConfigurationId(const char* value) { m_configurationIdHasBeenSet = true; m_configurationId.assign(value); }
    inline ListServerNeighborsRequest& WithConfigurationId(const Aws::String& value) { SetConfigurationId(value); return *this;}
    inline ListServerNeighborsRequest& WithConfigurationId(Aws::String&& value) { SetConfigurationId(std::move(value)); return *this;}
    inline ListServerNeighborsRequest& WithConfigurationId(const char* value) { SetConfigurationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Flag to indicate if port and protocol information is needed as part of the
     * response.</p>
     */
    inline bool GetPortInformationNeeded() const{ return m_portInformationNeeded; }
    inline bool PortInformationNeededHasBeenSet() const { return m_portInformationNeededHasBeenSet; }
    inline void SetPortInformationNeeded(bool value) { m_portInformationNeededHasBeenSet = true; m_portInformationNeeded = value; }
    inline ListServerNeighborsRequest& WithPortInformationNeeded(bool value) { SetPortInformationNeeded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of configuration IDs to test for one-hop-away.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNeighborConfigurationIds() const{ return m_neighborConfigurationIds; }
    inline bool NeighborConfigurationIdsHasBeenSet() const { return m_neighborConfigurationIdsHasBeenSet; }
    inline void SetNeighborConfigurationIds(const Aws::Vector<Aws::String>& value) { m_neighborConfigurationIdsHasBeenSet = true; m_neighborConfigurationIds = value; }
    inline void SetNeighborConfigurationIds(Aws::Vector<Aws::String>&& value) { m_neighborConfigurationIdsHasBeenSet = true; m_neighborConfigurationIds = std::move(value); }
    inline ListServerNeighborsRequest& WithNeighborConfigurationIds(const Aws::Vector<Aws::String>& value) { SetNeighborConfigurationIds(value); return *this;}
    inline ListServerNeighborsRequest& WithNeighborConfigurationIds(Aws::Vector<Aws::String>&& value) { SetNeighborConfigurationIds(std::move(value)); return *this;}
    inline ListServerNeighborsRequest& AddNeighborConfigurationIds(const Aws::String& value) { m_neighborConfigurationIdsHasBeenSet = true; m_neighborConfigurationIds.push_back(value); return *this; }
    inline ListServerNeighborsRequest& AddNeighborConfigurationIds(Aws::String&& value) { m_neighborConfigurationIdsHasBeenSet = true; m_neighborConfigurationIds.push_back(std::move(value)); return *this; }
    inline ListServerNeighborsRequest& AddNeighborConfigurationIds(const char* value) { m_neighborConfigurationIdsHasBeenSet = true; m_neighborConfigurationIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Maximum number of results to return in a single page of output.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListServerNeighborsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Token to retrieve the next set of results. For example, if you previously
     * specified 100 IDs for
     * <code>ListServerNeighborsRequest$neighborConfigurationIds</code> but set
     * <code>ListServerNeighborsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with a token. Use that token in this query to get the next set
     * of 10.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListServerNeighborsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListServerNeighborsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListServerNeighborsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_configurationId;
    bool m_configurationIdHasBeenSet = false;

    bool m_portInformationNeeded;
    bool m_portInformationNeededHasBeenSet = false;

    Aws::Vector<Aws::String> m_neighborConfigurationIds;
    bool m_neighborConfigurationIdsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
