﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/InputLambdaProcessor.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>For a SQL-based Kinesis Data Analytics application, describes a processor
   * that is used to preprocess the records in the stream before being processed by
   * your application code. Currently, the only input processor available is <a
   * href="https://docs.aws.amazon.com/lambda/">Amazon Lambda</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/InputProcessingConfiguration">AWS
   * API Reference</a></p>
   */
  class InputProcessingConfiguration
  {
  public:
    AWS_KINESISANALYTICSV2_API InputProcessingConfiguration() = default;
    AWS_KINESISANALYTICSV2_API InputProcessingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API InputProcessingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a>InputLambdaProcessor</a> that is used to preprocess the records in the
     * stream before being processed by your application code.</p>
     */
    inline const InputLambdaProcessor& GetInputLambdaProcessor() const { return m_inputLambdaProcessor; }
    inline bool InputLambdaProcessorHasBeenSet() const { return m_inputLambdaProcessorHasBeenSet; }
    template<typename InputLambdaProcessorT = InputLambdaProcessor>
    void SetInputLambdaProcessor(InputLambdaProcessorT&& value) { m_inputLambdaProcessorHasBeenSet = true; m_inputLambdaProcessor = std::forward<InputLambdaProcessorT>(value); }
    template<typename InputLambdaProcessorT = InputLambdaProcessor>
    InputProcessingConfiguration& WithInputLambdaProcessor(InputLambdaProcessorT&& value) { SetInputLambdaProcessor(std::forward<InputLambdaProcessorT>(value)); return *this;}
    ///@}
  private:

    InputLambdaProcessor m_inputLambdaProcessor;
    bool m_inputLambdaProcessorHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
