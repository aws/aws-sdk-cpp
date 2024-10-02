/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/model/GuardrailUsage.h>
#include <aws/bedrock-runtime/model/GuardrailAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/GuardrailCoverage.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/GuardrailOutputContent.h>
#include <aws/bedrock-runtime/model/GuardrailAssessment.h>
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
namespace BedrockRuntime
{
namespace Model
{
  class ApplyGuardrailResult
  {
  public:
    AWS_BEDROCKRUNTIME_API ApplyGuardrailResult();
    AWS_BEDROCKRUNTIME_API ApplyGuardrailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKRUNTIME_API ApplyGuardrailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The usage details in the response from the guardrail.</p>
     */
    inline const GuardrailUsage& GetUsage() const{ return m_usage; }
    inline void SetUsage(const GuardrailUsage& value) { m_usage = value; }
    inline void SetUsage(GuardrailUsage&& value) { m_usage = std::move(value); }
    inline ApplyGuardrailResult& WithUsage(const GuardrailUsage& value) { SetUsage(value); return *this;}
    inline ApplyGuardrailResult& WithUsage(GuardrailUsage&& value) { SetUsage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action taken in the response from the guardrail.</p>
     */
    inline const GuardrailAction& GetAction() const{ return m_action; }
    inline void SetAction(const GuardrailAction& value) { m_action = value; }
    inline void SetAction(GuardrailAction&& value) { m_action = std::move(value); }
    inline ApplyGuardrailResult& WithAction(const GuardrailAction& value) { SetAction(value); return *this;}
    inline ApplyGuardrailResult& WithAction(GuardrailAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output details in the response from the guardrail.</p>
     */
    inline const Aws::Vector<GuardrailOutputContent>& GetOutputs() const{ return m_outputs; }
    inline void SetOutputs(const Aws::Vector<GuardrailOutputContent>& value) { m_outputs = value; }
    inline void SetOutputs(Aws::Vector<GuardrailOutputContent>&& value) { m_outputs = std::move(value); }
    inline ApplyGuardrailResult& WithOutputs(const Aws::Vector<GuardrailOutputContent>& value) { SetOutputs(value); return *this;}
    inline ApplyGuardrailResult& WithOutputs(Aws::Vector<GuardrailOutputContent>&& value) { SetOutputs(std::move(value)); return *this;}
    inline ApplyGuardrailResult& AddOutputs(const GuardrailOutputContent& value) { m_outputs.push_back(value); return *this; }
    inline ApplyGuardrailResult& AddOutputs(GuardrailOutputContent&& value) { m_outputs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The assessment details in the response from the guardrail.</p>
     */
    inline const Aws::Vector<GuardrailAssessment>& GetAssessments() const{ return m_assessments; }
    inline void SetAssessments(const Aws::Vector<GuardrailAssessment>& value) { m_assessments = value; }
    inline void SetAssessments(Aws::Vector<GuardrailAssessment>&& value) { m_assessments = std::move(value); }
    inline ApplyGuardrailResult& WithAssessments(const Aws::Vector<GuardrailAssessment>& value) { SetAssessments(value); return *this;}
    inline ApplyGuardrailResult& WithAssessments(Aws::Vector<GuardrailAssessment>&& value) { SetAssessments(std::move(value)); return *this;}
    inline ApplyGuardrailResult& AddAssessments(const GuardrailAssessment& value) { m_assessments.push_back(value); return *this; }
    inline ApplyGuardrailResult& AddAssessments(GuardrailAssessment&& value) { m_assessments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The guardrail coverage details in the apply guardrail response.</p>
     */
    inline const GuardrailCoverage& GetGuardrailCoverage() const{ return m_guardrailCoverage; }
    inline void SetGuardrailCoverage(const GuardrailCoverage& value) { m_guardrailCoverage = value; }
    inline void SetGuardrailCoverage(GuardrailCoverage&& value) { m_guardrailCoverage = std::move(value); }
    inline ApplyGuardrailResult& WithGuardrailCoverage(const GuardrailCoverage& value) { SetGuardrailCoverage(value); return *this;}
    inline ApplyGuardrailResult& WithGuardrailCoverage(GuardrailCoverage&& value) { SetGuardrailCoverage(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ApplyGuardrailResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ApplyGuardrailResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ApplyGuardrailResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    GuardrailUsage m_usage;

    GuardrailAction m_action;

    Aws::Vector<GuardrailOutputContent> m_outputs;

    Aws::Vector<GuardrailAssessment> m_assessments;

    GuardrailCoverage m_guardrailCoverage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
