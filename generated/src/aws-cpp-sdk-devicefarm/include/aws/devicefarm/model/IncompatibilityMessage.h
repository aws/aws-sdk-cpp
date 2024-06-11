/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/DeviceAttribute.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Represents information about incompatibility.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/IncompatibilityMessage">AWS
   * API Reference</a></p>
   */
  class IncompatibilityMessage
  {
  public:
    AWS_DEVICEFARM_API IncompatibilityMessage();
    AWS_DEVICEFARM_API IncompatibilityMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API IncompatibilityMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A message about the incompatibility.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline IncompatibilityMessage& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline IncompatibilityMessage& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline IncompatibilityMessage& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of incompatibility.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>ARN</p> </li> <li> <p>FORM_FACTOR (for example, phone or tablet)</p> </li>
     * <li> <p>MANUFACTURER</p> </li> <li> <p>PLATFORM (for example, Android or
     * iOS)</p> </li> <li> <p>REMOTE_ACCESS_ENABLED</p> </li> <li>
     * <p>APPIUM_VERSION</p> </li> </ul>
     */
    inline const DeviceAttribute& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const DeviceAttribute& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(DeviceAttribute&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline IncompatibilityMessage& WithType(const DeviceAttribute& value) { SetType(value); return *this;}
    inline IncompatibilityMessage& WithType(DeviceAttribute&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    DeviceAttribute m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
