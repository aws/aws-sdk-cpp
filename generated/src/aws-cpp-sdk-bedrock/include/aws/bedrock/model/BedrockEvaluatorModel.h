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
   * <p>The evaluator model used in knowledge base evaluation job or in model
   * evaluation job that use a model as judge. This model computes all evaluation
   * related metrics.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/BedrockEvaluatorModel">AWS
   * API Reference</a></p>
   */
  class BedrockEvaluatorModel
  {
  public:
    AWS_BEDROCK_API BedrockEvaluatorModel() = default;
    AWS_BEDROCK_API BedrockEvaluatorModel(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API BedrockEvaluatorModel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the evaluator model used used in knowledge
     * base evaluation job or in model evaluation job that use a model as judge.</p>
     */
    inline const Aws::String& GetModelIdentifier() const { return m_modelIdentifier; }
    inline bool ModelIdentifierHasBeenSet() const { return m_modelIdentifierHasBeenSet; }
    template<typename ModelIdentifierT = Aws::String>
    void SetModelIdentifier(ModelIdentifierT&& value) { m_modelIdentifierHasBeenSet = true; m_modelIdentifier = std::forward<ModelIdentifierT>(value); }
    template<typename ModelIdentifierT = Aws::String>
    BedrockEvaluatorModel& WithModelIdentifier(ModelIdentifierT&& value) { SetModelIdentifier(std::forward<ModelIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelIdentifier;
    bool m_modelIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
