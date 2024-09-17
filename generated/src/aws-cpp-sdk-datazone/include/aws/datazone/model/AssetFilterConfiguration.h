/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/ColumnFilterConfiguration.h>
#include <aws/datazone/model/RowFilterConfiguration.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The configuration details of the asset filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AssetFilterConfiguration">AWS
   * API Reference</a></p>
   */
  class AssetFilterConfiguration
  {
  public:
    AWS_DATAZONE_API AssetFilterConfiguration();
    AWS_DATAZONE_API AssetFilterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetFilterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The column configuration of the asset filter.</p>
     */
    inline const ColumnFilterConfiguration& GetColumnConfiguration() const{ return m_columnConfiguration; }
    inline bool ColumnConfigurationHasBeenSet() const { return m_columnConfigurationHasBeenSet; }
    inline void SetColumnConfiguration(const ColumnFilterConfiguration& value) { m_columnConfigurationHasBeenSet = true; m_columnConfiguration = value; }
    inline void SetColumnConfiguration(ColumnFilterConfiguration&& value) { m_columnConfigurationHasBeenSet = true; m_columnConfiguration = std::move(value); }
    inline AssetFilterConfiguration& WithColumnConfiguration(const ColumnFilterConfiguration& value) { SetColumnConfiguration(value); return *this;}
    inline AssetFilterConfiguration& WithColumnConfiguration(ColumnFilterConfiguration&& value) { SetColumnConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The row configuration of the asset filter.</p>
     */
    inline const RowFilterConfiguration& GetRowConfiguration() const{ return m_rowConfiguration; }
    inline bool RowConfigurationHasBeenSet() const { return m_rowConfigurationHasBeenSet; }
    inline void SetRowConfiguration(const RowFilterConfiguration& value) { m_rowConfigurationHasBeenSet = true; m_rowConfiguration = value; }
    inline void SetRowConfiguration(RowFilterConfiguration&& value) { m_rowConfigurationHasBeenSet = true; m_rowConfiguration = std::move(value); }
    inline AssetFilterConfiguration& WithRowConfiguration(const RowFilterConfiguration& value) { SetRowConfiguration(value); return *this;}
    inline AssetFilterConfiguration& WithRowConfiguration(RowFilterConfiguration&& value) { SetRowConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    ColumnFilterConfiguration m_columnConfiguration;
    bool m_columnConfigurationHasBeenSet = false;

    RowFilterConfiguration m_rowConfiguration;
    bool m_rowConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
