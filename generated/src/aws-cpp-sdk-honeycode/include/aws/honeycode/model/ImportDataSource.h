/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/honeycode/model/ImportDataSourceConfig.h>
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
namespace Honeycode
{
namespace Model
{

  /**
   * <p>An object that has details about the source of the data that was submitted
   * for import.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/ImportDataSource">AWS
   * API Reference</a></p>
   */
  class ImportDataSource
  {
  public:
    AWS_HONEYCODE_API ImportDataSource();
    AWS_HONEYCODE_API ImportDataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API ImportDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration parameters for the data source of the import</p>
     */
    inline const ImportDataSourceConfig& GetDataSourceConfig() const{ return m_dataSourceConfig; }

    /**
     * <p>The configuration parameters for the data source of the import</p>
     */
    inline bool DataSourceConfigHasBeenSet() const { return m_dataSourceConfigHasBeenSet; }

    /**
     * <p>The configuration parameters for the data source of the import</p>
     */
    inline void SetDataSourceConfig(const ImportDataSourceConfig& value) { m_dataSourceConfigHasBeenSet = true; m_dataSourceConfig = value; }

    /**
     * <p>The configuration parameters for the data source of the import</p>
     */
    inline void SetDataSourceConfig(ImportDataSourceConfig&& value) { m_dataSourceConfigHasBeenSet = true; m_dataSourceConfig = std::move(value); }

    /**
     * <p>The configuration parameters for the data source of the import</p>
     */
    inline ImportDataSource& WithDataSourceConfig(const ImportDataSourceConfig& value) { SetDataSourceConfig(value); return *this;}

    /**
     * <p>The configuration parameters for the data source of the import</p>
     */
    inline ImportDataSource& WithDataSourceConfig(ImportDataSourceConfig&& value) { SetDataSourceConfig(std::move(value)); return *this;}

  private:

    ImportDataSourceConfig m_dataSourceConfig;
    bool m_dataSourceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
