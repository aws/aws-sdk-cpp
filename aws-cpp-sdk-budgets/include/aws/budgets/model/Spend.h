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
#include <aws/core/utils/memory/stl/AWSString.h>

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
   * A structure represent either a cost spend or usage spend. Contains an amount and
   * a unit.
   */
  class AWS_BUDGETS_API Spend
  {
  public:
    Spend();
    Spend(const Aws::Utils::Json::JsonValue& jsonValue);
    Spend& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::String& GetAmount() const{ return m_amount; }

    
    inline void SetAmount(const Aws::String& value) { m_amountHasBeenSet = true; m_amount = value; }

    
    inline void SetAmount(Aws::String&& value) { m_amountHasBeenSet = true; m_amount = value; }

    
    inline void SetAmount(const char* value) { m_amountHasBeenSet = true; m_amount.assign(value); }

    
    inline Spend& WithAmount(const Aws::String& value) { SetAmount(value); return *this;}

    
    inline Spend& WithAmount(Aws::String&& value) { SetAmount(value); return *this;}

    
    inline Spend& WithAmount(const char* value) { SetAmount(value); return *this;}

    
    inline const Aws::String& GetUnit() const{ return m_unit; }

    
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = value; }

    
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    
    inline Spend& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    
    inline Spend& WithUnit(Aws::String&& value) { SetUnit(value); return *this;}

    
    inline Spend& WithUnit(const char* value) { SetUnit(value); return *this;}

  private:
    Aws::String m_amount;
    bool m_amountHasBeenSet;
    Aws::String m_unit;
    bool m_unitHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
