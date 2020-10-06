/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/InputLambdaProcessorDescription.h>
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
   * <p>For a SQL-based Kinesis Data Analytics application, provides the
   * configuration information about an input processor. Currently, the only input
   * processor available is <a href="https://docs.aws.amazon.com/lambda/">AWS
   * Lambda</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/InputProcessingConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API InputProcessingConfigurationDescription
  {
  public:
    InputProcessingConfigurationDescription();
    InputProcessingConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    InputProcessingConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides configuration information about the associated
     * <a>InputLambdaProcessorDescription</a> </p>
     */
    inline const InputLambdaProcessorDescription& GetInputLambdaProcessorDescription() const{ return m_inputLambdaProcessorDescription; }

    /**
     * <p>Provides configuration information about the associated
     * <a>InputLambdaProcessorDescription</a> </p>
     */
    inline bool InputLambdaProcessorDescriptionHasBeenSet() const { return m_inputLambdaProcessorDescriptionHasBeenSet; }

    /**
     * <p>Provides configuration information about the associated
     * <a>InputLambdaProcessorDescription</a> </p>
     */
    inline void SetInputLambdaProcessorDescription(const InputLambdaProcessorDescription& value) { m_inputLambdaProcessorDescriptionHasBeenSet = true; m_inputLambdaProcessorDescription = value; }

    /**
     * <p>Provides configuration information about the associated
     * <a>InputLambdaProcessorDescription</a> </p>
     */
    inline void SetInputLambdaProcessorDescription(InputLambdaProcessorDescription&& value) { m_inputLambdaProcessorDescriptionHasBeenSet = true; m_inputLambdaProcessorDescription = std::move(value); }

    /**
     * <p>Provides configuration information about the associated
     * <a>InputLambdaProcessorDescription</a> </p>
     */
    inline InputProcessingConfigurationDescription& WithInputLambdaProcessorDescription(const InputLambdaProcessorDescription& value) { SetInputLambdaProcessorDescription(value); return *this;}

    /**
     * <p>Provides configuration information about the associated
     * <a>InputLambdaProcessorDescription</a> </p>
     */
    inline InputProcessingConfigurationDescription& WithInputLambdaProcessorDescription(InputLambdaProcessorDescription&& value) { SetInputLambdaProcessorDescription(std::move(value)); return *this;}

  private:

    InputLambdaProcessorDescription m_inputLambdaProcessorDescription;
    bool m_inputLambdaProcessorDescriptionHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
