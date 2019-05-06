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
   */
  class AWS_BATCH_API DescribeComputeEnvironmentsRequest : public BatchRequest
  {
  public:
    DescribeComputeEnvironmentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeComputeEnvironments"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>A list of up to 100 compute environment names or full Amazon Resource Name
     * (ARN) entries. </p>
     */
    inline const Aws::Vector<Aws::String>& GetComputeEnvironments() const{ return m_computeEnvironments; }

    /**
     * <p>A list of up to 100 compute environment names or full Amazon Resource Name
     * (ARN) entries. </p>
     */
    inline bool ComputeEnvironmentsHasBeenSet() const { return m_computeEnvironmentsHasBeenSet; }

    /**
     * <p>A list of up to 100 compute environment names or full Amazon Resource Name
     * (ARN) entries. </p>
     */
    inline void SetComputeEnvironments(const Aws::Vector<Aws::String>& value) { m_computeEnvironmentsHasBeenSet = true; m_computeEnvironments = value; }

    /**
     * <p>A list of up to 100 compute environment names or full Amazon Resource Name
     * (ARN) entries. </p>
     */
    inline void SetComputeEnvironments(Aws::Vector<Aws::String>&& value) { m_computeEnvironmentsHasBeenSet = true; m_computeEnvironments = std::move(value); }

    /**
     * <p>A list of up to 100 compute environment names or full Amazon Resource Name
     * (ARN) entries. </p>
     */
    inline DescribeComputeEnvironmentsRequest& WithComputeEnvironments(const Aws::Vector<Aws::String>& value) { SetComputeEnvironments(value); return *this;}

    /**
     * <p>A list of up to 100 compute environment names or full Amazon Resource Name
     * (ARN) entries. </p>
     */
    inline DescribeComputeEnvironmentsRequest& WithComputeEnvironments(Aws::Vector<Aws::String>&& value) { SetComputeEnvironments(std::move(value)); return *this;}

    /**
     * <p>A list of up to 100 compute environment names or full Amazon Resource Name
     * (ARN) entries. </p>
     */
    inline DescribeComputeEnvironmentsRequest& AddComputeEnvironments(const Aws::String& value) { m_computeEnvironmentsHasBeenSet = true; m_computeEnvironments.push_back(value); return *this; }

    /**
     * <p>A list of up to 100 compute environment names or full Amazon Resource Name
     * (ARN) entries. </p>
     */
    inline DescribeComputeEnvironmentsRequest& AddComputeEnvironments(Aws::String&& value) { m_computeEnvironmentsHasBeenSet = true; m_computeEnvironments.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of up to 100 compute environment names or full Amazon Resource Name
     * (ARN) entries. </p>
     */
    inline DescribeComputeEnvironmentsRequest& AddComputeEnvironments(const char* value) { m_computeEnvironmentsHasBeenSet = true; m_computeEnvironments.push_back(value); return *this; }


    /**
     * <p>The maximum number of cluster results returned by
     * <code>DescribeComputeEnvironments</code> in paginated output. When this
     * parameter is used, <code>DescribeComputeEnvironments</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>DescribeComputeEnvironments</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter is not used, then
     * <code>DescribeComputeEnvironments</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of cluster results returned by
     * <code>DescribeComputeEnvironments</code> in paginated output. When this
     * parameter is used, <code>DescribeComputeEnvironments</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>DescribeComputeEnvironments</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter is not used, then
     * <code>DescribeComputeEnvironments</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of cluster results returned by
     * <code>DescribeComputeEnvironments</code> in paginated output. When this
     * parameter is used, <code>DescribeComputeEnvironments</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>DescribeComputeEnvironments</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter is not used, then
     * <code>DescribeComputeEnvironments</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of cluster results returned by
     * <code>DescribeComputeEnvironments</code> in paginated output. When this
     * parameter is used, <code>DescribeComputeEnvironments</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>DescribeComputeEnvironments</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter is not used, then
     * <code>DescribeComputeEnvironments</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline DescribeComputeEnvironmentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeComputeEnvironments</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. This value is <code>null</code> when there are no
     * more results to return.</p> <note> <p>This token should be treated as an opaque
     * identifier that is only used to retrieve the next items in a list and not for
     * other programmatic purposes.</p> </note>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeComputeEnvironments</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. This value is <code>null</code> when there are no
     * more results to return.</p> <note> <p>This token should be treated as an opaque
     * identifier that is only used to retrieve the next items in a list and not for
     * other programmatic purposes.</p> </note>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeComputeEnvironments</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. This value is <code>null</code> when there are no
     * more results to return.</p> <note> <p>This token should be treated as an opaque
     * identifier that is only used to retrieve the next items in a list and not for
     * other programmatic purposes.</p> </note>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeComputeEnvironments</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. This value is <code>null</code> when there are no
     * more results to return.</p> <note> <p>This token should be treated as an opaque
     * identifier that is only used to retrieve the next items in a list and not for
     * other programmatic purposes.</p> </note>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeComputeEnvironments</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. This value is <code>null</code> when there are no
     * more results to return.</p> <note> <p>This token should be treated as an opaque
     * identifier that is only used to retrieve the next items in a list and not for
     * other programmatic purposes.</p> </note>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeComputeEnvironments</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. This value is <code>null</code> when there are no
     * more results to return.</p> <note> <p>This token should be treated as an opaque
     * identifier that is only used to retrieve the next items in a list and not for
     * other programmatic purposes.</p> </note>
     */
    inline DescribeComputeEnvironmentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeComputeEnvironments</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. This value is <code>null</code> when there are no
     * more results to return.</p> <note> <p>This token should be treated as an opaque
     * identifier that is only used to retrieve the next items in a list and not for
     * other programmatic purposes.</p> </note>
     */
    inline DescribeComputeEnvironmentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeComputeEnvironments</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. This value is <code>null</code> when there are no
     * more results to return.</p> <note> <p>This token should be treated as an opaque
     * identifier that is only used to retrieve the next items in a list and not for
     * other programmatic purposes.</p> </note>
     */
    inline DescribeComputeEnvironmentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_computeEnvironments;
    bool m_computeEnvironmentsHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
