/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/ActionCategory.h>
#include <aws/codepipeline/model/ActionOwner.h>
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
   * <p>Represents information about an action type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionTypeId">AWS
   * API Reference</a></p>
   */
  class ActionTypeId
  {
  public:
    AWS_CODEPIPELINE_API ActionTypeId();
    AWS_CODEPIPELINE_API ActionTypeId(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionTypeId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A category defines what kind of action can be taken in the stage, and
     * constrains the provider type for the action. Valid categories are limited to one
     * of the following values. </p> <ul> <li> <p>Source</p> </li> <li> <p>Build</p>
     * </li> <li> <p>Test</p> </li> <li> <p>Deploy</p> </li> <li> <p>Invoke</p> </li>
     * <li> <p>Approval</p> </li> <li> <p>Compute</p> </li> </ul>
     */
    inline const ActionCategory& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const ActionCategory& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(ActionCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline ActionTypeId& WithCategory(const ActionCategory& value) { SetCategory(value); return *this;}
    inline ActionTypeId& WithCategory(ActionCategory&& value) { SetCategory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creator of the action being called. There are three valid values for the
     * <code>Owner</code> field in the action category section within your pipeline
     * structure: <code>AWS</code>, <code>ThirdParty</code>, and <code>Custom</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#actions-valid-providers">Valid
     * Action Types and Providers in CodePipeline</a>.</p>
     */
    inline const ActionOwner& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const ActionOwner& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(ActionOwner&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline ActionTypeId& WithOwner(const ActionOwner& value) { SetOwner(value); return *this;}
    inline ActionTypeId& WithOwner(ActionOwner&& value) { SetOwner(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider of the service being called by the action. Valid providers are
     * determined by the action category. For example, an action in the Deploy category
     * type might have a provider of CodeDeploy, which would be specified as
     * <code>CodeDeploy</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/codepipeline/latest/userguide/reference-pipeline-structure.html#actions-valid-providers">Valid
     * Action Types and Providers in CodePipeline</a>.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    inline void SetProvider(const Aws::String& value) { m_providerHasBeenSet = true; m_provider = value; }
    inline void SetProvider(Aws::String&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }
    inline void SetProvider(const char* value) { m_providerHasBeenSet = true; m_provider.assign(value); }
    inline ActionTypeId& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}
    inline ActionTypeId& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}
    inline ActionTypeId& WithProvider(const char* value) { SetProvider(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that describes the action version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline ActionTypeId& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline ActionTypeId& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline ActionTypeId& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}
  private:

    ActionCategory m_category;
    bool m_categoryHasBeenSet = false;

    ActionOwner m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_provider;
    bool m_providerHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
