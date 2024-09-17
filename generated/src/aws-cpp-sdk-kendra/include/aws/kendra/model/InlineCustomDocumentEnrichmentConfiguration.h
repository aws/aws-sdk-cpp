/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/model/DocumentAttributeCondition.h>
#include <aws/kendra/model/DocumentAttributeTarget.h>
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
   * <p>Provides the configuration information for applying basic logic to alter
   * document metadata and content when ingesting documents into Amazon Kendra. To
   * apply advanced logic, to go beyond what you can do with basic logic, see <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/API_HookConfiguration.html">HookConfiguration</a>.</p>
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/kendra/latest/dg/custom-document-enrichment.html">Customizing
   * document metadata during the ingestion process</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/InlineCustomDocumentEnrichmentConfiguration">AWS
   * API Reference</a></p>
   */
  class InlineCustomDocumentEnrichmentConfiguration
  {
  public:
    AWS_KENDRA_API InlineCustomDocumentEnrichmentConfiguration();
    AWS_KENDRA_API InlineCustomDocumentEnrichmentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API InlineCustomDocumentEnrichmentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KENDRA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration of the condition used for the target document attribute or
     * metadata field when ingesting documents into Amazon Kendra.</p>
     */
    inline const DocumentAttributeCondition& GetCondition() const{ return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    inline void SetCondition(const DocumentAttributeCondition& value) { m_conditionHasBeenSet = true; m_condition = value; }
    inline void SetCondition(DocumentAttributeCondition&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }
    inline InlineCustomDocumentEnrichmentConfiguration& WithCondition(const DocumentAttributeCondition& value) { SetCondition(value); return *this;}
    inline InlineCustomDocumentEnrichmentConfiguration& WithCondition(DocumentAttributeCondition&& value) { SetCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration of the target document attribute or metadata field when
     * ingesting documents into Amazon Kendra. You can also include a value.</p>
     */
    inline const DocumentAttributeTarget& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const DocumentAttributeTarget& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(DocumentAttributeTarget&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline InlineCustomDocumentEnrichmentConfiguration& WithTarget(const DocumentAttributeTarget& value) { SetTarget(value); return *this;}
    inline InlineCustomDocumentEnrichmentConfiguration& WithTarget(DocumentAttributeTarget&& value) { SetTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>TRUE</code> to delete content if the condition used for the target
     * attribute is met.</p>
     */
    inline bool GetDocumentContentDeletion() const{ return m_documentContentDeletion; }
    inline bool DocumentContentDeletionHasBeenSet() const { return m_documentContentDeletionHasBeenSet; }
    inline void SetDocumentContentDeletion(bool value) { m_documentContentDeletionHasBeenSet = true; m_documentContentDeletion = value; }
    inline InlineCustomDocumentEnrichmentConfiguration& WithDocumentContentDeletion(bool value) { SetDocumentContentDeletion(value); return *this;}
    ///@}
  private:

    DocumentAttributeCondition m_condition;
    bool m_conditionHasBeenSet = false;

    DocumentAttributeTarget m_target;
    bool m_targetHasBeenSet = false;

    bool m_documentContentDeletion;
    bool m_documentContentDeletionHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
