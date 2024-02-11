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
#include <aws/entityresolution/model/SchemaInputAttribute.h>
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
  class GetSchemaMappingResult
  {
  public:
    AWS_ENTITYRESOLUTION_API GetSchemaMappingResult();
    AWS_ENTITYRESOLUTION_API GetSchemaMappingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ENTITYRESOLUTION_API GetSchemaMappingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp of when the <code>SchemaMapping</code> was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the <code>SchemaMapping</code> was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp of when the <code>SchemaMapping</code> was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the <code>SchemaMapping</code> was created.</p>
     */
    inline GetSchemaMappingResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the <code>SchemaMapping</code> was created.</p>
     */
    inline GetSchemaMappingResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>A description of the schema.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the schema.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the schema.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the schema.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the schema.</p>
     */
    inline GetSchemaMappingResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the schema.</p>
     */
    inline GetSchemaMappingResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the schema.</p>
     */
    inline GetSchemaMappingResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies whether the schema mapping has been applied to a workflow.</p>
     */
    inline bool GetHasWorkflows() const{ return m_hasWorkflows; }

    /**
     * <p>Specifies whether the schema mapping has been applied to a workflow.</p>
     */
    inline void SetHasWorkflows(bool value) { m_hasWorkflows = value; }

    /**
     * <p>Specifies whether the schema mapping has been applied to a workflow.</p>
     */
    inline GetSchemaMappingResult& WithHasWorkflows(bool value) { SetHasWorkflows(value); return *this;}


    /**
     * <p>A list of <code>MappedInputFields</code>. Each <code>MappedInputField</code>
     * corresponds to a column the source data table, and contains column name plus
     * additional information Venice uses for matching.</p>
     */
    inline const Aws::Vector<SchemaInputAttribute>& GetMappedInputFields() const{ return m_mappedInputFields; }

    /**
     * <p>A list of <code>MappedInputFields</code>. Each <code>MappedInputField</code>
     * corresponds to a column the source data table, and contains column name plus
     * additional information Venice uses for matching.</p>
     */
    inline void SetMappedInputFields(const Aws::Vector<SchemaInputAttribute>& value) { m_mappedInputFields = value; }

    /**
     * <p>A list of <code>MappedInputFields</code>. Each <code>MappedInputField</code>
     * corresponds to a column the source data table, and contains column name plus
     * additional information Venice uses for matching.</p>
     */
    inline void SetMappedInputFields(Aws::Vector<SchemaInputAttribute>&& value) { m_mappedInputFields = std::move(value); }

    /**
     * <p>A list of <code>MappedInputFields</code>. Each <code>MappedInputField</code>
     * corresponds to a column the source data table, and contains column name plus
     * additional information Venice uses for matching.</p>
     */
    inline GetSchemaMappingResult& WithMappedInputFields(const Aws::Vector<SchemaInputAttribute>& value) { SetMappedInputFields(value); return *this;}

    /**
     * <p>A list of <code>MappedInputFields</code>. Each <code>MappedInputField</code>
     * corresponds to a column the source data table, and contains column name plus
     * additional information Venice uses for matching.</p>
     */
    inline GetSchemaMappingResult& WithMappedInputFields(Aws::Vector<SchemaInputAttribute>&& value) { SetMappedInputFields(std::move(value)); return *this;}

    /**
     * <p>A list of <code>MappedInputFields</code>. Each <code>MappedInputField</code>
     * corresponds to a column the source data table, and contains column name plus
     * additional information Venice uses for matching.</p>
     */
    inline GetSchemaMappingResult& AddMappedInputFields(const SchemaInputAttribute& value) { m_mappedInputFields.push_back(value); return *this; }

    /**
     * <p>A list of <code>MappedInputFields</code>. Each <code>MappedInputField</code>
     * corresponds to a column the source data table, and contains column name plus
     * additional information Venice uses for matching.</p>
     */
    inline GetSchemaMappingResult& AddMappedInputFields(SchemaInputAttribute&& value) { m_mappedInputFields.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * SchemaMapping.</p>
     */
    inline const Aws::String& GetSchemaArn() const{ return m_schemaArn; }

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * SchemaMapping.</p>
     */
    inline void SetSchemaArn(const Aws::String& value) { m_schemaArn = value; }

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * SchemaMapping.</p>
     */
    inline void SetSchemaArn(Aws::String&& value) { m_schemaArn = std::move(value); }

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * SchemaMapping.</p>
     */
    inline void SetSchemaArn(const char* value) { m_schemaArn.assign(value); }

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * SchemaMapping.</p>
     */
    inline GetSchemaMappingResult& WithSchemaArn(const Aws::String& value) { SetSchemaArn(value); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * SchemaMapping.</p>
     */
    inline GetSchemaMappingResult& WithSchemaArn(Aws::String&& value) { SetSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The ARN (Amazon Resource Name) that Entity Resolution generated for the
     * SchemaMapping.</p>
     */
    inline GetSchemaMappingResult& WithSchemaArn(const char* value) { SetSchemaArn(value); return *this;}


    /**
     * <p>The name of the schema.</p>
     */
    inline const Aws::String& GetSchemaName() const{ return m_schemaName; }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(const Aws::String& value) { m_schemaName = value; }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(Aws::String&& value) { m_schemaName = std::move(value); }

    /**
     * <p>The name of the schema.</p>
     */
    inline void SetSchemaName(const char* value) { m_schemaName.assign(value); }

    /**
     * <p>The name of the schema.</p>
     */
    inline GetSchemaMappingResult& WithSchemaName(const Aws::String& value) { SetSchemaName(value); return *this;}

    /**
     * <p>The name of the schema.</p>
     */
    inline GetSchemaMappingResult& WithSchemaName(Aws::String&& value) { SetSchemaName(std::move(value)); return *this;}

    /**
     * <p>The name of the schema.</p>
     */
    inline GetSchemaMappingResult& WithSchemaName(const char* value) { SetSchemaName(value); return *this;}


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
    inline GetSchemaMappingResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline GetSchemaMappingResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline GetSchemaMappingResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline GetSchemaMappingResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline GetSchemaMappingResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline GetSchemaMappingResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline GetSchemaMappingResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline GetSchemaMappingResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline GetSchemaMappingResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>The timestamp of when the <code>SchemaMapping</code> was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the <code>SchemaMapping</code> was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The timestamp of when the <code>SchemaMapping</code> was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the <code>SchemaMapping</code> was last updated.</p>
     */
    inline GetSchemaMappingResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the <code>SchemaMapping</code> was last updated.</p>
     */
    inline GetSchemaMappingResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSchemaMappingResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSchemaMappingResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSchemaMappingResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_description;

    bool m_hasWorkflows;

    Aws::Vector<SchemaInputAttribute> m_mappedInputFields;

    Aws::String m_schemaArn;

    Aws::String m_schemaName;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
