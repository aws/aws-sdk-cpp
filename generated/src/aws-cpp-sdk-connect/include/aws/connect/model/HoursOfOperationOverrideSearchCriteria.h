/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/StringCondition.h>
#include <aws/connect/model/DateCondition.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The search criteria to be used to return hours of operations
   * overrides.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/HoursOfOperationOverrideSearchCriteria">AWS
   * API Reference</a></p>
   */
  class HoursOfOperationOverrideSearchCriteria
  {
  public:
    AWS_CONNECT_API HoursOfOperationOverrideSearchCriteria();
    AWS_CONNECT_API HoursOfOperationOverrideSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HoursOfOperationOverrideSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline const Aws::Vector<HoursOfOperationOverrideSearchCriteria>& GetOrConditions() const{ return m_orConditions; }
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }
    inline void SetOrConditions(const Aws::Vector<HoursOfOperationOverrideSearchCriteria>& value) { m_orConditionsHasBeenSet = true; m_orConditions = value; }
    inline void SetOrConditions(Aws::Vector<HoursOfOperationOverrideSearchCriteria>&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::move(value); }
    inline HoursOfOperationOverrideSearchCriteria& WithOrConditions(const Aws::Vector<HoursOfOperationOverrideSearchCriteria>& value) { SetOrConditions(value); return *this;}
    inline HoursOfOperationOverrideSearchCriteria& WithOrConditions(Aws::Vector<HoursOfOperationOverrideSearchCriteria>&& value) { SetOrConditions(std::move(value)); return *this;}
    inline HoursOfOperationOverrideSearchCriteria& AddOrConditions(const HoursOfOperationOverrideSearchCriteria& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(value); return *this; }
    inline HoursOfOperationOverrideSearchCriteria& AddOrConditions(HoursOfOperationOverrideSearchCriteria&& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline const Aws::Vector<HoursOfOperationOverrideSearchCriteria>& GetAndConditions() const{ return m_andConditions; }
    inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }
    inline void SetAndConditions(const Aws::Vector<HoursOfOperationOverrideSearchCriteria>& value) { m_andConditionsHasBeenSet = true; m_andConditions = value; }
    inline void SetAndConditions(Aws::Vector<HoursOfOperationOverrideSearchCriteria>&& value) { m_andConditionsHasBeenSet = true; m_andConditions = std::move(value); }
    inline HoursOfOperationOverrideSearchCriteria& WithAndConditions(const Aws::Vector<HoursOfOperationOverrideSearchCriteria>& value) { SetAndConditions(value); return *this;}
    inline HoursOfOperationOverrideSearchCriteria& WithAndConditions(Aws::Vector<HoursOfOperationOverrideSearchCriteria>&& value) { SetAndConditions(std::move(value)); return *this;}
    inline HoursOfOperationOverrideSearchCriteria& AddAndConditions(const HoursOfOperationOverrideSearchCriteria& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(value); return *this; }
    inline HoursOfOperationOverrideSearchCriteria& AddAndConditions(HoursOfOperationOverrideSearchCriteria&& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const StringCondition& GetStringCondition() const{ return m_stringCondition; }
    inline bool StringConditionHasBeenSet() const { return m_stringConditionHasBeenSet; }
    inline void SetStringCondition(const StringCondition& value) { m_stringConditionHasBeenSet = true; m_stringCondition = value; }
    inline void SetStringCondition(StringCondition&& value) { m_stringConditionHasBeenSet = true; m_stringCondition = std::move(value); }
    inline HoursOfOperationOverrideSearchCriteria& WithStringCondition(const StringCondition& value) { SetStringCondition(value); return *this;}
    inline HoursOfOperationOverrideSearchCriteria& WithStringCondition(StringCondition&& value) { SetStringCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A leaf node condition which can be used to specify a date condition.</p>
     */
    inline const DateCondition& GetDateCondition() const{ return m_dateCondition; }
    inline bool DateConditionHasBeenSet() const { return m_dateConditionHasBeenSet; }
    inline void SetDateCondition(const DateCondition& value) { m_dateConditionHasBeenSet = true; m_dateCondition = value; }
    inline void SetDateCondition(DateCondition&& value) { m_dateConditionHasBeenSet = true; m_dateCondition = std::move(value); }
    inline HoursOfOperationOverrideSearchCriteria& WithDateCondition(const DateCondition& value) { SetDateCondition(value); return *this;}
    inline HoursOfOperationOverrideSearchCriteria& WithDateCondition(DateCondition&& value) { SetDateCondition(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<HoursOfOperationOverrideSearchCriteria> m_orConditions;
    bool m_orConditionsHasBeenSet = false;

    Aws::Vector<HoursOfOperationOverrideSearchCriteria> m_andConditions;
    bool m_andConditionsHasBeenSet = false;

    StringCondition m_stringCondition;
    bool m_stringConditionHasBeenSet = false;

    DateCondition m_dateCondition;
    bool m_dateConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
