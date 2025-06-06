﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connectcases/model/AuditEvent.h>
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
namespace ConnectCases
{
namespace Model
{
  class GetCaseAuditEventsResult
  {
  public:
    AWS_CONNECTCASES_API GetCaseAuditEventsResult() = default;
    AWS_CONNECTCASES_API GetCaseAuditEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API GetCaseAuditEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of case audits where each represents a particular edit of the
     * case.</p>
     */
    inline const Aws::Vector<AuditEvent>& GetAuditEvents() const { return m_auditEvents; }
    template<typename AuditEventsT = Aws::Vector<AuditEvent>>
    void SetAuditEvents(AuditEventsT&& value) { m_auditEventsHasBeenSet = true; m_auditEvents = std::forward<AuditEventsT>(value); }
    template<typename AuditEventsT = Aws::Vector<AuditEvent>>
    GetCaseAuditEventsResult& WithAuditEvents(AuditEventsT&& value) { SetAuditEvents(std::forward<AuditEventsT>(value)); return *this;}
    template<typename AuditEventsT = AuditEvent>
    GetCaseAuditEventsResult& AddAuditEvents(AuditEventsT&& value) { m_auditEventsHasBeenSet = true; m_auditEvents.emplace_back(std::forward<AuditEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. This is null if there are no more
     * results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetCaseAuditEventsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCaseAuditEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AuditEvent> m_auditEvents;
    bool m_auditEventsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
