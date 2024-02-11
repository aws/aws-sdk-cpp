/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-insights/model/Workload.h>
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
namespace ApplicationInsights
{
namespace Model
{
  class ListWorkloadsResult
  {
  public:
    AWS_APPLICATIONINSIGHTS_API ListWorkloadsResult();
    AWS_APPLICATIONINSIGHTS_API ListWorkloadsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONINSIGHTS_API ListWorkloadsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of workloads.</p>
     */
    inline const Aws::Vector<Workload>& GetWorkloadList() const{ return m_workloadList; }

    /**
     * <p>The list of workloads.</p>
     */
    inline void SetWorkloadList(const Aws::Vector<Workload>& value) { m_workloadList = value; }

    /**
     * <p>The list of workloads.</p>
     */
    inline void SetWorkloadList(Aws::Vector<Workload>&& value) { m_workloadList = std::move(value); }

    /**
     * <p>The list of workloads.</p>
     */
    inline ListWorkloadsResult& WithWorkloadList(const Aws::Vector<Workload>& value) { SetWorkloadList(value); return *this;}

    /**
     * <p>The list of workloads.</p>
     */
    inline ListWorkloadsResult& WithWorkloadList(Aws::Vector<Workload>&& value) { SetWorkloadList(std::move(value)); return *this;}

    /**
     * <p>The list of workloads.</p>
     */
    inline ListWorkloadsResult& AddWorkloadList(const Workload& value) { m_workloadList.push_back(value); return *this; }

    /**
     * <p>The list of workloads.</p>
     */
    inline ListWorkloadsResult& AddWorkloadList(Workload&& value) { m_workloadList.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListWorkloadsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListWorkloadsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline ListWorkloadsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListWorkloadsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListWorkloadsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListWorkloadsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Workload> m_workloadList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
