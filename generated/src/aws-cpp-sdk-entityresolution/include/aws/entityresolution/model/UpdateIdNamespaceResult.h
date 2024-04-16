/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/entityresolution/model/IdNamespaceType.h>
#include <aws/entityresolution/model/IdNamespaceIdMappingWorkflowProperties.h>
#include <aws/entityresolution/model/IdNamespaceInputSource.h>
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
  class UpdateIdNamespaceResult
  {
  public:
    AWS_ENTITYRESOLUTION_API UpdateIdNamespaceResult();
    AWS_ENTITYRESOLUTION_API UpdateIdNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API UpdateIdNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp of when the ID namespace was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the ID namespace was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp of when the ID namespace was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the ID namespace was created.</p>
     */
    inline UpdateIdNamespaceResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the ID namespace was created.</p>
     */
    inline UpdateIdNamespaceResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The description of the ID namespace.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline UpdateIdNamespaceResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline UpdateIdNamespaceResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline UpdateIdNamespaceResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Determines the properties of <code>IdMappingWorkflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline const Aws::Vector<IdNamespaceIdMappingWorkflowProperties>& GetIdMappingWorkflowProperties() const{ return m_idMappingWorkflowProperties; }

    /**
     * <p>Determines the properties of <code>IdMappingWorkflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline void SetIdMappingWorkflowProperties(const Aws::Vector<IdNamespaceIdMappingWorkflowProperties>& value) { m_idMappingWorkflowProperties = value; }

    /**
     * <p>Determines the properties of <code>IdMappingWorkflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline void SetIdMappingWorkflowProperties(Aws::Vector<IdNamespaceIdMappingWorkflowProperties>&& value) { m_idMappingWorkflowProperties = std::move(value); }

    /**
     * <p>Determines the properties of <code>IdMappingWorkflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline UpdateIdNamespaceResult& WithIdMappingWorkflowProperties(const Aws::Vector<IdNamespaceIdMappingWorkflowProperties>& value) { SetIdMappingWorkflowProperties(value); return *this;}

    /**
     * <p>Determines the properties of <code>IdMappingWorkflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline UpdateIdNamespaceResult& WithIdMappingWorkflowProperties(Aws::Vector<IdNamespaceIdMappingWorkflowProperties>&& value) { SetIdMappingWorkflowProperties(std::move(value)); return *this;}

    /**
     * <p>Determines the properties of <code>IdMappingWorkflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline UpdateIdNamespaceResult& AddIdMappingWorkflowProperties(const IdNamespaceIdMappingWorkflowProperties& value) { m_idMappingWorkflowProperties.push_back(value); return *this; }

    /**
     * <p>Determines the properties of <code>IdMappingWorkflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline UpdateIdNamespaceResult& AddIdMappingWorkflowProperties(IdNamespaceIdMappingWorkflowProperties&& value) { m_idMappingWorkflowProperties.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the ID namespace.</p>
     */
    inline const Aws::String& GetIdNamespaceArn() const{ return m_idNamespaceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the ID namespace.</p>
     */
    inline void SetIdNamespaceArn(const Aws::String& value) { m_idNamespaceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the ID namespace.</p>
     */
    inline void SetIdNamespaceArn(Aws::String&& value) { m_idNamespaceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the ID namespace.</p>
     */
    inline void SetIdNamespaceArn(const char* value) { m_idNamespaceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the ID namespace.</p>
     */
    inline UpdateIdNamespaceResult& WithIdNamespaceArn(const Aws::String& value) { SetIdNamespaceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the ID namespace.</p>
     */
    inline UpdateIdNamespaceResult& WithIdNamespaceArn(Aws::String&& value) { SetIdNamespaceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the ID namespace.</p>
     */
    inline UpdateIdNamespaceResult& WithIdNamespaceArn(const char* value) { SetIdNamespaceArn(value); return *this;}


    /**
     * <p>The name of the ID namespace.</p>
     */
    inline const Aws::String& GetIdNamespaceName() const{ return m_idNamespaceName; }

    /**
     * <p>The name of the ID namespace.</p>
     */
    inline void SetIdNamespaceName(const Aws::String& value) { m_idNamespaceName = value; }

    /**
     * <p>The name of the ID namespace.</p>
     */
    inline void SetIdNamespaceName(Aws::String&& value) { m_idNamespaceName = std::move(value); }

    /**
     * <p>The name of the ID namespace.</p>
     */
    inline void SetIdNamespaceName(const char* value) { m_idNamespaceName.assign(value); }

    /**
     * <p>The name of the ID namespace.</p>
     */
    inline UpdateIdNamespaceResult& WithIdNamespaceName(const Aws::String& value) { SetIdNamespaceName(value); return *this;}

    /**
     * <p>The name of the ID namespace.</p>
     */
    inline UpdateIdNamespaceResult& WithIdNamespaceName(Aws::String&& value) { SetIdNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the ID namespace.</p>
     */
    inline UpdateIdNamespaceResult& WithIdNamespaceName(const char* value) { SetIdNamespaceName(value); return *this;}


    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline const Aws::Vector<IdNamespaceInputSource>& GetInputSourceConfig() const{ return m_inputSourceConfig; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline void SetInputSourceConfig(const Aws::Vector<IdNamespaceInputSource>& value) { m_inputSourceConfig = value; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline void SetInputSourceConfig(Aws::Vector<IdNamespaceInputSource>&& value) { m_inputSourceConfig = std::move(value); }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline UpdateIdNamespaceResult& WithInputSourceConfig(const Aws::Vector<IdNamespaceInputSource>& value) { SetInputSourceConfig(value); return *this;}

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline UpdateIdNamespaceResult& WithInputSourceConfig(Aws::Vector<IdNamespaceInputSource>&& value) { SetInputSourceConfig(std::move(value)); return *this;}

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline UpdateIdNamespaceResult& AddInputSourceConfig(const IdNamespaceInputSource& value) { m_inputSourceConfig.push_back(value); return *this; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline UpdateIdNamespaceResult& AddInputSourceConfig(IdNamespaceInputSource&& value) { m_inputSourceConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of a workflow run.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of a workflow run.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of a workflow run.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of a workflow run.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of a workflow run.</p>
     */
    inline UpdateIdNamespaceResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of a workflow run.</p>
     */
    inline UpdateIdNamespaceResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in this <code>IdNamespace</code> on
     * your behalf as part of a workflow run.</p>
     */
    inline UpdateIdNamespaceResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The type of ID namespace. There are two types: <code>SOURCE</code> and
     * <code>TARGET</code>.</p> <p>The <code>SOURCE</code> contains configurations for
     * <code>sourceId</code> data that will be processed in an ID mapping workflow.
     * </p> <p>The <code>TARGET</code> contains a configuration of
     * <code>targetId</code> to which all <code>sourceIds</code> will resolve to.</p>
     */
    inline const IdNamespaceType& GetType() const{ return m_type; }

    /**
     * <p>The type of ID namespace. There are two types: <code>SOURCE</code> and
     * <code>TARGET</code>.</p> <p>The <code>SOURCE</code> contains configurations for
     * <code>sourceId</code> data that will be processed in an ID mapping workflow.
     * </p> <p>The <code>TARGET</code> contains a configuration of
     * <code>targetId</code> to which all <code>sourceIds</code> will resolve to.</p>
     */
    inline void SetType(const IdNamespaceType& value) { m_type = value; }

    /**
     * <p>The type of ID namespace. There are two types: <code>SOURCE</code> and
     * <code>TARGET</code>.</p> <p>The <code>SOURCE</code> contains configurations for
     * <code>sourceId</code> data that will be processed in an ID mapping workflow.
     * </p> <p>The <code>TARGET</code> contains a configuration of
     * <code>targetId</code> to which all <code>sourceIds</code> will resolve to.</p>
     */
    inline void SetType(IdNamespaceType&& value) { m_type = std::move(value); }

    /**
     * <p>The type of ID namespace. There are two types: <code>SOURCE</code> and
     * <code>TARGET</code>.</p> <p>The <code>SOURCE</code> contains configurations for
     * <code>sourceId</code> data that will be processed in an ID mapping workflow.
     * </p> <p>The <code>TARGET</code> contains a configuration of
     * <code>targetId</code> to which all <code>sourceIds</code> will resolve to.</p>
     */
    inline UpdateIdNamespaceResult& WithType(const IdNamespaceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of ID namespace. There are two types: <code>SOURCE</code> and
     * <code>TARGET</code>.</p> <p>The <code>SOURCE</code> contains configurations for
     * <code>sourceId</code> data that will be processed in an ID mapping workflow.
     * </p> <p>The <code>TARGET</code> contains a configuration of
     * <code>targetId</code> to which all <code>sourceIds</code> will resolve to.</p>
     */
    inline UpdateIdNamespaceResult& WithType(IdNamespaceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the ID namespace was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the ID namespace was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The timestamp of when the ID namespace was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the ID namespace was last updated.</p>
     */
    inline UpdateIdNamespaceResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the ID namespace was last updated.</p>
     */
    inline UpdateIdNamespaceResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateIdNamespaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateIdNamespaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateIdNamespaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_description;

    Aws::Vector<IdNamespaceIdMappingWorkflowProperties> m_idMappingWorkflowProperties;

    Aws::String m_idNamespaceArn;

    Aws::String m_idNamespaceName;

    Aws::Vector<IdNamespaceInputSource> m_inputSourceConfig;

    Aws::String m_roleArn;

    IdNamespaceType m_type;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
