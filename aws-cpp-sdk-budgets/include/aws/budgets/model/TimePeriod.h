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
#include <aws/core/utils/DateTime.h>

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
   * A time period indicated the start date and end date of a budget.
   */
  class AWS_BUDGETS_API TimePeriod
  {
  public:
    TimePeriod();
    TimePeriod(const Aws::Utils::Json::JsonValue& jsonValue);
    TimePeriod& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    
    inline const Aws::Utils::DateTime& GetStart() const{ return m_start; }

    
    inline void SetStart(const Aws::Utils::DateTime& value) { m_startHasBeenSet = true; m_start = value; }

    
    inline void SetStart(Aws::Utils::DateTime&& value) { m_startHasBeenSet = true; m_start = value; }

    
    inline TimePeriod& WithStart(const Aws::Utils::DateTime& value) { SetStart(value); return *this;}

    
    inline TimePeriod& WithStart(Aws::Utils::DateTime&& value) { SetStart(value); return *this;}

    
    inline const Aws::Utils::DateTime& GetEnd() const{ return m_end; }

    
    inline void SetEnd(const Aws::Utils::DateTime& value) { m_endHasBeenSet = true; m_end = value; }

    
    inline void SetEnd(Aws::Utils::DateTime&& value) { m_endHasBeenSet = true; m_end = value; }

    
    inline TimePeriod& WithEnd(const Aws::Utils::DateTime& value) { SetEnd(value); return *this;}

    
    inline TimePeriod& WithEnd(Aws::Utils::DateTime&& value) { SetEnd(value); return *this;}

  private:
    Aws::Utils::DateTime m_start;
    bool m_startHasBeenSet;
    Aws::Utils::DateTime m_end;
    bool m_endHasBeenSet;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
