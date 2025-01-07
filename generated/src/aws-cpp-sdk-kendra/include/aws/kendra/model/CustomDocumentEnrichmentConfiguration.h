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
    AWS_KENDRA_API CustomDocumentEnrichmentConfiguration();
    AWS_KENDRA_API CustomDocumentEnrichmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API CustomDocumentEnrichmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration information to alter document attributes or metadata fields and
     * content when ingesting documents into Amazon Kendra.</p>
     */
    inline const Aws::Vector<InlineCustomDocumentEnrichmentConfiguration>& GetInlineConfigurations() const{ return m_inlineConfigurations; }
    inline bool InlineConfigurationsHasBeenSet() const { return m_inlineConfigurationsHasBeenSet; }
    inline void SetInlineConfigurations(const Aws::Vector<InlineCustomDocumentEnrichmentConfiguration>& value) { m_inlineConfigurationsHasBeenSet = true; m_inlineConfigurations = value; }
    inline void SetInlineConfigurations(Aws::Vector<InlineCustomDocumentEnrichmentConfiguration>&& value) { m_inlineConfigurationsHasBeenSet = true; m_inlineConfigurations = std::move(value); }
    inline CustomDocumentEnrichmentConfiguration& WithInlineConfigurations(const Aws::Vector<InlineCustomDocumentEnrichmentConfiguration>& value) { SetInlineConfigurations(value); return *this;}
    inline CustomDocumentEnrichmentConfiguration& WithInlineConfigurations(Aws::Vector<InlineCustomDocumentEnrichmentConfiguration>&& value) { SetInlineConfigurations(std::move(value)); return *this;}
    inline CustomDocumentEnrichmentConfiguration& AddInlineConfigurations(const InlineCustomDocumentEnrichmentConfiguration& value) { m_inlineConfigurationsHasBeenSet = true; m_inlineConfigurations.push_back(value); return *this; }
    inline CustomDocumentEnrichmentConfiguration& AddInlineConfigurations(InlineCustomDocumentEnrichmentConfiguration&& value) { m_inlineConfigurationsHasBeenSet = true; m_inlineConfigurations.push_back(std::move(value)); return *this; }
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
    inline const HookConfiguration& GetPreExtractionHookConfiguration() const{ return m_preExtractionHookConfiguration; }
    inline bool PreExtractionHookConfigurationHasBeenSet() const { return m_preExtractionHookConfigurationHasBeenSet; }
    inline void SetPreExtractionHookConfiguration(const HookConfiguration& value) { m_preExtractionHookConfigurationHasBeenSet = true; m_preExtractionHookConfiguration = value; }
    inline void SetPreExtractionHookConfiguration(HookConfiguration&& value) { m_preExtractionHookConfigurationHasBeenSet = true; m_preExtractionHookConfiguration = std::move(value); }
    inline CustomDocumentEnrichmentConfiguration& WithPreExtractionHookConfiguration(const HookConfiguration& value) { SetPreExtractionHookConfiguration(value); return *this;}
    inline CustomDocumentEnrichmentConfiguration& WithPreExtractionHookConfiguration(HookConfiguration&& value) { SetPreExtractionHookConfiguration(std::move(value)); return *this;}
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
    inline const HookConfiguration& GetPostExtractionHookConfiguration() const{ return m_postExtractionHookConfiguration; }
    inline bool PostExtractionHookConfigurationHasBeenSet() const { return m_postExtractionHookConfigurationHasBeenSet; }
    inline void SetPostExtractionHookConfiguration(const HookConfiguration& value) { m_postExtractionHookConfigurationHasBeenSet = true; m_postExtractionHookConfiguration = value; }
    inline void SetPostExtractionHookConfiguration(HookConfiguration&& value) { m_postExtractionHookConfigurationHasBeenSet = true; m_postExtractionHookConfiguration = std::move(value); }
    inline CustomDocumentEnrichmentConfiguration& WithPostExtractionHookConfiguration(const HookConfiguration& value) { SetPostExtractionHookConfiguration(value); return *this;}
    inline CustomDocumentEnrichmentConfiguration& WithPostExtractionHookConfiguration(HookConfiguration&& value) { SetPostExtractionHookConfiguration(std::move(value)); return *this;}
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
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CustomDocumentEnrichmentConfiguration& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CustomDocumentEnrichmentConfiguration& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CustomDocumentEnrichmentConfiguration& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
