/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/snow-device-management/model/InstanceStateName.h>
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
namespace SnowDeviceManagement
{
namespace Model
{

  /**
   * <p>The description of the current state of an instance.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snow-device-management-2021-08-04/InstanceState">AWS
   * API Reference</a></p>
   */
  class InstanceState
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API InstanceState();
    AWS_SNOWDEVICEMANAGEMENT_API InstanceState(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API InstanceState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWDEVICEMANAGEMENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The state of the instance as a 16-bit unsigned integer. </p> <p>The high byte
     * is all of the bits between 2^8 and (2^16)-1, which equals decimal values between
     * 256 and 65,535. These numerical values are used for internal purposes and should
     * be ignored. </p> <p>The low byte is all of the bits between 2^0 and (2^8)-1,
     * which equals decimal values between 0 and 255. </p> <p>The valid values for the
     * instance state code are all in the range of the low byte. These values are: </p>
     * <ul> <li> <p> <code>0</code> : <code>pending</code> </p> </li> <li> <p>
     * <code>16</code> : <code>running</code> </p> </li> <li> <p> <code>32</code> :
     * <code>shutting-down</code> </p> </li> <li> <p> <code>48</code> :
     * <code>terminated</code> </p> </li> <li> <p> <code>64</code> :
     * <code>stopping</code> </p> </li> <li> <p> <code>80</code> : <code>stopped</code>
     * </p> </li> </ul> <p>You can ignore the high byte value by zeroing out all of the
     * bits above 2^8 or 256 in decimal. </p>
     */
    inline int GetCode() const{ return m_code; }

    /**
     * <p>The state of the instance as a 16-bit unsigned integer. </p> <p>The high byte
     * is all of the bits between 2^8 and (2^16)-1, which equals decimal values between
     * 256 and 65,535. These numerical values are used for internal purposes and should
     * be ignored. </p> <p>The low byte is all of the bits between 2^0 and (2^8)-1,
     * which equals decimal values between 0 and 255. </p> <p>The valid values for the
     * instance state code are all in the range of the low byte. These values are: </p>
     * <ul> <li> <p> <code>0</code> : <code>pending</code> </p> </li> <li> <p>
     * <code>16</code> : <code>running</code> </p> </li> <li> <p> <code>32</code> :
     * <code>shutting-down</code> </p> </li> <li> <p> <code>48</code> :
     * <code>terminated</code> </p> </li> <li> <p> <code>64</code> :
     * <code>stopping</code> </p> </li> <li> <p> <code>80</code> : <code>stopped</code>
     * </p> </li> </ul> <p>You can ignore the high byte value by zeroing out all of the
     * bits above 2^8 or 256 in decimal. </p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The state of the instance as a 16-bit unsigned integer. </p> <p>The high byte
     * is all of the bits between 2^8 and (2^16)-1, which equals decimal values between
     * 256 and 65,535. These numerical values are used for internal purposes and should
     * be ignored. </p> <p>The low byte is all of the bits between 2^0 and (2^8)-1,
     * which equals decimal values between 0 and 255. </p> <p>The valid values for the
     * instance state code are all in the range of the low byte. These values are: </p>
     * <ul> <li> <p> <code>0</code> : <code>pending</code> </p> </li> <li> <p>
     * <code>16</code> : <code>running</code> </p> </li> <li> <p> <code>32</code> :
     * <code>shutting-down</code> </p> </li> <li> <p> <code>48</code> :
     * <code>terminated</code> </p> </li> <li> <p> <code>64</code> :
     * <code>stopping</code> </p> </li> <li> <p> <code>80</code> : <code>stopped</code>
     * </p> </li> </ul> <p>You can ignore the high byte value by zeroing out all of the
     * bits above 2^8 or 256 in decimal. </p>
     */
    inline void SetCode(int value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The state of the instance as a 16-bit unsigned integer. </p> <p>The high byte
     * is all of the bits between 2^8 and (2^16)-1, which equals decimal values between
     * 256 and 65,535. These numerical values are used for internal purposes and should
     * be ignored. </p> <p>The low byte is all of the bits between 2^0 and (2^8)-1,
     * which equals decimal values between 0 and 255. </p> <p>The valid values for the
     * instance state code are all in the range of the low byte. These values are: </p>
     * <ul> <li> <p> <code>0</code> : <code>pending</code> </p> </li> <li> <p>
     * <code>16</code> : <code>running</code> </p> </li> <li> <p> <code>32</code> :
     * <code>shutting-down</code> </p> </li> <li> <p> <code>48</code> :
     * <code>terminated</code> </p> </li> <li> <p> <code>64</code> :
     * <code>stopping</code> </p> </li> <li> <p> <code>80</code> : <code>stopped</code>
     * </p> </li> </ul> <p>You can ignore the high byte value by zeroing out all of the
     * bits above 2^8 or 256 in decimal. </p>
     */
    inline InstanceState& WithCode(int value) { SetCode(value); return *this;}


    /**
     * <p>The current state of the instance.</p>
     */
    inline const InstanceStateName& GetName() const{ return m_name; }

    /**
     * <p>The current state of the instance.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The current state of the instance.</p>
     */
    inline void SetName(const InstanceStateName& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The current state of the instance.</p>
     */
    inline void SetName(InstanceStateName&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The current state of the instance.</p>
     */
    inline InstanceState& WithName(const InstanceStateName& value) { SetName(value); return *this;}

    /**
     * <p>The current state of the instance.</p>
     */
    inline InstanceState& WithName(InstanceStateName&& value) { SetName(std::move(value)); return *this;}

  private:

    int m_code;
    bool m_codeHasBeenSet = false;

    InstanceStateName m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
