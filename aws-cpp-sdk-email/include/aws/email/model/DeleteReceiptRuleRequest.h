/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/email/SES_EXPORTS.h>
#include <aws/email/SESRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /*
  */
  class AWS_SES_API DeleteReceiptRuleRequest : public SESRequest
  {
  public:
    DeleteReceiptRuleRequest();
    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetRuleSetName() const{ return m_ruleSetName; }

    
    inline void SetRuleSetName(const Aws::String& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    
    inline void SetRuleSetName(Aws::String&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    
    inline void SetRuleSetName(const char* value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName.assign(value); }

    
    inline DeleteReceiptRuleRequest& WithRuleSetName(const Aws::String& value) { SetRuleSetName(value); return *this;}

    
    inline DeleteReceiptRuleRequest& WithRuleSetName(Aws::String&& value) { SetRuleSetName(value); return *this;}

    
    inline DeleteReceiptRuleRequest& WithRuleSetName(const char* value) { SetRuleSetName(value); return *this;}

    
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    
    inline DeleteReceiptRuleRequest& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    
    inline DeleteReceiptRuleRequest& WithRuleName(Aws::String&& value) { SetRuleName(value); return *this;}

    
    inline DeleteReceiptRuleRequest& WithRuleName(const char* value) { SetRuleName(value); return *this;}

  private:
    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet;
    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
