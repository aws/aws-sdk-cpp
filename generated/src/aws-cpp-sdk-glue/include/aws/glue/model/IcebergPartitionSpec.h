/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/IcebergPartitionField.h>
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
   * <p>Defines the partitioning specification for an Iceberg table, determining how
   * table data will be organized and partitioned for optimal query
   * performance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IcebergPartitionSpec">AWS
   * API Reference</a></p>
   */
  class IcebergPartitionSpec
  {
  public:
    AWS_GLUE_API IcebergPartitionSpec() = default;
    AWS_GLUE_API IcebergPartitionSpec(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API IcebergPartitionSpec& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of partition fields that define how the table data should be
     * partitioned, including source fields and their transformations.</p>
     */
    inline const Aws::Vector<IcebergPartitionField>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Vector<IcebergPartitionField>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Vector<IcebergPartitionField>>
    IcebergPartitionSpec& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsT = IcebergPartitionField>
    IcebergPartitionSpec& AddFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields.emplace_back(std::forward<FieldsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier for this partition specification within the Iceberg
     * table's metadata history.</p>
     */
    inline int GetSpecId() const { return m_specId; }
    inline bool SpecIdHasBeenSet() const { return m_specIdHasBeenSet; }
    inline void SetSpecId(int value) { m_specIdHasBeenSet = true; m_specId = value; }
    inline IcebergPartitionSpec& WithSpecId(int value) { SetSpecId(value); return *this;}
    ///@}
  private:

    Aws::Vector<IcebergPartitionField> m_fields;
    bool m_fieldsHasBeenSet = false;

    int m_specId{0};
    bool m_specIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
