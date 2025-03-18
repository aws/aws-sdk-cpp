/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/ControlDomainInsights.h>
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
namespace AuditManager
{
namespace Model
{
  class ListControlDomainInsightsResult
  {
  public:
    AWS_AUDITMANAGER_API ListControlDomainInsightsResult() = default;
    AWS_AUDITMANAGER_API ListControlDomainInsightsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API ListControlDomainInsightsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The control domain analytics data that the
     * <code>ListControlDomainInsights</code> API returned. </p>
     */
    inline const Aws::Vector<ControlDomainInsights>& GetControlDomainInsights() const { return m_controlDomainInsights; }
    template<typename ControlDomainInsightsT = Aws::Vector<ControlDomainInsights>>
    void SetControlDomainInsights(ControlDomainInsightsT&& value) { m_controlDomainInsightsHasBeenSet = true; m_controlDomainInsights = std::forward<ControlDomainInsightsT>(value); }
    template<typename ControlDomainInsightsT = Aws::Vector<ControlDomainInsights>>
    ListControlDomainInsightsResult& WithControlDomainInsights(ControlDomainInsightsT&& value) { SetControlDomainInsights(std::forward<ControlDomainInsightsT>(value)); return *this;}
    template<typename ControlDomainInsightsT = ControlDomainInsights>
    ListControlDomainInsightsResult& AddControlDomainInsights(ControlDomainInsightsT&& value) { m_controlDomainInsightsHasBeenSet = true; m_controlDomainInsights.emplace_back(std::forward<ControlDomainInsightsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListControlDomainInsightsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListControlDomainInsightsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ControlDomainInsights> m_controlDomainInsights;
    bool m_controlDomainInsightsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
