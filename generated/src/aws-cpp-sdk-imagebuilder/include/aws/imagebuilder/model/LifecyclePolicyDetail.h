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
    AWS_IMAGEBUILDER_API LifecyclePolicyDetail();
    AWS_IMAGEBUILDER_API LifecyclePolicyDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API LifecyclePolicyDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration details for the policy action.</p>
     */
    inline const LifecyclePolicyDetailAction& GetAction() const{ return m_action; }

    /**
     * <p>Configuration details for the policy action.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Configuration details for the policy action.</p>
     */
    inline void SetAction(const LifecyclePolicyDetailAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Configuration details for the policy action.</p>
     */
    inline void SetAction(LifecyclePolicyDetailAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Configuration details for the policy action.</p>
     */
    inline LifecyclePolicyDetail& WithAction(const LifecyclePolicyDetailAction& value) { SetAction(value); return *this;}

    /**
     * <p>Configuration details for the policy action.</p>
     */
    inline LifecyclePolicyDetail& WithAction(LifecyclePolicyDetailAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>Specifies the resources that the lifecycle policy applies to.</p>
     */
    inline const LifecyclePolicyDetailFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>Specifies the resources that the lifecycle policy applies to.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Specifies the resources that the lifecycle policy applies to.</p>
     */
    inline void SetFilter(const LifecyclePolicyDetailFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Specifies the resources that the lifecycle policy applies to.</p>
     */
    inline void SetFilter(LifecyclePolicyDetailFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Specifies the resources that the lifecycle policy applies to.</p>
     */
    inline LifecyclePolicyDetail& WithFilter(const LifecyclePolicyDetailFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>Specifies the resources that the lifecycle policy applies to.</p>
     */
    inline LifecyclePolicyDetail& WithFilter(LifecyclePolicyDetailFilter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>Additional rules to specify resources that should be exempt from policy
     * actions.</p>
     */
    inline const LifecyclePolicyDetailExclusionRules& GetExclusionRules() const{ return m_exclusionRules; }

    /**
     * <p>Additional rules to specify resources that should be exempt from policy
     * actions.</p>
     */
    inline bool ExclusionRulesHasBeenSet() const { return m_exclusionRulesHasBeenSet; }

    /**
     * <p>Additional rules to specify resources that should be exempt from policy
     * actions.</p>
     */
    inline void SetExclusionRules(const LifecyclePolicyDetailExclusionRules& value) { m_exclusionRulesHasBeenSet = true; m_exclusionRules = value; }

    /**
     * <p>Additional rules to specify resources that should be exempt from policy
     * actions.</p>
     */
    inline void SetExclusionRules(LifecyclePolicyDetailExclusionRules&& value) { m_exclusionRulesHasBeenSet = true; m_exclusionRules = std::move(value); }

    /**
     * <p>Additional rules to specify resources that should be exempt from policy
     * actions.</p>
     */
    inline LifecyclePolicyDetail& WithExclusionRules(const LifecyclePolicyDetailExclusionRules& value) { SetExclusionRules(value); return *this;}

    /**
     * <p>Additional rules to specify resources that should be exempt from policy
     * actions.</p>
     */
    inline LifecyclePolicyDetail& WithExclusionRules(LifecyclePolicyDetailExclusionRules&& value) { SetExclusionRules(std::move(value)); return *this;}

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
