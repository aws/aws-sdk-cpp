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
    AWS_CONNECT_API ContactFlowSearchCriteria();
    AWS_CONNECT_API ContactFlowSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ContactFlowSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline const Aws::Vector<ContactFlowSearchCriteria>& GetOrConditions() const{ return m_orConditions; }
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }
    inline void SetOrConditions(const Aws::Vector<ContactFlowSearchCriteria>& value) { m_orConditionsHasBeenSet = true; m_orConditions = value; }
    inline void SetOrConditions(Aws::Vector<ContactFlowSearchCriteria>&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::move(value); }
    inline ContactFlowSearchCriteria& WithOrConditions(const Aws::Vector<ContactFlowSearchCriteria>& value) { SetOrConditions(value); return *this;}
    inline ContactFlowSearchCriteria& WithOrConditions(Aws::Vector<ContactFlowSearchCriteria>&& value) { SetOrConditions(std::move(value)); return *this;}
    inline ContactFlowSearchCriteria& AddOrConditions(const ContactFlowSearchCriteria& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(value); return *this; }
    inline ContactFlowSearchCriteria& AddOrConditions(ContactFlowSearchCriteria&& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline const Aws::Vector<ContactFlowSearchCriteria>& GetAndConditions() const{ return m_andConditions; }
    inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }
    inline void SetAndConditions(const Aws::Vector<ContactFlowSearchCriteria>& value) { m_andConditionsHasBeenSet = true; m_andConditions = value; }
    inline void SetAndConditions(Aws::Vector<ContactFlowSearchCriteria>&& value) { m_andConditionsHasBeenSet = true; m_andConditions = std::move(value); }
    inline ContactFlowSearchCriteria& WithAndConditions(const Aws::Vector<ContactFlowSearchCriteria>& value) { SetAndConditions(value); return *this;}
    inline ContactFlowSearchCriteria& WithAndConditions(Aws::Vector<ContactFlowSearchCriteria>&& value) { SetAndConditions(std::move(value)); return *this;}
    inline ContactFlowSearchCriteria& AddAndConditions(const ContactFlowSearchCriteria& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(value); return *this; }
    inline ContactFlowSearchCriteria& AddAndConditions(ContactFlowSearchCriteria&& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const StringCondition& GetStringCondition() const{ return m_stringCondition; }
    inline bool StringConditionHasBeenSet() const { return m_stringConditionHasBeenSet; }
    inline void SetStringCondition(const StringCondition& value) { m_stringConditionHasBeenSet = true; m_stringCondition = value; }
    inline void SetStringCondition(StringCondition&& value) { m_stringConditionHasBeenSet = true; m_stringCondition = std::move(value); }
    inline ContactFlowSearchCriteria& WithStringCondition(const StringCondition& value) { SetStringCondition(value); return *this;}
    inline ContactFlowSearchCriteria& WithStringCondition(StringCondition&& value) { SetStringCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of flow.</p>
     */
    inline const ContactFlowType& GetTypeCondition() const{ return m_typeCondition; }
    inline bool TypeConditionHasBeenSet() const { return m_typeConditionHasBeenSet; }
    inline void SetTypeCondition(const ContactFlowType& value) { m_typeConditionHasBeenSet = true; m_typeCondition = value; }
    inline void SetTypeCondition(ContactFlowType&& value) { m_typeConditionHasBeenSet = true; m_typeCondition = std::move(value); }
    inline ContactFlowSearchCriteria& WithTypeCondition(const ContactFlowType& value) { SetTypeCondition(value); return *this;}
    inline ContactFlowSearchCriteria& WithTypeCondition(ContactFlowType&& value) { SetTypeCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the flow.</p>
     */
    inline const ContactFlowState& GetStateCondition() const{ return m_stateCondition; }
    inline bool StateConditionHasBeenSet() const { return m_stateConditionHasBeenSet; }
    inline void SetStateCondition(const ContactFlowState& value) { m_stateConditionHasBeenSet = true; m_stateCondition = value; }
    inline void SetStateCondition(ContactFlowState&& value) { m_stateConditionHasBeenSet = true; m_stateCondition = std::move(value); }
    inline ContactFlowSearchCriteria& WithStateCondition(const ContactFlowState& value) { SetStateCondition(value); return *this;}
    inline ContactFlowSearchCriteria& WithStateCondition(ContactFlowState&& value) { SetStateCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the flow.</p>
     */
    inline const ContactFlowStatus& GetStatusCondition() const{ return m_statusCondition; }
    inline bool StatusConditionHasBeenSet() const { return m_statusConditionHasBeenSet; }
    inline void SetStatusCondition(const ContactFlowStatus& value) { m_statusConditionHasBeenSet = true; m_statusCondition = value; }
    inline void SetStatusCondition(ContactFlowStatus&& value) { m_statusConditionHasBeenSet = true; m_statusCondition = std::move(value); }
    inline ContactFlowSearchCriteria& WithStatusCondition(const ContactFlowStatus& value) { SetStatusCondition(value); return *this;}
    inline ContactFlowSearchCriteria& WithStatusCondition(ContactFlowStatus&& value) { SetStatusCondition(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ContactFlowSearchCriteria> m_orConditions;
    bool m_orConditionsHasBeenSet = false;

    Aws::Vector<ContactFlowSearchCriteria> m_andConditions;
    bool m_andConditionsHasBeenSet = false;

    StringCondition m_stringCondition;
    bool m_stringConditionHasBeenSet = false;

    ContactFlowType m_typeCondition;
    bool m_typeConditionHasBeenSet = false;

    ContactFlowState m_stateCondition;
    bool m_stateConditionHasBeenSet = false;

    ContactFlowStatus m_statusCondition;
    bool m_statusConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
