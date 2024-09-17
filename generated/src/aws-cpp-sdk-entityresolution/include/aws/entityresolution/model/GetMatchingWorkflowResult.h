/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/IncrementalRunConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/ResolutionTechniques.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/entityresolution/model/InputSource.h>
#include <aws/entityresolution/model/OutputSource.h>
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
  class GetMatchingWorkflowResult
  {
  public:
    AWS_ENTITYRESOLUTION_API GetMatchingWorkflowResult();
    AWS_ENTITYRESOLUTION_API GetMatchingWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API GetMatchingWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp of when the workflow was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetMatchingWorkflowResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetMatchingWorkflowResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the workflow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetMatchingWorkflowResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetMatchingWorkflowResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetMatchingWorkflowResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object which defines an incremental run type and has only
     * <code>incrementalRunType</code> as a field.</p>
     */
    inline const IncrementalRunConfig& GetIncrementalRunConfig() const{ return m_incrementalRunConfig; }
    inline void SetIncrementalRunConfig(const IncrementalRunConfig& value) { m_incrementalRunConfig = value; }
    inline void SetIncrementalRunConfig(IncrementalRunConfig&& value) { m_incrementalRunConfig = std::move(value); }
    inline GetMatchingWorkflowResult& WithIncrementalRunConfig(const IncrementalRunConfig& value) { SetIncrementalRunConfig(value); return *this;}
    inline GetMatchingWorkflowResult& WithIncrementalRunConfig(IncrementalRunConfig&& value) { SetIncrementalRunConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline const Aws::Vector<InputSource>& GetInputSourceConfig() const{ return m_inputSourceConfig; }
    inline void SetInputSourceConfig(const Aws::Vector<InputSource>& value) { m_inputSourceConfig = value; }
    inline void SetInputSourceConfig(Aws::Vector<InputSource>&& value) { m_inputSourceConfig = std::move(value); }
    inline GetMatchingWorkflowResult& WithInputSourceConfig(const Aws::Vector<InputSource>& value) { SetInputSourceConfig(value); return *this;}
    inline GetMatchingWorkflowResult& WithInputSourceConfig(Aws::Vector<InputSource>&& value) { SetInputSourceConfig(std::move(value)); return *this;}
    inline GetMatchingWorkflowResult& AddInputSourceConfig(const InputSource& value) { m_inputSourceConfig.push_back(value); return *this; }
    inline GetMatchingWorkflowResult& AddInputSourceConfig(InputSource&& value) { m_inputSourceConfig.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code>, <code>ApplyNormalization</code>, and
     * <code>Output</code>.</p>
     */
    inline const Aws::Vector<OutputSource>& GetOutputSourceConfig() const{ return m_outputSourceConfig; }
    inline void SetOutputSourceConfig(const Aws::Vector<OutputSource>& value) { m_outputSourceConfig = value; }
    inline void SetOutputSourceConfig(Aws::Vector<OutputSource>&& value) { m_outputSourceConfig = std::move(value); }
    inline GetMatchingWorkflowResult& WithOutputSourceConfig(const Aws::Vector<OutputSource>& value) { SetOutputSourceConfig(value); return *this;}
    inline GetMatchingWorkflowResult& WithOutputSourceConfig(Aws::Vector<OutputSource>&& value) { SetOutputSourceConfig(std::move(value)); return *this;}
    inline GetMatchingWorkflowResult& AddOutputSourceConfig(const OutputSource& value) { m_outputSourceConfig.push_back(value); return *this; }
    inline GetMatchingWorkflowResult& AddOutputSourceConfig(OutputSource&& value) { m_outputSourceConfig.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object which defines the <code>resolutionType</code> and the
     * <code>ruleBasedProperties</code>.</p>
     */
    inline const ResolutionTechniques& GetResolutionTechniques() const{ return m_resolutionTechniques; }
    inline void SetResolutionTechniques(const ResolutionTechniques& value) { m_resolutionTechniques = value; }
    inline void SetResolutionTechniques(ResolutionTechniques&& value) { m_resolutionTechniques = std::move(value); }
    inline GetMatchingWorkflowResult& WithResolutionTechniques(const ResolutionTechniques& value) { SetResolutionTechniques(value); return *this;}
    inline GetMatchingWorkflowResult& WithResolutionTechniques(ResolutionTechniques&& value) { SetResolutionTechniques(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access Amazon Web Services resources on your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline GetMatchingWorkflowResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline GetMatchingWorkflowResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline GetMatchingWorkflowResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline GetMatchingWorkflowResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline GetMatchingWorkflowResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline GetMatchingWorkflowResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline GetMatchingWorkflowResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetMatchingWorkflowResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetMatchingWorkflowResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline GetMatchingWorkflowResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline GetMatchingWorkflowResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline GetMatchingWorkflowResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the workflow was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetMatchingWorkflowResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetMatchingWorkflowResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>MatchingWorkflow</code>.</p>
     */
    inline const Aws::String& GetWorkflowArn() const{ return m_workflowArn; }
    inline void SetWorkflowArn(const Aws::String& value) { m_workflowArn = value; }
    inline void SetWorkflowArn(Aws::String&& value) { m_workflowArn = std::move(value); }
    inline void SetWorkflowArn(const char* value) { m_workflowArn.assign(value); }
    inline GetMatchingWorkflowResult& WithWorkflowArn(const Aws::String& value) { SetWorkflowArn(value); return *this;}
    inline GetMatchingWorkflowResult& WithWorkflowArn(Aws::String&& value) { SetWorkflowArn(std::move(value)); return *this;}
    inline GetMatchingWorkflowResult& WithWorkflowArn(const char* value) { SetWorkflowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workflow.</p>
     */
    inline const Aws::String& GetWorkflowName() const{ return m_workflowName; }
    inline void SetWorkflowName(const Aws::String& value) { m_workflowName = value; }
    inline void SetWorkflowName(Aws::String&& value) { m_workflowName = std::move(value); }
    inline void SetWorkflowName(const char* value) { m_workflowName.assign(value); }
    inline GetMatchingWorkflowResult& WithWorkflowName(const Aws::String& value) { SetWorkflowName(value); return *this;}
    inline GetMatchingWorkflowResult& WithWorkflowName(Aws::String&& value) { SetWorkflowName(std::move(value)); return *this;}
    inline GetMatchingWorkflowResult& WithWorkflowName(const char* value) { SetWorkflowName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetMatchingWorkflowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetMatchingWorkflowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetMatchingWorkflowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_description;

    IncrementalRunConfig m_incrementalRunConfig;

    Aws::Vector<InputSource> m_inputSourceConfig;

    Aws::Vector<OutputSource> m_outputSourceConfig;

    ResolutionTechniques m_resolutionTechniques;

    Aws::String m_roleArn;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_workflowArn;

    Aws::String m_workflowName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
