/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Defines a single partition field within an Iceberg partition specification,
   * including the source field, transformation function, partition name, and unique
   * identifier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IcebergPartitionField">AWS
   * API Reference</a></p>
   */
  class IcebergPartitionField
  {
  public:
    AWS_GLUE_API IcebergPartitionField() = default;
    AWS_GLUE_API IcebergPartitionField(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API IcebergPartitionField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the source field from the table schema that this partition
     * field is based on.</p>
     */
    inline int GetSourceId() const { return m_sourceId; }
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
    inline void SetSourceId(int value) { m_sourceIdHasBeenSet = true; m_sourceId = value; }
    inline IcebergPartitionField& WithSourceId(int value) { SetSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transformation function applied to the source field to create the
     * partition, such as identity, bucket, truncate, year, month, day, or hour.</p>
     */
    inline const Aws::String& GetTransform() const { return m_transform; }
    inline bool TransformHasBeenSet() const { return m_transformHasBeenSet; }
    template<typename TransformT = Aws::String>
    void SetTransform(TransformT&& value) { m_transformHasBeenSet = true; m_transform = std::forward<TransformT>(value); }
    template<typename TransformT = Aws::String>
    IcebergPartitionField& WithTransform(TransformT&& value) { SetTransform(std::forward<TransformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the partition field as it will appear in the partitioned table
     * structure.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    IcebergPartitionField& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier assigned to this partition field within the Iceberg
     * table's partition specification.</p>
     */
    inline int GetFieldId() const { return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    inline void SetFieldId(int value) { m_fieldIdHasBeenSet = true; m_fieldId = value; }
    inline IcebergPartitionField& WithFieldId(int value) { SetFieldId(value); return *this;}
    ///@}
  private:

    int m_sourceId{0};
    bool m_sourceIdHasBeenSet = false;

    Aws::String m_transform;
    bool m_transformHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_fieldId{0};
    bool m_fieldIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
