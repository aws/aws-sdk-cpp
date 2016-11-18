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
#include <aws/budgets/Budgets_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Budgets
{
namespace Model
{

  /**
   * This includes the options for getting the cost of a budget.
   */
  class AWS_BUDGETS_API CostTypes
  {
  public:
    CostTypes();
    CostTypes(const Aws::Utils::Json::JsonValue& jsonValue);
    CostTypes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline bool GetIncludeTax() const{ return m_includeTax; }

    
    inline void SetIncludeTax(bool value) { m_includeTaxHasBeenSet = true; m_includeTax = value; }

    
    inline CostTypes& WithIncludeTax(bool value) { SetIncludeTax(value); return *this;}

    
    inline bool GetIncludeSubscription() const{ return m_includeSubscription; }

    
    inline void SetIncludeSubscription(bool value) { m_includeSubscriptionHasBeenSet = true; m_includeSubscription = value; }

    
    inline CostTypes& WithIncludeSubscription(bool value) { SetIncludeSubscription(value); return *this;}

    
    inline bool GetUseBlended() const{ return m_useBlended; }

    
    inline void SetUseBlended(bool value) { m_useBlendedHasBeenSet = true; m_useBlended = value; }

    
    inline CostTypes& WithUseBlended(bool value) { SetUseBlended(value); return *this;}

  private:
    bool m_includeTax;
    bool m_includeTaxHasBeenSet;
    bool m_includeSubscription;
    bool m_includeSubscriptionHasBeenSet;
    bool m_useBlended;
    bool m_useBlendedHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
