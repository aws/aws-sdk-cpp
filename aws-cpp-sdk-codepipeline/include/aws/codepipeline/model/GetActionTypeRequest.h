/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/codepipeline/model/ActionCategory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   */
  class GetActionTypeRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API GetActionTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetActionType"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Defines what kind of action can be taken in the stage. The following are the
     * valid values:</p> <ul> <li> <p> <code>Source</code> </p> </li> <li> <p>
     * <code>Build</code> </p> </li> <li> <p> <code>Test</code> </p> </li> <li> <p>
     * <code>Deploy</code> </p> </li> <li> <p> <code>Approval</code> </p> </li> <li>
     * <p> <code>Invoke</code> </p> </li> </ul>
     */
    inline const ActionCategory& GetCategory() const{ return m_category; }

    /**
     * <p>Defines what kind of action can be taken in the stage. The following are the
     * valid values:</p> <ul> <li> <p> <code>Source</code> </p> </li> <li> <p>
     * <code>Build</code> </p> </li> <li> <p> <code>Test</code> </p> </li> <li> <p>
     * <code>Deploy</code> </p> </li> <li> <p> <code>Approval</code> </p> </li> <li>
     * <p> <code>Invoke</code> </p> </li> </ul>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>Defines what kind of action can be taken in the stage. The following are the
     * valid values:</p> <ul> <li> <p> <code>Source</code> </p> </li> <li> <p>
     * <code>Build</code> </p> </li> <li> <p> <code>Test</code> </p> </li> <li> <p>
     * <code>Deploy</code> </p> </li> <li> <p> <code>Approval</code> </p> </li> <li>
     * <p> <code>Invoke</code> </p> </li> </ul>
     */
    inline void SetCategory(const ActionCategory& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>Defines what kind of action can be taken in the stage. The following are the
     * valid values:</p> <ul> <li> <p> <code>Source</code> </p> </li> <li> <p>
     * <code>Build</code> </p> </li> <li> <p> <code>Test</code> </p> </li> <li> <p>
     * <code>Deploy</code> </p> </li> <li> <p> <code>Approval</code> </p> </li> <li>
     * <p> <code>Invoke</code> </p> </li> </ul>
     */
    inline void SetCategory(ActionCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>Defines what kind of action can be taken in the stage. The following are the
     * valid values:</p> <ul> <li> <p> <code>Source</code> </p> </li> <li> <p>
     * <code>Build</code> </p> </li> <li> <p> <code>Test</code> </p> </li> <li> <p>
     * <code>Deploy</code> </p> </li> <li> <p> <code>Approval</code> </p> </li> <li>
     * <p> <code>Invoke</code> </p> </li> </ul>
     */
    inline GetActionTypeRequest& WithCategory(const ActionCategory& value) { SetCategory(value); return *this;}

    /**
     * <p>Defines what kind of action can be taken in the stage. The following are the
     * valid values:</p> <ul> <li> <p> <code>Source</code> </p> </li> <li> <p>
     * <code>Build</code> </p> </li> <li> <p> <code>Test</code> </p> </li> <li> <p>
     * <code>Deploy</code> </p> </li> <li> <p> <code>Approval</code> </p> </li> <li>
     * <p> <code>Invoke</code> </p> </li> </ul>
     */
    inline GetActionTypeRequest& WithCategory(ActionCategory&& value) { SetCategory(std::move(value)); return *this;}


    /**
     * <p>The creator of an action type that was created with any supported integration
     * model. There are two valid values: <code>AWS</code> and
     * <code>ThirdParty</code>.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The creator of an action type that was created with any supported integration
     * model. There are two valid values: <code>AWS</code> and
     * <code>ThirdParty</code>.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The creator of an action type that was created with any supported integration
     * model. There are two valid values: <code>AWS</code> and
     * <code>ThirdParty</code>.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The creator of an action type that was created with any supported integration
     * model. There are two valid values: <code>AWS</code> and
     * <code>ThirdParty</code>.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The creator of an action type that was created with any supported integration
     * model. There are two valid values: <code>AWS</code> and
     * <code>ThirdParty</code>.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The creator of an action type that was created with any supported integration
     * model. There are two valid values: <code>AWS</code> and
     * <code>ThirdParty</code>.</p>
     */
    inline GetActionTypeRequest& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The creator of an action type that was created with any supported integration
     * model. There are two valid values: <code>AWS</code> and
     * <code>ThirdParty</code>.</p>
     */
    inline GetActionTypeRequest& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The creator of an action type that was created with any supported integration
     * model. There are two valid values: <code>AWS</code> and
     * <code>ThirdParty</code>.</p>
     */
    inline GetActionTypeRequest& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>The provider of the action type being called. The provider name is specified
     * when the action type is created.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }

    /**
     * <p>The provider of the action type being called. The provider name is specified
     * when the action type is created.</p>
     */
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }

    /**
     * <p>The provider of the action type being called. The provider name is specified
     * when the action type is created.</p>
     */
    inline void SetProvider(const Aws::String& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The provider of the action type being called. The provider name is specified
     * when the action type is created.</p>
     */
    inline void SetProvider(Aws::String&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }

    /**
     * <p>The provider of the action type being called. The provider name is specified
     * when the action type is created.</p>
     */
    inline void SetProvider(const char* value) { m_providerHasBeenSet = true; m_provider.assign(value); }

    /**
     * <p>The provider of the action type being called. The provider name is specified
     * when the action type is created.</p>
     */
    inline GetActionTypeRequest& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}

    /**
     * <p>The provider of the action type being called. The provider name is specified
     * when the action type is created.</p>
     */
    inline GetActionTypeRequest& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}

    /**
     * <p>The provider of the action type being called. The provider name is specified
     * when the action type is created.</p>
     */
    inline GetActionTypeRequest& WithProvider(const char* value) { SetProvider(value); return *this;}


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
    inline GetActionTypeRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>A string that describes the action type version.</p>
     */
    inline GetActionTypeRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>A string that describes the action type version.</p>
     */
    inline GetActionTypeRequest& WithVersion(const char* value) { SetVersion(value); return *this;}

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
