/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildWorkflowRepairContent.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildWorkflowDocument.h>
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
namespace Bedrock
{
namespace Model
{

  /**
   * <p>Defines the content and configuration for different types of policy build
   * workflows.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyWorkflowTypeContent">AWS
   * API Reference</a></p>
   */
  class AutomatedReasoningPolicyWorkflowTypeContent
  {
  public:
    AWS_BEDROCK_API AutomatedReasoningPolicyWorkflowTypeContent() = default;
    AWS_BEDROCK_API AutomatedReasoningPolicyWorkflowTypeContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API AutomatedReasoningPolicyWorkflowTypeContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of documents to be processed in a document ingestion workflow.</p>
     */
    inline const Aws::Vector<AutomatedReasoningPolicyBuildWorkflowDocument>& GetDocuments() const { return m_documents; }
    inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }
    template<typename DocumentsT = Aws::Vector<AutomatedReasoningPolicyBuildWorkflowDocument>>
    void SetDocuments(DocumentsT&& value) { m_documentsHasBeenSet = true; m_documents = std::forward<DocumentsT>(value); }
    template<typename DocumentsT = Aws::Vector<AutomatedReasoningPolicyBuildWorkflowDocument>>
    AutomatedReasoningPolicyWorkflowTypeContent& WithDocuments(DocumentsT&& value) { SetDocuments(std::forward<DocumentsT>(value)); return *this;}
    template<typename DocumentsT = AutomatedReasoningPolicyBuildWorkflowDocument>
    AutomatedReasoningPolicyWorkflowTypeContent& AddDocuments(DocumentsT&& value) { m_documentsHasBeenSet = true; m_documents.emplace_back(std::forward<DocumentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The assets and instructions needed for a policy repair workflow, including
     * repair annotations and guidance.</p>
     */
    inline const AutomatedReasoningPolicyBuildWorkflowRepairContent& GetPolicyRepairAssets() const { return m_policyRepairAssets; }
    inline bool PolicyRepairAssetsHasBeenSet() const { return m_policyRepairAssetsHasBeenSet; }
    template<typename PolicyRepairAssetsT = AutomatedReasoningPolicyBuildWorkflowRepairContent>
    void SetPolicyRepairAssets(PolicyRepairAssetsT&& value) { m_policyRepairAssetsHasBeenSet = true; m_policyRepairAssets = std::forward<PolicyRepairAssetsT>(value); }
    template<typename PolicyRepairAssetsT = AutomatedReasoningPolicyBuildWorkflowRepairContent>
    AutomatedReasoningPolicyWorkflowTypeContent& WithPolicyRepairAssets(PolicyRepairAssetsT&& value) { SetPolicyRepairAssets(std::forward<PolicyRepairAssetsT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AutomatedReasoningPolicyBuildWorkflowDocument> m_documents;
    bool m_documentsHasBeenSet = false;

    AutomatedReasoningPolicyBuildWorkflowRepairContent m_policyRepairAssets;
    bool m_policyRepairAssetsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
