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

  class AWS_CONFIGSERVICE_API StatusDetailFilters
  {
  public:
    StatusDetailFilters();
    StatusDetailFilters(Aws::Utils::Json::JsonView jsonValue);
    StatusDetailFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    
    inline StatusDetailFilters& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    
    inline StatusDetailFilters& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    
    inline StatusDetailFilters& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    
    inline const MemberAccountRuleStatus& GetMemberAccountRuleStatus() const{ return m_memberAccountRuleStatus; }

    
    inline bool MemberAccountRuleStatusHasBeenSet() const { return m_memberAccountRuleStatusHasBeenSet; }

    
    inline void SetMemberAccountRuleStatus(const MemberAccountRuleStatus& value) { m_memberAccountRuleStatusHasBeenSet = true; m_memberAccountRuleStatus = value; }

    
    inline void SetMemberAccountRuleStatus(MemberAccountRuleStatus&& value) { m_memberAccountRuleStatusHasBeenSet = true; m_memberAccountRuleStatus = std::move(value); }

    
    inline StatusDetailFilters& WithMemberAccountRuleStatus(const MemberAccountRuleStatus& value) { SetMemberAccountRuleStatus(value); return *this;}

    
    inline StatusDetailFilters& WithMemberAccountRuleStatus(MemberAccountRuleStatus&& value) { SetMemberAccountRuleStatus(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    MemberAccountRuleStatus m_memberAccountRuleStatus;
    bool m_memberAccountRuleStatusHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
