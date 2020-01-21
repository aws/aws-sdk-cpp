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
#include <aws/iotevents/IoTEvents_EXPORTS.h>
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
namespace IoTEvents
{
namespace Model
{

  /**
   * <p>Sends an AWS IoT Events input, passing in information about the detector
   * model instance and the event that triggered the action.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/IotEventsAction">AWS
   * API Reference</a></p>
   */
  class AWS_IOTEVENTS_API IotEventsAction
  {
  public:
    IotEventsAction();
    IotEventsAction(Aws::Utils::Json::JsonView jsonValue);
    IotEventsAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the AWS IoT Events input where the data is sent.</p>
     */
    inline const Aws::String& GetInputName() const{ return m_inputName; }

    /**
     * <p>The name of the AWS IoT Events input where the data is sent.</p>
     */
    inline bool InputNameHasBeenSet() const { return m_inputNameHasBeenSet; }

    /**
     * <p>The name of the AWS IoT Events input where the data is sent.</p>
     */
    inline void SetInputName(const Aws::String& value) { m_inputNameHasBeenSet = true; m_inputName = value; }

    /**
     * <p>The name of the AWS IoT Events input where the data is sent.</p>
     */
    inline void SetInputName(Aws::String&& value) { m_inputNameHasBeenSet = true; m_inputName = std::move(value); }

    /**
     * <p>The name of the AWS IoT Events input where the data is sent.</p>
     */
    inline void SetInputName(const char* value) { m_inputNameHasBeenSet = true; m_inputName.assign(value); }

    /**
     * <p>The name of the AWS IoT Events input where the data is sent.</p>
     */
    inline IotEventsAction& WithInputName(const Aws::String& value) { SetInputName(value); return *this;}

    /**
     * <p>The name of the AWS IoT Events input where the data is sent.</p>
     */
    inline IotEventsAction& WithInputName(Aws::String&& value) { SetInputName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS IoT Events input where the data is sent.</p>
     */
    inline IotEventsAction& WithInputName(const char* value) { SetInputName(value); return *this;}

  private:

    Aws::String m_inputName;
    bool m_inputNameHasBeenSet;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
