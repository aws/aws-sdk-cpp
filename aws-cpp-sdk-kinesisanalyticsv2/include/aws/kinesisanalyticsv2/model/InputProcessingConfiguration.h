/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>For an SQL-based Amazon Kinesis Data Analytics application, describes a
   * processor that is used to preprocess the records in the stream before being
   * processed by your application code. Currently, the only input processor
   * available is <a href="https://aws.amazon.com/documentation/lambda/">AWS
   * Lambda</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/InputProcessingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API InputProcessingConfiguration
  {
  public:
    InputProcessingConfiguration();
    InputProcessingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    InputProcessingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <a>InputLambdaProcessor</a> that is used to preprocess the records in the
     * stream before being processed by your application code.</p>
     */
    inline const InputLambdaProcessor& GetInputLambdaProcessor() const{ return m_inputLambdaProcessor; }

    /**
     * <p>The <a>InputLambdaProcessor</a> that is used to preprocess the records in the
     * stream before being processed by your application code.</p>
     */
    inline bool InputLambdaProcessorHasBeenSet() const { return m_inputLambdaProcessorHasBeenSet; }

    /**
     * <p>The <a>InputLambdaProcessor</a> that is used to preprocess the records in the
     * stream before being processed by your application code.</p>
     */
    inline void SetInputLambdaProcessor(const InputLambdaProcessor& value) { m_inputLambdaProcessorHasBeenSet = true; m_inputLambdaProcessor = value; }

    /**
     * <p>The <a>InputLambdaProcessor</a> that is used to preprocess the records in the
     * stream before being processed by your application code.</p>
     */
    inline void SetInputLambdaProcessor(InputLambdaProcessor&& value) { m_inputLambdaProcessorHasBeenSet = true; m_inputLambdaProcessor = std::move(value); }

    /**
     * <p>The <a>InputLambdaProcessor</a> that is used to preprocess the records in the
     * stream before being processed by your application code.</p>
     */
    inline InputProcessingConfiguration& WithInputLambdaProcessor(const InputLambdaProcessor& value) { SetInputLambdaProcessor(value); return *this;}

    /**
     * <p>The <a>InputLambdaProcessor</a> that is used to preprocess the records in the
     * stream before being processed by your application code.</p>
     */
    inline InputProcessingConfiguration& WithInputLambdaProcessor(InputLambdaProcessor&& value) { SetInputLambdaProcessor(std::move(value)); return *this;}

  private:

    InputLambdaProcessor m_inputLambdaProcessor;
    bool m_inputLambdaProcessorHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
