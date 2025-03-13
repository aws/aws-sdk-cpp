/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/model/InputLambdaProcessorDescription.h>
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
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>Provides configuration information about an input processor. Currently, the
   * only input processor available is <a
   * href="https://docs.aws.amazon.com/lambda/">AWS Lambda</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/InputProcessingConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class InputProcessingConfigurationDescription
  {
  public:
    AWS_KINESISANALYTICS_API InputProcessingConfigurationDescription() = default;
    AWS_KINESISANALYTICS_API InputProcessingConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API InputProcessingConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides configuration information about the associated <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputLambdaProcessorDescription.html">InputLambdaProcessorDescription</a>.</p>
     */
    inline const InputLambdaProcessorDescription& GetInputLambdaProcessorDescription() const { return m_inputLambdaProcessorDescription; }
    inline bool InputLambdaProcessorDescriptionHasBeenSet() const { return m_inputLambdaProcessorDescriptionHasBeenSet; }
    template<typename InputLambdaProcessorDescriptionT = InputLambdaProcessorDescription>
    void SetInputLambdaProcessorDescription(InputLambdaProcessorDescriptionT&& value) { m_inputLambdaProcessorDescriptionHasBeenSet = true; m_inputLambdaProcessorDescription = std::forward<InputLambdaProcessorDescriptionT>(value); }
    template<typename InputLambdaProcessorDescriptionT = InputLambdaProcessorDescription>
    InputProcessingConfigurationDescription& WithInputLambdaProcessorDescription(InputLambdaProcessorDescriptionT&& value) { SetInputLambdaProcessorDescription(std::forward<InputLambdaProcessorDescriptionT>(value)); return *this;}
    ///@}
  private:

    InputLambdaProcessorDescription m_inputLambdaProcessorDescription;
    bool m_inputLambdaProcessorDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
