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
#include <aws/emr-containers/model/JobRunState.h>
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
  class ListJobRunsRequest : public EMRContainersRequest
  {
  public:
    AWS_EMRCONTAINERS_API ListJobRunsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListJobRuns"; }

    AWS_EMRCONTAINERS_API Aws::String SerializePayload() const override;

    AWS_EMRCONTAINERS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the virtual cluster for which to list the job run. </p>
     */
    inline const Aws::String& GetVirtualClusterId() const{ return m_virtualClusterId; }

    /**
     * <p>The ID of the virtual cluster for which to list the job run. </p>
     */
    inline bool VirtualClusterIdHasBeenSet() const { return m_virtualClusterIdHasBeenSet; }

    /**
     * <p>The ID of the virtual cluster for which to list the job run. </p>
     */
    inline void SetVirtualClusterId(const Aws::String& value) { m_virtualClusterIdHasBeenSet = true; m_virtualClusterId = value; }

    /**
     * <p>The ID of the virtual cluster for which to list the job run. </p>
     */
    inline void SetVirtualClusterId(Aws::String&& value) { m_virtualClusterIdHasBeenSet = true; m_virtualClusterId = std::move(value); }

    /**
     * <p>The ID of the virtual cluster for which to list the job run. </p>
     */
    inline void SetVirtualClusterId(const char* value) { m_virtualClusterIdHasBeenSet = true; m_virtualClusterId.assign(value); }

    /**
     * <p>The ID of the virtual cluster for which to list the job run. </p>
     */
    inline ListJobRunsRequest& WithVirtualClusterId(const Aws::String& value) { SetVirtualClusterId(value); return *this;}

    /**
     * <p>The ID of the virtual cluster for which to list the job run. </p>
     */
    inline ListJobRunsRequest& WithVirtualClusterId(Aws::String&& value) { SetVirtualClusterId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual cluster for which to list the job run. </p>
     */
    inline ListJobRunsRequest& WithVirtualClusterId(const char* value) { SetVirtualClusterId(value); return *this;}


    /**
     * <p>The date and time before which the job runs were submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }

    /**
     * <p>The date and time before which the job runs were submitted.</p>
     */
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }

    /**
     * <p>The date and time before which the job runs were submitted.</p>
     */
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }

    /**
     * <p>The date and time before which the job runs were submitted.</p>
     */
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }

    /**
     * <p>The date and time before which the job runs were submitted.</p>
     */
    inline ListJobRunsRequest& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}

    /**
     * <p>The date and time before which the job runs were submitted.</p>
     */
    inline ListJobRunsRequest& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}


    /**
     * <p>The date and time after which the job runs were submitted.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }

    /**
     * <p>The date and time after which the job runs were submitted.</p>
     */
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }

    /**
     * <p>The date and time after which the job runs were submitted.</p>
     */
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }

    /**
     * <p>The date and time after which the job runs were submitted.</p>
     */
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }

    /**
     * <p>The date and time after which the job runs were submitted.</p>
     */
    inline ListJobRunsRequest& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}

    /**
     * <p>The date and time after which the job runs were submitted.</p>
     */
    inline ListJobRunsRequest& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}


    /**
     * <p>The name of the job run.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the job run.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the job run.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the job run.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the job run.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the job run.</p>
     */
    inline ListJobRunsRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the job run.</p>
     */
    inline ListJobRunsRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the job run.</p>
     */
    inline ListJobRunsRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The states of the job run.</p>
     */
    inline const Aws::Vector<JobRunState>& GetStates() const{ return m_states; }

    /**
     * <p>The states of the job run.</p>
     */
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }

    /**
     * <p>The states of the job run.</p>
     */
    inline void SetStates(const Aws::Vector<JobRunState>& value) { m_statesHasBeenSet = true; m_states = value; }

    /**
     * <p>The states of the job run.</p>
     */
    inline void SetStates(Aws::Vector<JobRunState>&& value) { m_statesHasBeenSet = true; m_states = std::move(value); }

    /**
     * <p>The states of the job run.</p>
     */
    inline ListJobRunsRequest& WithStates(const Aws::Vector<JobRunState>& value) { SetStates(value); return *this;}

    /**
     * <p>The states of the job run.</p>
     */
    inline ListJobRunsRequest& WithStates(Aws::Vector<JobRunState>&& value) { SetStates(std::move(value)); return *this;}

    /**
     * <p>The states of the job run.</p>
     */
    inline ListJobRunsRequest& AddStates(const JobRunState& value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }

    /**
     * <p>The states of the job run.</p>
     */
    inline ListJobRunsRequest& AddStates(JobRunState&& value) { m_statesHasBeenSet = true; m_states.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of job runs that can be listed.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of job runs that can be listed.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of job runs that can be listed.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of job runs that can be listed.</p>
     */
    inline ListJobRunsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of job runs to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of job runs to return.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of job runs to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of job runs to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of job runs to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of job runs to return.</p>
     */
    inline ListJobRunsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of job runs to return.</p>
     */
    inline ListJobRunsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of job runs to return.</p>
     */
    inline ListJobRunsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_virtualClusterId;
    bool m_virtualClusterIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<JobRunState> m_states;
    bool m_statesHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
