/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DatabaseMigrationService {
namespace Model {

/**
 * <p>Provides information that defines a Lakehouse endpoint. This endpoint type is
 * used for zero-ETL integrations with Lakehouse data warehouses.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/LakehouseSettings">AWS
 * API Reference</a></p>
 */
class LakehouseSettings {
 public:
  AWS_DATABASEMIGRATIONSERVICE_API LakehouseSettings() = default;
  AWS_DATABASEMIGRATIONSERVICE_API LakehouseSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATABASEMIGRATIONSERVICE_API LakehouseSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Lakehouse resource that serves as the
   * target for this endpoint.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  LakehouseSettings& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;
  bool m_arnHasBeenSet = false;
};

}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
