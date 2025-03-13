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
    AWS_CODEPIPELINE_API DeleteCustomActionTypeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCustomActionType"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The category of the custom action that you want to delete, such as source or
     * deploy.</p>
     */
    inline ActionCategory GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(ActionCategory value) { m_categoryHasBeenSet = true; m_category = value; }
    inline DeleteCustomActionTypeRequest& WithCategory(ActionCategory value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider of the service used in the custom action, such as
     * CodeDeploy.</p>
     */
    inline const Aws::String& GetProvider() const { return m_provider; }
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }
    template<typename ProviderT = Aws::String>
    void SetProvider(ProviderT&& value) { m_providerHasBeenSet = true; m_provider = std::forward<ProviderT>(value); }
    template<typename ProviderT = Aws::String>
    DeleteCustomActionTypeRequest& WithProvider(ProviderT&& value) { SetProvider(std::forward<ProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the custom action to delete.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    DeleteCustomActionTypeRequest& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}
  private:

    ActionCategory m_category{ActionCategory::NOT_SET};
    bool m_categoryHasBeenSet = false;

    Aws::String m_provider;
    bool m_providerHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
