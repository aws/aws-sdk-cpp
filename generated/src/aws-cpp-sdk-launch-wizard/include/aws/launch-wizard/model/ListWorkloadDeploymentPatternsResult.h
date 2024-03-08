/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/launch-wizard/model/WorkloadDeploymentPatternDataSummary.h>
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
  class ListWorkloadDeploymentPatternsResult
  {
  public:
    AWS_LAUNCHWIZARD_API ListWorkloadDeploymentPatternsResult();
    AWS_LAUNCHWIZARD_API ListWorkloadDeploymentPatternsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAUNCHWIZARD_API ListWorkloadDeploymentPatternsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListWorkloadDeploymentPatternsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline ListWorkloadDeploymentPatternsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline ListWorkloadDeploymentPatternsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Describes the workload deployment patterns.</p>
     */
    inline const Aws::Vector<WorkloadDeploymentPatternDataSummary>& GetWorkloadDeploymentPatterns() const{ return m_workloadDeploymentPatterns; }

    /**
     * <p>Describes the workload deployment patterns.</p>
     */
    inline void SetWorkloadDeploymentPatterns(const Aws::Vector<WorkloadDeploymentPatternDataSummary>& value) { m_workloadDeploymentPatterns = value; }

    /**
     * <p>Describes the workload deployment patterns.</p>
     */
    inline void SetWorkloadDeploymentPatterns(Aws::Vector<WorkloadDeploymentPatternDataSummary>&& value) { m_workloadDeploymentPatterns = std::move(value); }

    /**
     * <p>Describes the workload deployment patterns.</p>
     */
    inline ListWorkloadDeploymentPatternsResult& WithWorkloadDeploymentPatterns(const Aws::Vector<WorkloadDeploymentPatternDataSummary>& value) { SetWorkloadDeploymentPatterns(value); return *this;}

    /**
     * <p>Describes the workload deployment patterns.</p>
     */
    inline ListWorkloadDeploymentPatternsResult& WithWorkloadDeploymentPatterns(Aws::Vector<WorkloadDeploymentPatternDataSummary>&& value) { SetWorkloadDeploymentPatterns(std::move(value)); return *this;}

    /**
     * <p>Describes the workload deployment patterns.</p>
     */
    inline ListWorkloadDeploymentPatternsResult& AddWorkloadDeploymentPatterns(const WorkloadDeploymentPatternDataSummary& value) { m_workloadDeploymentPatterns.push_back(value); return *this; }

    /**
     * <p>Describes the workload deployment patterns.</p>
     */
    inline ListWorkloadDeploymentPatternsResult& AddWorkloadDeploymentPatterns(WorkloadDeploymentPatternDataSummary&& value) { m_workloadDeploymentPatterns.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListWorkloadDeploymentPatternsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListWorkloadDeploymentPatternsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListWorkloadDeploymentPatternsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<WorkloadDeploymentPatternDataSummary> m_workloadDeploymentPatterns;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
