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
#include <aws/codecommit/CodeCommit_EXPORTS.h>
#include <aws/codecommit/CodeCommitRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codecommit/model/PullRequestEventType.h>
#include <utility>

namespace Aws
{
namespace CodeCommit
{
namespace Model
{

  /**
   */
  class AWS_CODECOMMIT_API DescribePullRequestEventsRequest : public CodeCommitRequest
  {
  public:
    DescribePullRequestEventsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePullRequestEvents"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline const Aws::String& GetPullRequestId() const{ return m_pullRequestId; }

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline bool PullRequestIdHasBeenSet() const { return m_pullRequestIdHasBeenSet; }

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline void SetPullRequestId(const Aws::String& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = value; }

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline void SetPullRequestId(Aws::String&& value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId = std::move(value); }

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline void SetPullRequestId(const char* value) { m_pullRequestIdHasBeenSet = true; m_pullRequestId.assign(value); }

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline DescribePullRequestEventsRequest& WithPullRequestId(const Aws::String& value) { SetPullRequestId(value); return *this;}

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline DescribePullRequestEventsRequest& WithPullRequestId(Aws::String&& value) { SetPullRequestId(std::move(value)); return *this;}

    /**
     * <p>The system-generated ID of the pull request. To get this ID, use
     * <a>ListPullRequests</a>.</p>
     */
    inline DescribePullRequestEventsRequest& WithPullRequestId(const char* value) { SetPullRequestId(value); return *this;}


    /**
     * <p>Optional. The pull request event type about which you want to return
     * information.</p>
     */
    inline const PullRequestEventType& GetPullRequestEventType() const{ return m_pullRequestEventType; }

    /**
     * <p>Optional. The pull request event type about which you want to return
     * information.</p>
     */
    inline bool PullRequestEventTypeHasBeenSet() const { return m_pullRequestEventTypeHasBeenSet; }

    /**
     * <p>Optional. The pull request event type about which you want to return
     * information.</p>
     */
    inline void SetPullRequestEventType(const PullRequestEventType& value) { m_pullRequestEventTypeHasBeenSet = true; m_pullRequestEventType = value; }

    /**
     * <p>Optional. The pull request event type about which you want to return
     * information.</p>
     */
    inline void SetPullRequestEventType(PullRequestEventType&& value) { m_pullRequestEventTypeHasBeenSet = true; m_pullRequestEventType = std::move(value); }

    /**
     * <p>Optional. The pull request event type about which you want to return
     * information.</p>
     */
    inline DescribePullRequestEventsRequest& WithPullRequestEventType(const PullRequestEventType& value) { SetPullRequestEventType(value); return *this;}

    /**
     * <p>Optional. The pull request event type about which you want to return
     * information.</p>
     */
    inline DescribePullRequestEventsRequest& WithPullRequestEventType(PullRequestEventType&& value) { SetPullRequestEventType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user whose actions resulted in the
     * event. Examples include updating the pull request with additional commits or
     * changing the status of a pull request.</p>
     */
    inline const Aws::String& GetActorArn() const{ return m_actorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user whose actions resulted in the
     * event. Examples include updating the pull request with additional commits or
     * changing the status of a pull request.</p>
     */
    inline bool ActorArnHasBeenSet() const { return m_actorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user whose actions resulted in the
     * event. Examples include updating the pull request with additional commits or
     * changing the status of a pull request.</p>
     */
    inline void SetActorArn(const Aws::String& value) { m_actorArnHasBeenSet = true; m_actorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user whose actions resulted in the
     * event. Examples include updating the pull request with additional commits or
     * changing the status of a pull request.</p>
     */
    inline void SetActorArn(Aws::String&& value) { m_actorArnHasBeenSet = true; m_actorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user whose actions resulted in the
     * event. Examples include updating the pull request with additional commits or
     * changing the status of a pull request.</p>
     */
    inline void SetActorArn(const char* value) { m_actorArnHasBeenSet = true; m_actorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user whose actions resulted in the
     * event. Examples include updating the pull request with additional commits or
     * changing the status of a pull request.</p>
     */
    inline DescribePullRequestEventsRequest& WithActorArn(const Aws::String& value) { SetActorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user whose actions resulted in the
     * event. Examples include updating the pull request with additional commits or
     * changing the status of a pull request.</p>
     */
    inline DescribePullRequestEventsRequest& WithActorArn(Aws::String&& value) { SetActorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user whose actions resulted in the
     * event. Examples include updating the pull request with additional commits or
     * changing the status of a pull request.</p>
     */
    inline DescribePullRequestEventsRequest& WithActorArn(const char* value) { SetActorArn(value); return *this;}


    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline DescribePullRequestEventsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline DescribePullRequestEventsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline DescribePullRequestEventsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A non-negative integer used to limit the number of returned results. The
     * default is 100 events, which is also the maximum number of events that can be
     * returned in a result.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>A non-negative integer used to limit the number of returned results. The
     * default is 100 events, which is also the maximum number of events that can be
     * returned in a result.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>A non-negative integer used to limit the number of returned results. The
     * default is 100 events, which is also the maximum number of events that can be
     * returned in a result.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>A non-negative integer used to limit the number of returned results. The
     * default is 100 events, which is also the maximum number of events that can be
     * returned in a result.</p>
     */
    inline DescribePullRequestEventsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_pullRequestId;
    bool m_pullRequestIdHasBeenSet;

    PullRequestEventType m_pullRequestEventType;
    bool m_pullRequestEventTypeHasBeenSet;

    Aws::String m_actorArn;
    bool m_actorArnHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace CodeCommit
} // namespace Aws
