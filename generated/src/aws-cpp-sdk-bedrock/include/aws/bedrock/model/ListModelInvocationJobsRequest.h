/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock/model/ModelInvocationJobStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/SortJobsBy.h>
#include <aws/bedrock/model/SortOrder.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Bedrock
{
namespace Model
{

  /**
   */
  class ListModelInvocationJobsRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API ListModelInvocationJobsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListModelInvocationJobs"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;

    AWS_BEDROCK_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Specify a time to filter for batch inference jobs that were submitted after
     * the time you specify.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTimeAfter() const { return m_submitTimeAfter; }
    inline bool SubmitTimeAfterHasBeenSet() const { return m_submitTimeAfterHasBeenSet; }
    template<typename SubmitTimeAfterT = Aws::Utils::DateTime>
    void SetSubmitTimeAfter(SubmitTimeAfterT&& value) { m_submitTimeAfterHasBeenSet = true; m_submitTimeAfter = std::forward<SubmitTimeAfterT>(value); }
    template<typename SubmitTimeAfterT = Aws::Utils::DateTime>
    ListModelInvocationJobsRequest& WithSubmitTimeAfter(SubmitTimeAfterT&& value) { SetSubmitTimeAfter(std::forward<SubmitTimeAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a time to filter for batch inference jobs that were submitted before
     * the time you specify.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTimeBefore() const { return m_submitTimeBefore; }
    inline bool SubmitTimeBeforeHasBeenSet() const { return m_submitTimeBeforeHasBeenSet; }
    template<typename SubmitTimeBeforeT = Aws::Utils::DateTime>
    void SetSubmitTimeBefore(SubmitTimeBeforeT&& value) { m_submitTimeBeforeHasBeenSet = true; m_submitTimeBefore = std::forward<SubmitTimeBeforeT>(value); }
    template<typename SubmitTimeBeforeT = Aws::Utils::DateTime>
    ListModelInvocationJobsRequest& WithSubmitTimeBefore(SubmitTimeBeforeT&& value) { SetSubmitTimeBefore(std::forward<SubmitTimeBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a status to filter for batch inference jobs whose statuses match the
     * string you specify.</p> <p>The following statuses are possible:</p> <ul> <li>
     * <p>Submitted – This job has been submitted to a queue for validation.</p> </li>
     * <li> <p>Validating – This job is being validated for the requirements described
     * in <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/batch-inference-data.html">Format
     * and upload your batch inference data</a>. The criteria include the
     * following:</p> <ul> <li> <p>Your IAM service role has access to the Amazon S3
     * buckets containing your files.</p> </li> <li> <p>Your files are .jsonl files and
     * each individual record is a JSON object in the correct format. Note that
     * validation doesn't check if the <code>modelInput</code> value matches the
     * request body for the model.</p> </li> <li> <p>Your files fulfill the
     * requirements for file size and number of records. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/quotas.html">Quotas
     * for Amazon Bedrock</a>.</p> </li> </ul> </li> <li> <p>Scheduled – This job has
     * been validated and is now in a queue. The job will automatically start when it
     * reaches its turn.</p> </li> <li> <p>Expired – This job timed out because it was
     * scheduled but didn't begin before the set timeout duration. Submit a new job
     * request.</p> </li> <li> <p>InProgress – This job has begun. You can start
     * viewing the results in the output S3 location.</p> </li> <li> <p>Completed –
     * This job has successfully completed. View the output files in the output S3
     * location.</p> </li> <li> <p>PartiallyCompleted – This job has partially
     * completed. Not all of your records could be processed in time. View the output
     * files in the output S3 location.</p> </li> <li> <p>Failed – This job has failed.
     * Check the failure message for any further details. For further assistance, reach
     * out to the <a href="https://console.aws.amazon.com/support/home/">Amazon Web
     * ServicesSupport Center</a>.</p> </li> <li> <p>Stopped – This job was stopped by
     * a user.</p> </li> <li> <p>Stopping – This job is being stopped by a user.</p>
     * </li> </ul>
     */
    inline ModelInvocationJobStatus GetStatusEquals() const { return m_statusEquals; }
    inline bool StatusEqualsHasBeenSet() const { return m_statusEqualsHasBeenSet; }
    inline void SetStatusEquals(ModelInvocationJobStatus value) { m_statusEqualsHasBeenSet = true; m_statusEquals = value; }
    inline ListModelInvocationJobsRequest& WithStatusEquals(ModelInvocationJobStatus value) { SetStatusEquals(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify a string to filter for batch inference jobs whose names contain the
     * string.</p>
     */
    inline const Aws::String& GetNameContains() const { return m_nameContains; }
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
    template<typename NameContainsT = Aws::String>
    void SetNameContains(NameContainsT&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::forward<NameContainsT>(value); }
    template<typename NameContainsT = Aws::String>
    ListModelInvocationJobsRequest& WithNameContains(NameContainsT&& value) { SetNameContains(std::forward<NameContainsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return. If there are more results than the
     * number that you specify, a <code>nextToken</code> value is returned. Use the
     * <code>nextToken</code> in a request to return the next batch of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListModelInvocationJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If there were more results than the value you specified in the
     * <code>maxResults</code> field in a previous <code>ListModelInvocationJobs</code>
     * request, the response would have returned a <code>nextToken</code> value. To see
     * the next batch of results, send the <code>nextToken</code> value in another
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListModelInvocationJobsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An attribute by which to sort the results.</p>
     */
    inline SortJobsBy GetSortBy() const { return m_sortBy; }
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
    inline void SetSortBy(SortJobsBy value) { m_sortByHasBeenSet = true; m_sortBy = value; }
    inline ListModelInvocationJobsRequest& WithSortBy(SortJobsBy value) { SetSortBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to sort the results by ascending or descending order.</p>
     */
    inline SortOrder GetSortOrder() const { return m_sortOrder; }
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
    inline void SetSortOrder(SortOrder value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }
    inline ListModelInvocationJobsRequest& WithSortOrder(SortOrder value) { SetSortOrder(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_submitTimeAfter{};
    bool m_submitTimeAfterHasBeenSet = false;

    Aws::Utils::DateTime m_submitTimeBefore{};
    bool m_submitTimeBeforeHasBeenSet = false;

    ModelInvocationJobStatus m_statusEquals{ModelInvocationJobStatus::NOT_SET};
    bool m_statusEqualsHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SortJobsBy m_sortBy{SortJobsBy::NOT_SET};
    bool m_sortByHasBeenSet = false;

    SortOrder m_sortOrder{SortOrder::NOT_SET};
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
