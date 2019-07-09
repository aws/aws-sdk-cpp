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
#include <aws/config/model/OrganizationRuleStatus.h>
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

  class AWS_CONFIGSERVICE_API OrganizationConfigRuleStatus
  {
  public:
    OrganizationConfigRuleStatus();
    OrganizationConfigRuleStatus(Aws::Utils::Json::JsonView jsonValue);
    OrganizationConfigRuleStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetOrganizationConfigRuleName() const{ return m_organizationConfigRuleName; }

    
    inline bool OrganizationConfigRuleNameHasBeenSet() const { return m_organizationConfigRuleNameHasBeenSet; }

    
    inline void SetOrganizationConfigRuleName(const Aws::String& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = value; }

    
    inline void SetOrganizationConfigRuleName(Aws::String&& value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName = std::move(value); }

    
    inline void SetOrganizationConfigRuleName(const char* value) { m_organizationConfigRuleNameHasBeenSet = true; m_organizationConfigRuleName.assign(value); }

    
    inline OrganizationConfigRuleStatus& WithOrganizationConfigRuleName(const Aws::String& value) { SetOrganizationConfigRuleName(value); return *this;}

    
    inline OrganizationConfigRuleStatus& WithOrganizationConfigRuleName(Aws::String&& value) { SetOrganizationConfigRuleName(std::move(value)); return *this;}

    
    inline OrganizationConfigRuleStatus& WithOrganizationConfigRuleName(const char* value) { SetOrganizationConfigRuleName(value); return *this;}


    
    inline const OrganizationRuleStatus& GetOrganizationRuleStatus() const{ return m_organizationRuleStatus; }

    
    inline bool OrganizationRuleStatusHasBeenSet() const { return m_organizationRuleStatusHasBeenSet; }

    
    inline void SetOrganizationRuleStatus(const OrganizationRuleStatus& value) { m_organizationRuleStatusHasBeenSet = true; m_organizationRuleStatus = value; }

    
    inline void SetOrganizationRuleStatus(OrganizationRuleStatus&& value) { m_organizationRuleStatusHasBeenSet = true; m_organizationRuleStatus = std::move(value); }

    
    inline OrganizationConfigRuleStatus& WithOrganizationRuleStatus(const OrganizationRuleStatus& value) { SetOrganizationRuleStatus(value); return *this;}

    
    inline OrganizationConfigRuleStatus& WithOrganizationRuleStatus(OrganizationRuleStatus&& value) { SetOrganizationRuleStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    
    inline OrganizationConfigRuleStatus& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    
    inline OrganizationConfigRuleStatus& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    
    inline OrganizationConfigRuleStatus& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    
    inline OrganizationConfigRuleStatus& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    
    inline OrganizationConfigRuleStatus& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    
    inline OrganizationConfigRuleStatus& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const{ return m_lastUpdateTime; }

    
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }

    
    inline void SetLastUpdateTime(const Aws::Utils::DateTime& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }

    
    inline void SetLastUpdateTime(Aws::Utils::DateTime&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::move(value); }

    
    inline OrganizationConfigRuleStatus& WithLastUpdateTime(const Aws::Utils::DateTime& value) { SetLastUpdateTime(value); return *this;}

    
    inline OrganizationConfigRuleStatus& WithLastUpdateTime(Aws::Utils::DateTime&& value) { SetLastUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_organizationConfigRuleName;
    bool m_organizationConfigRuleNameHasBeenSet;

    OrganizationRuleStatus m_organizationRuleStatus;
    bool m_organizationRuleStatusHasBeenSet;

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
