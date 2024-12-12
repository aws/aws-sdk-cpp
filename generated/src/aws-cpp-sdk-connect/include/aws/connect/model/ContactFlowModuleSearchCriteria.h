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
    AWS_CONNECT_API ContactFlowModuleSearchCriteria();
    AWS_CONNECT_API ContactFlowModuleSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ContactFlowModuleSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline const Aws::Vector<ContactFlowModuleSearchCriteria>& GetOrConditions() const{ return m_orConditions; }
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }
    inline void SetOrConditions(const Aws::Vector<ContactFlowModuleSearchCriteria>& value) { m_orConditionsHasBeenSet = true; m_orConditions = value; }
    inline void SetOrConditions(Aws::Vector<ContactFlowModuleSearchCriteria>&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::move(value); }
    inline ContactFlowModuleSearchCriteria& WithOrConditions(const Aws::Vector<ContactFlowModuleSearchCriteria>& value) { SetOrConditions(value); return *this;}
    inline ContactFlowModuleSearchCriteria& WithOrConditions(Aws::Vector<ContactFlowModuleSearchCriteria>&& value) { SetOrConditions(std::move(value)); return *this;}
    inline ContactFlowModuleSearchCriteria& AddOrConditions(const ContactFlowModuleSearchCriteria& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(value); return *this; }
    inline ContactFlowModuleSearchCriteria& AddOrConditions(ContactFlowModuleSearchCriteria&& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline const Aws::Vector<ContactFlowModuleSearchCriteria>& GetAndConditions() const{ return m_andConditions; }
    inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }
    inline void SetAndConditions(const Aws::Vector<ContactFlowModuleSearchCriteria>& value) { m_andConditionsHasBeenSet = true; m_andConditions = value; }
    inline void SetAndConditions(Aws::Vector<ContactFlowModuleSearchCriteria>&& value) { m_andConditionsHasBeenSet = true; m_andConditions = std::move(value); }
    inline ContactFlowModuleSearchCriteria& WithAndConditions(const Aws::Vector<ContactFlowModuleSearchCriteria>& value) { SetAndConditions(value); return *this;}
    inline ContactFlowModuleSearchCriteria& WithAndConditions(Aws::Vector<ContactFlowModuleSearchCriteria>&& value) { SetAndConditions(std::move(value)); return *this;}
    inline ContactFlowModuleSearchCriteria& AddAndConditions(const ContactFlowModuleSearchCriteria& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(value); return *this; }
    inline ContactFlowModuleSearchCriteria& AddAndConditions(ContactFlowModuleSearchCriteria&& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const StringCondition& GetStringCondition() const{ return m_stringCondition; }
    inline bool StringConditionHasBeenSet() const { return m_stringConditionHasBeenSet; }
    inline void SetStringCondition(const StringCondition& value) { m_stringConditionHasBeenSet = true; m_stringCondition = value; }
    inline void SetStringCondition(StringCondition&& value) { m_stringConditionHasBeenSet = true; m_stringCondition = std::move(value); }
    inline ContactFlowModuleSearchCriteria& WithStringCondition(const StringCondition& value) { SetStringCondition(value); return *this;}
    inline ContactFlowModuleSearchCriteria& WithStringCondition(StringCondition&& value) { SetStringCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the flow.</p>
     */
    inline const ContactFlowModuleState& GetStateCondition() const{ return m_stateCondition; }
    inline bool StateConditionHasBeenSet() const { return m_stateConditionHasBeenSet; }
    inline void SetStateCondition(const ContactFlowModuleState& value) { m_stateConditionHasBeenSet = true; m_stateCondition = value; }
    inline void SetStateCondition(ContactFlowModuleState&& value) { m_stateConditionHasBeenSet = true; m_stateCondition = std::move(value); }
    inline ContactFlowModuleSearchCriteria& WithStateCondition(const ContactFlowModuleState& value) { SetStateCondition(value); return *this;}
    inline ContactFlowModuleSearchCriteria& WithStateCondition(ContactFlowModuleState&& value) { SetStateCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the flow.</p>
     */
    inline const ContactFlowModuleStatus& GetStatusCondition() const{ return m_statusCondition; }
    inline bool StatusConditionHasBeenSet() const { return m_statusConditionHasBeenSet; }
    inline void SetStatusCondition(const ContactFlowModuleStatus& value) { m_statusConditionHasBeenSet = true; m_statusCondition = value; }
    inline void SetStatusCondition(ContactFlowModuleStatus&& value) { m_statusConditionHasBeenSet = true; m_statusCondition = std::move(value); }
    inline ContactFlowModuleSearchCriteria& WithStatusCondition(const ContactFlowModuleStatus& value) { SetStatusCondition(value); return *this;}
    inline ContactFlowModuleSearchCriteria& WithStatusCondition(ContactFlowModuleStatus&& value) { SetStatusCondition(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContactFlowModuleSearchCriteria> m_orConditions;
    bool m_orConditionsHasBeenSet = false;

    Aws::Vector<ContactFlowModuleSearchCriteria> m_andConditions;
    bool m_andConditionsHasBeenSet = false;

    StringCondition m_stringCondition;
    bool m_stringConditionHasBeenSet = false;

    ContactFlowModuleState m_stateCondition;
    bool m_stateConditionHasBeenSet = false;

    ContactFlowModuleStatus m_statusCondition;
    bool m_statusConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
