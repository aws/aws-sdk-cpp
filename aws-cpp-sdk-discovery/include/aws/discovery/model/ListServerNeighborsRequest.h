/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_APPLICATIONDISCOVERYSERVICE_API ListServerNeighborsRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    ListServerNeighborsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServerNeighbors"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Configuration ID of the server for which neighbors are being listed.</p>
     */
    inline const Aws::String& GetConfigurationId() const{ return m_configurationId; }

    /**
     * <p>Configuration ID of the server for which neighbors are being listed.</p>
     */
    inline bool ConfigurationIdHasBeenSet() const { return m_configurationIdHasBeenSet; }

    /**
     * <p>Configuration ID of the server for which neighbors are being listed.</p>
     */
    inline void SetConfigurationId(const Aws::String& value) { m_configurationIdHasBeenSet = true; m_configurationId = value; }

    /**
     * <p>Configuration ID of the server for which neighbors are being listed.</p>
     */
    inline void SetConfigurationId(Aws::String&& value) { m_configurationIdHasBeenSet = true; m_configurationId = std::move(value); }

    /**
     * <p>Configuration ID of the server for which neighbors are being listed.</p>
     */
    inline void SetConfigurationId(const char* value) { m_configurationIdHasBeenSet = true; m_configurationId.assign(value); }

    /**
     * <p>Configuration ID of the server for which neighbors are being listed.</p>
     */
    inline ListServerNeighborsRequest& WithConfigurationId(const Aws::String& value) { SetConfigurationId(value); return *this;}

    /**
     * <p>Configuration ID of the server for which neighbors are being listed.</p>
     */
    inline ListServerNeighborsRequest& WithConfigurationId(Aws::String&& value) { SetConfigurationId(std::move(value)); return *this;}

    /**
     * <p>Configuration ID of the server for which neighbors are being listed.</p>
     */
    inline ListServerNeighborsRequest& WithConfigurationId(const char* value) { SetConfigurationId(value); return *this;}


    /**
     * <p>Flag to indicate if port and protocol information is needed as part of the
     * response.</p>
     */
    inline bool GetPortInformationNeeded() const{ return m_portInformationNeeded; }

    /**
     * <p>Flag to indicate if port and protocol information is needed as part of the
     * response.</p>
     */
    inline bool PortInformationNeededHasBeenSet() const { return m_portInformationNeededHasBeenSet; }

    /**
     * <p>Flag to indicate if port and protocol information is needed as part of the
     * response.</p>
     */
    inline void SetPortInformationNeeded(bool value) { m_portInformationNeededHasBeenSet = true; m_portInformationNeeded = value; }

    /**
     * <p>Flag to indicate if port and protocol information is needed as part of the
     * response.</p>
     */
    inline ListServerNeighborsRequest& WithPortInformationNeeded(bool value) { SetPortInformationNeeded(value); return *this;}


    /**
     * <p>List of configuration IDs to test for one-hop-away.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNeighborConfigurationIds() const{ return m_neighborConfigurationIds; }

    /**
     * <p>List of configuration IDs to test for one-hop-away.</p>
     */
    inline bool NeighborConfigurationIdsHasBeenSet() const { return m_neighborConfigurationIdsHasBeenSet; }

    /**
     * <p>List of configuration IDs to test for one-hop-away.</p>
     */
    inline void SetNeighborConfigurationIds(const Aws::Vector<Aws::String>& value) { m_neighborConfigurationIdsHasBeenSet = true; m_neighborConfigurationIds = value; }

    /**
     * <p>List of configuration IDs to test for one-hop-away.</p>
     */
    inline void SetNeighborConfigurationIds(Aws::Vector<Aws::String>&& value) { m_neighborConfigurationIdsHasBeenSet = true; m_neighborConfigurationIds = std::move(value); }

    /**
     * <p>List of configuration IDs to test for one-hop-away.</p>
     */
    inline ListServerNeighborsRequest& WithNeighborConfigurationIds(const Aws::Vector<Aws::String>& value) { SetNeighborConfigurationIds(value); return *this;}

    /**
     * <p>List of configuration IDs to test for one-hop-away.</p>
     */
    inline ListServerNeighborsRequest& WithNeighborConfigurationIds(Aws::Vector<Aws::String>&& value) { SetNeighborConfigurationIds(std::move(value)); return *this;}

    /**
     * <p>List of configuration IDs to test for one-hop-away.</p>
     */
    inline ListServerNeighborsRequest& AddNeighborConfigurationIds(const Aws::String& value) { m_neighborConfigurationIdsHasBeenSet = true; m_neighborConfigurationIds.push_back(value); return *this; }

    /**
     * <p>List of configuration IDs to test for one-hop-away.</p>
     */
    inline ListServerNeighborsRequest& AddNeighborConfigurationIds(Aws::String&& value) { m_neighborConfigurationIdsHasBeenSet = true; m_neighborConfigurationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>List of configuration IDs to test for one-hop-away.</p>
     */
    inline ListServerNeighborsRequest& AddNeighborConfigurationIds(const char* value) { m_neighborConfigurationIdsHasBeenSet = true; m_neighborConfigurationIds.push_back(value); return *this; }


    /**
     * <p>Maximum number of results to return in a single page of output.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of results to return in a single page of output.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of results to return in a single page of output.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of results to return in a single page of output.</p>
     */
    inline ListServerNeighborsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Token to retrieve the next set of results. For example, if you previously
     * specified 100 IDs for
     * <code>ListServerNeighborsRequest$neighborConfigurationIds</code> but set
     * <code>ListServerNeighborsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with a token. Use that token in this query to get the next set
     * of 10.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token to retrieve the next set of results. For example, if you previously
     * specified 100 IDs for
     * <code>ListServerNeighborsRequest$neighborConfigurationIds</code> but set
     * <code>ListServerNeighborsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with a token. Use that token in this query to get the next set
     * of 10.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Token to retrieve the next set of results. For example, if you previously
     * specified 100 IDs for
     * <code>ListServerNeighborsRequest$neighborConfigurationIds</code> but set
     * <code>ListServerNeighborsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with a token. Use that token in this query to get the next set
     * of 10.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token to retrieve the next set of results. For example, if you previously
     * specified 100 IDs for
     * <code>ListServerNeighborsRequest$neighborConfigurationIds</code> but set
     * <code>ListServerNeighborsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with a token. Use that token in this query to get the next set
     * of 10.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Token to retrieve the next set of results. For example, if you previously
     * specified 100 IDs for
     * <code>ListServerNeighborsRequest$neighborConfigurationIds</code> but set
     * <code>ListServerNeighborsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with a token. Use that token in this query to get the next set
     * of 10.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Token to retrieve the next set of results. For example, if you previously
     * specified 100 IDs for
     * <code>ListServerNeighborsRequest$neighborConfigurationIds</code> but set
     * <code>ListServerNeighborsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with a token. Use that token in this query to get the next set
     * of 10.</p>
     */
    inline ListServerNeighborsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token to retrieve the next set of results. For example, if you previously
     * specified 100 IDs for
     * <code>ListServerNeighborsRequest$neighborConfigurationIds</code> but set
     * <code>ListServerNeighborsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with a token. Use that token in this query to get the next set
     * of 10.</p>
     */
    inline ListServerNeighborsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token to retrieve the next set of results. For example, if you previously
     * specified 100 IDs for
     * <code>ListServerNeighborsRequest$neighborConfigurationIds</code> but set
     * <code>ListServerNeighborsRequest$maxResults</code> to 10, you received a set of
     * 10 results along with a token. Use that token in this query to get the next set
     * of 10.</p>
     */
    inline ListServerNeighborsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_configurationId;
    bool m_configurationIdHasBeenSet;

    bool m_portInformationNeeded;
    bool m_portInformationNeededHasBeenSet;

    Aws::Vector<Aws::String> m_neighborConfigurationIds;
    bool m_neighborConfigurationIdsHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
