/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/CommonAttributeAndCondition.h>
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
   * <code>SearchFilter</code>. This accepts an <code>OR</code> or <code>AND</code>
   * (List of List) input where: </p> <ul> <li> <p>The top level list specifies
   * conditions that need to be applied with <code>OR</code> operator.</p> </li> <li>
   * <p>The inner list specifies conditions that need to be applied with
   * <code>AND</code> operator.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ControlPlaneAttributeFilter">AWS
   * API Reference</a></p>
   */
  class ControlPlaneAttributeFilter
  {
  public:
    AWS_CONNECT_API ControlPlaneAttributeFilter() = default;
    AWS_CONNECT_API ControlPlaneAttributeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ControlPlaneAttributeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of conditions which would be applied together with an <code>OR</code>
     * condition.</p>
     */
    inline const Aws::Vector<CommonAttributeAndCondition>& GetOrConditions() const { return m_orConditions; }
    inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }
    template<typename OrConditionsT = Aws::Vector<CommonAttributeAndCondition>>
    void SetOrConditions(OrConditionsT&& value) { m_orConditionsHasBeenSet = true; m_orConditions = std::forward<OrConditionsT>(value); }
    template<typename OrConditionsT = Aws::Vector<CommonAttributeAndCondition>>
    ControlPlaneAttributeFilter& WithOrConditions(OrConditionsT&& value) { SetOrConditions(std::forward<OrConditionsT>(value)); return *this;}
    template<typename OrConditionsT = CommonAttributeAndCondition>
    ControlPlaneAttributeFilter& AddOrConditions(OrConditionsT&& value) { m_orConditionsHasBeenSet = true; m_orConditions.emplace_back(std::forward<OrConditionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of conditions which would be applied together with an <code>AND</code>
     * condition.</p>
     */
    inline const CommonAttributeAndCondition& GetAndCondition() const { return m_andCondition; }
    inline bool AndConditionHasBeenSet() const { return m_andConditionHasBeenSet; }
    template<typename AndConditionT = CommonAttributeAndCondition>
    void SetAndCondition(AndConditionT&& value) { m_andConditionHasBeenSet = true; m_andCondition = std::forward<AndConditionT>(value); }
    template<typename AndConditionT = CommonAttributeAndCondition>
    ControlPlaneAttributeFilter& WithAndCondition(AndConditionT&& value) { SetAndCondition(std::forward<AndConditionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TagCondition& GetTagCondition() const { return m_tagCondition; }
    inline bool TagConditionHasBeenSet() const { return m_tagConditionHasBeenSet; }
    template<typename TagConditionT = TagCondition>
    void SetTagCondition(TagConditionT&& value) { m_tagConditionHasBeenSet = true; m_tagCondition = std::forward<TagConditionT>(value); }
    template<typename TagConditionT = TagCondition>
    ControlPlaneAttributeFilter& WithTagCondition(TagConditionT&& value) { SetTagCondition(std::forward<TagConditionT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CommonAttributeAndCondition> m_orConditions;
    bool m_orConditionsHasBeenSet = false;

    CommonAttributeAndCondition m_andCondition;
    bool m_andConditionHasBeenSet = false;

    TagCondition m_tagCondition;
    bool m_tagConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
