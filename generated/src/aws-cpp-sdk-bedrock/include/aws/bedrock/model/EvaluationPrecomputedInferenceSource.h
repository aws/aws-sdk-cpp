/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>A summary of a model used for a model evaluation job where you provide your
   * own inference response data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/EvaluationPrecomputedInferenceSource">AWS
   * API Reference</a></p>
   */
  class EvaluationPrecomputedInferenceSource
  {
  public:
    AWS_BEDROCK_API EvaluationPrecomputedInferenceSource() = default;
    AWS_BEDROCK_API EvaluationPrecomputedInferenceSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API EvaluationPrecomputedInferenceSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A label that identifies a model used in a model evaluation job where you
     * provide your own inference response data.</p>
     */
    inline const Aws::String& GetInferenceSourceIdentifier() const { return m_inferenceSourceIdentifier; }
    inline bool InferenceSourceIdentifierHasBeenSet() const { return m_inferenceSourceIdentifierHasBeenSet; }
    template<typename InferenceSourceIdentifierT = Aws::String>
    void SetInferenceSourceIdentifier(InferenceSourceIdentifierT&& value) { m_inferenceSourceIdentifierHasBeenSet = true; m_inferenceSourceIdentifier = std::forward<InferenceSourceIdentifierT>(value); }
    template<typename InferenceSourceIdentifierT = Aws::String>
    EvaluationPrecomputedInferenceSource& WithInferenceSourceIdentifier(InferenceSourceIdentifierT&& value) { SetInferenceSourceIdentifier(std::forward<InferenceSourceIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inferenceSourceIdentifier;
    bool m_inferenceSourceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
