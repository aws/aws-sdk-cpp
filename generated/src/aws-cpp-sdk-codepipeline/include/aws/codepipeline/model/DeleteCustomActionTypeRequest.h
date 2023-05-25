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
   * <p>Represents the input of a <code>DeleteCustomActionType</code> operation. The
   * custom action will be marked as deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/DeleteCustomActionTypeInput">AWS
   * API Reference</a></p>
   */
  class DeleteCustomActionTypeRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API DeleteCustomActionTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCustomActionType"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The category of the custom action that you want to delete, such as source or
     * deploy.</p>
     */
    inline const ActionCategory& GetCategory() const{ return m_category; }

    /**
     * <p>The category of the custom action that you want to delete, such as source or
     * deploy.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category of the custom action that you want to delete, such as source or
     * deploy.</p>
     */
    inline void SetCategory(const ActionCategory& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category of the custom action that you want to delete, such as source or
     * deploy.</p>
     */
    inline void SetCategory(ActionCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category of the custom action that you want to delete, such as source or
     * deploy.</p>
     */
    inline DeleteCustomActionTypeRequest& WithCategory(const ActionCategory& value) { SetCategory(value); return *this;}

    /**
     * <p>The category of the custom action that you want to delete, such as source or
     * deploy.</p>
     */
    inline DeleteCustomActionTypeRequest& WithCategory(ActionCategory&& value) { SetCategory(std::move(value)); return *this;}


    /**
     * <p>The provider of the service used in the custom action, such as AWS
     * CodeDeploy.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }

    /**
     * <p>The provider of the service used in the custom action, such as AWS
     * CodeDeploy.</p>
     */
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }

    /**
     * <p>The provider of the service used in the custom action, such as AWS
     * CodeDeploy.</p>
     */
    inline void SetProvider(const Aws::String& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The provider of the service used in the custom action, such as AWS
     * CodeDeploy.</p>
     */
    inline void SetProvider(Aws::String&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }

    /**
     * <p>The provider of the service used in the custom action, such as AWS
     * CodeDeploy.</p>
     */
    inline void SetProvider(const char* value) { m_providerHasBeenSet = true; m_provider.assign(value); }

    /**
     * <p>The provider of the service used in the custom action, such as AWS
     * CodeDeploy.</p>
     */
    inline DeleteCustomActionTypeRequest& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}

    /**
     * <p>The provider of the service used in the custom action, such as AWS
     * CodeDeploy.</p>
     */
    inline DeleteCustomActionTypeRequest& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}

    /**
     * <p>The provider of the service used in the custom action, such as AWS
     * CodeDeploy.</p>
     */
    inline DeleteCustomActionTypeRequest& WithProvider(const char* value) { SetProvider(value); return *this;}


    /**
     * <p>The version of the custom action to delete.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the custom action to delete.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the custom action to delete.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the custom action to delete.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the custom action to delete.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the custom action to delete.</p>
     */
    inline DeleteCustomActionTypeRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the custom action to delete.</p>
     */
    inline DeleteCustomActionTypeRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the custom action to delete.</p>
     */
    inline DeleteCustomActionTypeRequest& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    ActionCategory m_category;
    bool m_categoryHasBeenSet = false;

    Aws::String m_provider;
    bool m_providerHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
