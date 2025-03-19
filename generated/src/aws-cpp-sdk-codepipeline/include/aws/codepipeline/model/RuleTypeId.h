/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/RuleCategory.h>
#include <aws/codepipeline/model/RuleOwner.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>The ID for the rule type, which is made up of the combined values for
   * category, owner, provider, and version. For more information about conditions,
   * see <a
   * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/stage-conditions.html">Stage
   * conditions</a>. For more information about rules, see the <a
   * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/rule-reference.html">CodePipeline
   * rule reference</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RuleTypeId">AWS
   * API Reference</a></p>
   */
  class RuleTypeId
  {
  public:
    AWS_CODEPIPELINE_API RuleTypeId() = default;
    AWS_CODEPIPELINE_API RuleTypeId(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API RuleTypeId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A category defines what kind of rule can be run in the stage, and constrains
     * the provider type for the rule. The valid category is <code>Rule</code>. </p>
     */
    inline RuleCategory GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(RuleCategory value) { m_categoryHasBeenSet = true; m_category = value; }
    inline RuleTypeId& WithCategory(RuleCategory value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creator of the rule being called. The valid value for the
     * <code>Owner</code> field in the rule category is <code>AWS</code>. </p>
     */
    inline RuleOwner GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(RuleOwner value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline RuleTypeId& WithOwner(RuleOwner value) { SetOwner(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule provider, such as the <code>DeploymentWindow</code> rule. For a list
     * of rule provider names, see the rules listed in the <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/rule-reference.html">CodePipeline
     * rule reference</a>.</p>
     */
    inline const Aws::String& GetProvider() const { return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    template<typename ProviderT = Aws::String>
    void SetProvider(ProviderT&& value) { m_providerHasBeenSet = true; m_provider = std::forward<ProviderT>(value); }
    template<typename ProviderT = Aws::String>
    RuleTypeId& WithProvider(ProviderT&& value) { SetProvider(std::forward<ProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that describes the rule version.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    RuleTypeId& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}
  private:

    RuleCategory m_category{RuleCategory::NOT_SET};
    bool m_categoryHasBeenSet = false;

    RuleOwner m_owner{RuleOwner::NOT_SET};
    bool m_ownerHasBeenSet = false;

    Aws::String m_provider;
    bool m_providerHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
