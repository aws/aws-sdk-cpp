/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/IcebergSortField.h>
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
   * <p>Defines the sort order specification for an Iceberg table, determining how
   * data should be ordered within partitions to optimize query
   * performance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/IcebergSortOrder">AWS
   * API Reference</a></p>
   */
  class IcebergSortOrder
  {
  public:
    AWS_GLUE_API IcebergSortOrder() = default;
    AWS_GLUE_API IcebergSortOrder(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API IcebergSortOrder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for this sort order specification within the Iceberg
     * table's metadata.</p>
     */
    inline int GetOrderId() const { return m_orderId; }
    inline bool OrderIdHasBeenSet() const { return m_orderIdHasBeenSet; }
    inline void SetOrderId(int value) { m_orderIdHasBeenSet = true; m_orderId = value; }
    inline IcebergSortOrder& WithOrderId(int value) { SetOrderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of fields and their sort directions that define the ordering
     * criteria for the Iceberg table data.</p>
     */
    inline const Aws::Vector<IcebergSortField>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Vector<IcebergSortField>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Vector<IcebergSortField>>
    IcebergSortOrder& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsT = IcebergSortField>
    IcebergSortOrder& AddFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields.emplace_back(std::forward<FieldsT>(value)); return *this; }
    ///@}
  private:

    int m_orderId{0};
    bool m_orderIdHasBeenSet = false;

    Aws::Vector<IcebergSortField> m_fields;
    bool m_fieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
