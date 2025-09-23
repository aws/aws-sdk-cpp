/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/IdMappingTechniques.h>
#include <aws/core/utils/DateTime.h>
#include <aws/entityresolution/model/IdMappingIncrementalRunConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/entityresolution/model/IdMappingWorkflowInputSource.h>
#include <aws/entityresolution/model/IdMappingWorkflowOutputSource.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EntityResolution
{
namespace Model
{
  class GetIdMappingWorkflowResult
  {
  public:
    AWS_ENTITYRESOLUTION_API GetIdMappingWorkflowResult() = default;
    AWS_ENTITYRESOLUTION_API GetIdMappingWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API GetIdMappingWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the workflow.</p>
     */
    inline const Aws::String& GetWorkflowName() const { return m_workflowName; }
    template<typename WorkflowNameT = Aws::String>
    void SetWorkflowName(WorkflowNameT&& value) { m_workflowNameHasBeenSet = true; m_workflowName = std::forward<WorkflowNameT>(value); }
    template<typename WorkflowNameT = Aws::String>
    GetIdMappingWorkflowResult& WithWorkflowName(WorkflowNameT&& value) { SetWorkflowName(std::forward<WorkflowNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>IdMappingWorkflow</code> .</p>
     */
    inline const Aws::String& GetWorkflowArn() const { return m_workflowArn; }
    template<typename WorkflowArnT = Aws::String>
    void SetWorkflowArn(WorkflowArnT&& value) { m_workflowArnHasBeenSet = true; m_workflowArn = std::forward<WorkflowArnT>(value); }
    template<typename WorkflowArnT = Aws::String>
    GetIdMappingWorkflowResult& WithWorkflowArn(WorkflowArnT&& value) { SetWorkflowArn(std::forward<WorkflowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the workflow.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetIdMappingWorkflowResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline const Aws::Vector<IdMappingWorkflowInputSource>& GetInputSourceConfig() const { return m_inputSourceConfig; }
    template<typename InputSourceConfigT = Aws::Vector<IdMappingWorkflowInputSource>>
    void SetInputSourceConfig(InputSourceConfigT&& value) { m_inputSourceConfigHasBeenSet = true; m_inputSourceConfig = std::forward<InputSourceConfigT>(value); }
    template<typename InputSourceConfigT = Aws::Vector<IdMappingWorkflowInputSource>>
    GetIdMappingWorkflowResult& WithInputSourceConfig(InputSourceConfigT&& value) { SetInputSourceConfig(std::forward<InputSourceConfigT>(value)); return *this;}
    template<typename InputSourceConfigT = IdMappingWorkflowInputSource>
    GetIdMappingWorkflowResult& AddInputSourceConfig(InputSourceConfigT&& value) { m_inputSourceConfigHasBeenSet = true; m_inputSourceConfig.emplace_back(std::forward<InputSourceConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>outputS3Path</code> and <code>KMSArn</code>.</p>
     */
    inline const Aws::Vector<IdMappingWorkflowOutputSource>& GetOutputSourceConfig() const { return m_outputSourceConfig; }
    template<typename OutputSourceConfigT = Aws::Vector<IdMappingWorkflowOutputSource>>
    void SetOutputSourceConfig(OutputSourceConfigT&& value) { m_outputSourceConfigHasBeenSet = true; m_outputSourceConfig = std::forward<OutputSourceConfigT>(value); }
    template<typename OutputSourceConfigT = Aws::Vector<IdMappingWorkflowOutputSource>>
    GetIdMappingWorkflowResult& WithOutputSourceConfig(OutputSourceConfigT&& value) { SetOutputSourceConfig(std::forward<OutputSourceConfigT>(value)); return *this;}
    template<typename OutputSourceConfigT = IdMappingWorkflowOutputSource>
    GetIdMappingWorkflowResult& AddOutputSourceConfig(OutputSourceConfigT&& value) { m_outputSourceConfigHasBeenSet = true; m_outputSourceConfig.emplace_back(std::forward<OutputSourceConfigT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object which defines the ID mapping technique and any additional
     * configurations.</p>
     */
    inline const IdMappingTechniques& GetIdMappingTechniques() const { return m_idMappingTechniques; }
    template<typename IdMappingTechniquesT = IdMappingTechniques>
    void SetIdMappingTechniques(IdMappingTechniquesT&& value) { m_idMappingTechniquesHasBeenSet = true; m_idMappingTechniques = std::forward<IdMappingTechniquesT>(value); }
    template<typename IdMappingTechniquesT = IdMappingTechniques>
    GetIdMappingWorkflowResult& WithIdMappingTechniques(IdMappingTechniquesT&& value) { SetIdMappingTechniques(std::forward<IdMappingTechniquesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the workflow was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetIdMappingWorkflowResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the workflow was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetIdMappingWorkflowResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The incremental run configuration for the ID mapping workflow.</p>
     */
    inline const IdMappingIncrementalRunConfig& GetIncrementalRunConfig() const { return m_incrementalRunConfig; }
    template<typename IncrementalRunConfigT = IdMappingIncrementalRunConfig>
    void SetIncrementalRunConfig(IncrementalRunConfigT&& value) { m_incrementalRunConfigHasBeenSet = true; m_incrementalRunConfig = std::forward<IncrementalRunConfigT>(value); }
    template<typename IncrementalRunConfigT = IdMappingIncrementalRunConfig>
    GetIdMappingWorkflowResult& WithIncrementalRunConfig(IncrementalRunConfigT&& value) { SetIncrementalRunConfig(std::forward<IncrementalRunConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access Amazon Web Services resources on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    GetIdMappingWorkflowResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetIdMappingWorkflowResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetIdMappingWorkflowResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIdMappingWorkflowResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workflowName;
    bool m_workflowNameHasBeenSet = false;

    Aws::String m_workflowArn;
    bool m_workflowArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<IdMappingWorkflowInputSource> m_inputSourceConfig;
    bool m_inputSourceConfigHasBeenSet = false;

    Aws::Vector<IdMappingWorkflowOutputSource> m_outputSourceConfig;
    bool m_outputSourceConfigHasBeenSet = false;

    IdMappingTechniques m_idMappingTechniques;
    bool m_idMappingTechniquesHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    IdMappingIncrementalRunConfig m_incrementalRunConfig;
    bool m_incrementalRunConfigHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
