/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/InferenceExecutionSummary.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class ListInferenceExecutionsResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListInferenceExecutionsResult();
    AWS_LOOKOUTEQUIPMENT_API ListInferenceExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListInferenceExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference executions. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference executions. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference executions. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference executions. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference executions. </p>
     */
    inline ListInferenceExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference executions. </p>
     */
    inline ListInferenceExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference executions. </p>
     */
    inline ListInferenceExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Provides an array of information about the individual inference executions
     * returned from the <code>ListInferenceExecutions</code> operation, including
     * model used, inference scheduler, data configuration, and so on. </p>
     */
    inline const Aws::Vector<InferenceExecutionSummary>& GetInferenceExecutionSummaries() const{ return m_inferenceExecutionSummaries; }

    /**
     * <p>Provides an array of information about the individual inference executions
     * returned from the <code>ListInferenceExecutions</code> operation, including
     * model used, inference scheduler, data configuration, and so on. </p>
     */
    inline void SetInferenceExecutionSummaries(const Aws::Vector<InferenceExecutionSummary>& value) { m_inferenceExecutionSummaries = value; }

    /**
     * <p>Provides an array of information about the individual inference executions
     * returned from the <code>ListInferenceExecutions</code> operation, including
     * model used, inference scheduler, data configuration, and so on. </p>
     */
    inline void SetInferenceExecutionSummaries(Aws::Vector<InferenceExecutionSummary>&& value) { m_inferenceExecutionSummaries = std::move(value); }

    /**
     * <p>Provides an array of information about the individual inference executions
     * returned from the <code>ListInferenceExecutions</code> operation, including
     * model used, inference scheduler, data configuration, and so on. </p>
     */
    inline ListInferenceExecutionsResult& WithInferenceExecutionSummaries(const Aws::Vector<InferenceExecutionSummary>& value) { SetInferenceExecutionSummaries(value); return *this;}

    /**
     * <p>Provides an array of information about the individual inference executions
     * returned from the <code>ListInferenceExecutions</code> operation, including
     * model used, inference scheduler, data configuration, and so on. </p>
     */
    inline ListInferenceExecutionsResult& WithInferenceExecutionSummaries(Aws::Vector<InferenceExecutionSummary>&& value) { SetInferenceExecutionSummaries(std::move(value)); return *this;}

    /**
     * <p>Provides an array of information about the individual inference executions
     * returned from the <code>ListInferenceExecutions</code> operation, including
     * model used, inference scheduler, data configuration, and so on. </p>
     */
    inline ListInferenceExecutionsResult& AddInferenceExecutionSummaries(const InferenceExecutionSummary& value) { m_inferenceExecutionSummaries.push_back(value); return *this; }

    /**
     * <p>Provides an array of information about the individual inference executions
     * returned from the <code>ListInferenceExecutions</code> operation, including
     * model used, inference scheduler, data configuration, and so on. </p>
     */
    inline ListInferenceExecutionsResult& AddInferenceExecutionSummaries(InferenceExecutionSummary&& value) { m_inferenceExecutionSummaries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<InferenceExecutionSummary> m_inferenceExecutionSummaries;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
