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
   * category, owner, provider, and version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/RuleTypeId">AWS
   * API Reference</a></p>
   */
  class RuleTypeId
  {
  public:
    AWS_CODEPIPELINE_API RuleTypeId();
    AWS_CODEPIPELINE_API RuleTypeId(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API RuleTypeId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A category defines what kind of rule can be run in the stage, and constrains
     * the provider type for the rule. The valid category is <code>Rule</code>. </p>
     */
    inline const RuleCategory& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const RuleCategory& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(RuleCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline RuleTypeId& WithCategory(const RuleCategory& value) { SetCategory(value); return *this;}
    inline RuleTypeId& WithCategory(RuleCategory&& value) { SetCategory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creator of the rule being called. The valid value for the
     * <code>Owner</code> field in the rule category is <code>AWS</code>. </p>
     */
    inline const RuleOwner& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const RuleOwner& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(RuleOwner&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline RuleTypeId& WithOwner(const RuleOwner& value) { SetOwner(value); return *this;}
    inline RuleTypeId& WithOwner(RuleOwner&& value) { SetOwner(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule provider, such as the <code>DeploymentWindow</code> rule.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    inline void SetProvider(const Aws::String& value) { m_providerHasBeenSet = true; m_provider = value; }
    inline void SetProvider(Aws::String&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }
    inline void SetProvider(const char* value) { m_providerHasBeenSet = true; m_provider.assign(value); }
    inline RuleTypeId& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}
    inline RuleTypeId& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}
    inline RuleTypeId& WithProvider(const char* value) { SetProvider(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that describes the rule version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline RuleTypeId& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline RuleTypeId& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline RuleTypeId& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}
  private:

    RuleCategory m_category;
    bool m_categoryHasBeenSet = false;

    RuleOwner m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_provider;
    bool m_providerHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
