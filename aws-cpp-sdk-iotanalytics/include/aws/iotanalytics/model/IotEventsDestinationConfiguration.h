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
    AWS_IOTANALYTICS_API IotEventsDestinationConfiguration();
    AWS_IOTANALYTICS_API IotEventsDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API IotEventsDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the IoT Events input to which dataset contents are delivered.</p>
     */
    inline const Aws::String& GetInputName() const{ return m_inputName; }

    /**
     * <p>The name of the IoT Events input to which dataset contents are delivered.</p>
     */
    inline bool InputNameHasBeenSet() const { return m_inputNameHasBeenSet; }

    /**
     * <p>The name of the IoT Events input to which dataset contents are delivered.</p>
     */
    inline void SetInputName(const Aws::String& value) { m_inputNameHasBeenSet = true; m_inputName = value; }

    /**
     * <p>The name of the IoT Events input to which dataset contents are delivered.</p>
     */
    inline void SetInputName(Aws::String&& value) { m_inputNameHasBeenSet = true; m_inputName = std::move(value); }

    /**
     * <p>The name of the IoT Events input to which dataset contents are delivered.</p>
     */
    inline void SetInputName(const char* value) { m_inputNameHasBeenSet = true; m_inputName.assign(value); }

    /**
     * <p>The name of the IoT Events input to which dataset contents are delivered.</p>
     */
    inline IotEventsDestinationConfiguration& WithInputName(const Aws::String& value) { SetInputName(value); return *this;}

    /**
     * <p>The name of the IoT Events input to which dataset contents are delivered.</p>
     */
    inline IotEventsDestinationConfiguration& WithInputName(Aws::String&& value) { SetInputName(std::move(value)); return *this;}

    /**
     * <p>The name of the IoT Events input to which dataset contents are delivered.</p>
     */
    inline IotEventsDestinationConfiguration& WithInputName(const char* value) { SetInputName(value); return *this;}


    /**
     * <p>The ARN of the role that grants IoT Analytics permission to deliver dataset
     * contents to an IoT Events input.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the role that grants IoT Analytics permission to deliver dataset
     * contents to an IoT Events input.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the role that grants IoT Analytics permission to deliver dataset
     * contents to an IoT Events input.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the role that grants IoT Analytics permission to deliver dataset
     * contents to an IoT Events input.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the role that grants IoT Analytics permission to deliver dataset
     * contents to an IoT Events input.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the role that grants IoT Analytics permission to deliver dataset
     * contents to an IoT Events input.</p>
     */
    inline IotEventsDestinationConfiguration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the role that grants IoT Analytics permission to deliver dataset
     * contents to an IoT Events input.</p>
     */
    inline IotEventsDestinationConfiguration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the role that grants IoT Analytics permission to deliver dataset
     * contents to an IoT Events input.</p>
     */
    inline IotEventsDestinationConfiguration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_inputName;
    bool m_inputNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
