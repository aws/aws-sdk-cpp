/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-runtime/model/GuardrailAssessment.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>A Top level guardrail trace object. For more information, see
   * <a>ConverseTrace</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/GuardrailTraceAssessment">AWS
   * API Reference</a></p>
   */
  class GuardrailTraceAssessment
  {
  public:
    AWS_BEDROCKRUNTIME_API GuardrailTraceAssessment();
    AWS_BEDROCKRUNTIME_API GuardrailTraceAssessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API GuardrailTraceAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The output from the model.</p>
     */
    inline const Aws::Vector<Aws::String>& GetModelOutput() const{ return m_modelOutput; }
    inline bool ModelOutputHasBeenSet() const { return m_modelOutputHasBeenSet; }
    inline void SetModelOutput(const Aws::Vector<Aws::String>& value) { m_modelOutputHasBeenSet = true; m_modelOutput = value; }
    inline void SetModelOutput(Aws::Vector<Aws::String>&& value) { m_modelOutputHasBeenSet = true; m_modelOutput = std::move(value); }
    inline GuardrailTraceAssessment& WithModelOutput(const Aws::Vector<Aws::String>& value) { SetModelOutput(value); return *this;}
    inline GuardrailTraceAssessment& WithModelOutput(Aws::Vector<Aws::String>&& value) { SetModelOutput(std::move(value)); return *this;}
    inline GuardrailTraceAssessment& AddModelOutput(const Aws::String& value) { m_modelOutputHasBeenSet = true; m_modelOutput.push_back(value); return *this; }
    inline GuardrailTraceAssessment& AddModelOutput(Aws::String&& value) { m_modelOutputHasBeenSet = true; m_modelOutput.push_back(std::move(value)); return *this; }
    inline GuardrailTraceAssessment& AddModelOutput(const char* value) { m_modelOutputHasBeenSet = true; m_modelOutput.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The input assessment.</p>
     */
    inline const Aws::Map<Aws::String, GuardrailAssessment>& GetInputAssessment() const{ return m_inputAssessment; }
    inline bool InputAssessmentHasBeenSet() const { return m_inputAssessmentHasBeenSet; }
    inline void SetInputAssessment(const Aws::Map<Aws::String, GuardrailAssessment>& value) { m_inputAssessmentHasBeenSet = true; m_inputAssessment = value; }
    inline void SetInputAssessment(Aws::Map<Aws::String, GuardrailAssessment>&& value) { m_inputAssessmentHasBeenSet = true; m_inputAssessment = std::move(value); }
    inline GuardrailTraceAssessment& WithInputAssessment(const Aws::Map<Aws::String, GuardrailAssessment>& value) { SetInputAssessment(value); return *this;}
    inline GuardrailTraceAssessment& WithInputAssessment(Aws::Map<Aws::String, GuardrailAssessment>&& value) { SetInputAssessment(std::move(value)); return *this;}
    inline GuardrailTraceAssessment& AddInputAssessment(const Aws::String& key, const GuardrailAssessment& value) { m_inputAssessmentHasBeenSet = true; m_inputAssessment.emplace(key, value); return *this; }
    inline GuardrailTraceAssessment& AddInputAssessment(Aws::String&& key, const GuardrailAssessment& value) { m_inputAssessmentHasBeenSet = true; m_inputAssessment.emplace(std::move(key), value); return *this; }
    inline GuardrailTraceAssessment& AddInputAssessment(const Aws::String& key, GuardrailAssessment&& value) { m_inputAssessmentHasBeenSet = true; m_inputAssessment.emplace(key, std::move(value)); return *this; }
    inline GuardrailTraceAssessment& AddInputAssessment(Aws::String&& key, GuardrailAssessment&& value) { m_inputAssessmentHasBeenSet = true; m_inputAssessment.emplace(std::move(key), std::move(value)); return *this; }
    inline GuardrailTraceAssessment& AddInputAssessment(const char* key, GuardrailAssessment&& value) { m_inputAssessmentHasBeenSet = true; m_inputAssessment.emplace(key, std::move(value)); return *this; }
    inline GuardrailTraceAssessment& AddInputAssessment(const char* key, const GuardrailAssessment& value) { m_inputAssessmentHasBeenSet = true; m_inputAssessment.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>the output assessments.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<GuardrailAssessment>>& GetOutputAssessments() const{ return m_outputAssessments; }
    inline bool OutputAssessmentsHasBeenSet() const { return m_outputAssessmentsHasBeenSet; }
    inline void SetOutputAssessments(const Aws::Map<Aws::String, Aws::Vector<GuardrailAssessment>>& value) { m_outputAssessmentsHasBeenSet = true; m_outputAssessments = value; }
    inline void SetOutputAssessments(Aws::Map<Aws::String, Aws::Vector<GuardrailAssessment>>&& value) { m_outputAssessmentsHasBeenSet = true; m_outputAssessments = std::move(value); }
    inline GuardrailTraceAssessment& WithOutputAssessments(const Aws::Map<Aws::String, Aws::Vector<GuardrailAssessment>>& value) { SetOutputAssessments(value); return *this;}
    inline GuardrailTraceAssessment& WithOutputAssessments(Aws::Map<Aws::String, Aws::Vector<GuardrailAssessment>>&& value) { SetOutputAssessments(std::move(value)); return *this;}
    inline GuardrailTraceAssessment& AddOutputAssessments(const Aws::String& key, const Aws::Vector<GuardrailAssessment>& value) { m_outputAssessmentsHasBeenSet = true; m_outputAssessments.emplace(key, value); return *this; }
    inline GuardrailTraceAssessment& AddOutputAssessments(Aws::String&& key, const Aws::Vector<GuardrailAssessment>& value) { m_outputAssessmentsHasBeenSet = true; m_outputAssessments.emplace(std::move(key), value); return *this; }
    inline GuardrailTraceAssessment& AddOutputAssessments(const Aws::String& key, Aws::Vector<GuardrailAssessment>&& value) { m_outputAssessmentsHasBeenSet = true; m_outputAssessments.emplace(key, std::move(value)); return *this; }
    inline GuardrailTraceAssessment& AddOutputAssessments(Aws::String&& key, Aws::Vector<GuardrailAssessment>&& value) { m_outputAssessmentsHasBeenSet = true; m_outputAssessments.emplace(std::move(key), std::move(value)); return *this; }
    inline GuardrailTraceAssessment& AddOutputAssessments(const char* key, Aws::Vector<GuardrailAssessment>&& value) { m_outputAssessmentsHasBeenSet = true; m_outputAssessments.emplace(key, std::move(value)); return *this; }
    inline GuardrailTraceAssessment& AddOutputAssessments(const char* key, const Aws::Vector<GuardrailAssessment>& value) { m_outputAssessmentsHasBeenSet = true; m_outputAssessments.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_modelOutput;
    bool m_modelOutputHasBeenSet = false;

    Aws::Map<Aws::String, GuardrailAssessment> m_inputAssessment;
    bool m_inputAssessmentHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<GuardrailAssessment>> m_outputAssessments;
    bool m_outputAssessmentsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
