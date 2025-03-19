/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/KeyspacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/keyspaces/model/FieldDefinition.h>
#include <utility>

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

  /**
   */
  class CreateTypeRequest : public KeyspacesRequest
  {
  public:
    AWS_KEYSPACES_API CreateTypeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateType"; }

    AWS_KEYSPACES_API Aws::String SerializePayload() const override;

    AWS_KEYSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The name of the keyspace. </p>
     */
    inline const Aws::String& GetKeyspaceName() const { return m_keyspaceName; }
    inline bool KeyspaceNameHasBeenSet() const { return m_keyspaceNameHasBeenSet; }
    template<typename KeyspaceNameT = Aws::String>
    void SetKeyspaceName(KeyspaceNameT&& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = std::forward<KeyspaceNameT>(value); }
    template<typename KeyspaceNameT = Aws::String>
    CreateTypeRequest& WithKeyspaceName(KeyspaceNameT&& value) { SetKeyspaceName(std::forward<KeyspaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the user-defined type. </p> <p>UDT names must contain 48
     * characters or less, must begin with an alphabetic character, and can only
     * contain alpha-numeric characters and underscores. Amazon Keyspaces converts
     * upper case characters automatically into lower case characters. </p>
     * <p>Alternatively, you can declare a UDT name in double quotes. When declaring a
     * UDT name inside double quotes, Amazon Keyspaces preserves upper casing and
     * allows special characters.</p> <p>You can also use double quotes as part of the
     * name when you create the UDT, but you must escape each double quote character
     * with an additional double quote character.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    CreateTypeRequest& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The field definitions, consisting of names and types, that define this type.
     * </p>
     */
    inline const Aws::Vector<FieldDefinition>& GetFieldDefinitions() const { return m_fieldDefinitions; }
    inline bool FieldDefinitionsHasBeenSet() const { return m_fieldDefinitionsHasBeenSet; }
    template<typename FieldDefinitionsT = Aws::Vector<FieldDefinition>>
    void SetFieldDefinitions(FieldDefinitionsT&& value) { m_fieldDefinitionsHasBeenSet = true; m_fieldDefinitions = std::forward<FieldDefinitionsT>(value); }
    template<typename FieldDefinitionsT = Aws::Vector<FieldDefinition>>
    CreateTypeRequest& WithFieldDefinitions(FieldDefinitionsT&& value) { SetFieldDefinitions(std::forward<FieldDefinitionsT>(value)); return *this;}
    template<typename FieldDefinitionsT = FieldDefinition>
    CreateTypeRequest& AddFieldDefinitions(FieldDefinitionsT&& value) { m_fieldDefinitionsHasBeenSet = true; m_fieldDefinitions.emplace_back(std::forward<FieldDefinitionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_keyspaceName;
    bool m_keyspaceNameHasBeenSet = false;

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::Vector<FieldDefinition> m_fieldDefinitions;
    bool m_fieldDefinitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
