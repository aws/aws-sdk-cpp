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
#include <utility>

namespace Aws
{
namespace Lambda
{
namespace Model
{

  /**
   */
  class UpdateCodeSigningConfigRequest : public LambdaRequest
  {
  public:
    AWS_LAMBDA_API UpdateCodeSigningConfigRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCodeSigningConfig"; }

    AWS_LAMBDA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline const Aws::String& GetCodeSigningConfigArn() const { return m_codeSigningConfigArn; }
    inline bool CodeSigningConfigArnHasBeenSet() const { return m_codeSigningConfigArnHasBeenSet; }
    template<typename CodeSigningConfigArnT = Aws::String>
    void SetCodeSigningConfigArn(CodeSigningConfigArnT&& value) { m_codeSigningConfigArnHasBeenSet = true; m_codeSigningConfigArn = std::forward<CodeSigningConfigArnT>(value); }
    template<typename CodeSigningConfigArnT = Aws::String>
    UpdateCodeSigningConfigRequest& WithCodeSigningConfigArn(CodeSigningConfigArnT&& value) { SetCodeSigningConfigArn(std::forward<CodeSigningConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Descriptive name for this code signing configuration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateCodeSigningConfigRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    UpdateCodeSigningConfigRequest& WithAllowedPublishers(AllowedPublishersT&& value) { SetAllowedPublishers(std::forward<AllowedPublishersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code signing policy.</p>
     */
    inline const CodeSigningPolicies& GetCodeSigningPolicies() const { return m_codeSigningPolicies; }
    inline bool CodeSigningPoliciesHasBeenSet() const { return m_codeSigningPoliciesHasBeenSet; }
    template<typename CodeSigningPoliciesT = CodeSigningPolicies>
    void SetCodeSigningPolicies(CodeSigningPoliciesT&& value) { m_codeSigningPoliciesHasBeenSet = true; m_codeSigningPolicies = std::forward<CodeSigningPoliciesT>(value); }
    template<typename CodeSigningPoliciesT = CodeSigningPolicies>
    UpdateCodeSigningConfigRequest& WithCodeSigningPolicies(CodeSigningPoliciesT&& value) { SetCodeSigningPolicies(std::forward<CodeSigningPoliciesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_codeSigningConfigArn;
    bool m_codeSigningConfigArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AllowedPublishers m_allowedPublishers;
    bool m_allowedPublishersHasBeenSet = false;

    CodeSigningPolicies m_codeSigningPolicies;
    bool m_codeSigningPoliciesHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
