/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/ActionCategory.h>
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
   * <p>Specifies the category, owner, provider, and version of the action
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionTypeIdentifier">AWS
   * API Reference</a></p>
   */
  class ActionTypeIdentifier
  {
  public:
    AWS_CODEPIPELINE_API ActionTypeIdentifier() = default;
    AWS_CODEPIPELINE_API ActionTypeIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionTypeIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Defines what kind of action can be taken in the stage, one of the
     * following:</p> <ul> <li> <p> <code>Source</code> </p> </li> <li> <p>
     * <code>Build</code> </p> </li> <li> <p> <code>Test</code> </p> </li> <li> <p>
     * <code>Deploy</code> </p> </li> <li> <p> <code>Approval</code> </p> </li> <li>
     * <p> <code>Invoke</code> </p> </li> </ul>
     */
    inline ActionCategory GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(ActionCategory value) { m_categoryHasBeenSet = true; m_category = value; }
    inline ActionTypeIdentifier& WithCategory(ActionCategory value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creator of the action type being called: <code>AWS</code> or
     * <code>ThirdParty</code>.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    ActionTypeIdentifier& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider of the action type being called. The provider name is supplied
     * when the action type is created.</p>
     */
    inline const Aws::String& GetProvider() const { return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    template<typename ProviderT = Aws::String>
    void SetProvider(ProviderT&& value) { m_providerHasBeenSet = true; m_provider = std::forward<ProviderT>(value); }
    template<typename ProviderT = Aws::String>
    ActionTypeIdentifier& WithProvider(ProviderT&& value) { SetProvider(std::forward<ProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string that describes the action type version.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    ActionTypeIdentifier& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}
  private:

    ActionCategory m_category{ActionCategory::NOT_SET};
    bool m_categoryHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_provider;
    bool m_providerHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
