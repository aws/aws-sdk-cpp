/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/entityresolution/model/IdMappingTechniques.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class CreateIdMappingWorkflowResult
  {
  public:
    AWS_ENTITYRESOLUTION_API CreateIdMappingWorkflowResult();
    AWS_ENTITYRESOLUTION_API CreateIdMappingWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API CreateIdMappingWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateIdMappingWorkflowResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the workflow.</p>
     */
    inline CreateIdMappingWorkflowResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the workflow.</p>
     */
    inline CreateIdMappingWorkflowResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An object which defines the <code>idMappingType</code> and the
     * <code>providerProperties</code>.</p>
     */
    inline const IdMappingTechniques& GetIdMappingTechniques() const{ return m_idMappingTechniques; }

    /**
     * <p>An object which defines the <code>idMappingType</code> and the
     * <code>providerProperties</code>.</p>
     */
    inline void SetIdMappingTechniques(const IdMappingTechniques& value) { m_idMappingTechniques = value; }

    /**
     * <p>An object which defines the <code>idMappingType</code> and the
     * <code>providerProperties</code>.</p>
     */
    inline void SetIdMappingTechniques(IdMappingTechniques&& value) { m_idMappingTechniques = std::move(value); }

    /**
     * <p>An object which defines the <code>idMappingType</code> and the
     * <code>providerProperties</code>.</p>
     */
    inline CreateIdMappingWorkflowResult& WithIdMappingTechniques(const IdMappingTechniques& value) { SetIdMappingTechniques(value); return *this;}

    /**
     * <p>An object which defines the <code>idMappingType</code> and the
     * <code>providerProperties</code>.</p>
     */
    inline CreateIdMappingWorkflowResult& WithIdMappingTechniques(IdMappingTechniques&& value) { SetIdMappingTechniques(std::move(value)); return *this;}


    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline const Aws::Vector<IdMappingWorkflowInputSource>& GetInputSourceConfig() const{ return m_inputSourceConfig; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline void SetInputSourceConfig(const Aws::Vector<IdMappingWorkflowInputSource>& value) { m_inputSourceConfig = value; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline void SetInputSourceConfig(Aws::Vector<IdMappingWorkflowInputSource>&& value) { m_inputSourceConfig = std::move(value); }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline CreateIdMappingWorkflowResult& WithInputSourceConfig(const Aws::Vector<IdMappingWorkflowInputSource>& value) { SetInputSourceConfig(value); return *this;}

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline CreateIdMappingWorkflowResult& WithInputSourceConfig(Aws::Vector<IdMappingWorkflowInputSource>&& value) { SetInputSourceConfig(std::move(value)); return *this;}

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline CreateIdMappingWorkflowResult& AddInputSourceConfig(const IdMappingWorkflowInputSource& value) { m_inputSourceConfig.push_back(value); return *this; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline CreateIdMappingWorkflowResult& AddInputSourceConfig(IdMappingWorkflowInputSource&& value) { m_inputSourceConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of <code>IdMappingWorkflowOutputSource</code> objects, each of which
     * contains fields <code>OutputS3Path</code> and <code>Output</code>.</p>
     */
    inline const Aws::Vector<IdMappingWorkflowOutputSource>& GetOutputSourceConfig() const{ return m_outputSourceConfig; }

    /**
     * <p>A list of <code>IdMappingWorkflowOutputSource</code> objects, each of which
     * contains fields <code>OutputS3Path</code> and <code>Output</code>.</p>
     */
    inline void SetOutputSourceConfig(const Aws::Vector<IdMappingWorkflowOutputSource>& value) { m_outputSourceConfig = value; }

    /**
     * <p>A list of <code>IdMappingWorkflowOutputSource</code> objects, each of which
     * contains fields <code>OutputS3Path</code> and <code>Output</code>.</p>
     */
    inline void SetOutputSourceConfig(Aws::Vector<IdMappingWorkflowOutputSource>&& value) { m_outputSourceConfig = std::move(value); }

    /**
     * <p>A list of <code>IdMappingWorkflowOutputSource</code> objects, each of which
     * contains fields <code>OutputS3Path</code> and <code>Output</code>.</p>
     */
    inline CreateIdMappingWorkflowResult& WithOutputSourceConfig(const Aws::Vector<IdMappingWorkflowOutputSource>& value) { SetOutputSourceConfig(value); return *this;}

    /**
     * <p>A list of <code>IdMappingWorkflowOutputSource</code> objects, each of which
     * contains fields <code>OutputS3Path</code> and <code>Output</code>.</p>
     */
    inline CreateIdMappingWorkflowResult& WithOutputSourceConfig(Aws::Vector<IdMappingWorkflowOutputSource>&& value) { SetOutputSourceConfig(std::move(value)); return *this;}

    /**
     * <p>A list of <code>IdMappingWorkflowOutputSource</code> objects, each of which
     * contains fields <code>OutputS3Path</code> and <code>Output</code>.</p>
     */
    inline CreateIdMappingWorkflowResult& AddOutputSourceConfig(const IdMappingWorkflowOutputSource& value) { m_outputSourceConfig.push_back(value); return *this; }

    /**
     * <p>A list of <code>IdMappingWorkflowOutputSource</code> objects, each of which
     * contains fields <code>OutputS3Path</code> and <code>Output</code>.</p>
     */
    inline CreateIdMappingWorkflowResult& AddOutputSourceConfig(IdMappingWorkflowOutputSource&& value) { m_outputSourceConfig.push_back(std::move(value)); return *this; }


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
    inline CreateIdMappingWorkflowResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline CreateIdMappingWorkflowResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to create resources on your behalf as part of workflow execution.</p>
     */
    inline CreateIdMappingWorkflowResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>IDMappingWorkflow</code>.</p>
     */
    inline const Aws::String& GetWorkflowArn() const{ return m_workflowArn; }

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>IDMappingWorkflow</code>.</p>
     */
    inline void SetWorkflowArn(const Aws::String& value) { m_workflowArn = value; }

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>IDMappingWorkflow</code>.</p>
     */
    inline void SetWorkflowArn(Aws::String&& value) { m_workflowArn = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>IDMappingWorkflow</code>.</p>
     */
    inline void SetWorkflowArn(const char* value) { m_workflowArn.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>IDMappingWorkflow</code>.</p>
     */
    inline CreateIdMappingWorkflowResult& WithWorkflowArn(const Aws::String& value) { SetWorkflowArn(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>IDMappingWorkflow</code>.</p>
     */
    inline CreateIdMappingWorkflowResult& WithWorkflowArn(Aws::String&& value) { SetWorkflowArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * <code>IDMappingWorkflow</code>.</p>
     */
    inline CreateIdMappingWorkflowResult& WithWorkflowArn(const char* value) { SetWorkflowArn(value); return *this;}


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
    inline CreateIdMappingWorkflowResult& WithWorkflowName(const Aws::String& value) { SetWorkflowName(value); return *this;}

    /**
     * <p>The name of the workflow.</p>
     */
    inline CreateIdMappingWorkflowResult& WithWorkflowName(Aws::String&& value) { SetWorkflowName(std::move(value)); return *this;}

    /**
     * <p>The name of the workflow.</p>
     */
    inline CreateIdMappingWorkflowResult& WithWorkflowName(const char* value) { SetWorkflowName(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateIdMappingWorkflowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateIdMappingWorkflowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateIdMappingWorkflowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_description;

    IdMappingTechniques m_idMappingTechniques;

    Aws::Vector<IdMappingWorkflowInputSource> m_inputSourceConfig;

    Aws::Vector<IdMappingWorkflowOutputSource> m_outputSourceConfig;

    Aws::String m_roleArn;

    Aws::String m_workflowArn;

    Aws::String m_workflowName;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
