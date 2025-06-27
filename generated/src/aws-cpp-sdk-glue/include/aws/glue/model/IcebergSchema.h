/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/IcebergStructTypeEnum.h>
#include <aws/glue/model/IcebergStructField.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Defines the schema structure for an Iceberg table, including field
   * definitions, data types, and schema metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IcebergSchema">AWS
   * API Reference</a></p>
   */
  class IcebergSchema
  {
  public:
    AWS_GLUE_API IcebergSchema() = default;
    AWS_GLUE_API IcebergSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API IcebergSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for this schema version within the Iceberg table's
     * schema evolution history.</p>
     */
    inline int GetSchemaId() const { return m_schemaId; }
    inline bool SchemaIdHasBeenSet() const { return m_schemaIdHasBeenSet; }
    inline void SetSchemaId(int value) { m_schemaIdHasBeenSet = true; m_schemaId = value; }
    inline IcebergSchema& WithSchemaId(int value) { SetSchemaId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of field identifiers that uniquely identify records in the table,
     * used for row-level operations and deduplication.</p>
     */
    inline const Aws::Vector<int>& GetIdentifierFieldIds() const { return m_identifierFieldIds; }
    inline bool IdentifierFieldIdsHasBeenSet() const { return m_identifierFieldIdsHasBeenSet; }
    template<typename IdentifierFieldIdsT = Aws::Vector<int>>
    void SetIdentifierFieldIds(IdentifierFieldIdsT&& value) { m_identifierFieldIdsHasBeenSet = true; m_identifierFieldIds = std::forward<IdentifierFieldIdsT>(value); }
    template<typename IdentifierFieldIdsT = Aws::Vector<int>>
    IcebergSchema& WithIdentifierFieldIds(IdentifierFieldIdsT&& value) { SetIdentifierFieldIds(std::forward<IdentifierFieldIdsT>(value)); return *this;}
    inline IcebergSchema& AddIdentifierFieldIds(int value) { m_identifierFieldIdsHasBeenSet = true; m_identifierFieldIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The root type of the schema structure, typically "struct" for Iceberg table
     * schemas.</p>
     */
    inline IcebergStructTypeEnum GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(IcebergStructTypeEnum value) { m_typeHasBeenSet = true; m_type = value; }
    inline IcebergSchema& WithType(IcebergStructTypeEnum value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of field definitions that make up the table schema, including field
     * names, types, and metadata.</p>
     */
    inline const Aws::Vector<IcebergStructField>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Vector<IcebergStructField>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Vector<IcebergStructField>>
    IcebergSchema& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsT = IcebergStructField>
    IcebergSchema& AddFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields.emplace_back(std::forward<FieldsT>(value)); return *this; }
    ///@}
  private:

    int m_schemaId{0};
    bool m_schemaIdHasBeenSet = false;

    Aws::Vector<int> m_identifierFieldIds;
    bool m_identifierFieldIdsHasBeenSet = false;

    IcebergStructTypeEnum m_type{IcebergStructTypeEnum::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<IcebergStructField> m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
