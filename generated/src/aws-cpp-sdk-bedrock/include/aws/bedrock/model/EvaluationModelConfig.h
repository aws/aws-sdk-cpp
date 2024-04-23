/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/EvaluationBedrockModel.h>
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
   * <p>Defines the models used in the model evaluation job.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/EvaluationModelConfig">AWS
   * API Reference</a></p>
   */
  class EvaluationModelConfig
  {
  public:
    AWS_BEDROCK_API EvaluationModelConfig();
    AWS_BEDROCK_API EvaluationModelConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API EvaluationModelConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines the Amazon Bedrock model and inference parameters you want used.</p>
     */
    inline const EvaluationBedrockModel& GetBedrockModel() const{ return m_bedrockModel; }

    /**
     * <p>Defines the Amazon Bedrock model and inference parameters you want used.</p>
     */
    inline bool BedrockModelHasBeenSet() const { return m_bedrockModelHasBeenSet; }

    /**
     * <p>Defines the Amazon Bedrock model and inference parameters you want used.</p>
     */
    inline void SetBedrockModel(const EvaluationBedrockModel& value) { m_bedrockModelHasBeenSet = true; m_bedrockModel = value; }

    /**
     * <p>Defines the Amazon Bedrock model and inference parameters you want used.</p>
     */
    inline void SetBedrockModel(EvaluationBedrockModel&& value) { m_bedrockModelHasBeenSet = true; m_bedrockModel = std::move(value); }

    /**
     * <p>Defines the Amazon Bedrock model and inference parameters you want used.</p>
     */
    inline EvaluationModelConfig& WithBedrockModel(const EvaluationBedrockModel& value) { SetBedrockModel(value); return *this;}

    /**
     * <p>Defines the Amazon Bedrock model and inference parameters you want used.</p>
     */
    inline EvaluationModelConfig& WithBedrockModel(EvaluationBedrockModel&& value) { SetBedrockModel(std::move(value)); return *this;}

  private:

    EvaluationBedrockModel m_bedrockModel;
    bool m_bedrockModelHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
