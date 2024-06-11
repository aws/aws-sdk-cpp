﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appintegrations/model/EventIntegration.h>
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
namespace AppIntegrationsService
{
namespace Model
{
  class ListEventIntegrationsResult
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ListEventIntegrationsResult();
    AWS_APPINTEGRATIONSSERVICE_API ListEventIntegrationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPINTEGRATIONSSERVICE_API ListEventIntegrationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The event integrations.</p>
     */
    inline const Aws::Vector<EventIntegration>& GetEventIntegrations() const{ return m_eventIntegrations; }
    inline void SetEventIntegrations(const Aws::Vector<EventIntegration>& value) { m_eventIntegrations = value; }
    inline void SetEventIntegrations(Aws::Vector<EventIntegration>&& value) { m_eventIntegrations = std::move(value); }
    inline ListEventIntegrationsResult& WithEventIntegrations(const Aws::Vector<EventIntegration>& value) { SetEventIntegrations(value); return *this;}
    inline ListEventIntegrationsResult& WithEventIntegrations(Aws::Vector<EventIntegration>&& value) { SetEventIntegrations(std::move(value)); return *this;}
    inline ListEventIntegrationsResult& AddEventIntegrations(const EventIntegration& value) { m_eventIntegrations.push_back(value); return *this; }
    inline ListEventIntegrationsResult& AddEventIntegrations(EventIntegration&& value) { m_eventIntegrations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListEventIntegrationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEventIntegrationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEventIntegrationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListEventIntegrationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListEventIntegrationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListEventIntegrationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<EventIntegration> m_eventIntegrations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
