/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/launch-wizard/model/WorkloadDataSummary.h>
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
namespace LaunchWizard
{
namespace Model
{
  class ListWorkloadsResult
  {
  public:
    AWS_LAUNCHWIZARD_API ListWorkloadsResult();
    AWS_LAUNCHWIZARD_API ListWorkloadsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAUNCHWIZARD_API ListWorkloadsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline ListWorkloadsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline ListWorkloadsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline ListWorkloadsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Information about the workloads.</p>
     */
    inline const Aws::Vector<WorkloadDataSummary>& GetWorkloads() const{ return m_workloads; }

    /**
     * <p>Information about the workloads.</p>
     */
    inline void SetWorkloads(const Aws::Vector<WorkloadDataSummary>& value) { m_workloads = value; }

    /**
     * <p>Information about the workloads.</p>
     */
    inline void SetWorkloads(Aws::Vector<WorkloadDataSummary>&& value) { m_workloads = std::move(value); }

    /**
     * <p>Information about the workloads.</p>
     */
    inline ListWorkloadsResult& WithWorkloads(const Aws::Vector<WorkloadDataSummary>& value) { SetWorkloads(value); return *this;}

    /**
     * <p>Information about the workloads.</p>
     */
    inline ListWorkloadsResult& WithWorkloads(Aws::Vector<WorkloadDataSummary>&& value) { SetWorkloads(std::move(value)); return *this;}

    /**
     * <p>Information about the workloads.</p>
     */
    inline ListWorkloadsResult& AddWorkloads(const WorkloadDataSummary& value) { m_workloads.push_back(value); return *this; }

    /**
     * <p>Information about the workloads.</p>
     */
    inline ListWorkloadsResult& AddWorkloads(WorkloadDataSummary&& value) { m_workloads.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListWorkloadsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListWorkloadsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListWorkloadsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<WorkloadDataSummary> m_workloads;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
