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
    AWS_LAMBDA_API UpdateCodeSigningConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCodeSigningConfig"; }

    AWS_LAMBDA_API Aws::String SerializePayload() const override;


    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline const Aws::String& GetCodeSigningConfigArn() const{ return m_codeSigningConfigArn; }

    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline bool CodeSigningConfigArnHasBeenSet() const { return m_codeSigningConfigArnHasBeenSet; }

    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline void SetCodeSigningConfigArn(const Aws::String& value) { m_codeSigningConfigArnHasBeenSet = true; m_codeSigningConfigArn = value; }

    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline void SetCodeSigningConfigArn(Aws::String&& value) { m_codeSigningConfigArnHasBeenSet = true; m_codeSigningConfigArn = std::move(value); }

    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline void SetCodeSigningConfigArn(const char* value) { m_codeSigningConfigArnHasBeenSet = true; m_codeSigningConfigArn.assign(value); }

    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline UpdateCodeSigningConfigRequest& WithCodeSigningConfigArn(const Aws::String& value) { SetCodeSigningConfigArn(value); return *this;}

    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline UpdateCodeSigningConfigRequest& WithCodeSigningConfigArn(Aws::String&& value) { SetCodeSigningConfigArn(std::move(value)); return *this;}

    /**
     * <p>The The Amazon Resource Name (ARN) of the code signing configuration.</p>
     */
    inline UpdateCodeSigningConfigRequest& WithCodeSigningConfigArn(const char* value) { SetCodeSigningConfigArn(value); return *this;}


    /**
     * <p>Descriptive name for this code signing configuration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Descriptive name for this code signing configuration.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Descriptive name for this code signing configuration.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Descriptive name for this code signing configuration.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Descriptive name for this code signing configuration.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Descriptive name for this code signing configuration.</p>
     */
    inline UpdateCodeSigningConfigRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Descriptive name for this code signing configuration.</p>
     */
    inline UpdateCodeSigningConfigRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Descriptive name for this code signing configuration.</p>
     */
    inline UpdateCodeSigningConfigRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Signing profiles for this code signing configuration.</p>
     */
    inline const AllowedPublishers& GetAllowedPublishers() const{ return m_allowedPublishers; }

    /**
     * <p>Signing profiles for this code signing configuration.</p>
     */
    inline bool AllowedPublishersHasBeenSet() const { return m_allowedPublishersHasBeenSet; }

    /**
     * <p>Signing profiles for this code signing configuration.</p>
     */
    inline void SetAllowedPublishers(const AllowedPublishers& value) { m_allowedPublishersHasBeenSet = true; m_allowedPublishers = value; }

    /**
     * <p>Signing profiles for this code signing configuration.</p>
     */
    inline void SetAllowedPublishers(AllowedPublishers&& value) { m_allowedPublishersHasBeenSet = true; m_allowedPublishers = std::move(value); }

    /**
     * <p>Signing profiles for this code signing configuration.</p>
     */
    inline UpdateCodeSigningConfigRequest& WithAllowedPublishers(const AllowedPublishers& value) { SetAllowedPublishers(value); return *this;}

    /**
     * <p>Signing profiles for this code signing configuration.</p>
     */
    inline UpdateCodeSigningConfigRequest& WithAllowedPublishers(AllowedPublishers&& value) { SetAllowedPublishers(std::move(value)); return *this;}


    /**
     * <p>The code signing policy.</p>
     */
    inline const CodeSigningPolicies& GetCodeSigningPolicies() const{ return m_codeSigningPolicies; }

    /**
     * <p>The code signing policy.</p>
     */
    inline bool CodeSigningPoliciesHasBeenSet() const { return m_codeSigningPoliciesHasBeenSet; }

    /**
     * <p>The code signing policy.</p>
     */
    inline void SetCodeSigningPolicies(const CodeSigningPolicies& value) { m_codeSigningPoliciesHasBeenSet = true; m_codeSigningPolicies = value; }

    /**
     * <p>The code signing policy.</p>
     */
    inline void SetCodeSigningPolicies(CodeSigningPolicies&& value) { m_codeSigningPoliciesHasBeenSet = true; m_codeSigningPolicies = std::move(value); }

    /**
     * <p>The code signing policy.</p>
     */
    inline UpdateCodeSigningConfigRequest& WithCodeSigningPolicies(const CodeSigningPolicies& value) { SetCodeSigningPolicies(value); return *this;}

    /**
     * <p>The code signing policy.</p>
     */
    inline UpdateCodeSigningConfigRequest& WithCodeSigningPolicies(CodeSigningPolicies&& value) { SetCodeSigningPolicies(std::move(value)); return *this;}

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
