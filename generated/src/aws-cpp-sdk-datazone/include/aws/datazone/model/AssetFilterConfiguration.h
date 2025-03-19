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
    AWS_DATAZONE_API AssetFilterConfiguration() = default;
    AWS_DATAZONE_API AssetFilterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetFilterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The column configuration of the asset filter.</p>
     */
    inline const ColumnFilterConfiguration& GetColumnConfiguration() const { return m_columnConfiguration; }
    inline bool ColumnConfigurationHasBeenSet() const { return m_columnConfigurationHasBeenSet; }
    template<typename ColumnConfigurationT = ColumnFilterConfiguration>
    void SetColumnConfiguration(ColumnConfigurationT&& value) { m_columnConfigurationHasBeenSet = true; m_columnConfiguration = std::forward<ColumnConfigurationT>(value); }
    template<typename ColumnConfigurationT = ColumnFilterConfiguration>
    AssetFilterConfiguration& WithColumnConfiguration(ColumnConfigurationT&& value) { SetColumnConfiguration(std::forward<ColumnConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The row configuration of the asset filter.</p>
     */
    inline const RowFilterConfiguration& GetRowConfiguration() const { return m_rowConfiguration; }
    inline bool RowConfigurationHasBeenSet() const { return m_rowConfigurationHasBeenSet; }
    template<typename RowConfigurationT = RowFilterConfiguration>
    void SetRowConfiguration(RowConfigurationT&& value) { m_rowConfigurationHasBeenSet = true; m_rowConfiguration = std::forward<RowConfigurationT>(value); }
    template<typename RowConfigurationT = RowFilterConfiguration>
    AssetFilterConfiguration& WithRowConfiguration(RowConfigurationT&& value) { SetRowConfiguration(std::forward<RowConfigurationT>(value)); return *this;}
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
