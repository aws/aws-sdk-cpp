/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateIdNamespaceResult
  {
  public:
    AWS_ENTITYRESOLUTION_API CreateIdNamespaceResult();
    AWS_ENTITYRESOLUTION_API CreateIdNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API CreateIdNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateIdNamespaceResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the ID namespace was created.</p>
     */
    inline CreateIdNamespaceResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


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
    inline CreateIdNamespaceResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline CreateIdNamespaceResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the ID namespace.</p>
     */
    inline CreateIdNamespaceResult& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline CreateIdNamespaceResult& WithIdMappingWorkflowProperties(const Aws::Vector<IdNamespaceIdMappingWorkflowProperties>& value) { SetIdMappingWorkflowProperties(value); return *this;}

    /**
     * <p>Determines the properties of <code>IdMappingWorkflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline CreateIdNamespaceResult& WithIdMappingWorkflowProperties(Aws::Vector<IdNamespaceIdMappingWorkflowProperties>&& value) { SetIdMappingWorkflowProperties(std::move(value)); return *this;}

    /**
     * <p>Determines the properties of <code>IdMappingWorkflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline CreateIdNamespaceResult& AddIdMappingWorkflowProperties(const IdNamespaceIdMappingWorkflowProperties& value) { m_idMappingWorkflowProperties.push_back(value); return *this; }

    /**
     * <p>Determines the properties of <code>IdMappingWorkflow</code> where this
     * <code>IdNamespace</code> can be used as a <code>Source</code> or a
     * <code>Target</code>.</p>
     */
    inline CreateIdNamespaceResult& AddIdMappingWorkflowProperties(IdNamespaceIdMappingWorkflowProperties&& value) { m_idMappingWorkflowProperties.push_back(std::move(value)); return *this; }


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
    inline CreateIdNamespaceResult& WithIdNamespaceArn(const Aws::String& value) { SetIdNamespaceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the ID namespace.</p>
     */
    inline CreateIdNamespaceResult& WithIdNamespaceArn(Aws::String&& value) { SetIdNamespaceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the ID namespace.</p>
     */
    inline CreateIdNamespaceResult& WithIdNamespaceArn(const char* value) { SetIdNamespaceArn(value); return *this;}


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
    inline CreateIdNamespaceResult& WithIdNamespaceName(const Aws::String& value) { SetIdNamespaceName(value); return *this;}

    /**
     * <p>The name of the ID namespace.</p>
     */
    inline CreateIdNamespaceResult& WithIdNamespaceName(Aws::String&& value) { SetIdNamespaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the ID namespace.</p>
     */
    inline CreateIdNamespaceResult& WithIdNamespaceName(const char* value) { SetIdNamespaceName(value); return *this;}


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
    inline CreateIdNamespaceResult& WithInputSourceConfig(const Aws::Vector<IdNamespaceInputSource>& value) { SetInputSourceConfig(value); return *this;}

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline CreateIdNamespaceResult& WithInputSourceConfig(Aws::Vector<IdNamespaceInputSource>&& value) { SetInputSourceConfig(std::move(value)); return *this;}

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline CreateIdNamespaceResult& AddInputSourceConfig(const IdNamespaceInputSource& value) { m_inputSourceConfig.push_back(value); return *this; }

    /**
     * <p>A list of <code>InputSource</code> objects, which have the fields
     * <code>InputSourceARN</code> and <code>SchemaName</code>.</p>
     */
    inline CreateIdNamespaceResult& AddInputSourceConfig(IdNamespaceInputSource&& value) { m_inputSourceConfig.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in <code>inputSourceConfig</code> on
     * your behalf as part of the workflow run.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in <code>inputSourceConfig</code> on
     * your behalf as part of the workflow run.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in <code>inputSourceConfig</code> on
     * your behalf as part of the workflow run.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in <code>inputSourceConfig</code> on
     * your behalf as part of the workflow run.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in <code>inputSourceConfig</code> on
     * your behalf as part of the workflow run.</p>
     */
    inline CreateIdNamespaceResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in <code>inputSourceConfig</code> on
     * your behalf as part of the workflow run.</p>
     */
    inline CreateIdNamespaceResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role. Entity Resolution assumes
     * this role to access the resources defined in <code>inputSourceConfig</code> on
     * your behalf as part of the workflow run.</p>
     */
    inline CreateIdNamespaceResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateIdNamespaceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateIdNamespaceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateIdNamespaceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateIdNamespaceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateIdNamespaceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateIdNamespaceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateIdNamespaceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateIdNamespaceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline CreateIdNamespaceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


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
    inline CreateIdNamespaceResult& WithType(const IdNamespaceType& value) { SetType(value); return *this;}

    /**
     * <p>The type of ID namespace. There are two types: <code>SOURCE</code> and
     * <code>TARGET</code>.</p> <p>The <code>SOURCE</code> contains configurations for
     * <code>sourceId</code> data that will be processed in an ID mapping workflow.
     * </p> <p>The <code>TARGET</code> contains a configuration of
     * <code>targetId</code> to which all <code>sourceIds</code> will resolve to.</p>
     */
    inline CreateIdNamespaceResult& WithType(IdNamespaceType&& value) { SetType(std::move(value)); return *this;}


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
    inline CreateIdNamespaceResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the ID namespace was last updated.</p>
     */
    inline CreateIdNamespaceResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateIdNamespaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateIdNamespaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateIdNamespaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_description;

    Aws::Vector<IdNamespaceIdMappingWorkflowProperties> m_idMappingWorkflowProperties;

    Aws::String m_idNamespaceArn;

    Aws::String m_idNamespaceName;

    Aws::Vector<IdNamespaceInputSource> m_inputSourceConfig;

    Aws::String m_roleArn;

    Aws::Map<Aws::String, Aws::String> m_tags;

    IdNamespaceType m_type;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
