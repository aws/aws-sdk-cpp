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
    AWS_CODEPIPELINE_API ActionTypeIdentifier();
    AWS_CODEPIPELINE_API ActionTypeIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionTypeIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Defines what kind of action can be taken in the stage, one of the
     * following:</p> <ul> <li> <p> <code>Source</code> </p> </li> <li> <p>
     * <code>Build</code> </p> </li> <li> <p> <code>Test</code> </p> </li> <li> <p>
     * <code>Deploy</code> </p> </li> <li> <p> <code>Approval</code> </p> </li> <li>
     * <p> <code>Invoke</code> </p> </li> </ul>
     */
    inline const ActionCategory& GetCategory() const{ return m_category; }

    /**
     * <p>Defines what kind of action can be taken in the stage, one of the
     * following:</p> <ul> <li> <p> <code>Source</code> </p> </li> <li> <p>
     * <code>Build</code> </p> </li> <li> <p> <code>Test</code> </p> </li> <li> <p>
     * <code>Deploy</code> </p> </li> <li> <p> <code>Approval</code> </p> </li> <li>
     * <p> <code>Invoke</code> </p> </li> </ul>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>Defines what kind of action can be taken in the stage, one of the
     * following:</p> <ul> <li> <p> <code>Source</code> </p> </li> <li> <p>
     * <code>Build</code> </p> </li> <li> <p> <code>Test</code> </p> </li> <li> <p>
     * <code>Deploy</code> </p> </li> <li> <p> <code>Approval</code> </p> </li> <li>
     * <p> <code>Invoke</code> </p> </li> </ul>
     */
    inline void SetCategory(const ActionCategory& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>Defines what kind of action can be taken in the stage, one of the
     * following:</p> <ul> <li> <p> <code>Source</code> </p> </li> <li> <p>
     * <code>Build</code> </p> </li> <li> <p> <code>Test</code> </p> </li> <li> <p>
     * <code>Deploy</code> </p> </li> <li> <p> <code>Approval</code> </p> </li> <li>
     * <p> <code>Invoke</code> </p> </li> </ul>
     */
    inline void SetCategory(ActionCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>Defines what kind of action can be taken in the stage, one of the
     * following:</p> <ul> <li> <p> <code>Source</code> </p> </li> <li> <p>
     * <code>Build</code> </p> </li> <li> <p> <code>Test</code> </p> </li> <li> <p>
     * <code>Deploy</code> </p> </li> <li> <p> <code>Approval</code> </p> </li> <li>
     * <p> <code>Invoke</code> </p> </li> </ul>
     */
    inline ActionTypeIdentifier& WithCategory(const ActionCategory& value) { SetCategory(value); return *this;}

    /**
     * <p>Defines what kind of action can be taken in the stage, one of the
     * following:</p> <ul> <li> <p> <code>Source</code> </p> </li> <li> <p>
     * <code>Build</code> </p> </li> <li> <p> <code>Test</code> </p> </li> <li> <p>
     * <code>Deploy</code> </p> </li> <li> <p> <code>Approval</code> </p> </li> <li>
     * <p> <code>Invoke</code> </p> </li> </ul>
     */
    inline ActionTypeIdentifier& WithCategory(ActionCategory&& value) { SetCategory(std::move(value)); return *this;}


    /**
     * <p>The creator of the action type being called: <code>AWS</code> or
     * <code>ThirdParty</code>.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The creator of the action type being called: <code>AWS</code> or
     * <code>ThirdParty</code>.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The creator of the action type being called: <code>AWS</code> or
     * <code>ThirdParty</code>.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The creator of the action type being called: <code>AWS</code> or
     * <code>ThirdParty</code>.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The creator of the action type being called: <code>AWS</code> or
     * <code>ThirdParty</code>.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The creator of the action type being called: <code>AWS</code> or
     * <code>ThirdParty</code>.</p>
     */
    inline ActionTypeIdentifier& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The creator of the action type being called: <code>AWS</code> or
     * <code>ThirdParty</code>.</p>
     */
    inline ActionTypeIdentifier& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The creator of the action type being called: <code>AWS</code> or
     * <code>ThirdParty</code>.</p>
     */
    inline ActionTypeIdentifier& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>The provider of the action type being called. The provider name is supplied
     * when the action type is created.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }

    /**
     * <p>The provider of the action type being called. The provider name is supplied
     * when the action type is created.</p>
     */
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }

    /**
     * <p>The provider of the action type being called. The provider name is supplied
     * when the action type is created.</p>
     */
    inline void SetProvider(const Aws::String& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The provider of the action type being called. The provider name is supplied
     * when the action type is created.</p>
     */
    inline void SetProvider(Aws::String&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }

    /**
     * <p>The provider of the action type being called. The provider name is supplied
     * when the action type is created.</p>
     */
    inline void SetProvider(const char* value) { m_providerHasBeenSet = true; m_provider.assign(value); }

    /**
     * <p>The provider of the action type being called. The provider name is supplied
     * when the action type is created.</p>
     */
    inline ActionTypeIdentifier& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}

    /**
     * <p>The provider of the action type being called. The provider name is supplied
     * when the action type is created.</p>
     */
    inline ActionTypeIdentifier& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}

    /**
     * <p>The provider of the action type being called. The provider name is supplied
     * when the action type is created.</p>
     */
    inline ActionTypeIdentifier& WithProvider(const char* value) { SetProvider(value); return *this;}


    /**
     * <p>A string that describes the action type version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>A string that describes the action type version.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>A string that describes the action type version.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>A string that describes the action type version.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>A string that describes the action type version.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>A string that describes the action type version.</p>
     */
    inline ActionTypeIdentifier& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>A string that describes the action type version.</p>
     */
    inline ActionTypeIdentifier& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>A string that describes the action type version.</p>
     */
    inline ActionTypeIdentifier& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    ActionCategory m_category;
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
