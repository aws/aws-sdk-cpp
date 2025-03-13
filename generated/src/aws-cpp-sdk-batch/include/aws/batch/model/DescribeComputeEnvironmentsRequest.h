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
   * <code>DescribeComputeEnvironments</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/DescribeComputeEnvironmentsRequest">AWS
   * API Reference</a></p>
   */
  class DescribeComputeEnvironmentsRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API DescribeComputeEnvironmentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeComputeEnvironments"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of up to 100 compute environment names or full Amazon Resource Name
     * (ARN) entries.</p>
     */
    inline const Aws::Vector<Aws::String>& GetComputeEnvironments() const { return m_computeEnvironments; }
    inline bool ComputeEnvironmentsHasBeenSet() const { return m_computeEnvironmentsHasBeenSet; }
    template<typename ComputeEnvironmentsT = Aws::Vector<Aws::String>>
    void SetComputeEnvironments(ComputeEnvironmentsT&& value) { m_computeEnvironmentsHasBeenSet = true; m_computeEnvironments = std::forward<ComputeEnvironmentsT>(value); }
    template<typename ComputeEnvironmentsT = Aws::Vector<Aws::String>>
    DescribeComputeEnvironmentsRequest& WithComputeEnvironments(ComputeEnvironmentsT&& value) { SetComputeEnvironments(std::forward<ComputeEnvironmentsT>(value)); return *this;}
    template<typename ComputeEnvironmentsT = Aws::String>
    DescribeComputeEnvironmentsRequest& AddComputeEnvironments(ComputeEnvironmentsT&& value) { m_computeEnvironmentsHasBeenSet = true; m_computeEnvironments.emplace_back(std::forward<ComputeEnvironmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of cluster results returned by
     * <code>DescribeComputeEnvironments</code> in paginated output. When this
     * parameter is used, <code>DescribeComputeEnvironments</code> only returns
     * <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>DescribeComputeEnvironments</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter isn't used, then
     * <code>DescribeComputeEnvironments</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeComputeEnvironmentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeComputeEnvironments</code> request where <code>maxResults</code>
     * was used and the results exceeded the value of that parameter. Pagination
     * continues from the end of the previous results that returned the
     * <code>nextToken</code> value. This value is <code>null</code> when there are no
     * more results to return.</p>  <p>Treat this token as an opaque identifier
     * that's only used to retrieve the next items in a list and not for other
     * programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeComputeEnvironmentsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_computeEnvironments;
    bool m_computeEnvironmentsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
