/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/model/TablePreparationMode.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p>Defines settings for a target data provider for a data
   * migration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/TargetDataSetting">AWS
   * API Reference</a></p>
   */
  class TargetDataSetting
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API TargetDataSetting() = default;
    AWS_DATABASEMIGRATIONSERVICE_API TargetDataSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API TargetDataSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This setting determines how DMS handles the target tables before starting a
     * data migration, either by leaving them untouched, dropping and recreating them,
     * or truncating the existing data in the target tables.</p>
     */
    inline TablePreparationMode GetTablePreparationMode() const { return m_tablePreparationMode; }
    inline bool TablePreparationModeHasBeenSet() const { return m_tablePreparationModeHasBeenSet; }
    inline void SetTablePreparationMode(TablePreparationMode value) { m_tablePreparationModeHasBeenSet = true; m_tablePreparationMode = value; }
    inline TargetDataSetting& WithTablePreparationMode(TablePreparationMode value) { SetTablePreparationMode(value); return *this;}
    ///@}
  private:

    TablePreparationMode m_tablePreparationMode{TablePreparationMode::NOT_SET};
    bool m_tablePreparationModeHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
