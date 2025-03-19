/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/model/AllowedPublishers.h>
#include <aws/lambda/model/CodeSigningPolicies.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>Details about a <a
   * href="https://docs.aws.amazon.com/lambda/latest/dg/configuration-codesigning.html">Code
   * signing configuration</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CodeSigningConfig">AWS
   * API Reference</a></p>
   */
  class CodeSigningConfig
  {
  public:
    AWS_LAMBDA_API CodeSigningConfig() = default;
    AWS_LAMBDA_API CodeSigningConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API CodeSigningConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Unique identifer for the Code signing configuration.</p>
     */
    inline const Aws::String& GetCodeSigningConfigId() const { return m_codeSigningConfigId; }
    inline bool CodeSigningConfigIdHasBeenSet() const { return m_codeSigningConfigIdHasBeenSet; }
    template<typename CodeSigningConfigIdT = Aws::String>
    void SetCodeSigningConfigId(CodeSigningConfigIdT&& value) { m_codeSigningConfigIdHasBeenSet = true; m_codeSigningConfigId = std::forward<CodeSigningConfigIdT>(value); }
    template<typename CodeSigningConfigIdT = Aws::String>
    CodeSigningConfig& WithCodeSigningConfigId(CodeSigningConfigIdT&& value) { SetCodeSigningConfigId(std::forward<CodeSigningConfigIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Code signing configuration.</p>
     */
    inline const Aws::String& GetCodeSigningConfigArn() const { return m_codeSigningConfigArn; }
    inline bool CodeSigningConfigArnHasBeenSet() const { return m_codeSigningConfigArnHasBeenSet; }
    template<typename CodeSigningConfigArnT = Aws::String>
    void SetCodeSigningConfigArn(CodeSigningConfigArnT&& value) { m_codeSigningConfigArnHasBeenSet = true; m_codeSigningConfigArn = std::forward<CodeSigningConfigArnT>(value); }
    template<typename CodeSigningConfigArnT = Aws::String>
    CodeSigningConfig& WithCodeSigningConfigArn(CodeSigningConfigArnT&& value) { SetCodeSigningConfigArn(std::forward<CodeSigningConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Code signing configuration description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CodeSigningConfig& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of allowed publishers.</p>
     */
    inline const AllowedPublishers& GetAllowedPublishers() const { return m_allowedPublishers; }
    inline bool AllowedPublishersHasBeenSet() const { return m_allowedPublishersHasBeenSet; }
    template<typename AllowedPublishersT = AllowedPublishers>
    void SetAllowedPublishers(AllowedPublishersT&& value) { m_allowedPublishersHasBeenSet = true; m_allowedPublishers = std::forward<AllowedPublishersT>(value); }
    template<typename AllowedPublishersT = AllowedPublishers>
    CodeSigningConfig& WithAllowedPublishers(AllowedPublishersT&& value) { SetAllowedPublishers(std::forward<AllowedPublishersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code signing policy controls the validation failure action for signature
     * mismatch or expiry.</p>
     */
    inline const CodeSigningPolicies& GetCodeSigningPolicies() const { return m_codeSigningPolicies; }
    inline bool CodeSigningPoliciesHasBeenSet() const { return m_codeSigningPoliciesHasBeenSet; }
    template<typename CodeSigningPoliciesT = CodeSigningPolicies>
    void SetCodeSigningPolicies(CodeSigningPoliciesT&& value) { m_codeSigningPoliciesHasBeenSet = true; m_codeSigningPolicies = std::forward<CodeSigningPoliciesT>(value); }
    template<typename CodeSigningPoliciesT = CodeSigningPolicies>
    CodeSigningConfig& WithCodeSigningPolicies(CodeSigningPoliciesT&& value) { SetCodeSigningPolicies(std::forward<CodeSigningPoliciesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the Code signing configuration was last modified, in
     * ISO-8601 format (YYYY-MM-DDThh:mm:ss.sTZD). </p>
     */
    inline const Aws::String& GetLastModified() const { return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    template<typename LastModifiedT = Aws::String>
    void SetLastModified(LastModifiedT&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::forward<LastModifiedT>(value); }
    template<typename LastModifiedT = Aws::String>
    CodeSigningConfig& WithLastModified(LastModifiedT&& value) { SetLastModified(std::forward<LastModifiedT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_codeSigningConfigId;
    bool m_codeSigningConfigIdHasBeenSet = false;

    Aws::String m_codeSigningConfigArn;
    bool m_codeSigningConfigArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AllowedPublishers m_allowedPublishers;
    bool m_allowedPublishersHasBeenSet = false;

    CodeSigningPolicies m_codeSigningPolicies;
    bool m_codeSigningPoliciesHasBeenSet = false;

    Aws::String m_lastModified;
    bool m_lastModifiedHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
