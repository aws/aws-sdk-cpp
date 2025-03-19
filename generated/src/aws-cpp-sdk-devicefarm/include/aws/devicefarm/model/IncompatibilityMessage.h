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
    AWS_DEVICEFARM_API IncompatibilityMessage() = default;
    AWS_DEVICEFARM_API IncompatibilityMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API IncompatibilityMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A message about the incompatibility.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    IncompatibilityMessage& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of incompatibility.</p> <p>Allowed values include:</p> <ul> <li>
     * <p>ARN</p> </li> <li> <p>FORM_FACTOR (for example, phone or tablet)</p> </li>
     * <li> <p>MANUFACTURER</p> </li> <li> <p>PLATFORM (for example, Android or
     * iOS)</p> </li> <li> <p>REMOTE_ACCESS_ENABLED</p> </li> <li>
     * <p>APPIUM_VERSION</p> </li> </ul>
     */
    inline DeviceAttribute GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DeviceAttribute value) { m_typeHasBeenSet = true; m_type = value; }
    inline IncompatibilityMessage& WithType(DeviceAttribute value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    DeviceAttribute m_type{DeviceAttribute::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
