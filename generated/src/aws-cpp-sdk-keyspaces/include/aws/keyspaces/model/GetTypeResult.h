/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/keyspaces/model/TypeStatus.h>
#include <aws/keyspaces/model/FieldDefinition.h>
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
namespace Keyspaces
{
namespace Model
{
  class GetTypeResult
  {
  public:
    AWS_KEYSPACES_API GetTypeResult();
    AWS_KEYSPACES_API GetTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KEYSPACES_API GetTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The name of the keyspace that contains this type. </p>
     */
    inline const Aws::String& GetKeyspaceName() const{ return m_keyspaceName; }
    inline void SetKeyspaceName(const Aws::String& value) { m_keyspaceName = value; }
    inline void SetKeyspaceName(Aws::String&& value) { m_keyspaceName = std::move(value); }
    inline void SetKeyspaceName(const char* value) { m_keyspaceName.assign(value); }
    inline GetTypeResult& WithKeyspaceName(const Aws::String& value) { SetKeyspaceName(value); return *this;}
    inline GetTypeResult& WithKeyspaceName(Aws::String&& value) { SetKeyspaceName(std::move(value)); return *this;}
    inline GetTypeResult& WithKeyspaceName(const char* value) { SetKeyspaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the type. </p>
     */
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline void SetTypeName(const Aws::String& value) { m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeName.assign(value); }
    inline GetTypeResult& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline GetTypeResult& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline GetTypeResult& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The names and types that define this type. </p>
     */
    inline const Aws::Vector<FieldDefinition>& GetFieldDefinitions() const{ return m_fieldDefinitions; }
    inline void SetFieldDefinitions(const Aws::Vector<FieldDefinition>& value) { m_fieldDefinitions = value; }
    inline void SetFieldDefinitions(Aws::Vector<FieldDefinition>&& value) { m_fieldDefinitions = std::move(value); }
    inline GetTypeResult& WithFieldDefinitions(const Aws::Vector<FieldDefinition>& value) { SetFieldDefinitions(value); return *this;}
    inline GetTypeResult& WithFieldDefinitions(Aws::Vector<FieldDefinition>&& value) { SetFieldDefinitions(std::move(value)); return *this;}
    inline GetTypeResult& AddFieldDefinitions(const FieldDefinition& value) { m_fieldDefinitions.push_back(value); return *this; }
    inline GetTypeResult& AddFieldDefinitions(FieldDefinition&& value) { m_fieldDefinitions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The timestamp that shows when this type was last modified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const{ return m_lastModifiedTimestamp; }
    inline void SetLastModifiedTimestamp(const Aws::Utils::DateTime& value) { m_lastModifiedTimestamp = value; }
    inline void SetLastModifiedTimestamp(Aws::Utils::DateTime&& value) { m_lastModifiedTimestamp = std::move(value); }
    inline GetTypeResult& WithLastModifiedTimestamp(const Aws::Utils::DateTime& value) { SetLastModifiedTimestamp(value); return *this;}
    inline GetTypeResult& WithLastModifiedTimestamp(Aws::Utils::DateTime&& value) { SetLastModifiedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of this type. </p>
     */
    inline const TypeStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const TypeStatus& value) { m_status = value; }
    inline void SetStatus(TypeStatus&& value) { m_status = std::move(value); }
    inline GetTypeResult& WithStatus(const TypeStatus& value) { SetStatus(value); return *this;}
    inline GetTypeResult& WithStatus(TypeStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The tables that use this type. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDirectReferringTables() const{ return m_directReferringTables; }
    inline void SetDirectReferringTables(const Aws::Vector<Aws::String>& value) { m_directReferringTables = value; }
    inline void SetDirectReferringTables(Aws::Vector<Aws::String>&& value) { m_directReferringTables = std::move(value); }
    inline GetTypeResult& WithDirectReferringTables(const Aws::Vector<Aws::String>& value) { SetDirectReferringTables(value); return *this;}
    inline GetTypeResult& WithDirectReferringTables(Aws::Vector<Aws::String>&& value) { SetDirectReferringTables(std::move(value)); return *this;}
    inline GetTypeResult& AddDirectReferringTables(const Aws::String& value) { m_directReferringTables.push_back(value); return *this; }
    inline GetTypeResult& AddDirectReferringTables(Aws::String&& value) { m_directReferringTables.push_back(std::move(value)); return *this; }
    inline GetTypeResult& AddDirectReferringTables(const char* value) { m_directReferringTables.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The types that use this type. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDirectParentTypes() const{ return m_directParentTypes; }
    inline void SetDirectParentTypes(const Aws::Vector<Aws::String>& value) { m_directParentTypes = value; }
    inline void SetDirectParentTypes(Aws::Vector<Aws::String>&& value) { m_directParentTypes = std::move(value); }
    inline GetTypeResult& WithDirectParentTypes(const Aws::Vector<Aws::String>& value) { SetDirectParentTypes(value); return *this;}
    inline GetTypeResult& WithDirectParentTypes(Aws::Vector<Aws::String>&& value) { SetDirectParentTypes(std::move(value)); return *this;}
    inline GetTypeResult& AddDirectParentTypes(const Aws::String& value) { m_directParentTypes.push_back(value); return *this; }
    inline GetTypeResult& AddDirectParentTypes(Aws::String&& value) { m_directParentTypes.push_back(std::move(value)); return *this; }
    inline GetTypeResult& AddDirectParentTypes(const char* value) { m_directParentTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The level of nesting implemented for this type. </p>
     */
    inline int GetMaxNestingDepth() const{ return m_maxNestingDepth; }
    inline void SetMaxNestingDepth(int value) { m_maxNestingDepth = value; }
    inline GetTypeResult& WithMaxNestingDepth(int value) { SetMaxNestingDepth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the keyspace that contains this type in the format
     * of an Amazon Resource Name (ARN). </p>
     */
    inline const Aws::String& GetKeyspaceArn() const{ return m_keyspaceArn; }
    inline void SetKeyspaceArn(const Aws::String& value) { m_keyspaceArn = value; }
    inline void SetKeyspaceArn(Aws::String&& value) { m_keyspaceArn = std::move(value); }
    inline void SetKeyspaceArn(const char* value) { m_keyspaceArn.assign(value); }
    inline GetTypeResult& WithKeyspaceArn(const Aws::String& value) { SetKeyspaceArn(value); return *this;}
    inline GetTypeResult& WithKeyspaceArn(Aws::String&& value) { SetKeyspaceArn(std::move(value)); return *this;}
    inline GetTypeResult& WithKeyspaceArn(const char* value) { SetKeyspaceArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_keyspaceName;

    Aws::String m_typeName;

    Aws::Vector<FieldDefinition> m_fieldDefinitions;

    Aws::Utils::DateTime m_lastModifiedTimestamp;

    TypeStatus m_status;

    Aws::Vector<Aws::String> m_directReferringTables;

    Aws::Vector<Aws::String> m_directParentTypes;

    int m_maxNestingDepth;

    Aws::String m_keyspaceArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
