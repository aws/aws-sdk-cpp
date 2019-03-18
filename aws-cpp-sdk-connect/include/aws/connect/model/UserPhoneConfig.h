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
   * <p>A <code>UserPhoneConfig</code> object that contains information about the
   * user phone configuration settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UserPhoneConfig">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API UserPhoneConfig
  {
  public:
    UserPhoneConfig();
    UserPhoneConfig(Aws::Utils::Json::JsonView jsonValue);
    UserPhoneConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The phone type selected for the user, either Soft phone or Desk phone.</p>
     */
    inline const PhoneType& GetPhoneType() const{ return m_phoneType; }

    /**
     * <p>The phone type selected for the user, either Soft phone or Desk phone.</p>
     */
    inline bool PhoneTypeHasBeenSet() const { return m_phoneTypeHasBeenSet; }

    /**
     * <p>The phone type selected for the user, either Soft phone or Desk phone.</p>
     */
    inline void SetPhoneType(const PhoneType& value) { m_phoneTypeHasBeenSet = true; m_phoneType = value; }

    /**
     * <p>The phone type selected for the user, either Soft phone or Desk phone.</p>
     */
    inline void SetPhoneType(PhoneType&& value) { m_phoneTypeHasBeenSet = true; m_phoneType = std::move(value); }

    /**
     * <p>The phone type selected for the user, either Soft phone or Desk phone.</p>
     */
    inline UserPhoneConfig& WithPhoneType(const PhoneType& value) { SetPhoneType(value); return *this;}

    /**
     * <p>The phone type selected for the user, either Soft phone or Desk phone.</p>
     */
    inline UserPhoneConfig& WithPhoneType(PhoneType&& value) { SetPhoneType(std::move(value)); return *this;}


    /**
     * <p>The Auto accept setting for the user, Yes or No.</p>
     */
    inline bool GetAutoAccept() const{ return m_autoAccept; }

    /**
     * <p>The Auto accept setting for the user, Yes or No.</p>
     */
    inline bool AutoAcceptHasBeenSet() const { return m_autoAcceptHasBeenSet; }

    /**
     * <p>The Auto accept setting for the user, Yes or No.</p>
     */
    inline void SetAutoAccept(bool value) { m_autoAcceptHasBeenSet = true; m_autoAccept = value; }

    /**
     * <p>The Auto accept setting for the user, Yes or No.</p>
     */
    inline UserPhoneConfig& WithAutoAccept(bool value) { SetAutoAccept(value); return *this;}


    /**
     * <p>The After Call Work (ACW) timeout setting, in seconds, for the user.</p>
     */
    inline int GetAfterContactWorkTimeLimit() const{ return m_afterContactWorkTimeLimit; }

    /**
     * <p>The After Call Work (ACW) timeout setting, in seconds, for the user.</p>
     */
    inline bool AfterContactWorkTimeLimitHasBeenSet() const { return m_afterContactWorkTimeLimitHasBeenSet; }

    /**
     * <p>The After Call Work (ACW) timeout setting, in seconds, for the user.</p>
     */
    inline void SetAfterContactWorkTimeLimit(int value) { m_afterContactWorkTimeLimitHasBeenSet = true; m_afterContactWorkTimeLimit = value; }

    /**
     * <p>The After Call Work (ACW) timeout setting, in seconds, for the user.</p>
     */
    inline UserPhoneConfig& WithAfterContactWorkTimeLimit(int value) { SetAfterContactWorkTimeLimit(value); return *this;}


    /**
     * <p>The phone number for the user's desk phone.</p>
     */
    inline const Aws::String& GetDeskPhoneNumber() const{ return m_deskPhoneNumber; }

    /**
     * <p>The phone number for the user's desk phone.</p>
     */
    inline bool DeskPhoneNumberHasBeenSet() const { return m_deskPhoneNumberHasBeenSet; }

    /**
     * <p>The phone number for the user's desk phone.</p>
     */
    inline void SetDeskPhoneNumber(const Aws::String& value) { m_deskPhoneNumberHasBeenSet = true; m_deskPhoneNumber = value; }

    /**
     * <p>The phone number for the user's desk phone.</p>
     */
    inline void SetDeskPhoneNumber(Aws::String&& value) { m_deskPhoneNumberHasBeenSet = true; m_deskPhoneNumber = std::move(value); }

    /**
     * <p>The phone number for the user's desk phone.</p>
     */
    inline void SetDeskPhoneNumber(const char* value) { m_deskPhoneNumberHasBeenSet = true; m_deskPhoneNumber.assign(value); }

    /**
     * <p>The phone number for the user's desk phone.</p>
     */
    inline UserPhoneConfig& WithDeskPhoneNumber(const Aws::String& value) { SetDeskPhoneNumber(value); return *this;}

    /**
     * <p>The phone number for the user's desk phone.</p>
     */
    inline UserPhoneConfig& WithDeskPhoneNumber(Aws::String&& value) { SetDeskPhoneNumber(std::move(value)); return *this;}

    /**
     * <p>The phone number for the user's desk phone.</p>
     */
    inline UserPhoneConfig& WithDeskPhoneNumber(const char* value) { SetDeskPhoneNumber(value); return *this;}

  private:

    PhoneType m_phoneType;
    bool m_phoneTypeHasBeenSet;

    bool m_autoAccept;
    bool m_autoAcceptHasBeenSet;

    int m_afterContactWorkTimeLimit;
    bool m_afterContactWorkTimeLimitHasBeenSet;

    Aws::String m_deskPhoneNumber;
    bool m_deskPhoneNumberHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
