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
    AWS_CONNECT_API HoursOfOperationOverrideSearchCriteria() = default;
    AWS_CONNECT_API HoursOfOperationOverrideSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API HoursOfOperationOverrideSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline const Aws::Vector<HoursOfOperationOverrideSearchCriteria>& GetOrConditions() const { return m_orConditions; }
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }
    template<typename OrConditionsT = Aws::Vector<HoursOfOperationOverrideSearchCriteria>>
    void SetOrConditions(OrConditionsT&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::forward<OrConditionsT>(value); }
    template<typename OrConditionsT = Aws::Vector<HoursOfOperationOverrideSearchCriteria>>
    HoursOfOperationOverrideSearchCriteria& WithOrConditions(OrConditionsT&& value) { SetOrConditions(std::forward<OrConditionsT>(value)); return *this;}
    template<typename OrConditionsT = HoursOfOperationOverrideSearchCriteria>
    HoursOfOperationOverrideSearchCriteria& AddOrConditions(OrConditionsT&& value) { m_orConditionsHasBeenSet = true; m_orConditions.emplace_back(std::forward<OrConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline const Aws::Vector<HoursOfOperationOverrideSearchCriteria>& GetAndConditions() const { return m_andConditions; }
    inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }
    template<typename AndConditionsT = Aws::Vector<HoursOfOperationOverrideSearchCriteria>>
    void SetAndConditions(AndConditionsT&& value) { m_andConditionsHasBeenSet = true; m_andConditions = std::forward<AndConditionsT>(value); }
    template<typename AndConditionsT = Aws::Vector<HoursOfOperationOverrideSearchCriteria>>
    HoursOfOperationOverrideSearchCriteria& WithAndConditions(AndConditionsT&& value) { SetAndConditions(std::forward<AndConditionsT>(value)); return *this;}
    template<typename AndConditionsT = HoursOfOperationOverrideSearchCriteria>
    HoursOfOperationOverrideSearchCriteria& AddAndConditions(AndConditionsT&& value) { m_andConditionsHasBeenSet = true; m_andConditions.emplace_back(std::forward<AndConditionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const StringCondition& GetStringCondition() const { return m_stringCondition; }
    inline bool StringConditionHasBeenSet() const { return m_stringConditionHasBeenSet; }
    template<typename StringConditionT = StringCondition>
    void SetStringCondition(StringConditionT&& value) { m_stringConditionHasBeenSet = true; m_stringCondition = std::forward<StringConditionT>(value); }
    template<typename StringConditionT = StringCondition>
    HoursOfOperationOverrideSearchCriteria& WithStringCondition(StringConditionT&& value) { SetStringCondition(std::forward<StringConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A leaf node condition which can be used to specify a date condition.</p>
     */
    inline const DateCondition& GetDateCondition() const { return m_dateCondition; }
    inline bool DateConditionHasBeenSet() const { return m_dateConditionHasBeenSet; }
    template<typename DateConditionT = DateCondition>
    void SetDateCondition(DateConditionT&& value) { m_dateConditionHasBeenSet = true; m_dateCondition = std::forward<DateConditionT>(value); }
    template<typename DateConditionT = DateCondition>
    HoursOfOperationOverrideSearchCriteria& WithDateCondition(DateConditionT&& value) { SetDateCondition(std::forward<DateConditionT>(value)); return *this;}
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
