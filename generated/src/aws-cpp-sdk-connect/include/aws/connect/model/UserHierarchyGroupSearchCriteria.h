﻿/**
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
   * <p>The search criteria to be used to return userHierarchyGroup.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UserHierarchyGroupSearchCriteria">AWS
   * API Reference</a></p>
   */
  class UserHierarchyGroupSearchCriteria
  {
  public:
    AWS_CONNECT_API UserHierarchyGroupSearchCriteria();
    AWS_CONNECT_API UserHierarchyGroupSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UserHierarchyGroupSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of conditions which would be applied together with an OR
     * condition.</p>
     */
    inline const Aws::Vector<UserHierarchyGroupSearchCriteria>& GetOrConditions() const{ return m_orConditions; }
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }
    inline void SetOrConditions(const Aws::Vector<UserHierarchyGroupSearchCriteria>& value) { m_orConditionsHasBeenSet = true; m_orConditions = value; }
    inline void SetOrConditions(Aws::Vector<UserHierarchyGroupSearchCriteria>&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::move(value); }
    inline UserHierarchyGroupSearchCriteria& WithOrConditions(const Aws::Vector<UserHierarchyGroupSearchCriteria>& value) { SetOrConditions(value); return *this;}
    inline UserHierarchyGroupSearchCriteria& WithOrConditions(Aws::Vector<UserHierarchyGroupSearchCriteria>&& value) { SetOrConditions(std::move(value)); return *this;}
    inline UserHierarchyGroupSearchCriteria& AddOrConditions(const UserHierarchyGroupSearchCriteria& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(value); return *this; }
    inline UserHierarchyGroupSearchCriteria& AddOrConditions(UserHierarchyGroupSearchCriteria&& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of conditions which would be applied together with an AND
     * condition.</p>
     */
    inline const Aws::Vector<UserHierarchyGroupSearchCriteria>& GetAndConditions() const{ return m_andConditions; }
    inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }
    inline void SetAndConditions(const Aws::Vector<UserHierarchyGroupSearchCriteria>& value) { m_andConditionsHasBeenSet = true; m_andConditions = value; }
    inline void SetAndConditions(Aws::Vector<UserHierarchyGroupSearchCriteria>&& value) { m_andConditionsHasBeenSet = true; m_andConditions = std::move(value); }
    inline UserHierarchyGroupSearchCriteria& WithAndConditions(const Aws::Vector<UserHierarchyGroupSearchCriteria>& value) { SetAndConditions(value); return *this;}
    inline UserHierarchyGroupSearchCriteria& WithAndConditions(Aws::Vector<UserHierarchyGroupSearchCriteria>&& value) { SetAndConditions(std::move(value)); return *this;}
    inline UserHierarchyGroupSearchCriteria& AddAndConditions(const UserHierarchyGroupSearchCriteria& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(value); return *this; }
    inline UserHierarchyGroupSearchCriteria& AddAndConditions(UserHierarchyGroupSearchCriteria&& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     *  <p>The currently supported values for <code>FieldName</code> are
     * <code>name</code>,&#x2028;&#x2028; <code>parentId</code>, <code>levelId</code>,
     * and <code>resourceID</code>.</p> 
     */
    inline const StringCondition& GetStringCondition() const{ return m_stringCondition; }
    inline bool StringConditionHasBeenSet() const { return m_stringConditionHasBeenSet; }
    inline void SetStringCondition(const StringCondition& value) { m_stringConditionHasBeenSet = true; m_stringCondition = value; }
    inline void SetStringCondition(StringCondition&& value) { m_stringConditionHasBeenSet = true; m_stringCondition = std::move(value); }
    inline UserHierarchyGroupSearchCriteria& WithStringCondition(const StringCondition& value) { SetStringCondition(value); return *this;}
    inline UserHierarchyGroupSearchCriteria& WithStringCondition(StringCondition&& value) { SetStringCondition(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UserHierarchyGroupSearchCriteria> m_orConditions;
    bool m_orConditionsHasBeenSet = false;

    Aws::Vector<UserHierarchyGroupSearchCriteria> m_andConditions;
    bool m_andConditionsHasBeenSet = false;

    StringCondition m_stringCondition;
    bool m_stringConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
