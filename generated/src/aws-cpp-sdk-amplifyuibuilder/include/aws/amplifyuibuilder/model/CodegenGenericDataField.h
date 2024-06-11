﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/CodegenGenericDataFieldDataType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/CodegenGenericDataRelationshipType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes a field in a generic data schema.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/CodegenGenericDataField">AWS
   * API Reference</a></p>
   */
  class CodegenGenericDataField
  {
  public:
    AWS_AMPLIFYUIBUILDER_API CodegenGenericDataField();
    AWS_AMPLIFYUIBUILDER_API CodegenGenericDataField(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API CodegenGenericDataField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The data type for the generic data field.</p>
     */
    inline const CodegenGenericDataFieldDataType& GetDataType() const{ return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(const CodegenGenericDataFieldDataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline void SetDataType(CodegenGenericDataFieldDataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }
    inline CodegenGenericDataField& WithDataType(const CodegenGenericDataFieldDataType& value) { SetDataType(value); return *this;}
    inline CodegenGenericDataField& WithDataType(CodegenGenericDataFieldDataType&& value) { SetDataType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the data type for the generic data field.</p>
     */
    inline const Aws::String& GetDataTypeValue() const{ return m_dataTypeValue; }
    inline bool DataTypeValueHasBeenSet() const { return m_dataTypeValueHasBeenSet; }
    inline void SetDataTypeValue(const Aws::String& value) { m_dataTypeValueHasBeenSet = true; m_dataTypeValue = value; }
    inline void SetDataTypeValue(Aws::String&& value) { m_dataTypeValueHasBeenSet = true; m_dataTypeValue = std::move(value); }
    inline void SetDataTypeValue(const char* value) { m_dataTypeValueHasBeenSet = true; m_dataTypeValue.assign(value); }
    inline CodegenGenericDataField& WithDataTypeValue(const Aws::String& value) { SetDataTypeValue(value); return *this;}
    inline CodegenGenericDataField& WithDataTypeValue(Aws::String&& value) { SetDataTypeValue(std::move(value)); return *this;}
    inline CodegenGenericDataField& WithDataTypeValue(const char* value) { SetDataTypeValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the generic data field is required.</p>
     */
    inline bool GetRequired() const{ return m_required; }
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }
    inline CodegenGenericDataField& WithRequired(bool value) { SetRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the generic data field is read-only.</p>
     */
    inline bool GetReadOnly() const{ return m_readOnly; }
    inline bool ReadOnlyHasBeenSet() const { return m_readOnlyHasBeenSet; }
    inline void SetReadOnly(bool value) { m_readOnlyHasBeenSet = true; m_readOnly = value; }
    inline CodegenGenericDataField& WithReadOnly(bool value) { SetReadOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the generic data field is an array.</p>
     */
    inline bool GetIsArray() const{ return m_isArray; }
    inline bool IsArrayHasBeenSet() const { return m_isArrayHasBeenSet; }
    inline void SetIsArray(bool value) { m_isArrayHasBeenSet = true; m_isArray = value; }
    inline CodegenGenericDataField& WithIsArray(bool value) { SetIsArray(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relationship of the generic data schema.</p>
     */
    inline const CodegenGenericDataRelationshipType& GetRelationship() const{ return m_relationship; }
    inline bool RelationshipHasBeenSet() const { return m_relationshipHasBeenSet; }
    inline void SetRelationship(const CodegenGenericDataRelationshipType& value) { m_relationshipHasBeenSet = true; m_relationship = value; }
    inline void SetRelationship(CodegenGenericDataRelationshipType&& value) { m_relationshipHasBeenSet = true; m_relationship = std::move(value); }
    inline CodegenGenericDataField& WithRelationship(const CodegenGenericDataRelationshipType& value) { SetRelationship(value); return *this;}
    inline CodegenGenericDataField& WithRelationship(CodegenGenericDataRelationshipType&& value) { SetRelationship(std::move(value)); return *this;}
    ///@}
  private:

    CodegenGenericDataFieldDataType m_dataType;
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_dataTypeValue;
    bool m_dataTypeValueHasBeenSet = false;

    bool m_required;
    bool m_requiredHasBeenSet = false;

    bool m_readOnly;
    bool m_readOnlyHasBeenSet = false;

    bool m_isArray;
    bool m_isArrayHasBeenSet = false;

    CodegenGenericDataRelationshipType m_relationship;
    bool m_relationshipHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
