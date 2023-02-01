/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/StringCondition.h>
#include <aws/connect/model/HierarchyGroupCondition.h>
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
   * <p>The search criteria to be used to return users.</p>  <p>The
   * <code>name</code> and <code>description</code> fields support "contains" queries
   * with a minimum of 2 characters and a maximum of 25 characters. Any queries with
   * character lengths outside of this range will throw invalid results. </p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/UserSearchCriteria">AWS
   * API Reference</a></p>
   */
  class UserSearchCriteria
  {
  public:
    AWS_CONNECT_API UserSearchCriteria();
    AWS_CONNECT_API UserSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UserSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline const Aws::Vector<UserSearchCriteria>& GetOrConditions() const{ return m_orConditions; }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline void SetOrConditions(const Aws::Vector<UserSearchCriteria>& value) { m_orConditionsHasBeenSet = true; m_orConditions = value; }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline void SetOrConditions(Aws::Vector<UserSearchCriteria>&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::move(value); }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline UserSearchCriteria& WithOrConditions(const Aws::Vector<UserSearchCriteria>& value) { SetOrConditions(value); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline UserSearchCriteria& WithOrConditions(Aws::Vector<UserSearchCriteria>&& value) { SetOrConditions(std::move(value)); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline UserSearchCriteria& AddOrConditions(const UserSearchCriteria& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(value); return *this; }

    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline UserSearchCriteria& AddOrConditions(UserSearchCriteria&& value) { m_orConditionsHasBeenSet = true; m_orConditions.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition. </p>
     */
    inline const Aws::Vector<UserSearchCriteria>& GetAndConditions() const{ return m_andConditions; }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition. </p>
     */
    inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition. </p>
     */
    inline void SetAndConditions(const Aws::Vector<UserSearchCriteria>& value) { m_andConditionsHasBeenSet = true; m_andConditions = value; }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition. </p>
     */
    inline void SetAndConditions(Aws::Vector<UserSearchCriteria>&& value) { m_andConditionsHasBeenSet = true; m_andConditions = std::move(value); }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition. </p>
     */
    inline UserSearchCriteria& WithAndConditions(const Aws::Vector<UserSearchCriteria>& value) { SetAndConditions(value); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition. </p>
     */
    inline UserSearchCriteria& WithAndConditions(Aws::Vector<UserSearchCriteria>&& value) { SetAndConditions(std::move(value)); return *this;}

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition. </p>
     */
    inline UserSearchCriteria& AddAndConditions(const UserSearchCriteria& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(value); return *this; }

    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition. </p>
     */
    inline UserSearchCriteria& AddAndConditions(UserSearchCriteria&& value) { m_andConditionsHasBeenSet = true; m_andConditions.push_back(std::move(value)); return *this; }


    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     */
    inline const StringCondition& GetStringCondition() const{ return m_stringCondition; }

    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     */
    inline bool StringConditionHasBeenSet() const { return m_stringConditionHasBeenSet; }

    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     */
    inline void SetStringCondition(const StringCondition& value) { m_stringConditionHasBeenSet = true; m_stringCondition = value; }

    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     */
    inline void SetStringCondition(StringCondition&& value) { m_stringConditionHasBeenSet = true; m_stringCondition = std::move(value); }

    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     */
    inline UserSearchCriteria& WithStringCondition(const StringCondition& value) { SetStringCondition(value); return *this;}

    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     */
    inline UserSearchCriteria& WithStringCondition(StringCondition&& value) { SetStringCondition(std::move(value)); return *this;}


    /**
     * <p>A leaf node condition which can be used to specify a hierarchy group
     * condition.</p>
     */
    inline const HierarchyGroupCondition& GetHierarchyGroupCondition() const{ return m_hierarchyGroupCondition; }

    /**
     * <p>A leaf node condition which can be used to specify a hierarchy group
     * condition.</p>
     */
    inline bool HierarchyGroupConditionHasBeenSet() const { return m_hierarchyGroupConditionHasBeenSet; }

    /**
     * <p>A leaf node condition which can be used to specify a hierarchy group
     * condition.</p>
     */
    inline void SetHierarchyGroupCondition(const HierarchyGroupCondition& value) { m_hierarchyGroupConditionHasBeenSet = true; m_hierarchyGroupCondition = value; }

    /**
     * <p>A leaf node condition which can be used to specify a hierarchy group
     * condition.</p>
     */
    inline void SetHierarchyGroupCondition(HierarchyGroupCondition&& value) { m_hierarchyGroupConditionHasBeenSet = true; m_hierarchyGroupCondition = std::move(value); }

    /**
     * <p>A leaf node condition which can be used to specify a hierarchy group
     * condition.</p>
     */
    inline UserSearchCriteria& WithHierarchyGroupCondition(const HierarchyGroupCondition& value) { SetHierarchyGroupCondition(value); return *this;}

    /**
     * <p>A leaf node condition which can be used to specify a hierarchy group
     * condition.</p>
     */
    inline UserSearchCriteria& WithHierarchyGroupCondition(HierarchyGroupCondition&& value) { SetHierarchyGroupCondition(std::move(value)); return *this;}

  private:

    Aws::Vector<UserSearchCriteria> m_orConditions;
    bool m_orConditionsHasBeenSet = false;

    Aws::Vector<UserSearchCriteria> m_andConditions;
    bool m_andConditionsHasBeenSet = false;

    StringCondition m_stringCondition;
    bool m_stringConditionHasBeenSet = false;

    HierarchyGroupCondition m_hierarchyGroupCondition;
    bool m_hierarchyGroupConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
