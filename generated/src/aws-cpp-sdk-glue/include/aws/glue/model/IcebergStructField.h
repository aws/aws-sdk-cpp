/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
   * <p>Defines a single field within an Iceberg table schema, including its
   * identifier, name, data type, nullability, and documentation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IcebergStructField">AWS
   * API Reference</a></p>
   */
  class IcebergStructField
  {
  public:
    AWS_GLUE_API IcebergStructField() = default;
    AWS_GLUE_API IcebergStructField(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API IcebergStructField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier assigned to this field within the Iceberg table schema,
     * used for schema evolution and field tracking.</p>
     */
    inline int GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }
    inline IcebergStructField& WithId(int value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the field as it appears in the table schema and query
     * operations.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    IcebergStructField& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data type definition for this field, specifying the structure and format
     * of the data it contains.</p>
     */
    inline Aws::Utils::DocumentView GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::Utils::Document>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::Utils::Document>
    IcebergStructField& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this field is required (non-nullable) or optional
     * (nullable) in the table schema.</p>
     */
    inline bool GetRequired() const { return m_required; }
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }
    inline IcebergStructField& WithRequired(bool value) { SetRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional documentation or description text that provides additional context
     * about the purpose and usage of this field.</p>
     */
    inline const Aws::String& GetDoc() const { return m_doc; }
    inline bool DocHasBeenSet() const { return m_docHasBeenSet; }
    template<typename DocT = Aws::String>
    void SetDoc(DocT&& value) { m_docHasBeenSet = true; m_doc = std::forward<DocT>(value); }
    template<typename DocT = Aws::String>
    IcebergStructField& WithDoc(DocT&& value) { SetDoc(std::forward<DocT>(value)); return *this;}
    ///@}
  private:

    int m_id{0};
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::Document m_type;
    bool m_typeHasBeenSet = false;

    bool m_required{false};
    bool m_requiredHasBeenSet = false;

    Aws::String m_doc;
    bool m_docHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
