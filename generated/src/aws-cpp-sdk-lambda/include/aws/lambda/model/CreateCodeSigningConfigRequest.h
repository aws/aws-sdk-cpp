/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/LambdaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/AllowedPublishers.h>
#include <aws/lambda/model/CodeSigningPolicies.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   */
  class CreateCodeSigningConfigRequest : public LambdaRequest
  {
  public:
    AWS_LAMBDA_API CreateCodeSigningConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCodeSigningConfig"; }

    AWS_LAMBDA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Descriptive name for this code signing configuration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateCodeSigningConfigRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Signing profiles for this code signing configuration.</p>
     */
    inline const AllowedPublishers& GetAllowedPublishers() const { return m_allowedPublishers; }
    inline bool AllowedPublishersHasBeenSet() const { return m_allowedPublishersHasBeenSet; }
    template<typename AllowedPublishersT = AllowedPublishers>
    void SetAllowedPublishers(AllowedPublishersT&& value) { m_allowedPublishersHasBeenSet = true; m_allowedPublishers = std::forward<AllowedPublishersT>(value); }
    template<typename AllowedPublishersT = AllowedPublishers>
    CreateCodeSigningConfigRequest& WithAllowedPublishers(AllowedPublishersT&& value) { SetAllowedPublishers(std::forward<AllowedPublishersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code signing policies define the actions to take if the validation checks
     * fail. </p>
     */
    inline const CodeSigningPolicies& GetCodeSigningPolicies() const { return m_codeSigningPolicies; }
    inline bool CodeSigningPoliciesHasBeenSet() const { return m_codeSigningPoliciesHasBeenSet; }
    template<typename CodeSigningPoliciesT = CodeSigningPolicies>
    void SetCodeSigningPolicies(CodeSigningPoliciesT&& value) { m_codeSigningPoliciesHasBeenSet = true; m_codeSigningPolicies = std::forward<CodeSigningPoliciesT>(value); }
    template<typename CodeSigningPoliciesT = CodeSigningPolicies>
    CreateCodeSigningConfigRequest& WithCodeSigningPolicies(CodeSigningPoliciesT&& value) { SetCodeSigningPolicies(std::forward<CodeSigningPoliciesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to add to the code signing configuration.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateCodeSigningConfigRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateCodeSigningConfigRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AllowedPublishers m_allowedPublishers;
    bool m_allowedPublishersHasBeenSet = false;

    CodeSigningPolicies m_codeSigningPolicies;
    bool m_codeSigningPoliciesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
