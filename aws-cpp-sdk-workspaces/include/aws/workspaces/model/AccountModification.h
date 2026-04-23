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
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/DedicatedTenancyModificationStateEnum.h>
#include <aws/workspaces/model/DedicatedTenancySupportResultEnum.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes a modification to the configuration of bring your own license
   * (BYOL) for the specified account. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/AccountModification">AWS
   * API Reference</a></p>
   */
  class AWS_WORKSPACES_API AccountModification
  {
  public:
    AccountModification();
    AccountModification(Aws::Utils::Json::JsonView jsonValue);
    AccountModification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The state of the modification to the configuration of BYOL.</p>
     */
    inline const DedicatedTenancyModificationStateEnum& GetModificationState() const{ return m_modificationState; }

    /**
     * <p>The state of the modification to the configuration of BYOL.</p>
     */
    inline bool ModificationStateHasBeenSet() const { return m_modificationStateHasBeenSet; }

    /**
     * <p>The state of the modification to the configuration of BYOL.</p>
     */
    inline void SetModificationState(const DedicatedTenancyModificationStateEnum& value) { m_modificationStateHasBeenSet = true; m_modificationState = value; }

    /**
     * <p>The state of the modification to the configuration of BYOL.</p>
     */
    inline void SetModificationState(DedicatedTenancyModificationStateEnum&& value) { m_modificationStateHasBeenSet = true; m_modificationState = std::move(value); }

    /**
     * <p>The state of the modification to the configuration of BYOL.</p>
     */
    inline AccountModification& WithModificationState(const DedicatedTenancyModificationStateEnum& value) { SetModificationState(value); return *this;}

    /**
     * <p>The state of the modification to the configuration of BYOL.</p>
     */
    inline AccountModification& WithModificationState(DedicatedTenancyModificationStateEnum&& value) { SetModificationState(std::move(value)); return *this;}


    /**
     * <p>The status of BYOL (whether BYOL is being enabled or disabled).</p>
     */
    inline const DedicatedTenancySupportResultEnum& GetDedicatedTenancySupport() const{ return m_dedicatedTenancySupport; }

    /**
     * <p>The status of BYOL (whether BYOL is being enabled or disabled).</p>
     */
    inline bool DedicatedTenancySupportHasBeenSet() const { return m_dedicatedTenancySupportHasBeenSet; }

    /**
     * <p>The status of BYOL (whether BYOL is being enabled or disabled).</p>
     */
    inline void SetDedicatedTenancySupport(const DedicatedTenancySupportResultEnum& value) { m_dedicatedTenancySupportHasBeenSet = true; m_dedicatedTenancySupport = value; }

    /**
     * <p>The status of BYOL (whether BYOL is being enabled or disabled).</p>
     */
    inline void SetDedicatedTenancySupport(DedicatedTenancySupportResultEnum&& value) { m_dedicatedTenancySupportHasBeenSet = true; m_dedicatedTenancySupport = std::move(value); }

    /**
     * <p>The status of BYOL (whether BYOL is being enabled or disabled).</p>
     */
    inline AccountModification& WithDedicatedTenancySupport(const DedicatedTenancySupportResultEnum& value) { SetDedicatedTenancySupport(value); return *this;}

    /**
     * <p>The status of BYOL (whether BYOL is being enabled or disabled).</p>
     */
    inline AccountModification& WithDedicatedTenancySupport(DedicatedTenancySupportResultEnum&& value) { SetDedicatedTenancySupport(std::move(value)); return *this;}


    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, for the management
     * network interface used for the account.</p>
     */
    inline const Aws::String& GetDedicatedTenancyManagementCidrRange() const{ return m_dedicatedTenancyManagementCidrRange; }

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, for the management
     * network interface used for the account.</p>
     */
    inline bool DedicatedTenancyManagementCidrRangeHasBeenSet() const { return m_dedicatedTenancyManagementCidrRangeHasBeenSet; }

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, for the management
     * network interface used for the account.</p>
     */
    inline void SetDedicatedTenancyManagementCidrRange(const Aws::String& value) { m_dedicatedTenancyManagementCidrRangeHasBeenSet = true; m_dedicatedTenancyManagementCidrRange = value; }

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, for the management
     * network interface used for the account.</p>
     */
    inline void SetDedicatedTenancyManagementCidrRange(Aws::String&& value) { m_dedicatedTenancyManagementCidrRangeHasBeenSet = true; m_dedicatedTenancyManagementCidrRange = std::move(value); }

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, for the management
     * network interface used for the account.</p>
     */
    inline void SetDedicatedTenancyManagementCidrRange(const char* value) { m_dedicatedTenancyManagementCidrRangeHasBeenSet = true; m_dedicatedTenancyManagementCidrRange.assign(value); }

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, for the management
     * network interface used for the account.</p>
     */
    inline AccountModification& WithDedicatedTenancyManagementCidrRange(const Aws::String& value) { SetDedicatedTenancyManagementCidrRange(value); return *this;}

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, for the management
     * network interface used for the account.</p>
     */
    inline AccountModification& WithDedicatedTenancyManagementCidrRange(Aws::String&& value) { SetDedicatedTenancyManagementCidrRange(std::move(value)); return *this;}

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, for the management
     * network interface used for the account.</p>
     */
    inline AccountModification& WithDedicatedTenancyManagementCidrRange(const char* value) { SetDedicatedTenancyManagementCidrRange(value); return *this;}


    /**
     * <p>The timestamp when the modification of the BYOL configuration was
     * started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The timestamp when the modification of the BYOL configuration was
     * started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The timestamp when the modification of the BYOL configuration was
     * started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The timestamp when the modification of the BYOL configuration was
     * started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The timestamp when the modification of the BYOL configuration was
     * started.</p>
     */
    inline AccountModification& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The timestamp when the modification of the BYOL configuration was
     * started.</p>
     */
    inline AccountModification& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The error code that is returned if the configuration of BYOL cannot be
     * modified.</p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>The error code that is returned if the configuration of BYOL cannot be
     * modified.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>The error code that is returned if the configuration of BYOL cannot be
     * modified.</p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>The error code that is returned if the configuration of BYOL cannot be
     * modified.</p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>The error code that is returned if the configuration of BYOL cannot be
     * modified.</p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p>The error code that is returned if the configuration of BYOL cannot be
     * modified.</p>
     */
    inline AccountModification& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p>The error code that is returned if the configuration of BYOL cannot be
     * modified.</p>
     */
    inline AccountModification& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code that is returned if the configuration of BYOL cannot be
     * modified.</p>
     */
    inline AccountModification& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p>The text of the error message that is returned if the configuration of BYOL
     * cannot be modified.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The text of the error message that is returned if the configuration of BYOL
     * cannot be modified.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The text of the error message that is returned if the configuration of BYOL
     * cannot be modified.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The text of the error message that is returned if the configuration of BYOL
     * cannot be modified.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The text of the error message that is returned if the configuration of BYOL
     * cannot be modified.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The text of the error message that is returned if the configuration of BYOL
     * cannot be modified.</p>
     */
    inline AccountModification& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The text of the error message that is returned if the configuration of BYOL
     * cannot be modified.</p>
     */
    inline AccountModification& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The text of the error message that is returned if the configuration of BYOL
     * cannot be modified.</p>
     */
    inline AccountModification& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    DedicatedTenancyModificationStateEnum m_modificationState;
    bool m_modificationStateHasBeenSet;

    DedicatedTenancySupportResultEnum m_dedicatedTenancySupport;
    bool m_dedicatedTenancySupportHasBeenSet;

    Aws::String m_dedicatedTenancyManagementCidrRange;
    bool m_dedicatedTenancyManagementCidrRangeHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
