﻿/**
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
  class UpdateIdMappingWorkflowResult
  {
  public:
    AWS_ENTITYRESOLUTION_API UpdateIdMappingWorkflowResult();
    AWS_ENTITYRESOLUTION_API UpdateIdMappingWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API UpdateIdMappingWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A description of the workflow.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateIdMappingWorkflowResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateIdMappingWorkflowResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateIdMappingWorkflowResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object which defines the ID mapping technique and any additional
     * configurations.</p>
     */
    inline const IdMappingTechniques& GetIdMappingTechniques() const{ return m_idMappingTechniques; }
    inline void SetIdMappingTechniques(const IdMappingTechniques& value) { m_idMappingTechniques = value; }
    inline void SetIdMappingTechniques(IdMappingTechniques&& value) { m_idMappingTechniques = std::move(value); }
    inline UpdateIdMappingWorkflowResult& WithIdMappingTechniques(const IdMappingTechniques& value) { SetIdMappingTechniques(value); return *this;}
    inline UpdateIdMappingWorkflowResult& WithIdMappingTechniques(IdMappingTechniques&& value) { SetIdMappingTechniques(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline const Aws::Vector<IdMappingWorkflowInputSource>& GetInputSourceConfig() const{ return m_inputSourceConfig; }
    inline void SetInputSourceConfig(const Aws::Vector<IdMappingWorkflowInputSource>& value) { m_inputSourceConfig = value; }
    inline void SetInputSourceConfig(Aws::Vector<IdMappingWorkflowInputSource>&& value) { m_inputSourceConfig = std::move(value); }
    inline UpdateIdMappingWorkflowResult& WithInputSourceConfig(const Aws::Vector<IdMappingWorkflowInputSource>& value) { SetInputSourceConfig(value); return *this;}
    inline UpdateIdMappingWorkflowResult& WithInputSourceConfig(Aws::Vector<IdMappingWorkflowInputSource>&& value) { SetInputSourceConfig(std::move(value)); return *this;}
    inline UpdateIdMappingWorkflowResult& AddInputSourceConfig(const IdMappingWorkflowInputSource& value) { m_inputSourceConfig.push_back(value); return *this; }
    inline UpdateIdMappingWorkflowResult& AddInputSourceConfig(IdMappingWorkflowInputSource&& value) { m_inputSourceConfig.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>OutputSource</code> objects, each of which contains fields
     * <code>OutputS3Path</code> and <code>KMSArn</code>.</p>
     */
    inline const Aws::Vector<IdMappingWorkflowOutputSource>& GetOutputSourceConfig() const{ return m_outputSourceConfig; }
    inline void SetOutputSourceConfig(const Aws::Vector<IdMappingWorkflowOutputSource>& value) { m_outputSourceConfig = value; }
    inline void SetOutputSourceConfig(Aws::Vector<IdMappingWorkflowOutputSource>&& value) { m_outputSourceConfig = std::move(value); }
    inline UpdateIdMappingWorkflowResult& WithOutputSourceConfig(const Aws::Vector<IdMappingWorkflowOutputSource>& value) { SetOutputSourceConfig(value); return *this;}
    inline UpdateIdMappingWorkflowResult& WithOutputSourceConfig(Aws::Vector<IdMappingWorkflowOutputSource>&& value) { SetOutputSourceConfig(std::move(value)); return *this;}
    inline UpdateIdMappingWorkflowResult& AddOutputSourceConfig(const IdMappingWorkflowOutputSource& value) { m_outputSourceConfig.push_back(value); return *this; }
    inline UpdateIdMappingWorkflowResult& AddOutputSourceConfig(IdMappingWorkflowOutputSource&& value) { m_outputSourceConfig.push_back(std::move(value)); return *this; }
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
    inline UpdateIdMappingWorkflowResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline UpdateIdMappingWorkflowResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline UpdateIdMappingWorkflowResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the workflow role. Entity Resolution
     * assumes this role to access Amazon Web Services resources on your behalf.</p>
     */
    inline const Aws::String& GetWorkflowArn() const{ return m_workflowArn; }
    inline void SetWorkflowArn(const Aws::String& value) { m_workflowArn = value; }
    inline void SetWorkflowArn(Aws::String&& value) { m_workflowArn = std::move(value); }
    inline void SetWorkflowArn(const char* value) { m_workflowArn.assign(value); }
    inline UpdateIdMappingWorkflowResult& WithWorkflowArn(const Aws::String& value) { SetWorkflowArn(value); return *this;}
    inline UpdateIdMappingWorkflowResult& WithWorkflowArn(Aws::String&& value) { SetWorkflowArn(std::move(value)); return *this;}
    inline UpdateIdMappingWorkflowResult& WithWorkflowArn(const char* value) { SetWorkflowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workflow.</p>
     */
    inline const Aws::String& GetWorkflowName() const{ return m_workflowName; }
    inline void SetWorkflowName(const Aws::String& value) { m_workflowName = value; }
    inline void SetWorkflowName(Aws::String&& value) { m_workflowName = std::move(value); }
    inline void SetWorkflowName(const char* value) { m_workflowName.assign(value); }
    inline UpdateIdMappingWorkflowResult& WithWorkflowName(const Aws::String& value) { SetWorkflowName(value); return *this;}
    inline UpdateIdMappingWorkflowResult& WithWorkflowName(Aws::String&& value) { SetWorkflowName(std::move(value)); return *this;}
    inline UpdateIdMappingWorkflowResult& WithWorkflowName(const char* value) { SetWorkflowName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateIdMappingWorkflowResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateIdMappingWorkflowResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateIdMappingWorkflowResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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
