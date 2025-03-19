/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/HookConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/InlineCustomDocumentEnrichmentConfiguration.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides the configuration information for altering document metadata and
   * content during the document ingestion process.</p> <p>For more information, see
   * <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html">Customizing
   * document metadata during the ingestion process</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/CustomDocumentEnrichmentConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomDocumentEnrichmentConfiguration
  {
  public:
    AWS_KENDRA_API CustomDocumentEnrichmentConfiguration() = default;
    AWS_KENDRA_API CustomDocumentEnrichmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API CustomDocumentEnrichmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration information to alter document attributes or metadata fields and
     * content when ingesting documents into Amazon Kendra.</p>
     */
    inline const Aws::Vector<InlineCustomDocumentEnrichmentConfiguration>& GetInlineConfigurations() const { return m_inlineConfigurations; }
    inline bool InlineConfigurationsHasBeenSet() const { return m_inlineConfigurationsHasBeenSet; }
    template<typename InlineConfigurationsT = Aws::Vector<InlineCustomDocumentEnrichmentConfiguration>>
    void SetInlineConfigurations(InlineConfigurationsT&& value) { m_inlineConfigurationsHasBeenSet = true; m_inlineConfigurations = std::forward<InlineConfigurationsT>(value); }
    template<typename InlineConfigurationsT = Aws::Vector<InlineCustomDocumentEnrichmentConfiguration>>
    CustomDocumentEnrichmentConfiguration& WithInlineConfigurations(InlineConfigurationsT&& value) { SetInlineConfigurations(std::forward<InlineConfigurationsT>(value)); return *this;}
    template<typename InlineConfigurationsT = InlineCustomDocumentEnrichmentConfiguration>
    CustomDocumentEnrichmentConfiguration& AddInlineConfigurations(InlineConfigurationsT&& value) { m_inlineConfigurationsHasBeenSet = true; m_inlineConfigurations.emplace_back(std::forward<InlineConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration information for invoking a Lambda function in Lambda on the
     * original or raw documents before extracting their metadata and text. You can use
     * a Lambda function to apply advanced logic for creating, modifying, or deleting
     * document metadata and content. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html#advanced-data-manipulation">Advanced
     * data manipulation</a>.</p>
     */
    inline const HookConfiguration& GetPreExtractionHookConfiguration() const { return m_preExtractionHookConfiguration; }
    inline bool PreExtractionHookConfigurationHasBeenSet() const { return m_preExtractionHookConfigurationHasBeenSet; }
    template<typename PreExtractionHookConfigurationT = HookConfiguration>
    void SetPreExtractionHookConfiguration(PreExtractionHookConfigurationT&& value) { m_preExtractionHookConfigurationHasBeenSet = true; m_preExtractionHookConfiguration = std::forward<PreExtractionHookConfigurationT>(value); }
    template<typename PreExtractionHookConfigurationT = HookConfiguration>
    CustomDocumentEnrichmentConfiguration& WithPreExtractionHookConfiguration(PreExtractionHookConfigurationT&& value) { SetPreExtractionHookConfiguration(std::forward<PreExtractionHookConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for invoking a Lambda function in Lambda on the
     * structured documents with their metadata and text extracted. You can use a
     * Lambda function to apply advanced logic for creating, modifying, or deleting
     * document metadata and content. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html#advanced-data-manipulation">Advanced
     * data manipulation</a>.</p>
     */
    inline const HookConfiguration& GetPostExtractionHookConfiguration() const { return m_postExtractionHookConfiguration; }
    inline bool PostExtractionHookConfigurationHasBeenSet() const { return m_postExtractionHookConfigurationHasBeenSet; }
    template<typename PostExtractionHookConfigurationT = HookConfiguration>
    void SetPostExtractionHookConfiguration(PostExtractionHookConfigurationT&& value) { m_postExtractionHookConfigurationHasBeenSet = true; m_postExtractionHookConfiguration = std::forward<PostExtractionHookConfigurationT>(value); }
    template<typename PostExtractionHookConfigurationT = HookConfiguration>
    CustomDocumentEnrichmentConfiguration& WithPostExtractionHookConfiguration(PostExtractionHookConfigurationT&& value) { SetPostExtractionHookConfiguration(std::forward<PostExtractionHookConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role with permission to run
     * <code>PreExtractionHookConfiguration</code> and
     * <code>PostExtractionHookConfiguration</code> for altering document metadata and
     * content during the document ingestion process. For more information, see <a
     * href="https://docs.aws.amazon.com/kendra/latest/dg/iam-roles.html">an IAM roles
     * for Amazon Kendra</a>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CustomDocumentEnrichmentConfiguration& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InlineCustomDocumentEnrichmentConfiguration> m_inlineConfigurations;
    bool m_inlineConfigurationsHasBeenSet = false;

    HookConfiguration m_preExtractionHookConfiguration;
    bool m_preExtractionHookConfigurationHasBeenSet = false;

    HookConfiguration m_postExtractionHookConfiguration;
    bool m_postExtractionHookConfigurationHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
