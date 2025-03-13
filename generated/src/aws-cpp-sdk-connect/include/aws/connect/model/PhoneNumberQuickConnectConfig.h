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
    AWS_CONNECT_API PhoneNumberQuickConnectConfig() = default;
    AWS_CONNECT_API PhoneNumberQuickConnectConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API PhoneNumberQuickConnectConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The phone number in E.164 format.</p>
     */
    inline const Aws::String& GetPhoneNumber() const { return m_phoneNumber; }
    inline bool PhoneNumberHasBeenSet() const { return m_phoneNumberHasBeenSet; }
    template<typename PhoneNumberT = Aws::String>
    void SetPhoneNumber(PhoneNumberT&& value) { m_phoneNumberHasBeenSet = true; m_phoneNumber = std::forward<PhoneNumberT>(value); }
    template<typename PhoneNumberT = Aws::String>
    PhoneNumberQuickConnectConfig& WithPhoneNumber(PhoneNumberT&& value) { SetPhoneNumber(std::forward<PhoneNumberT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_phoneNumber;
    bool m_phoneNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
