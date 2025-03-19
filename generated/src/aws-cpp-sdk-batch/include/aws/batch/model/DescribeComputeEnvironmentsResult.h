/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/ComputeEnvironmentDetail.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Batch
{
namespace Model
{
  class DescribeComputeEnvironmentsResult
  {
  public:
    AWS_BATCH_API DescribeComputeEnvironmentsResult() = default;
    AWS_BATCH_API DescribeComputeEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API DescribeComputeEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of compute environments.</p>
     */
    inline const Aws::Vector<ComputeEnvironmentDetail>& GetComputeEnvironments() const { return m_computeEnvironments; }
    template<typename ComputeEnvironmentsT = Aws::Vector<ComputeEnvironmentDetail>>
    void SetComputeEnvironments(ComputeEnvironmentsT&& value) { m_computeEnvironmentsHasBeenSet = true; m_computeEnvironments = std::forward<ComputeEnvironmentsT>(value); }
    template<typename ComputeEnvironmentsT = Aws::Vector<ComputeEnvironmentDetail>>
    DescribeComputeEnvironmentsResult& WithComputeEnvironments(ComputeEnvironmentsT&& value) { SetComputeEnvironments(std::forward<ComputeEnvironmentsT>(value)); return *this;}
    template<typename ComputeEnvironmentsT = ComputeEnvironmentDetail>
    DescribeComputeEnvironmentsResult& AddComputeEnvironments(ComputeEnvironmentsT&& value) { m_computeEnvironmentsHasBeenSet = true; m_computeEnvironments.emplace_back(std::forward<ComputeEnvironmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeComputeEnvironments</code> request. When the results of a
     * <code>DescribeComputeEnvironments</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeComputeEnvironmentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeComputeEnvironmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ComputeEnvironmentDetail> m_computeEnvironments;
    bool m_computeEnvironmentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
