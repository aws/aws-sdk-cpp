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
  class UpdateMatchingWorkflowResult
  {
  public:
    AWS_ENTITYRESOLUTION_API UpdateMatchingWorkflowResult();
    AWS_ENTITYRESOLUTION_API UpdateMatchingWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API UpdateMatchingWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A description of the workflow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the workflow.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the workflow.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the workflow.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the workflow.</p>
     */
    inline UpdateMatchingWorkflowResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the workflow.</p>
     */
    inline UpdateMatchingWorkflowResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the workflow.</p>
     */
    inline UpdateMatchingWorkflowResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An object which defines an incremental run type and has only
     * <code>incrementalRunType</code> as a field.</p>
     */
    inline const IncrementalRunConfig& GetIncrementalRunConfig() const{ return m_incrementalRunConfig; }

    /**
     * <p>An object which defines an incremental run type and has only
     * <code>incrementalRunType</code> as a field.</p>
     */
    inline void SetIncrementalRunConfig(const IncrementalRunConfig& value) { m_incrementalRunConfig = value; }

    /**
     * <p>An object which defines an incremental run type and has only
     * <code>incrementalRunType</code> as a field.</p>
     */
    inline void SetIncrementalRunConfig(IncrementalRunConfig&& value) { m_incrementalRunConfig = std::move(value); }

    /**
     * <p>An object which defines an incremental run type and has only
     * <code>incrementalRunType</code> as a field.</p>
     */
    inline UpdateMatchingWorkflowResult& WithIncrementalRunConfig(const IncrementalRunConfig& value) { SetIncrementalRunConfig(value); return *this;}

    /**
     * <p>An object which defines an incremental run type and has only
     * <code>incrementalRunType</code> as a field.</p>
     */
    inline UpdateMatchingWorkflowResult& WithIncrementalRunConfig(IncrementalRunConfig&& value) { SetIncrementalRunConfig(std::move(value)); return *this;}


    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline const Aws::Vector<InputSource>& GetInputSourceConfig() const{ return m_inputSourceConfig; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline void SetInputSourceConfig(const Aws::Vector<InputSource>& value) { m_inputSourceConfig = value; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline void SetInputSourceConfig(Aws::Vector<InputSource>&& value) { m_inputSourceConfig = std::move(value); }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline UpdateMatchingWorkflowResult& WithInputSourceConfig(const Aws::Vector<InputSource>& value) { SetInputSourceConfig(value); return *this;}

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline UpdateMatchingWorkflowResult& WithInputSourceConfig(Aws::Vector<InputSource>&& value) { SetInputSourceConfig(std::move(value)); return *this;}

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline UpdateMatchingWorkflowResult& AddInputSourceConfig(const InputSource& value) { m_inputSourceConfig.push_back(value); return *this; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline UpdateMatchingWorkflowResult& AddInputSourceConfig(InputSource&& value) { m_inputSourceConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code>, <code>ApplyNormalization</code>, and
     * <code>Output</code>.</p>
     */
    inline const Aws::Vector<OutputSource>& GetOutputSourceConfig() const{ return m_outputSourceConfig; }

    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code>, <code>ApplyNormalization</code>, and
     * <code>Output</code>.</p>
     */
    inline void SetOutputSourceConfig(const Aws::Vector<OutputSource>& value) { m_outputSourceConfig = value; }

    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code>, <code>ApplyNormalization</code>, and
     * <code>Output</code>.</p>
     */
    inline void SetOutputSourceConfig(Aws::Vector<OutputSource>&& value) { m_outputSourceConfig = std::move(value); }

    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code>, <code>ApplyNormalization</code>, and
     * <code>Output</code>.</p>
     */
    inline UpdateMatchingWorkflowResult& WithOutputSourceConfig(const Aws::Vector<OutputSource>& value) { SetOutputSourceConfig(value); return *this;}

    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code>, <code>ApplyNormalization</code>, and
     * <code>Output</code>.</p>
     */
    inline UpdateMatchingWorkflowResult& WithOutputSourceConfig(Aws::Vector<OutputSource>&& value) { SetOutputSourceConfig(std::move(value)); return *this;}

    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code>, <code>ApplyNormalization</code>, and
     * <code>Output</code>.</p>
     */
    inline UpdateMatchingWorkflowResult& AddOutputSourceConfig(const OutputSource& value) { m_outputSourceConfig.push_back(value); return *this; }

    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code>, <code>ApplyNormalization</code>, and
     * <code>Output</code>.</p>
     */
    inline UpdateMatchingWorkflowResult& AddOutputSourceConfig(OutputSource&& value) { m_outputSourceConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>An object which defines the <code>resolutionType</code> and the
     * <code>ruleBasedProperties</code> </p>
     */
    inline const ResolutionTechniques& GetResolutionTechniques() const{ return m_resolutionTechniques; }

    /**
     * <p>An object which defines the <code>resolutionType</code> and the
     * <code>ruleBasedProperties</code> </p>
     */
    inline void SetResolutionTechniques(const ResolutionTechniques& value) { m_resolutionTechniques = value; }

    /**
     * <p>An object which defines the <code>resolutionType</code> and the
     * <code>ruleBasedProperties</code> </p>
     */
    inline void SetResolutionTechniques(ResolutionTechniques&& value) { m_resolutionTechniques = std::move(value); }

    /**
     * <p>An object which defines the <code>resolutionType</code> and the
     * <code>ruleBasedProperties</code> </p>
     */
    inline UpdateMatchingWorkflowResult& WithResolutionTechniques(const ResolutionTechniques& value) { SetResolutionTechniques(value); return *this;}

    /**
     * <p>An object which defines the <code>resolutionType</code> and the
     * <code>ruleBasedProperties</code> </p>
     */
    inline UpdateMatchingWorkflowResult& WithResolutionTechniques(ResolutionTechniques&& value) { SetResolutionTechniques(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline UpdateMatchingWorkflowResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline UpdateMatchingWorkflowResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline UpdateMatchingWorkflowResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The name of the workflow.</p>
     */
    inline const Aws::String& GetWorkflowName() const{ return m_workflowName; }

    /**
     * <p>The name of the workflow.</p>
     */
    inline void SetWorkflowName(const Aws::String& value) { m_workflowName = value; }

    /**
     * <p>The name of the workflow.</p>
     */
    inline void SetWorkflowName(Aws::String&& value) { m_workflowName = std::move(value); }

    /**
     * <p>The name of the workflow.</p>
     */
    inline void SetWorkflowName(const char* value) { m_workflowName.assign(value); }

    /**
     * <p>The name of the workflow.</p>
     */
    inline UpdateMatchingWorkflowResult& WithWorkflowName(const Aws::String& value) { SetWorkflowName(value); return *this;}

    /**
     * <p>The name of the workflow.</p>
     */
    inline UpdateMatchingWorkflowResult& WithWorkflowName(Aws::String&& value) { SetWorkflowName(std::move(value)); return *this;}

    /**
     * <p>The name of the workflow.</p>
     */
    inline UpdateMatchingWorkflowResult& WithWorkflowName(const char* value) { SetWorkflowName(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateMatchingWorkflowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateMatchingWorkflowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateMatchingWorkflowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_description;

    IncrementalRunConfig m_incrementalRunConfig;

    Aws::Vector<InputSource> m_inputSourceConfig;

    Aws::Vector<OutputSource> m_outputSourceConfig;

    ResolutionTechniques m_resolutionTechniques;

    Aws::String m_roleArn;

    Aws::String m_workflowName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
