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
    AWS_DATAZONE_API ColumnFilterConfiguration();
    AWS_DATAZONE_API ColumnFilterConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ColumnFilterConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether to include column names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIncludedColumnNames() const{ return m_includedColumnNames; }
    inline bool IncludedColumnNamesHasBeenSet() const { return m_includedColumnNamesHasBeenSet; }
    inline void SetIncludedColumnNames(const Aws::Vector<Aws::String>& value) { m_includedColumnNamesHasBeenSet = true; m_includedColumnNames = value; }
    inline void SetIncludedColumnNames(Aws::Vector<Aws::String>&& value) { m_includedColumnNamesHasBeenSet = true; m_includedColumnNames = std::move(value); }
    inline ColumnFilterConfiguration& WithIncludedColumnNames(const Aws::Vector<Aws::String>& value) { SetIncludedColumnNames(value); return *this;}
    inline ColumnFilterConfiguration& WithIncludedColumnNames(Aws::Vector<Aws::String>&& value) { SetIncludedColumnNames(std::move(value)); return *this;}
    inline ColumnFilterConfiguration& AddIncludedColumnNames(const Aws::String& value) { m_includedColumnNamesHasBeenSet = true; m_includedColumnNames.push_back(value); return *this; }
    inline ColumnFilterConfiguration& AddIncludedColumnNames(Aws::String&& value) { m_includedColumnNamesHasBeenSet = true; m_includedColumnNames.push_back(std::move(value)); return *this; }
    inline ColumnFilterConfiguration& AddIncludedColumnNames(const char* value) { m_includedColumnNamesHasBeenSet = true; m_includedColumnNames.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_includedColumnNames;
    bool m_includedColumnNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
