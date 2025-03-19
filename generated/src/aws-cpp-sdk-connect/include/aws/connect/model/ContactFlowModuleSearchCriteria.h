/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/StringCondition.h>
#include <aws/connect/model/ContactFlowModuleState.h>
#include <aws/connect/model/ContactFlowModuleStatus.h>
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
   * <p>The search criteria to be used to return flow modules.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactFlowModuleSearchCriteria">AWS
   * API Reference</a></p>
   */
  class ContactFlowModuleSearchCriteria
  {
  public:
    AWS_CONNECT_API ContactFlowModuleSearchCriteria() = default;
    AWS_CONNECT_API ContactFlowModuleSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ContactFlowModuleSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline const Aws::Vector<ContactFlowModuleSearchCriteria>& GetOrConditions() const { return m_orConditions; }
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }
    template<typename OrConditionsT = Aws::Vector<ContactFlowModuleSearchCriteria>>
    void SetOrConditions(OrConditionsT&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::forward<OrConditionsT>(value); }
    template<typename OrConditionsT = Aws::Vector<ContactFlowModuleSearchCriteria>>
    ContactFlowModuleSearchCriteria& WithOrConditions(OrConditionsT&& value) { SetOrConditions(std::forward<OrConditionsT>(value)); return *this;}
    template<typename OrConditionsT = ContactFlowModuleSearchCriteria>
    ContactFlowModuleSearchCriteria& AddOrConditions(OrConditionsT&& value) { m_orConditionsHasBeenSet = true; m_orConditions.emplace_back(std::forward<OrConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline const Aws::Vector<ContactFlowModuleSearchCriteria>& GetAndConditions() const { return m_andConditions; }
    inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }
    template<typename AndConditionsT = Aws::Vector<ContactFlowModuleSearchCriteria>>
    void SetAndConditions(AndConditionsT&& value) { m_andConditionsHasBeenSet = true; m_andConditions = std::forward<AndConditionsT>(value); }
    template<typename AndConditionsT = Aws::Vector<ContactFlowModuleSearchCriteria>>
    ContactFlowModuleSearchCriteria& WithAndConditions(AndConditionsT&& value) { SetAndConditions(std::forward<AndConditionsT>(value)); return *this;}
    template<typename AndConditionsT = ContactFlowModuleSearchCriteria>
    ContactFlowModuleSearchCriteria& AddAndConditions(AndConditionsT&& value) { m_andConditionsHasBeenSet = true; m_andConditions.emplace_back(std::forward<AndConditionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const StringCondition& GetStringCondition() const { return m_stringCondition; }
    inline bool StringConditionHasBeenSet() const { return m_stringConditionHasBeenSet; }
    template<typename StringConditionT = StringCondition>
    void SetStringCondition(StringConditionT&& value) { m_stringConditionHasBeenSet = true; m_stringCondition = std::forward<StringConditionT>(value); }
    template<typename StringConditionT = StringCondition>
    ContactFlowModuleSearchCriteria& WithStringCondition(StringConditionT&& value) { SetStringCondition(std::forward<StringConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the flow.</p>
     */
    inline ContactFlowModuleState GetStateCondition() const { return m_stateCondition; }
    inline bool StateConditionHasBeenSet() const { return m_stateConditionHasBeenSet; }
    inline void SetStateCondition(ContactFlowModuleState value) { m_stateConditionHasBeenSet = true; m_stateCondition = value; }
    inline ContactFlowModuleSearchCriteria& WithStateCondition(ContactFlowModuleState value) { SetStateCondition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the flow.</p>
     */
    inline ContactFlowModuleStatus GetStatusCondition() const { return m_statusCondition; }
    inline bool StatusConditionHasBeenSet() const { return m_statusConditionHasBeenSet; }
    inline void SetStatusCondition(ContactFlowModuleStatus value) { m_statusConditionHasBeenSet = true; m_statusCondition = value; }
    inline ContactFlowModuleSearchCriteria& WithStatusCondition(ContactFlowModuleStatus value) { SetStatusCondition(value); return *this;}
    ///@}
  private:

    Aws::Vector<ContactFlowModuleSearchCriteria> m_orConditions;
    bool m_orConditionsHasBeenSet = false;

    Aws::Vector<ContactFlowModuleSearchCriteria> m_andConditions;
    bool m_andConditionsHasBeenSet = false;

    StringCondition m_stringCondition;
    bool m_stringConditionHasBeenSet = false;

    ContactFlowModuleState m_stateCondition{ContactFlowModuleState::NOT_SET};
    bool m_stateConditionHasBeenSet = false;

    ContactFlowModuleStatus m_statusCondition{ContactFlowModuleStatus::NOT_SET};
    bool m_statusConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
