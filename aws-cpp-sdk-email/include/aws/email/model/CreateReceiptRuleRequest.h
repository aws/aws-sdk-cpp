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
#include <aws/email/model/ReceiptRule.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /*
  */
  class AWS_SES_API CreateReceiptRuleRequest : public SESRequest
  {
  public:
    CreateReceiptRuleRequest();
    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetRuleSetName() const{ return m_ruleSetName; }

    
    inline void SetRuleSetName(const Aws::String& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    
    inline void SetRuleSetName(Aws::String&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    
    inline void SetRuleSetName(const char* value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName.assign(value); }

    
    inline CreateReceiptRuleRequest& WithRuleSetName(const Aws::String& value) { SetRuleSetName(value); return *this;}

    
    inline CreateReceiptRuleRequest& WithRuleSetName(Aws::String&& value) { SetRuleSetName(value); return *this;}

    
    inline CreateReceiptRuleRequest& WithRuleSetName(const char* value) { SetRuleSetName(value); return *this;}

    
    inline const Aws::String& GetAfter() const{ return m_after; }

    
    inline void SetAfter(const Aws::String& value) { m_afterHasBeenSet = true; m_after = value; }

    
    inline void SetAfter(Aws::String&& value) { m_afterHasBeenSet = true; m_after = value; }

    
    inline void SetAfter(const char* value) { m_afterHasBeenSet = true; m_after.assign(value); }

    
    inline CreateReceiptRuleRequest& WithAfter(const Aws::String& value) { SetAfter(value); return *this;}

    
    inline CreateReceiptRuleRequest& WithAfter(Aws::String&& value) { SetAfter(value); return *this;}

    
    inline CreateReceiptRuleRequest& WithAfter(const char* value) { SetAfter(value); return *this;}

    
    inline const ReceiptRule& GetRule() const{ return m_rule; }

    
    inline void SetRule(const ReceiptRule& value) { m_ruleHasBeenSet = true; m_rule = value; }

    
    inline void SetRule(ReceiptRule&& value) { m_ruleHasBeenSet = true; m_rule = value; }

    
    inline CreateReceiptRuleRequest& WithRule(const ReceiptRule& value) { SetRule(value); return *this;}

    
    inline CreateReceiptRuleRequest& WithRule(ReceiptRule&& value) { SetRule(value); return *this;}

  private:
    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet;
    Aws::String m_after;
    bool m_afterHasBeenSet;
    ReceiptRule m_rule;
    bool m_ruleHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
