﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/ServiceSummary.h>
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
namespace AppRunner
{
namespace Model
{
  class ListServicesResult
  {
  public:
    AWS_APPRUNNER_API ListServicesResult();
    AWS_APPRUNNER_API ListServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API ListServicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of service summary information records. In a paginated request, the
     * request returns up to <code>MaxResults</code> records for each call.</p>
     */
    inline const Aws::Vector<ServiceSummary>& GetServiceSummaryList() const{ return m_serviceSummaryList; }
    inline void SetServiceSummaryList(const Aws::Vector<ServiceSummary>& value) { m_serviceSummaryList = value; }
    inline void SetServiceSummaryList(Aws::Vector<ServiceSummary>&& value) { m_serviceSummaryList = std::move(value); }
    inline ListServicesResult& WithServiceSummaryList(const Aws::Vector<ServiceSummary>& value) { SetServiceSummaryList(value); return *this;}
    inline ListServicesResult& WithServiceSummaryList(Aws::Vector<ServiceSummary>&& value) { SetServiceSummaryList(std::move(value)); return *this;}
    inline ListServicesResult& AddServiceSummaryList(const ServiceSummary& value) { m_serviceSummaryList.push_back(value); return *this; }
    inline ListServicesResult& AddServiceSummaryList(ServiceSummary&& value) { m_serviceSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListServicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListServicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListServicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListServicesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListServicesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListServicesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ServiceSummary> m_serviceSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
