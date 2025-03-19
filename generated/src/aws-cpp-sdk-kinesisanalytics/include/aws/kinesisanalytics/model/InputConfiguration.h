/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalytics/model/InputStartingPositionConfiguration.h>
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
   * <p>When you start your application, you provide this configuration, which
   * identifies the input source and the point in the input source at which you want
   * the application to start processing records.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/InputConfiguration">AWS
   * API Reference</a></p>
   */
  class InputConfiguration
  {
  public:
    AWS_KINESISANALYTICS_API InputConfiguration() = default;
    AWS_KINESISANALYTICS_API InputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API InputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Input source ID. You can get this ID by calling the <a
     * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
     * operation.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    InputConfiguration& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Point at which you want the application to start processing records from the
     * streaming source.</p>
     */
    inline const InputStartingPositionConfiguration& GetInputStartingPositionConfiguration() const { return m_inputStartingPositionConfiguration; }
    inline bool InputStartingPositionConfigurationHasBeenSet() const { return m_inputStartingPositionConfigurationHasBeenSet; }
    template<typename InputStartingPositionConfigurationT = InputStartingPositionConfiguration>
    void SetInputStartingPositionConfiguration(InputStartingPositionConfigurationT&& value) { m_inputStartingPositionConfigurationHasBeenSet = true; m_inputStartingPositionConfiguration = std::forward<InputStartingPositionConfigurationT>(value); }
    template<typename InputStartingPositionConfigurationT = InputStartingPositionConfiguration>
    InputConfiguration& WithInputStartingPositionConfiguration(InputStartingPositionConfigurationT&& value) { SetInputStartingPositionConfiguration(std::forward<InputStartingPositionConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    InputStartingPositionConfiguration m_inputStartingPositionConfiguration;
    bool m_inputStartingPositionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
