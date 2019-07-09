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
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/MemberAccountRuleStatus.h>
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
namespace ConfigService
{
namespace Model
{

  class AWS_CONFIGSERVICE_API MemberAccountStatus
  {
  public:
    MemberAccountStatus();
    MemberAccountStatus(Aws::Utils::Json::JsonView jsonValue);
    MemberAccountStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    
    inline MemberAccountStatus& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    
    inline MemberAccountStatus& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    
    inline MemberAccountStatus& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }

    
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }

    
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }

    
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }

    
    inline MemberAccountStatus& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}

    
    inline MemberAccountStatus& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}

    
    inline MemberAccountStatus& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}


    
    inline const MemberAccountRuleStatus& GetMemberAccountRuleStatus() const{ return m_memberAccountRuleStatus; }

    
    inline bool MemberAccountRuleStatusHasBeenSet() const { return m_memberAccountRuleStatusHasBeenSet; }

    
    inline void SetMemberAccountRuleStatus(const MemberAccountRuleStatus& value) { m_memberAccountRuleStatusHasBeenSet = true; m_memberAccountRuleStatus = value; }

    
    inline void SetMemberAccountRuleStatus(MemberAccountRuleStatus&& value) { m_memberAccountRuleStatusHasBeenSet = true; m_memberAccountRuleStatus = std::move(value); }

    
    inline MemberAccountStatus& WithMemberAccountRuleStatus(const MemberAccountRuleStatus& value) { SetMemberAccountRuleStatus(value); return *this;}

    
    inline MemberAccountStatus& WithMemberAccountRuleStatus(MemberAccountRuleStatus&& value) { SetMemberAccountRuleStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    
    inline MemberAccountStatus& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    
    inline MemberAccountStatus& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    
    inline MemberAccountStatus& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    
    inline MemberAccountStatus& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    
    inline MemberAccountStatus& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    
    inline MemberAccountStatus& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    
    inline MemberAccountStatus& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    
    inline MemberAccountStatus& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet;

    MemberAccountRuleStatus m_memberAccountRuleStatus;
    bool m_memberAccountRuleStatusHasBeenSet;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;

    Aws::Utils::DateTime m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
