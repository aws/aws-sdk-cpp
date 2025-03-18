/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   * <p>Contains the parameters for
   * <code>DescribeJobDefinitions</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeJobDefinitionsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeJobDefinitionsRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API DescribeJobDefinitionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeJobDefinitions"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of up to 100 job definitions. Each entry in the list can either be an
     * ARN in the format
     * <code>arn:aws:batch:${Region}:${Account}:job-definition/${JobDefinitionName}:${Revision}</code>
     * or a short version using the form <code>${JobDefinitionName}:${Revision}</code>.
     * This parameter can't be used with other parameters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobDefinitions() const { return m_jobDefinitions; }
    inline bool JobDefinitionsHasBeenSet() const { return m_jobDefinitionsHasBeenSet; }
    template<typename JobDefinitionsT = Aws::Vector<Aws::String>>
    void SetJobDefinitions(JobDefinitionsT&& value) { m_jobDefinitionsHasBeenSet = true; m_jobDefinitions = std::forward<JobDefinitionsT>(value); }
    template<typename JobDefinitionsT = Aws::Vector<Aws::String>>
    DescribeJobDefinitionsRequest& WithJobDefinitions(JobDefinitionsT&& value) { SetJobDefinitions(std::forward<JobDefinitionsT>(value)); return *this;}
    template<typename JobDefinitionsT = Aws::String>
    DescribeJobDefinitionsRequest& AddJobDefinitions(JobDefinitionsT&& value) { m_jobDefinitionsHasBeenSet = true; m_jobDefinitions.emplace_back(std::forward<JobDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results returned by <code>DescribeJobDefinitions</code>
     * in paginated output. When this parameter is used,
     * <code>DescribeJobDefinitions</code> only returns <code>maxResults</code> results
     * in a single page and a <code>nextToken</code> response element. The remaining
     * results of the initial request can be seen by sending another
     * <code>DescribeJobDefinitions</code> request with the returned
     * <code>nextToken</code> value. This value can be between 1 and 100. If this
     * parameter isn't used, then <code>DescribeJobDefinitions</code> returns up to 100
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeJobDefinitionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the job definition to describe.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const { return m_jobDefinitionName; }
    inline bool JobDefinitionNameHasBeenSet() const { return m_jobDefinitionNameHasBeenSet; }
    template<typename JobDefinitionNameT = Aws::String>
    void SetJobDefinitionName(JobDefinitionNameT&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = std::forward<JobDefinitionNameT>(value); }
    template<typename JobDefinitionNameT = Aws::String>
    DescribeJobDefinitionsRequest& WithJobDefinitionName(JobDefinitionNameT&& value) { SetJobDefinitionName(std::forward<JobDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status used to filter job definitions.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DescribeJobDefinitionsRequest& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeJobDefinitions</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p>  <p>Treat this token as an opaque identifier that's only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeJobDefinitionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_jobDefinitions;
    bool m_jobDefinitionsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_jobDefinitionName;
    bool m_jobDefinitionNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
