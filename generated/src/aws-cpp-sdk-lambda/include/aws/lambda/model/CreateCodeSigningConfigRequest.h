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
  class CreateCodeSigningConfigRequest : public LambdaRequest
  {
  public:
    AWS_LAMBDA_API CreateCodeSigningConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCodeSigningConfig"; }

    AWS_LAMBDA_API Aws::String SerializePayload() const override;


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
    inline CreateCodeSigningConfigRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Descriptive name for this code signing configuration.</p>
     */
    inline CreateCodeSigningConfigRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Descriptive name for this code signing configuration.</p>
     */
    inline CreateCodeSigningConfigRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline CreateCodeSigningConfigRequest& WithAllowedPublishers(const AllowedPublishers& value) { SetAllowedPublishers(value); return *this;}

    /**
     * <p>Signing profiles for this code signing configuration.</p>
     */
    inline CreateCodeSigningConfigRequest& WithAllowedPublishers(AllowedPublishers&& value) { SetAllowedPublishers(std::move(value)); return *this;}


    /**
     * <p>The code signing policies define the actions to take if the validation checks
     * fail. </p>
     */
    inline const CodeSigningPolicies& GetCodeSigningPolicies() const{ return m_codeSigningPolicies; }

    /**
     * <p>The code signing policies define the actions to take if the validation checks
     * fail. </p>
     */
    inline bool CodeSigningPoliciesHasBeenSet() const { return m_codeSigningPoliciesHasBeenSet; }

    /**
     * <p>The code signing policies define the actions to take if the validation checks
     * fail. </p>
     */
    inline void SetCodeSigningPolicies(const CodeSigningPolicies& value) { m_codeSigningPoliciesHasBeenSet = true; m_codeSigningPolicies = value; }

    /**
     * <p>The code signing policies define the actions to take if the validation checks
     * fail. </p>
     */
    inline void SetCodeSigningPolicies(CodeSigningPolicies&& value) { m_codeSigningPoliciesHasBeenSet = true; m_codeSigningPolicies = std::move(value); }

    /**
     * <p>The code signing policies define the actions to take if the validation checks
     * fail. </p>
     */
    inline CreateCodeSigningConfigRequest& WithCodeSigningPolicies(const CodeSigningPolicies& value) { SetCodeSigningPolicies(value); return *this;}

    /**
     * <p>The code signing policies define the actions to take if the validation checks
     * fail. </p>
     */
    inline CreateCodeSigningConfigRequest& WithCodeSigningPolicies(CodeSigningPolicies&& value) { SetCodeSigningPolicies(std::move(value)); return *this;}

  private:

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
