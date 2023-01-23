/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains information about a phone number for a quick connect.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PhoneNumberQuickConnectConfig">AWS
   * API Reference</a></p>
   */
  class PhoneNumberQuickConnectConfig
  {
  public:
    AWS_CONNECT_API PhoneNumberQuickConnectConfig();
    AWS_CONNECT_API PhoneNumberQuickConnectConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API PhoneNumberQuickConnectConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The phone number in E.164 format.</p>
     */
    inline const Aws::String& GetPhoneNumber() const{ return m_phoneNumber; }

    /**
     * <p>The phone number in E.164 format.</p>
     */
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }

    /**
     * <p>The phone number in E.164 format.</p>
     */
    inline void SetPhoneNumber(const Aws::String& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = value; }

    /**
     * <p>The phone number in E.164 format.</p>
     */
    inline void SetPhoneNumber(Aws::String&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::move(value); }

    /**
     * <p>The phone number in E.164 format.</p>
     */
    inline void SetPhoneNumber(const char* value) { m_phoneNumberHasBeenSet = true; m_phoneNumber.assign(value); }

    /**
     * <p>The phone number in E.164 format.</p>
     */
    inline PhoneNumberQuickConnectConfig& WithPhoneNumber(const Aws::String& value) { SetPhoneNumber(value); return *this;}

    /**
     * <p>The phone number in E.164 format.</p>
     */
    inline PhoneNumberQuickConnectConfig& WithPhoneNumber(Aws::String&& value) { SetPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number in E.164 format.</p>
     */
    inline PhoneNumberQuickConnectConfig& WithPhoneNumber(const char* value) { SetPhoneNumber(value); return *this;}

  private:

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
