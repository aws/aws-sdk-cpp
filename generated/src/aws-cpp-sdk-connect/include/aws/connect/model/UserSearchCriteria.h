/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/StringCondition.h>
#include <aws/connect/model/ListCondition.h>
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
    AWS_CONNECT_API UserSearchCriteria() = default;
    AWS_CONNECT_API UserSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API UserSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline const Aws::Vector<UserSearchCriteria>& GetOrConditions() const { return m_orConditions; }
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }
    template<typename OrConditionsT = Aws::Vector<UserSearchCriteria>>
    void SetOrConditions(OrConditionsT&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::forward<OrConditionsT>(value); }
    template<typename OrConditionsT = Aws::Vector<UserSearchCriteria>>
    UserSearchCriteria& WithOrConditions(OrConditionsT&& value) { SetOrConditions(std::forward<OrConditionsT>(value)); return *this;}
    template<typename OrConditionsT = UserSearchCriteria>
    UserSearchCriteria& AddOrConditions(OrConditionsT&& value) { m_orConditionsHasBeenSet = true; m_orConditions.emplace_back(std::forward<OrConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition. </p>
     */
    inline const Aws::Vector<UserSearchCriteria>& GetAndConditions() const { return m_andConditions; }
    inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }
    template<typename AndConditionsT = Aws::Vector<UserSearchCriteria>>
    void SetAndConditions(AndConditionsT&& value) { m_andConditionsHasBeenSet = true; m_andConditions = std::forward<AndConditionsT>(value); }
    template<typename AndConditionsT = Aws::Vector<UserSearchCriteria>>
    UserSearchCriteria& WithAndConditions(AndConditionsT&& value) { SetAndConditions(std::forward<AndConditionsT>(value)); return *this;}
    template<typename AndConditionsT = UserSearchCriteria>
    UserSearchCriteria& AddAndConditions(AndConditionsT&& value) { m_andConditionsHasBeenSet = true; m_andConditions.emplace_back(std::forward<AndConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A leaf node condition which can be used to specify a string condition.</p>
     * <p>The currently supported values for <code>FieldName</code> are
     * <code>Username</code>, <code>FirstName</code>, <code>LastName</code>,
     * <code>RoutingProfileId</code>, <code>SecurityProfileId</code>,
     * <code>ResourceId</code>.</p>
     */
    inline const StringCondition& GetStringCondition() const { return m_stringCondition; }
    inline bool StringConditionHasBeenSet() const { return m_stringConditionHasBeenSet; }
    template<typename StringConditionT = StringCondition>
    void SetStringCondition(StringConditionT&& value) { m_stringConditionHasBeenSet = true; m_stringCondition = std::forward<StringConditionT>(value); }
    template<typename StringConditionT = StringCondition>
    UserSearchCriteria& WithStringCondition(StringConditionT&& value) { SetStringCondition(std::forward<StringConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A leaf node condition which can be used to specify a List condition to search
     * users with attributes included in Lists like Proficiencies.</p>
     */
    inline const ListCondition& GetListCondition() const { return m_listCondition; }
    inline bool ListConditionHasBeenSet() const { return m_listConditionHasBeenSet; }
    template<typename ListConditionT = ListCondition>
    void SetListCondition(ListConditionT&& value) { m_listConditionHasBeenSet = true; m_listCondition = std::forward<ListConditionT>(value); }
    template<typename ListConditionT = ListCondition>
    UserSearchCriteria& WithListCondition(ListConditionT&& value) { SetListCondition(std::forward<ListConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A leaf node condition which can be used to specify a hierarchy group
     * condition.</p>
     */
    inline const HierarchyGroupCondition& GetHierarchyGroupCondition() const { return m_hierarchyGroupCondition; }
    inline bool HierarchyGroupConditionHasBeenSet() const { return m_hierarchyGroupConditionHasBeenSet; }
    template<typename HierarchyGroupConditionT = HierarchyGroupCondition>
    void SetHierarchyGroupCondition(HierarchyGroupConditionT&& value) { m_hierarchyGroupConditionHasBeenSet = true; m_hierarchyGroupCondition = std::forward<HierarchyGroupConditionT>(value); }
    template<typename HierarchyGroupConditionT = HierarchyGroupCondition>
    UserSearchCriteria& WithHierarchyGroupCondition(HierarchyGroupConditionT&& value) { SetHierarchyGroupCondition(std::forward<HierarchyGroupConditionT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UserSearchCriteria> m_orConditions;
    bool m_orConditionsHasBeenSet = false;

    Aws::Vector<UserSearchCriteria> m_andConditions;
    bool m_andConditionsHasBeenSet = false;

    StringCondition m_stringCondition;
    bool m_stringConditionHasBeenSet = false;

    ListCondition m_listCondition;
    bool m_listConditionHasBeenSet = false;

    HierarchyGroupCondition m_hierarchyGroupCondition;
    bool m_hierarchyGroupConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
