/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/ServiceRevision.h>
#include <aws/ecs/model/Failure.h>
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
namespace ECS
{
namespace Model
{
  class DescribeServiceRevisionsResult
  {
  public:
    AWS_ECS_API DescribeServiceRevisionsResult() = default;
    AWS_ECS_API DescribeServiceRevisionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API DescribeServiceRevisionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of service revisions described.</p>
     */
    inline const Aws::Vector<ServiceRevision>& GetServiceRevisions() const { return m_serviceRevisions; }
    template<typename ServiceRevisionsT = Aws::Vector<ServiceRevision>>
    void SetServiceRevisions(ServiceRevisionsT&& value) { m_serviceRevisionsHasBeenSet = true; m_serviceRevisions = std::forward<ServiceRevisionsT>(value); }
    template<typename ServiceRevisionsT = Aws::Vector<ServiceRevision>>
    DescribeServiceRevisionsResult& WithServiceRevisions(ServiceRevisionsT&& value) { SetServiceRevisions(std::forward<ServiceRevisionsT>(value)); return *this;}
    template<typename ServiceRevisionsT = ServiceRevision>
    DescribeServiceRevisionsResult& AddServiceRevisions(ServiceRevisionsT&& value) { m_serviceRevisionsHasBeenSet = true; m_serviceRevisions.emplace_back(std::forward<ServiceRevisionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Any failures associated with the call.</p>
     */
    inline const Aws::Vector<Failure>& GetFailures() const { return m_failures; }
    template<typename FailuresT = Aws::Vector<Failure>>
    void SetFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures = std::forward<FailuresT>(value); }
    template<typename FailuresT = Aws::Vector<Failure>>
    DescribeServiceRevisionsResult& WithFailures(FailuresT&& value) { SetFailures(std::forward<FailuresT>(value)); return *this;}
    template<typename FailuresT = Failure>
    DescribeServiceRevisionsResult& AddFailures(FailuresT&& value) { m_failuresHasBeenSet = true; m_failures.emplace_back(std::forward<FailuresT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeServiceRevisionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ServiceRevision> m_serviceRevisions;
    bool m_serviceRevisionsHasBeenSet = false;

    Aws::Vector<Failure> m_failures;
    bool m_failuresHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
