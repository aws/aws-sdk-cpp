/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/model/InputLambdaProcessorUpdate.h>
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
   * <p>Describes updates to an <a
   * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/InputProcessingConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class InputProcessingConfigurationUpdate
  {
  public:
    AWS_KINESISANALYTICS_API InputProcessingConfigurationUpdate() = default;
    AWS_KINESISANALYTICS_API InputProcessingConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API InputProcessingConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides update information for an <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputLambdaProcessor.html">InputLambdaProcessor</a>.</p>
     */
    inline const InputLambdaProcessorUpdate& GetInputLambdaProcessorUpdate() const { return m_inputLambdaProcessorUpdate; }
    inline bool InputLambdaProcessorUpdateHasBeenSet() const { return m_inputLambdaProcessorUpdateHasBeenSet; }
    template<typename InputLambdaProcessorUpdateT = InputLambdaProcessorUpdate>
    void SetInputLambdaProcessorUpdate(InputLambdaProcessorUpdateT&& value) { m_inputLambdaProcessorUpdateHasBeenSet = true; m_inputLambdaProcessorUpdate = std::forward<InputLambdaProcessorUpdateT>(value); }
    template<typename InputLambdaProcessorUpdateT = InputLambdaProcessorUpdate>
    InputProcessingConfigurationUpdate& WithInputLambdaProcessorUpdate(InputLambdaProcessorUpdateT&& value) { SetInputLambdaProcessorUpdate(std::forward<InputLambdaProcessorUpdateT>(value)); return *this;}
    ///@}
  private:

    InputLambdaProcessorUpdate m_inputLambdaProcessorUpdate;
    bool m_inputLambdaProcessorUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
