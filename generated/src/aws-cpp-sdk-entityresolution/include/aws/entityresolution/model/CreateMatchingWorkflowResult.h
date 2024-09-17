/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/IncrementalRunConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/ResolutionTechniques.h>
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
  class CreateMatchingWorkflowResult
  {
  public:
    AWS_ENTITYRESOLUTION_API CreateMatchingWorkflowResult();
    AWS_ENTITYRESOLUTION_API CreateMatchingWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API CreateMatchingWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A description of the workflow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateMatchingWorkflowResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateMatchingWorkflowResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateMatchingWorkflowResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object which defines an incremental run type and has only
     * <code>incrementalRunType</code> as a field.</p>
     */
    inline const IncrementalRunConfig& GetIncrementalRunConfig() const{ return m_incrementalRunConfig; }
    inline void SetIncrementalRunConfig(const IncrementalRunConfig& value) { m_incrementalRunConfig = value; }
    inline void SetIncrementalRunConfig(IncrementalRunConfig&& value) { m_incrementalRunConfig = std::move(value); }
    inline CreateMatchingWorkflowResult& WithIncrementalRunConfig(const IncrementalRunConfig& value) { SetIncrementalRunConfig(value); return *this;}
    inline CreateMatchingWorkflowResult& WithIncrementalRunConfig(IncrementalRunConfig&& value) { SetIncrementalRunConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline const Aws::Vector<InputSource>& GetInputSourceConfig() const{ return m_inputSourceConfig; }
    inline void SetInputSourceConfig(const Aws::Vector<InputSource>& value) { m_inputSourceConfig = value; }
    inline void SetInputSourceConfig(Aws::Vector<InputSource>&& value) { m_inputSourceConfig = std::move(value); }
    inline CreateMatchingWorkflowResult& WithInputSourceConfig(const Aws::Vector<InputSource>& value) { SetInputSourceConfig(value); return *this;}
    inline CreateMatchingWorkflowResult& WithInputSourceConfig(Aws::Vector<InputSource>&& value) { SetInputSourceConfig(std::move(value)); return *this;}
    inline CreateMatchingWorkflowResult& AddInputSourceConfig(const InputSource& value) { m_inputSourceConfig.push_back(value); return *this; }
    inline CreateMatchingWorkflowResult& AddInputSourceConfig(InputSource&& value) { m_inputSourceConfig.push_back(std::move(value)); return *this; }
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
    inline CreateMatchingWorkflowResult& WithOutputSourceConfig(const Aws::Vector<OutputSource>& value) { SetOutputSourceConfig(value); return *this;}
    inline CreateMatchingWorkflowResult& WithOutputSourceConfig(Aws::Vector<OutputSource>&& value) { SetOutputSourceConfig(std::move(value)); return *this;}
    inline CreateMatchingWorkflowResult& AddOutputSourceConfig(const OutputSource& value) { m_outputSourceConfig.push_back(value); return *this; }
    inline CreateMatchingWorkflowResult& AddOutputSourceConfig(OutputSource&& value) { m_outputSourceConfig.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An object which defines the <code>resolutionType</code> and the
     * <code>ruleBasedProperties</code>.</p>
     */
    inline const ResolutionTechniques& GetResolutionTechniques() const{ return m_resolutionTechniques; }
    inline void SetResolutionTechniques(const ResolutionTechniques& value) { m_resolutionTechniques = value; }
    inline void SetResolutionTechniques(ResolutionTechniques&& value) { m_resolutionTechniques = std::move(value); }
    inline CreateMatchingWorkflowResult& WithResolutionTechniques(const ResolutionTechniques& value) { SetResolutionTechniques(value); return *this;}
    inline CreateMatchingWorkflowResult& WithResolutionTechniques(ResolutionTechniques&& value) { SetResolutionTechniques(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline CreateMatchingWorkflowResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateMatchingWorkflowResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateMatchingWorkflowResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
    inline CreateMatchingWorkflowResult& WithWorkflowArn(const Aws::String& value) { SetWorkflowArn(value); return *this;}
    inline CreateMatchingWorkflowResult& WithWorkflowArn(Aws::String&& value) { SetWorkflowArn(std::move(value)); return *this;}
    inline CreateMatchingWorkflowResult& WithWorkflowArn(const char* value) { SetWorkflowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workflow.</p>
     */
    inline const Aws::String& GetWorkflowName() const{ return m_workflowName; }
    inline void SetWorkflowName(const Aws::String& value) { m_workflowName = value; }
    inline void SetWorkflowName(Aws::String&& value) { m_workflowName = std::move(value); }
    inline void SetWorkflowName(const char* value) { m_workflowName.assign(value); }
    inline CreateMatchingWorkflowResult& WithWorkflowName(const Aws::String& value) { SetWorkflowName(value); return *this;}
    inline CreateMatchingWorkflowResult& WithWorkflowName(Aws::String&& value) { SetWorkflowName(std::move(value)); return *this;}
    inline CreateMatchingWorkflowResult& WithWorkflowName(const char* value) { SetWorkflowName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateMatchingWorkflowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateMatchingWorkflowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateMatchingWorkflowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_description;

    IncrementalRunConfig m_incrementalRunConfig;

    Aws::Vector<InputSource> m_inputSourceConfig;

    Aws::Vector<OutputSource> m_outputSourceConfig;

    ResolutionTechniques m_resolutionTechniques;

    Aws::String m_roleArn;

    Aws::String m_workflowArn;

    Aws::String m_workflowName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
