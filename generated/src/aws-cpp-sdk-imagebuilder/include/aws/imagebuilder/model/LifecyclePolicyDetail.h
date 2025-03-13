/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/LifecyclePolicyDetailAction.h>
#include <aws/imagebuilder/model/LifecyclePolicyDetailFilter.h>
#include <aws/imagebuilder/model/LifecyclePolicyDetailExclusionRules.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>The configuration details for a lifecycle policy resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/LifecyclePolicyDetail">AWS
   * API Reference</a></p>
   */
  class LifecyclePolicyDetail
  {
  public:
    AWS_IMAGEBUILDER_API LifecyclePolicyDetail() = default;
    AWS_IMAGEBUILDER_API LifecyclePolicyDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecyclePolicyDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration details for the policy action.</p>
     */
    inline const LifecyclePolicyDetailAction& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = LifecyclePolicyDetailAction>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = LifecyclePolicyDetailAction>
    LifecyclePolicyDetail& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the resources that the lifecycle policy applies to.</p>
     */
    inline const LifecyclePolicyDetailFilter& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = LifecyclePolicyDetailFilter>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = LifecyclePolicyDetailFilter>
    LifecyclePolicyDetail& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional rules to specify resources that should be exempt from policy
     * actions.</p>
     */
    inline const LifecyclePolicyDetailExclusionRules& GetExclusionRules() const { return m_exclusionRules; }
    inline bool ExclusionRulesHasBeenSet() const { return m_exclusionRulesHasBeenSet; }
    template<typename ExclusionRulesT = LifecyclePolicyDetailExclusionRules>
    void SetExclusionRules(ExclusionRulesT&& value) { m_exclusionRulesHasBeenSet = true; m_exclusionRules = std::forward<ExclusionRulesT>(value); }
    template<typename ExclusionRulesT = LifecyclePolicyDetailExclusionRules>
    LifecyclePolicyDetail& WithExclusionRules(ExclusionRulesT&& value) { SetExclusionRules(std::forward<ExclusionRulesT>(value)); return *this;}
    ///@}
  private:

    LifecyclePolicyDetailAction m_action;
    bool m_actionHasBeenSet = false;

    LifecyclePolicyDetailFilter m_filter;
    bool m_filterHasBeenSet = false;

    LifecyclePolicyDetailExclusionRules m_exclusionRules;
    bool m_exclusionRulesHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
