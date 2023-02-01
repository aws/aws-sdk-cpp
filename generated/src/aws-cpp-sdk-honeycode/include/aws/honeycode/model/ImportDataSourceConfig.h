/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
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
namespace Honeycode
{
namespace Model
{

  /**
   * <p> An object that contains the configuration parameters for the data source of
   * an import request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/ImportDataSourceConfig">AWS
   * API Reference</a></p>
   */
  class ImportDataSourceConfig
  {
  public:
    AWS_HONEYCODE_API ImportDataSourceConfig();
    AWS_HONEYCODE_API ImportDataSourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API ImportDataSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The URL from which source data will be downloaded for the import request.
     * </p>
     */
    inline const Aws::String& GetDataSourceUrl() const{ return m_dataSourceUrl; }

    /**
     * <p> The URL from which source data will be downloaded for the import request.
     * </p>
     */
    inline bool DataSourceUrlHasBeenSet() const { return m_dataSourceUrlHasBeenSet; }

    /**
     * <p> The URL from which source data will be downloaded for the import request.
     * </p>
     */
    inline void SetDataSourceUrl(const Aws::String& value) { m_dataSourceUrlHasBeenSet = true; m_dataSourceUrl = value; }

    /**
     * <p> The URL from which source data will be downloaded for the import request.
     * </p>
     */
    inline void SetDataSourceUrl(Aws::String&& value) { m_dataSourceUrlHasBeenSet = true; m_dataSourceUrl = std::move(value); }

    /**
     * <p> The URL from which source data will be downloaded for the import request.
     * </p>
     */
    inline void SetDataSourceUrl(const char* value) { m_dataSourceUrlHasBeenSet = true; m_dataSourceUrl.assign(value); }

    /**
     * <p> The URL from which source data will be downloaded for the import request.
     * </p>
     */
    inline ImportDataSourceConfig& WithDataSourceUrl(const Aws::String& value) { SetDataSourceUrl(value); return *this;}

    /**
     * <p> The URL from which source data will be downloaded for the import request.
     * </p>
     */
    inline ImportDataSourceConfig& WithDataSourceUrl(Aws::String&& value) { SetDataSourceUrl(std::move(value)); return *this;}

    /**
     * <p> The URL from which source data will be downloaded for the import request.
     * </p>
     */
    inline ImportDataSourceConfig& WithDataSourceUrl(const char* value) { SetDataSourceUrl(value); return *this;}

  private:

    Aws::String m_dataSourceUrl;
    bool m_dataSourceUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
