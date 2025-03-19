/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/InputStartingPositionConfiguration.h>
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
   * <p>Describes the starting parameters for a SQL-based Kinesis Data Analytics
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/SqlRunConfiguration">AWS
   * API Reference</a></p>
   */
  class SqlRunConfiguration
  {
  public:
    AWS_KINESISANALYTICSV2_API SqlRunConfiguration() = default;
    AWS_KINESISANALYTICSV2_API SqlRunConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API SqlRunConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The input source ID. You can get this ID by calling the
     * <a>DescribeApplication</a> operation. </p>
     */
    inline const Aws::String& GetInputId() const { return m_inputId; }
    inline bool InputIdHasBeenSet() const { return m_inputIdHasBeenSet; }
    template<typename InputIdT = Aws::String>
    void SetInputId(InputIdT&& value) { m_inputIdHasBeenSet = true; m_inputId = std::forward<InputIdT>(value); }
    template<typename InputIdT = Aws::String>
    SqlRunConfiguration& WithInputId(InputIdT&& value) { SetInputId(std::forward<InputIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The point at which you want the application to start processing records from
     * the streaming source. </p>
     */
    inline const InputStartingPositionConfiguration& GetInputStartingPositionConfiguration() const { return m_inputStartingPositionConfiguration; }
    inline bool InputStartingPositionConfigurationHasBeenSet() const { return m_inputStartingPositionConfigurationHasBeenSet; }
    template<typename InputStartingPositionConfigurationT = InputStartingPositionConfiguration>
    void SetInputStartingPositionConfiguration(InputStartingPositionConfigurationT&& value) { m_inputStartingPositionConfigurationHasBeenSet = true; m_inputStartingPositionConfiguration = std::forward<InputStartingPositionConfigurationT>(value); }
    template<typename InputStartingPositionConfigurationT = InputStartingPositionConfiguration>
    SqlRunConfiguration& WithInputStartingPositionConfiguration(InputStartingPositionConfigurationT&& value) { SetInputStartingPositionConfiguration(std::forward<InputStartingPositionConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inputId;
    bool m_inputIdHasBeenSet = false;

    InputStartingPositionConfiguration m_inputStartingPositionConfiguration;
    bool m_inputStartingPositionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
