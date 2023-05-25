/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
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
   * <code>ListSchedulingPolicies</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ListSchedulingPoliciesRequest">AWS
   * API Reference</a></p>
   */
  class ListSchedulingPoliciesRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API ListSchedulingPoliciesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSchedulingPolicies"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    /**
     * <p>The maximum number of results that's returned by
     * <code>ListSchedulingPolicies</code> in paginated output. When this parameter is
     * used, <code>ListSchedulingPolicies</code> only returns <code>maxResults</code>
     * results in a single page and a <code>nextToken</code> response element. You can
     * see the remaining results of the initial request by sending another
     * <code>ListSchedulingPolicies</code> request with the returned
     * <code>nextToken</code> value. This value can be between 1 and 100. If this
     * parameter isn't used, <code>ListSchedulingPolicies</code> returns up to 100
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results that's returned by
     * <code>ListSchedulingPolicies</code> in paginated output. When this parameter is
     * used, <code>ListSchedulingPolicies</code> only returns <code>maxResults</code>
     * results in a single page and a <code>nextToken</code> response element. You can
     * see the remaining results of the initial request by sending another
     * <code>ListSchedulingPolicies</code> request with the returned
     * <code>nextToken</code> value. This value can be between 1 and 100. If this
     * parameter isn't used, <code>ListSchedulingPolicies</code> returns up to 100
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results that's returned by
     * <code>ListSchedulingPolicies</code> in paginated output. When this parameter is
     * used, <code>ListSchedulingPolicies</code> only returns <code>maxResults</code>
     * results in a single page and a <code>nextToken</code> response element. You can
     * see the remaining results of the initial request by sending another
     * <code>ListSchedulingPolicies</code> request with the returned
     * <code>nextToken</code> value. This value can be between 1 and 100. If this
     * parameter isn't used, <code>ListSchedulingPolicies</code> returns up to 100
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results that's returned by
     * <code>ListSchedulingPolicies</code> in paginated output. When this parameter is
     * used, <code>ListSchedulingPolicies</code> only returns <code>maxResults</code>
     * results in a single page and a <code>nextToken</code> response element. You can
     * see the remaining results of the initial request by sending another
     * <code>ListSchedulingPolicies</code> request with the returned
     * <code>nextToken</code> value. This value can be between 1 and 100. If this
     * parameter isn't used, <code>ListSchedulingPolicies</code> returns up to 100
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline ListSchedulingPoliciesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value that's returned from a previous paginated
     * <code>ListSchedulingPolicies</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p>  <p>Treat this token as an opaque identifier that's only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value that's returned from a previous paginated
     * <code>ListSchedulingPolicies</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p>  <p>Treat this token as an opaque identifier that's only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value that's returned from a previous paginated
     * <code>ListSchedulingPolicies</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p>  <p>Treat this token as an opaque identifier that's only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value that's returned from a previous paginated
     * <code>ListSchedulingPolicies</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p>  <p>Treat this token as an opaque identifier that's only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value that's returned from a previous paginated
     * <code>ListSchedulingPolicies</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p>  <p>Treat this token as an opaque identifier that's only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value that's returned from a previous paginated
     * <code>ListSchedulingPolicies</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p>  <p>Treat this token as an opaque identifier that's only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline ListSchedulingPoliciesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value that's returned from a previous paginated
     * <code>ListSchedulingPolicies</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p>  <p>Treat this token as an opaque identifier that's only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline ListSchedulingPoliciesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value that's returned from a previous paginated
     * <code>ListSchedulingPolicies</code> request where <code>maxResults</code> was
     * used and the results exceeded the value of that parameter. Pagination continues
     * from the end of the previous results that returned the <code>nextToken</code>
     * value. This value is <code>null</code> when there are no more results to
     * return.</p>  <p>Treat this token as an opaque identifier that's only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline ListSchedulingPoliciesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
