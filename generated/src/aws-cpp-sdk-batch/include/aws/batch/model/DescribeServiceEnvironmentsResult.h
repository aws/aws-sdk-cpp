/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/ServiceEnvironmentDetail.h>
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
  class DescribeServiceEnvironmentsResult
  {
  public:
    AWS_BATCH_API DescribeServiceEnvironmentsResult() = default;
    AWS_BATCH_API DescribeServiceEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BATCH_API DescribeServiceEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of service environments that match the request.</p>
     */
    inline const Aws::Vector<ServiceEnvironmentDetail>& GetServiceEnvironments() const { return m_serviceEnvironments; }
    template<typename ServiceEnvironmentsT = Aws::Vector<ServiceEnvironmentDetail>>
    void SetServiceEnvironments(ServiceEnvironmentsT&& value) { m_serviceEnvironmentsHasBeenSet = true; m_serviceEnvironments = std::forward<ServiceEnvironmentsT>(value); }
    template<typename ServiceEnvironmentsT = Aws::Vector<ServiceEnvironmentDetail>>
    DescribeServiceEnvironmentsResult& WithServiceEnvironments(ServiceEnvironmentsT&& value) { SetServiceEnvironments(std::forward<ServiceEnvironmentsT>(value)); return *this;}
    template<typename ServiceEnvironmentsT = ServiceEnvironmentDetail>
    DescribeServiceEnvironmentsResult& AddServiceEnvironments(ServiceEnvironmentsT&& value) { m_serviceEnvironmentsHasBeenSet = true; m_serviceEnvironments.emplace_back(std::forward<ServiceEnvironmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeServiceEnvironments</code> request. When the results of a
     * <code>DescribeServiceEnvironments</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeServiceEnvironmentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeServiceEnvironmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ServiceEnvironmentDetail> m_serviceEnvironments;
    bool m_serviceEnvironmentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
