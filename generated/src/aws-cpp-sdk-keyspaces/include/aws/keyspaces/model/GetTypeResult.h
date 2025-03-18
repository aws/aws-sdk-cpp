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
    AWS_KEYSPACES_API GetTypeResult() = default;
    AWS_KEYSPACES_API GetTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KEYSPACES_API GetTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The name of the keyspace that contains this type. </p>
     */
    inline const Aws::String& GetKeyspaceName() const { return m_keyspaceName; }
    template<typename KeyspaceNameT = Aws::String>
    void SetKeyspaceName(KeyspaceNameT&& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = std::forward<KeyspaceNameT>(value); }
    template<typename KeyspaceNameT = Aws::String>
    GetTypeResult& WithKeyspaceName(KeyspaceNameT&& value) { SetKeyspaceName(std::forward<KeyspaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the type. </p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    GetTypeResult& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The names and types that define this type. </p>
     */
    inline const Aws::Vector<FieldDefinition>& GetFieldDefinitions() const { return m_fieldDefinitions; }
    template<typename FieldDefinitionsT = Aws::Vector<FieldDefinition>>
    void SetFieldDefinitions(FieldDefinitionsT&& value) { m_fieldDefinitionsHasBeenSet = true; m_fieldDefinitions = std::forward<FieldDefinitionsT>(value); }
    template<typename FieldDefinitionsT = Aws::Vector<FieldDefinition>>
    GetTypeResult& WithFieldDefinitions(FieldDefinitionsT&& value) { SetFieldDefinitions(std::forward<FieldDefinitionsT>(value)); return *this;}
    template<typename FieldDefinitionsT = FieldDefinition>
    GetTypeResult& AddFieldDefinitions(FieldDefinitionsT&& value) { m_fieldDefinitionsHasBeenSet = true; m_fieldDefinitions.emplace_back(std::forward<FieldDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The timestamp that shows when this type was last modified. </p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTimestamp() const { return m_lastModifiedTimestamp; }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    void SetLastModifiedTimestamp(LastModifiedTimestampT&& value) { m_lastModifiedTimestampHasBeenSet = true; m_lastModifiedTimestamp = std::forward<LastModifiedTimestampT>(value); }
    template<typename LastModifiedTimestampT = Aws::Utils::DateTime>
    GetTypeResult& WithLastModifiedTimestamp(LastModifiedTimestampT&& value) { SetLastModifiedTimestamp(std::forward<LastModifiedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of this type. </p>
     */
    inline TypeStatus GetStatus() const { return m_status; }
    inline void SetStatus(TypeStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetTypeResult& WithStatus(TypeStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The tables that use this type. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDirectReferringTables() const { return m_directReferringTables; }
    template<typename DirectReferringTablesT = Aws::Vector<Aws::String>>
    void SetDirectReferringTables(DirectReferringTablesT&& value) { m_directReferringTablesHasBeenSet = true; m_directReferringTables = std::forward<DirectReferringTablesT>(value); }
    template<typename DirectReferringTablesT = Aws::Vector<Aws::String>>
    GetTypeResult& WithDirectReferringTables(DirectReferringTablesT&& value) { SetDirectReferringTables(std::forward<DirectReferringTablesT>(value)); return *this;}
    template<typename DirectReferringTablesT = Aws::String>
    GetTypeResult& AddDirectReferringTables(DirectReferringTablesT&& value) { m_directReferringTablesHasBeenSet = true; m_directReferringTables.emplace_back(std::forward<DirectReferringTablesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The types that use this type. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDirectParentTypes() const { return m_directParentTypes; }
    template<typename DirectParentTypesT = Aws::Vector<Aws::String>>
    void SetDirectParentTypes(DirectParentTypesT&& value) { m_directParentTypesHasBeenSet = true; m_directParentTypes = std::forward<DirectParentTypesT>(value); }
    template<typename DirectParentTypesT = Aws::Vector<Aws::String>>
    GetTypeResult& WithDirectParentTypes(DirectParentTypesT&& value) { SetDirectParentTypes(std::forward<DirectParentTypesT>(value)); return *this;}
    template<typename DirectParentTypesT = Aws::String>
    GetTypeResult& AddDirectParentTypes(DirectParentTypesT&& value) { m_directParentTypesHasBeenSet = true; m_directParentTypes.emplace_back(std::forward<DirectParentTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The level of nesting implemented for this type. </p>
     */
    inline int GetMaxNestingDepth() const { return m_maxNestingDepth; }
    inline void SetMaxNestingDepth(int value) { m_maxNestingDepthHasBeenSet = true; m_maxNestingDepth = value; }
    inline GetTypeResult& WithMaxNestingDepth(int value) { SetMaxNestingDepth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the keyspace that contains this type in the format
     * of an Amazon Resource Name (ARN). </p>
     */
    inline const Aws::String& GetKeyspaceArn() const { return m_keyspaceArn; }
    template<typename KeyspaceArnT = Aws::String>
    void SetKeyspaceArn(KeyspaceArnT&& value) { m_keyspaceArnHasBeenSet = true; m_keyspaceArn = std::forward<KeyspaceArnT>(value); }
    template<typename KeyspaceArnT = Aws::String>
    GetTypeResult& WithKeyspaceArn(KeyspaceArnT&& value) { SetKeyspaceArn(std::forward<KeyspaceArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetTypeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyspaceName;
    bool m_keyspaceNameHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::Vector<FieldDefinition> m_fieldDefinitions;
    bool m_fieldDefinitionsHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTimestamp{};
    bool m_lastModifiedTimestampHasBeenSet = false;

    TypeStatus m_status{TypeStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_directReferringTables;
    bool m_directReferringTablesHasBeenSet = false;

    Aws::Vector<Aws::String> m_directParentTypes;
    bool m_directParentTypesHasBeenSet = false;

    int m_maxNestingDepth{0};
    bool m_maxNestingDepthHasBeenSet = false;

    Aws::String m_keyspaceArn;
    bool m_keyspaceArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
