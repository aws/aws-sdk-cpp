/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/PhoneType.h>
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
   * <p>Contains information about the phone configuration settings for a
   * user.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UserPhoneConfig">AWS
   * API Reference</a></p>
   */
  class UserPhoneConfig
  {
  public:
    AWS_CONNECT_API UserPhoneConfig() = default;
    AWS_CONNECT_API UserPhoneConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UserPhoneConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The phone type.</p>
     */
    inline PhoneType GetPhoneType() const { return m_phoneType; }
    inline bool PhoneTypeHasBeenSet() const { return m_phoneTypeHasBeenSet; }
    inline void SetPhoneType(PhoneType value) { m_phoneTypeHasBeenSet = true; m_phoneType = value; }
    inline UserPhoneConfig& WithPhoneType(PhoneType value) { SetPhoneType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Auto accept setting.</p>
     */
    inline bool GetAutoAccept() const { return m_autoAccept; }
    inline bool AutoAcceptHasBeenSet() const { return m_autoAcceptHasBeenSet; }
    inline void SetAutoAccept(bool value) { m_autoAcceptHasBeenSet = true; m_autoAccept = value; }
    inline UserPhoneConfig& WithAutoAccept(bool value) { SetAutoAccept(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The After Call Work (ACW) timeout setting, in seconds. This parameter has a
     * minimum value of 0 and a maximum value of 2,000,000 seconds (24 days). Enter 0
     * if you don't want to allocate a specific amount of ACW time. It essentially
     * means an indefinite amount of time. When the conversation ends, ACW starts; the
     * agent must choose Close contact to end ACW. </p>  <p>When returned by a
     * <code>SearchUsers</code> call, <code>AfterContactWorkTimeLimit</code> is
     * returned in milliseconds. </p> 
     */
    inline int GetAfterContactWorkTimeLimit() const { return m_afterContactWorkTimeLimit; }
    inline bool AfterContactWorkTimeLimitHasBeenSet() const { return m_afterContactWorkTimeLimitHasBeenSet; }
    inline void SetAfterContactWorkTimeLimit(int value) { m_afterContactWorkTimeLimitHasBeenSet = true; m_afterContactWorkTimeLimit = value; }
    inline UserPhoneConfig& WithAfterContactWorkTimeLimit(int value) { SetAfterContactWorkTimeLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The phone number for the user's desk phone.</p>
     */
    inline const Aws::String& GetDeskPhoneNumber() const { return m_deskPhoneNumber; }
    inline bool DeskPhoneNumberHasBeenSet() const { return m_deskPhoneNumberHasBeenSet; }
    template<typename DeskPhoneNumberT = Aws::String>
    void SetDeskPhoneNumber(DeskPhoneNumberT&& value) { m_deskPhoneNumberHasBeenSet = true; m_deskPhoneNumber = std::forward<DeskPhoneNumberT>(value); }
    template<typename DeskPhoneNumberT = Aws::String>
    UserPhoneConfig& WithDeskPhoneNumber(DeskPhoneNumberT&& value) { SetDeskPhoneNumber(std::forward<DeskPhoneNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The persistent connection setting for the user.</p>
     */
    inline bool GetPersistentConnection() const { return m_persistentConnection; }
    inline bool PersistentConnectionHasBeenSet() const { return m_persistentConnectionHasBeenSet; }
    inline void SetPersistentConnection(bool value) { m_persistentConnectionHasBeenSet = true; m_persistentConnection = value; }
    inline UserPhoneConfig& WithPersistentConnection(bool value) { SetPersistentConnection(value); return *this;}
    ///@}
  private:

    PhoneType m_phoneType{PhoneType::NOT_SET};
    bool m_phoneTypeHasBeenSet = false;

    bool m_autoAccept{false};
    bool m_autoAcceptHasBeenSet = false;

    int m_afterContactWorkTimeLimit{0};
    bool m_afterContactWorkTimeLimitHasBeenSet = false;

    Aws::String m_deskPhoneNumber;
    bool m_deskPhoneNumberHasBeenSet = false;

    bool m_persistentConnection{false};
    bool m_persistentConnectionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
