/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kafka {
namespace Model {

/**
 * <p>Configuration of the AWS Glue Data Catalog and S3 Tables warehouse used by
 * the Apache Iceberg destination.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/Catalog">AWS API
 * Reference</a></p>
 */
class Catalog {
 public:
  AWS_KAFKA_API Catalog() = default;
  AWS_KAFKA_API Catalog(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Catalog& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the federated AWS Glue Data Catalog that
   * projects the S3 Tables bucket. If omitted, MSK derives the catalog ARN from
   * warehouseLocation.</p>
   */
  inline const Aws::String& GetCatalogArn() const { return m_catalogArn; }
  inline bool CatalogArnHasBeenSet() const { return m_catalogArnHasBeenSet; }
  template <typename CatalogArnT = Aws::String>
  void SetCatalogArn(CatalogArnT&& value) {
    m_catalogArnHasBeenSet = true;
    m_catalogArn = std::forward<CatalogArnT>(value);
  }
  template <typename CatalogArnT = Aws::String>
  Catalog& WithCatalogArn(CatalogArnT&& value) {
    SetCatalogArn(std::forward<CatalogArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the S3 Tables bucket that backs the Apache
   * Iceberg warehouse.</p>
   */
  inline const Aws::String& GetWarehouseLocation() const { return m_warehouseLocation; }
  inline bool WarehouseLocationHasBeenSet() const { return m_warehouseLocationHasBeenSet; }
  template <typename WarehouseLocationT = Aws::String>
  void SetWarehouseLocation(WarehouseLocationT&& value) {
    m_warehouseLocationHasBeenSet = true;
    m_warehouseLocation = std::forward<WarehouseLocationT>(value);
  }
  template <typename WarehouseLocationT = Aws::String>
  Catalog& WithWarehouseLocation(WarehouseLocationT&& value) {
    SetWarehouseLocation(std::forward<WarehouseLocationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalogArn;

  Aws::String m_warehouseLocation;
  bool m_catalogArnHasBeenSet = false;
  bool m_warehouseLocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
