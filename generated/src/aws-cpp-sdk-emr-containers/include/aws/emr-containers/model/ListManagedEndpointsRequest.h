/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/EMRContainersRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/emr-containers/model/EndpointState.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace EMRContainers
{
namespace Model
{

  /**
   */
  class ListManagedEndpointsRequest : public EMRContainersRequest
  {
  public:
    AWS_EMRCONTAINERS_API ListManagedEndpointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListManagedEndpoints"; }

    AWS_EMRCONTAINERS_API Aws::String SerializePayload() const override;

    AWS_EMRCONTAINERS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the virtual cluster.</p>
     */
    inline const Aws::String& GetVirtualClusterId() const{ return m_virtualClusterId; }

    /**
     * <p>The ID of the virtual cluster.</p>
     */
    inline bool VirtualClusterIdHasBeenSet() const { return m_virtualClusterIdHasBeenSet; }

    /**
     * <p>The ID of the virtual cluster.</p>
     */
    inline void SetVirtualClusterId(const Aws::String& value) { m_virtualClusterIdHasBeenSet = true; m_virtualClusterId = value; }

    /**
     * <p>The ID of the virtual cluster.</p>
     */
    inline void SetVirtualClusterId(Aws::String&& value) { m_virtualClusterIdHasBeenSet = true; m_virtualClusterId = std::move(value); }

    /**
     * <p>The ID of the virtual cluster.</p>
     */
    inline void SetVirtualClusterId(const char* value) { m_virtualClusterIdHasBeenSet = true; m_virtualClusterId.assign(value); }

    /**
     * <p>The ID of the virtual cluster.</p>
     */
    inline ListManagedEndpointsRequest& WithVirtualClusterId(const Aws::String& value) { SetVirtualClusterId(value); return *this;}

    /**
     * <p>The ID of the virtual cluster.</p>
     */
    inline ListManagedEndpointsRequest& WithVirtualClusterId(Aws::String&& value) { SetVirtualClusterId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual cluster.</p>
     */
    inline ListManagedEndpointsRequest& WithVirtualClusterId(const char* value) { SetVirtualClusterId(value); return *this;}


    /**
     * <p>The date and time before which the endpoints are created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }

    /**
     * <p>The date and time before which the endpoints are created.</p>
     */
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }

    /**
     * <p>The date and time before which the endpoints are created.</p>
     */
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }

    /**
     * <p>The date and time before which the endpoints are created.</p>
     */
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }

    /**
     * <p>The date and time before which the endpoints are created.</p>
     */
    inline ListManagedEndpointsRequest& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}

    /**
     * <p>The date and time before which the endpoints are created.</p>
     */
    inline ListManagedEndpointsRequest& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}


    /**
     * <p> The date and time after which the endpoints are created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }

    /**
     * <p> The date and time after which the endpoints are created.</p>
     */
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }

    /**
     * <p> The date and time after which the endpoints are created.</p>
     */
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }

    /**
     * <p> The date and time after which the endpoints are created.</p>
     */
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }

    /**
     * <p> The date and time after which the endpoints are created.</p>
     */
    inline ListManagedEndpointsRequest& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}

    /**
     * <p> The date and time after which the endpoints are created.</p>
     */
    inline ListManagedEndpointsRequest& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}


    /**
     * <p>The types of the managed endpoints.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTypes() const{ return m_types; }

    /**
     * <p>The types of the managed endpoints.</p>
     */
    inline bool TypesHasBeenSet() const { return m_typesHasBeenSet; }

    /**
     * <p>The types of the managed endpoints.</p>
     */
    inline void SetTypes(const Aws::Vector<Aws::String>& value) { m_typesHasBeenSet = true; m_types = value; }

    /**
     * <p>The types of the managed endpoints.</p>
     */
    inline void SetTypes(Aws::Vector<Aws::String>&& value) { m_typesHasBeenSet = true; m_types = std::move(value); }

    /**
     * <p>The types of the managed endpoints.</p>
     */
    inline ListManagedEndpointsRequest& WithTypes(const Aws::Vector<Aws::String>& value) { SetTypes(value); return *this;}

    /**
     * <p>The types of the managed endpoints.</p>
     */
    inline ListManagedEndpointsRequest& WithTypes(Aws::Vector<Aws::String>&& value) { SetTypes(std::move(value)); return *this;}

    /**
     * <p>The types of the managed endpoints.</p>
     */
    inline ListManagedEndpointsRequest& AddTypes(const Aws::String& value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }

    /**
     * <p>The types of the managed endpoints.</p>
     */
    inline ListManagedEndpointsRequest& AddTypes(Aws::String&& value) { m_typesHasBeenSet = true; m_types.push_back(std::move(value)); return *this; }

    /**
     * <p>The types of the managed endpoints.</p>
     */
    inline ListManagedEndpointsRequest& AddTypes(const char* value) { m_typesHasBeenSet = true; m_types.push_back(value); return *this; }


    /**
     * <p>The states of the managed endpoints.</p>
     */
    inline const Aws::Vector<EndpointState>& GetStates() const{ return m_states; }

    /**
     * <p>The states of the managed endpoints.</p>
     */
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }

    /**
     * <p>The states of the managed endpoints.</p>
     */
    inline void SetStates(const Aws::Vector<EndpointState>& value) { m_statesHasBeenSet = true; m_states = value; }

    /**
     * <p>The states of the managed endpoints.</p>
     */
    inline void SetStates(Aws::Vector<EndpointState>&& value) { m_statesHasBeenSet = true; m_states = std::move(value); }

    /**
     * <p>The states of the managed endpoints.</p>
     */
    inline ListManagedEndpointsRequest& WithStates(const Aws::Vector<EndpointState>& value) { SetStates(value); return *this;}

    /**
     * <p>The states of the managed endpoints.</p>
     */
    inline ListManagedEndpointsRequest& WithStates(Aws::Vector<EndpointState>&& value) { SetStates(std::move(value)); return *this;}

    /**
     * <p>The states of the managed endpoints.</p>
     */
    inline ListManagedEndpointsRequest& AddStates(const EndpointState& value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }

    /**
     * <p>The states of the managed endpoints.</p>
     */
    inline ListManagedEndpointsRequest& AddStates(EndpointState&& value) { m_statesHasBeenSet = true; m_states.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of managed endpoints that can be listed.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of managed endpoints that can be listed.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of managed endpoints that can be listed.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of managed endpoints that can be listed.</p>
     */
    inline ListManagedEndpointsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> The token for the next set of managed endpoints to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token for the next set of managed endpoints to return. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The token for the next set of managed endpoints to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The token for the next set of managed endpoints to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The token for the next set of managed endpoints to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The token for the next set of managed endpoints to return. </p>
     */
    inline ListManagedEndpointsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token for the next set of managed endpoints to return. </p>
     */
    inline ListManagedEndpointsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token for the next set of managed endpoints to return. </p>
     */
    inline ListManagedEndpointsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_virtualClusterId;
    bool m_virtualClusterIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;

    Aws::Vector<Aws::String> m_types;
    bool m_typesHasBeenSet = false;

    Aws::Vector<EndpointState> m_states;
    bool m_statesHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
