/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/StringCondition.h>
#include <aws/connect/model/ContactFlowType.h>
#include <aws/connect/model/ContactFlowState.h>
#include <aws/connect/model/ContactFlowStatus.h>
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
   * <p>The search criteria to be used to return flows.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactFlowSearchCriteria">AWS
   * API Reference</a></p>
   */
  class ContactFlowSearchCriteria
  {
  public:
    AWS_CONNECT_API ContactFlowSearchCriteria() = default;
    AWS_CONNECT_API ContactFlowSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ContactFlowSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline const Aws::Vector<ContactFlowSearchCriteria>& GetOrConditions() const { return m_orConditions; }
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }
    template<typename OrConditionsT = Aws::Vector<ContactFlowSearchCriteria>>
    void SetOrConditions(OrConditionsT&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::forward<OrConditionsT>(value); }
    template<typename OrConditionsT = Aws::Vector<ContactFlowSearchCriteria>>
    ContactFlowSearchCriteria& WithOrConditions(OrConditionsT&& value) { SetOrConditions(std::forward<OrConditionsT>(value)); return *this;}
    template<typename OrConditionsT = ContactFlowSearchCriteria>
    ContactFlowSearchCriteria& AddOrConditions(OrConditionsT&& value) { m_orConditionsHasBeenSet = true; m_orConditions.emplace_back(std::forward<OrConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline const Aws::Vector<ContactFlowSearchCriteria>& GetAndConditions() const { return m_andConditions; }
    inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }
    template<typename AndConditionsT = Aws::Vector<ContactFlowSearchCriteria>>
    void SetAndConditions(AndConditionsT&& value) { m_andConditionsHasBeenSet = true; m_andConditions = std::forward<AndConditionsT>(value); }
    template<typename AndConditionsT = Aws::Vector<ContactFlowSearchCriteria>>
    ContactFlowSearchCriteria& WithAndConditions(AndConditionsT&& value) { SetAndConditions(std::forward<AndConditionsT>(value)); return *this;}
    template<typename AndConditionsT = ContactFlowSearchCriteria>
    ContactFlowSearchCriteria& AddAndConditions(AndConditionsT&& value) { m_andConditionsHasBeenSet = true; m_andConditions.emplace_back(std::forward<AndConditionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const StringCondition& GetStringCondition() const { return m_stringCondition; }
    inline bool StringConditionHasBeenSet() const { return m_stringConditionHasBeenSet; }
    template<typename StringConditionT = StringCondition>
    void SetStringCondition(StringConditionT&& value) { m_stringConditionHasBeenSet = true; m_stringCondition = std::forward<StringConditionT>(value); }
    template<typename StringConditionT = StringCondition>
    ContactFlowSearchCriteria& WithStringCondition(StringConditionT&& value) { SetStringCondition(std::forward<StringConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of flow.</p>
     */
    inline ContactFlowType GetTypeCondition() const { return m_typeCondition; }
    inline bool TypeConditionHasBeenSet() const { return m_typeConditionHasBeenSet; }
    inline void SetTypeCondition(ContactFlowType value) { m_typeConditionHasBeenSet = true; m_typeCondition = value; }
    inline ContactFlowSearchCriteria& WithTypeCondition(ContactFlowType value) { SetTypeCondition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the flow.</p>
     */
    inline ContactFlowState GetStateCondition() const { return m_stateCondition; }
    inline bool StateConditionHasBeenSet() const { return m_stateConditionHasBeenSet; }
    inline void SetStateCondition(ContactFlowState value) { m_stateConditionHasBeenSet = true; m_stateCondition = value; }
    inline ContactFlowSearchCriteria& WithStateCondition(ContactFlowState value) { SetStateCondition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the flow.</p>
     */
    inline ContactFlowStatus GetStatusCondition() const { return m_statusCondition; }
    inline bool StatusConditionHasBeenSet() const { return m_statusConditionHasBeenSet; }
    inline void SetStatusCondition(ContactFlowStatus value) { m_statusConditionHasBeenSet = true; m_statusCondition = value; }
    inline ContactFlowSearchCriteria& WithStatusCondition(ContactFlowStatus value) { SetStatusCondition(value); return *this;}
    ///@}
  private:

    Aws::Vector<ContactFlowSearchCriteria> m_orConditions;
    bool m_orConditionsHasBeenSet = false;

    Aws::Vector<ContactFlowSearchCriteria> m_andConditions;
    bool m_andConditionsHasBeenSet = false;

    StringCondition m_stringCondition;
    bool m_stringConditionHasBeenSet = false;

    ContactFlowType m_typeCondition{ContactFlowType::NOT_SET};
    bool m_typeConditionHasBeenSet = false;

    ContactFlowState m_stateCondition{ContactFlowState::NOT_SET};
    bool m_stateConditionHasBeenSet = false;

    ContactFlowStatus m_statusCondition{ContactFlowStatus::NOT_SET};
    bool m_statusConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
