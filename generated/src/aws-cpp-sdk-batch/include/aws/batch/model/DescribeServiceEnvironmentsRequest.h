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
   */
  class DescribeServiceEnvironmentsRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API DescribeServiceEnvironmentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeServiceEnvironments"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An array of service environment names or ARN entries.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceEnvironments() const { return m_serviceEnvironments; }
    inline bool ServiceEnvironmentsHasBeenSet() const { return m_serviceEnvironmentsHasBeenSet; }
    template<typename ServiceEnvironmentsT = Aws::Vector<Aws::String>>
    void SetServiceEnvironments(ServiceEnvironmentsT&& value) { m_serviceEnvironmentsHasBeenSet = true; m_serviceEnvironments = std::forward<ServiceEnvironmentsT>(value); }
    template<typename ServiceEnvironmentsT = Aws::Vector<Aws::String>>
    DescribeServiceEnvironmentsRequest& WithServiceEnvironments(ServiceEnvironmentsT&& value) { SetServiceEnvironments(std::forward<ServiceEnvironmentsT>(value)); return *this;}
    template<typename ServiceEnvironmentsT = Aws::String>
    DescribeServiceEnvironmentsRequest& AddServiceEnvironments(ServiceEnvironmentsT&& value) { m_serviceEnvironmentsHasBeenSet = true; m_serviceEnvironments.emplace_back(std::forward<ServiceEnvironmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results returned by
     * <code>DescribeServiceEnvironments</code> in paginated output. When this
     * parameter is used, <code>DescribeServiceEnvironments</code> only returns
     * <code>maxResults</code> results in a single page and a <code>nextToken</code>
     * response element. The remaining results of the initial request can be seen by
     * sending another <code>DescribeServiceEnvironments</code> request with the
     * returned <code>nextToken</code> value. This value can be between 1 and 100. If
     * this parameter isn't used, then <code>DescribeServiceEnvironments</code> returns
     * up to 100 results and a <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeServiceEnvironmentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated
     * <code>DescribeServiceEnvironments</code> request where <code>maxResults</code>
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
    DescribeServiceEnvironmentsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_serviceEnvironments;
    bool m_serviceEnvironmentsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
