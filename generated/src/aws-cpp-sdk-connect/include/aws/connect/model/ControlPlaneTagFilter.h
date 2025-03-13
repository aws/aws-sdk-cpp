/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/TagCondition.h>
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
   * <p>An object that can be used to specify Tag conditions inside the
   * <code>SearchFilter</code>. This accepts an <code>OR</code> of <code>AND</code>
   * (List of List) input where: </p> <ul> <li> <p>Top level list specifies
   * conditions that need to be applied with <code>OR</code> operator</p> </li> <li>
   * <p>Inner list specifies conditions that need to be applied with <code>AND</code>
   * operator.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ControlPlaneTagFilter">AWS
   * API Reference</a></p>
   */
  class ControlPlaneTagFilter
  {
  public:
    AWS_CONNECT_API ControlPlaneTagFilter() = default;
    AWS_CONNECT_API ControlPlaneTagFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ControlPlaneTagFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition. </p>
     */
    inline const Aws::Vector<Aws::Vector<TagCondition>>& GetOrConditions() const { return m_orConditions; }
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }
    template<typename OrConditionsT = Aws::Vector<Aws::Vector<TagCondition>>>
    void SetOrConditions(OrConditionsT&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::forward<OrConditionsT>(value); }
    template<typename OrConditionsT = Aws::Vector<Aws::Vector<TagCondition>>>
    ControlPlaneTagFilter& WithOrConditions(OrConditionsT&& value) { SetOrConditions(std::forward<OrConditionsT>(value)); return *this;}
    template<typename OrConditionsT = Aws::Vector<TagCondition>>
    ControlPlaneTagFilter& AddOrConditions(OrConditionsT&& value) { m_orConditionsHasBeenSet = true; m_orConditions.emplace_back(std::forward<OrConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline const Aws::Vector<TagCondition>& GetAndConditions() const { return m_andConditions; }
    inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }
    template<typename AndConditionsT = Aws::Vector<TagCondition>>
    void SetAndConditions(AndConditionsT&& value) { m_andConditionsHasBeenSet = true; m_andConditions = std::forward<AndConditionsT>(value); }
    template<typename AndConditionsT = Aws::Vector<TagCondition>>
    ControlPlaneTagFilter& WithAndConditions(AndConditionsT&& value) { SetAndConditions(std::forward<AndConditionsT>(value)); return *this;}
    template<typename AndConditionsT = TagCondition>
    ControlPlaneTagFilter& AddAndConditions(AndConditionsT&& value) { m_andConditionsHasBeenSet = true; m_andConditions.emplace_back(std::forward<AndConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A leaf node condition which can be used to specify a tag condition. </p>
     */
    inline const TagCondition& GetTagCondition() const { return m_tagCondition; }
    inline bool TagConditionHasBeenSet() const { return m_tagConditionHasBeenSet; }
    template<typename TagConditionT = TagCondition>
    void SetTagCondition(TagConditionT&& value) { m_tagConditionHasBeenSet = true; m_tagCondition = std::forward<TagConditionT>(value); }
    template<typename TagConditionT = TagCondition>
    ControlPlaneTagFilter& WithTagCondition(TagConditionT&& value) { SetTagCondition(std::forward<TagConditionT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Vector<TagCondition>> m_orConditions;
    bool m_orConditionsHasBeenSet = false;

    Aws::Vector<TagCondition> m_andConditions;
    bool m_andConditionsHasBeenSet = false;

    TagCondition m_tagCondition;
    bool m_tagConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
