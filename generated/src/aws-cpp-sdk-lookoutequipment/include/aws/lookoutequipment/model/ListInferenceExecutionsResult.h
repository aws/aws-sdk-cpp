﻿/**
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


    ///@{
    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * inference executions. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListInferenceExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListInferenceExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListInferenceExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides an array of information about the individual inference executions
     * returned from the <code>ListInferenceExecutions</code> operation, including
     * model used, inference scheduler, data configuration, and so on. </p> 
     * <p>If you don't supply the <code>InferenceSchedulerName</code> request
     * parameter, or if you supply the name of an inference scheduler that doesn't
     * exist, <code>ListInferenceExecutions</code> returns an empty array in
     * <code>InferenceExecutionSummaries</code>.</p> 
     */
    inline const Aws::Vector<InferenceExecutionSummary>& GetInferenceExecutionSummaries() const{ return m_inferenceExecutionSummaries; }
    inline void SetInferenceExecutionSummaries(const Aws::Vector<InferenceExecutionSummary>& value) { m_inferenceExecutionSummaries = value; }
    inline void SetInferenceExecutionSummaries(Aws::Vector<InferenceExecutionSummary>&& value) { m_inferenceExecutionSummaries = std::move(value); }
    inline ListInferenceExecutionsResult& WithInferenceExecutionSummaries(const Aws::Vector<InferenceExecutionSummary>& value) { SetInferenceExecutionSummaries(value); return *this;}
    inline ListInferenceExecutionsResult& WithInferenceExecutionSummaries(Aws::Vector<InferenceExecutionSummary>&& value) { SetInferenceExecutionSummaries(std::move(value)); return *this;}
    inline ListInferenceExecutionsResult& AddInferenceExecutionSummaries(const InferenceExecutionSummary& value) { m_inferenceExecutionSummaries.push_back(value); return *this; }
    inline ListInferenceExecutionsResult& AddInferenceExecutionSummaries(InferenceExecutionSummary&& value) { m_inferenceExecutionSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListInferenceExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListInferenceExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListInferenceExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<InferenceExecutionSummary> m_inferenceExecutionSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
