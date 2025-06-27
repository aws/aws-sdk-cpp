/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/IcebergSortDirection.h>
#include <aws/glue/model/IcebergNullOrder.h>
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
   * <p>Defines a single field within an Iceberg sort order specification, including
   * the source field, transformation, sort direction, and null value
   * ordering.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IcebergSortField">AWS
   * API Reference</a></p>
   */
  class IcebergSortField
  {
  public:
    AWS_GLUE_API IcebergSortField() = default;
    AWS_GLUE_API IcebergSortField(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API IcebergSortField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the source field from the table schema that this sort field
     * is based on.</p>
     */
    inline int GetSourceId() const { return m_sourceId; }
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
    inline void SetSourceId(int value) { m_sourceIdHasBeenSet = true; m_sourceId = value; }
    inline IcebergSortField& WithSourceId(int value) { SetSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transformation function applied to the source field before sorting, such
     * as identity, bucket, or truncate.</p>
     */
    inline const Aws::String& GetTransform() const { return m_transform; }
    inline bool TransformHasBeenSet() const { return m_transformHasBeenSet; }
    template<typename TransformT = Aws::String>
    void SetTransform(TransformT&& value) { m_transformHasBeenSet = true; m_transform = std::forward<TransformT>(value); }
    template<typename TransformT = Aws::String>
    IcebergSortField& WithTransform(TransformT&& value) { SetTransform(std::forward<TransformT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort direction for this field, either ascending or descending.</p>
     */
    inline IcebergSortDirection GetDirection() const { return m_direction; }
    inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
    inline void SetDirection(IcebergSortDirection value) { m_directionHasBeenSet = true; m_direction = value; }
    inline IcebergSortField& WithDirection(IcebergSortDirection value) { SetDirection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ordering behavior for null values in this field, specifying whether nulls
     * should appear first or last in the sort order.</p>
     */
    inline IcebergNullOrder GetNullOrder() const { return m_nullOrder; }
    inline bool NullOrderHasBeenSet() const { return m_nullOrderHasBeenSet; }
    inline void SetNullOrder(IcebergNullOrder value) { m_nullOrderHasBeenSet = true; m_nullOrder = value; }
    inline IcebergSortField& WithNullOrder(IcebergNullOrder value) { SetNullOrder(value); return *this;}
    ///@}
  private:

    int m_sourceId{0};
    bool m_sourceIdHasBeenSet = false;

    Aws::String m_transform;
    bool m_transformHasBeenSet = false;

    IcebergSortDirection m_direction{IcebergSortDirection::NOT_SET};
    bool m_directionHasBeenSet = false;

    IcebergNullOrder m_nullOrder{IcebergNullOrder::NOT_SET};
    bool m_nullOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
