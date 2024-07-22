/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/StringCondition.h>
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
   * <p>The search criteria to be used to return agent statuses.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AgentStatusSearchCriteria">AWS
   * API Reference</a></p>
   */
  class AgentStatusSearchCriteria
  {
  public:
    AWS_CONNECT_API AgentStatusSearchCriteria();
    AWS_CONNECT_API AgentStatusSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AgentStatusSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline const Aws::Vector<AgentStatusSearchCriteria>& GetOrConditions() const{ return m_orConditions; }
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }
    inline void SetOrConditions(const Aws::Vector<AgentStatusSearchCriteria>& value) { m_orConditionsHasBeenSet = true; m_orConditions = value; }
    inline void SetOrConditions(Aws::Vector<AgentStatusSearchCriteria>&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::move(value); }
    inline AgentStatusSearchCriteria& WithOrConditions(const Aws::Vector<AgentStatusSearchCriteria>& value) { SetOrConditions(value); return *this;}
    inline AgentStatusSearchCriteria& WithOrConditions(Aws::Vector<AgentStatusSearchCriteria>&& value) { SetOrConditions(std::move(value)); return *this;}
    inline AgentStatusSearchCriteria& AddOrConditions(const AgentStatusSearchCriteria& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(value); return *this; }
    inline AgentStatusSearchCriteria& AddOrConditions(AgentStatusSearchCriteria&& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     *  <p>The currently supported values for <code>FieldName</code> are
     * <code>name</code>,&#x2028;&#x2028; <code>description</code>, <code>state</code>,
     * <code>type</code>, <code>displayOrder</code>,&#x2028; and
     * <code>resourceID</code>.</p> 
     */
    inline const Aws::Vector<AgentStatusSearchCriteria>& GetAndConditions() const{ return m_andConditions; }
    inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }
    inline void SetAndConditions(const Aws::Vector<AgentStatusSearchCriteria>& value) { m_andConditionsHasBeenSet = true; m_andConditions = value; }
    inline void SetAndConditions(Aws::Vector<AgentStatusSearchCriteria>&& value) { m_andConditionsHasBeenSet = true; m_andConditions = std::move(value); }
    inline AgentStatusSearchCriteria& WithAndConditions(const Aws::Vector<AgentStatusSearchCriteria>& value) { SetAndConditions(value); return *this;}
    inline AgentStatusSearchCriteria& WithAndConditions(Aws::Vector<AgentStatusSearchCriteria>&& value) { SetAndConditions(std::move(value)); return *this;}
    inline AgentStatusSearchCriteria& AddAndConditions(const AgentStatusSearchCriteria& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(value); return *this; }
    inline AgentStatusSearchCriteria& AddAndConditions(AgentStatusSearchCriteria&& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     *  <p>The currently supported values for <code>FieldName</code> are
     * <code>name</code>,&#x2028;&#x2028; <code>description</code>, <code>state</code>,
     * <code>type</code>, <code>displayOrder</code>,&#x2028; and
     * <code>resourceID</code>.</p> 
     */
    inline const StringCondition& GetStringCondition() const{ return m_stringCondition; }
    inline bool StringConditionHasBeenSet() const { return m_stringConditionHasBeenSet; }
    inline void SetStringCondition(const StringCondition& value) { m_stringConditionHasBeenSet = true; m_stringCondition = value; }
    inline void SetStringCondition(StringCondition&& value) { m_stringConditionHasBeenSet = true; m_stringCondition = std::move(value); }
    inline AgentStatusSearchCriteria& WithStringCondition(const StringCondition& value) { SetStringCondition(value); return *this;}
    inline AgentStatusSearchCriteria& WithStringCondition(StringCondition&& value) { SetStringCondition(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AgentStatusSearchCriteria> m_orConditions;
    bool m_orConditionsHasBeenSet = false;

    Aws::Vector<AgentStatusSearchCriteria> m_andConditions;
    bool m_andConditionsHasBeenSet = false;

    StringCondition m_stringCondition;
    bool m_stringConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
