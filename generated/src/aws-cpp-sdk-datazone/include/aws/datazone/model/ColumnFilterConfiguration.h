/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The column configuration of the asset filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ColumnFilterConfiguration">AWS
   * API Reference</a></p>
   */
  class ColumnFilterConfiguration
  {
  public:
    AWS_DATAZONE_API ColumnFilterConfiguration() = default;
    AWS_DATAZONE_API ColumnFilterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ColumnFilterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether to include column names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludedColumnNames() const { return m_includedColumnNames; }
    inline bool IncludedColumnNamesHasBeenSet() const { return m_includedColumnNamesHasBeenSet; }
    template<typename IncludedColumnNamesT = Aws::Vector<Aws::String>>
    void SetIncludedColumnNames(IncludedColumnNamesT&& value) { m_includedColumnNamesHasBeenSet = true; m_includedColumnNames = std::forward<IncludedColumnNamesT>(value); }
    template<typename IncludedColumnNamesT = Aws::Vector<Aws::String>>
    ColumnFilterConfiguration& WithIncludedColumnNames(IncludedColumnNamesT&& value) { SetIncludedColumnNames(std::forward<IncludedColumnNamesT>(value)); return *this;}
    template<typename IncludedColumnNamesT = Aws::String>
    ColumnFilterConfiguration& AddIncludedColumnNames(IncludedColumnNamesT&& value) { m_includedColumnNamesHasBeenSet = true; m_includedColumnNames.emplace_back(std::forward<IncludedColumnNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_includedColumnNames;
    bool m_includedColumnNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
