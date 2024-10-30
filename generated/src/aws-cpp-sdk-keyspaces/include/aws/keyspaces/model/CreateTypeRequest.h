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
    AWS_KEYSPACES_API CreateTypeRequest();

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
    inline const Aws::String& GetKeyspaceName() const{ return m_keyspaceName; }
    inline bool KeyspaceNameHasBeenSet() const { return m_keyspaceNameHasBeenSet; }
    inline void SetKeyspaceName(const Aws::String& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = value; }
    inline void SetKeyspaceName(Aws::String&& value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName = std::move(value); }
    inline void SetKeyspaceName(const char* value) { m_keyspaceNameHasBeenSet = true; m_keyspaceName.assign(value); }
    inline CreateTypeRequest& WithKeyspaceName(const Aws::String& value) { SetKeyspaceName(value); return *this;}
    inline CreateTypeRequest& WithKeyspaceName(Aws::String&& value) { SetKeyspaceName(std::move(value)); return *this;}
    inline CreateTypeRequest& WithKeyspaceName(const char* value) { SetKeyspaceName(value); return *this;}
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
    inline const Aws::String& GetTypeName() const{ return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    inline void SetTypeName(const Aws::String& value) { m_typeNameHasBeenSet = true; m_typeName = value; }
    inline void SetTypeName(Aws::String&& value) { m_typeNameHasBeenSet = true; m_typeName = std::move(value); }
    inline void SetTypeName(const char* value) { m_typeNameHasBeenSet = true; m_typeName.assign(value); }
    inline CreateTypeRequest& WithTypeName(const Aws::String& value) { SetTypeName(value); return *this;}
    inline CreateTypeRequest& WithTypeName(Aws::String&& value) { SetTypeName(std::move(value)); return *this;}
    inline CreateTypeRequest& WithTypeName(const char* value) { SetTypeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The field definitions, consisting of names and types, that define this type.
     * </p>
     */
    inline const Aws::Vector<FieldDefinition>& GetFieldDefinitions() const{ return m_fieldDefinitions; }
    inline bool FieldDefinitionsHasBeenSet() const { return m_fieldDefinitionsHasBeenSet; }
    inline void SetFieldDefinitions(const Aws::Vector<FieldDefinition>& value) { m_fieldDefinitionsHasBeenSet = true; m_fieldDefinitions = value; }
    inline void SetFieldDefinitions(Aws::Vector<FieldDefinition>&& value) { m_fieldDefinitionsHasBeenSet = true; m_fieldDefinitions = std::move(value); }
    inline CreateTypeRequest& WithFieldDefinitions(const Aws::Vector<FieldDefinition>& value) { SetFieldDefinitions(value); return *this;}
    inline CreateTypeRequest& WithFieldDefinitions(Aws::Vector<FieldDefinition>&& value) { SetFieldDefinitions(std::move(value)); return *this;}
    inline CreateTypeRequest& AddFieldDefinitions(const FieldDefinition& value) { m_fieldDefinitionsHasBeenSet = true; m_fieldDefinitions.push_back(value); return *this; }
    inline CreateTypeRequest& AddFieldDefinitions(FieldDefinition&& value) { m_fieldDefinitionsHasBeenSet = true; m_fieldDefinitions.push_back(std::move(value)); return *this; }
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
