/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>Configuration information for delivery of dataset contents to IoT
   * Events.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/IotEventsDestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class IotEventsDestinationConfiguration
  {
  public:
    AWS_IOTANALYTICS_API IotEventsDestinationConfiguration() = default;
    AWS_IOTANALYTICS_API IotEventsDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API IotEventsDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the IoT Events input to which dataset contents are delivered.</p>
     */
    inline const Aws::String& GetInputName() const { return m_inputName; }
    inline bool InputNameHasBeenSet() const { return m_inputNameHasBeenSet; }
    template<typename InputNameT = Aws::String>
    void SetInputName(InputNameT&& value) { m_inputNameHasBeenSet = true; m_inputName = std::forward<InputNameT>(value); }
    template<typename InputNameT = Aws::String>
    IotEventsDestinationConfiguration& WithInputName(InputNameT&& value) { SetInputName(std::forward<InputNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the role that grants IoT Analytics permission to deliver dataset
     * contents to an IoT Events input.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    IotEventsDestinationConfiguration& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inputName;
    bool m_inputNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
