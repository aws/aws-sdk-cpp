﻿/**
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
    AWS_AUDITMANAGER_API ListControlDomainInsightsResult();
    AWS_AUDITMANAGER_API ListControlDomainInsightsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API ListControlDomainInsightsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The control domain analytics data that the
     * <code>ListControlDomainInsights</code> API returned. </p>
     */
    inline const Aws::Vector<ControlDomainInsights>& GetControlDomainInsights() const{ return m_controlDomainInsights; }
    inline void SetControlDomainInsights(const Aws::Vector<ControlDomainInsights>& value) { m_controlDomainInsights = value; }
    inline void SetControlDomainInsights(Aws::Vector<ControlDomainInsights>&& value) { m_controlDomainInsights = std::move(value); }
    inline ListControlDomainInsightsResult& WithControlDomainInsights(const Aws::Vector<ControlDomainInsights>& value) { SetControlDomainInsights(value); return *this;}
    inline ListControlDomainInsightsResult& WithControlDomainInsights(Aws::Vector<ControlDomainInsights>&& value) { SetControlDomainInsights(std::move(value)); return *this;}
    inline ListControlDomainInsightsResult& AddControlDomainInsights(const ControlDomainInsights& value) { m_controlDomainInsights.push_back(value); return *this; }
    inline ListControlDomainInsightsResult& AddControlDomainInsights(ControlDomainInsights&& value) { m_controlDomainInsights.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListControlDomainInsightsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListControlDomainInsightsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListControlDomainInsightsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListControlDomainInsightsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListControlDomainInsightsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListControlDomainInsightsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ControlDomainInsights> m_controlDomainInsights;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
