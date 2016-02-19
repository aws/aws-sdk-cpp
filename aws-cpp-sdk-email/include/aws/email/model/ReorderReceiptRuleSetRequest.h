/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace SES
{
namespace Model
{

  /**
   */
  class AWS_SES_API ReorderReceiptRuleSetRequest : public SESRequest
  {
  public:
    ReorderReceiptRuleSetRequest();
    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetRuleSetName() const{ return m_ruleSetName; }

    
    inline void SetRuleSetName(const Aws::String& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    
    inline void SetRuleSetName(Aws::String&& value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName = value; }

    
    inline void SetRuleSetName(const char* value) { m_ruleSetNameHasBeenSet = true; m_ruleSetName.assign(value); }

    
    inline ReorderReceiptRuleSetRequest& WithRuleSetName(const Aws::String& value) { SetRuleSetName(value); return *this;}

    
    inline ReorderReceiptRuleSetRequest& WithRuleSetName(Aws::String&& value) { SetRuleSetName(value); return *this;}

    
    inline ReorderReceiptRuleSetRequest& WithRuleSetName(const char* value) { SetRuleSetName(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetRuleNames() const{ return m_ruleNames; }

    
    inline void SetRuleNames(const Aws::Vector<Aws::String>& value) { m_ruleNamesHasBeenSet = true; m_ruleNames = value; }

    
    inline void SetRuleNames(Aws::Vector<Aws::String>&& value) { m_ruleNamesHasBeenSet = true; m_ruleNames = value; }

    
    inline ReorderReceiptRuleSetRequest& WithRuleNames(const Aws::Vector<Aws::String>& value) { SetRuleNames(value); return *this;}

    
    inline ReorderReceiptRuleSetRequest& WithRuleNames(Aws::Vector<Aws::String>&& value) { SetRuleNames(value); return *this;}

    
    inline ReorderReceiptRuleSetRequest& AddRuleNames(const Aws::String& value) { m_ruleNamesHasBeenSet = true; m_ruleNames.push_back(value); return *this; }

    
    inline ReorderReceiptRuleSetRequest& AddRuleNames(Aws::String&& value) { m_ruleNamesHasBeenSet = true; m_ruleNames.push_back(value); return *this; }

    
    inline ReorderReceiptRuleSetRequest& AddRuleNames(const char* value) { m_ruleNamesHasBeenSet = true; m_ruleNames.push_back(value); return *this; }

  private:
    Aws::String m_ruleSetName;
    bool m_ruleSetNameHasBeenSet;
    Aws::Vector<Aws::String> m_ruleNames;
    bool m_ruleNamesHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
