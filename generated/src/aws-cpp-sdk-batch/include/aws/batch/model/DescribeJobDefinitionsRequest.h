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
    AWS_BATCH_API DescribeJobDefinitionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeJobDefinitions"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    /**
     * <p>A list of up to 100 job definitions. Each entry in the list can either be an
     * ARN in the format
     * <code>arn:aws:batch:${Region}:${Account}:job-definition/${JobDefinitionName}:${Revision}</code>
     * or a short version using the form
     * <code>${JobDefinitionName}:${Revision}</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobDefinitions() const{ return m_jobDefinitions; }

    /**
     * <p>A list of up to 100 job definitions. Each entry in the list can either be an
     * ARN in the format
     * <code>arn:aws:batch:${Region}:${Account}:job-definition/${JobDefinitionName}:${Revision}</code>
     * or a short version using the form
     * <code>${JobDefinitionName}:${Revision}</code>.</p>
     */
    inline bool JobDefinitionsHasBeenSet() const { return m_jobDefinitionsHasBeenSet; }

    /**
     * <p>A list of up to 100 job definitions. Each entry in the list can either be an
     * ARN in the format
     * <code>arn:aws:batch:${Region}:${Account}:job-definition/${JobDefinitionName}:${Revision}</code>
     * or a short version using the form
     * <code>${JobDefinitionName}:${Revision}</code>.</p>
     */
    inline void SetJobDefinitions(const Aws::Vector<Aws::String>& value) { m_jobDefinitionsHasBeenSet = true; m_jobDefinitions = value; }

    /**
     * <p>A list of up to 100 job definitions. Each entry in the list can either be an
     * ARN in the format
     * <code>arn:aws:batch:${Region}:${Account}:job-definition/${JobDefinitionName}:${Revision}</code>
     * or a short version using the form
     * <code>${JobDefinitionName}:${Revision}</code>.</p>
     */
    inline void SetJobDefinitions(Aws::Vector<Aws::String>&& value) { m_jobDefinitionsHasBeenSet = true; m_jobDefinitions = std::move(value); }

    /**
     * <p>A list of up to 100 job definitions. Each entry in the list can either be an
     * ARN in the format
     * <code>arn:aws:batch:${Region}:${Account}:job-definition/${JobDefinitionName}:${Revision}</code>
     * or a short version using the form
     * <code>${JobDefinitionName}:${Revision}</code>.</p>
     */
    inline DescribeJobDefinitionsRequest& WithJobDefinitions(const Aws::Vector<Aws::String>& value) { SetJobDefinitions(value); return *this;}

    /**
     * <p>A list of up to 100 job definitions. Each entry in the list can either be an
     * ARN in the format
     * <code>arn:aws:batch:${Region}:${Account}:job-definition/${JobDefinitionName}:${Revision}</code>
     * or a short version using the form
     * <code>${JobDefinitionName}:${Revision}</code>.</p>
     */
    inline DescribeJobDefinitionsRequest& WithJobDefinitions(Aws::Vector<Aws::String>&& value) { SetJobDefinitions(std::move(value)); return *this;}

    /**
     * <p>A list of up to 100 job definitions. Each entry in the list can either be an
     * ARN in the format
     * <code>arn:aws:batch:${Region}:${Account}:job-definition/${JobDefinitionName}:${Revision}</code>
     * or a short version using the form
     * <code>${JobDefinitionName}:${Revision}</code>.</p>
     */
    inline DescribeJobDefinitionsRequest& AddJobDefinitions(const Aws::String& value) { m_jobDefinitionsHasBeenSet = true; m_jobDefinitions.push_back(value); return *this; }

    /**
     * <p>A list of up to 100 job definitions. Each entry in the list can either be an
     * ARN in the format
     * <code>arn:aws:batch:${Region}:${Account}:job-definition/${JobDefinitionName}:${Revision}</code>
     * or a short version using the form
     * <code>${JobDefinitionName}:${Revision}</code>.</p>
     */
    inline DescribeJobDefinitionsRequest& AddJobDefinitions(Aws::String&& value) { m_jobDefinitionsHasBeenSet = true; m_jobDefinitions.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of up to 100 job definitions. Each entry in the list can either be an
     * ARN in the format
     * <code>arn:aws:batch:${Region}:${Account}:job-definition/${JobDefinitionName}:${Revision}</code>
     * or a short version using the form
     * <code>${JobDefinitionName}:${Revision}</code>.</p>
     */
    inline DescribeJobDefinitionsRequest& AddJobDefinitions(const char* value) { m_jobDefinitionsHasBeenSet = true; m_jobDefinitions.push_back(value); return *this; }


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
    inline int GetMaxResults() const{ return m_maxResults; }

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
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

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
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

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
    inline DescribeJobDefinitionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The name of the job definition to describe.</p>
     */
    inline const Aws::String& GetJobDefinitionName() const{ return m_jobDefinitionName; }

    /**
     * <p>The name of the job definition to describe.</p>
     */
    inline bool JobDefinitionNameHasBeenSet() const { return m_jobDefinitionNameHasBeenSet; }

    /**
     * <p>The name of the job definition to describe.</p>
     */
    inline void SetJobDefinitionName(const Aws::String& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = value; }

    /**
     * <p>The name of the job definition to describe.</p>
     */
    inline void SetJobDefinitionName(Aws::String&& value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName = std::move(value); }

    /**
     * <p>The name of the job definition to describe.</p>
     */
    inline void SetJobDefinitionName(const char* value) { m_jobDefinitionNameHasBeenSet = true; m_jobDefinitionName.assign(value); }

    /**
     * <p>The name of the job definition to describe.</p>
     */
    inline DescribeJobDefinitionsRequest& WithJobDefinitionName(const Aws::String& value) { SetJobDefinitionName(value); return *this;}

    /**
     * <p>The name of the job definition to describe.</p>
     */
    inline DescribeJobDefinitionsRequest& WithJobDefinitionName(Aws::String&& value) { SetJobDefinitionName(std::move(value)); return *this;}

    /**
     * <p>The name of the job definition to describe.</p>
     */
    inline DescribeJobDefinitionsRequest& WithJobDefinitionName(const char* value) { SetJobDefinitionName(value); return *this;}


    /**
     * <p>The status used to filter job definitions.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status used to filter job definitions.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status used to filter job definitions.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status used to filter job definitions.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status used to filter job definitions.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status used to filter job definitions.</p>
     */
    inline DescribeJobDefinitionsRequest& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status used to filter job definitions.</p>
     */
    inline DescribeJobDefinitionsRequest& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status used to filter job definitions.</p>
     */
    inline DescribeJobDefinitionsRequest& WithStatus(const char* value) { SetStatus(value); return *this;}


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
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

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
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

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
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

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
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

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
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

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
    inline DescribeJobDefinitionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

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
    inline DescribeJobDefinitionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

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
    inline DescribeJobDefinitionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_jobDefinitions;
    bool m_jobDefinitionsHasBeenSet = false;

    int m_maxResults;
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
