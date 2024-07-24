/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Provides the name of the columns that are required to overlap.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/QueryConstraintRequireOverlap">AWS
   * API Reference</a></p>
   */
  class QueryConstraintRequireOverlap
  {
  public:
    AWS_CLEANROOMS_API QueryConstraintRequireOverlap();
    AWS_CLEANROOMS_API QueryConstraintRequireOverlap(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API QueryConstraintRequireOverlap& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The columns that are required to overlap.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumns() const{ return m_columns; }
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
    inline void SetColumns(const Aws::Vector<Aws::String>& value) { m_columnsHasBeenSet = true; m_columns = value; }
    inline void SetColumns(Aws::Vector<Aws::String>&& value) { m_columnsHasBeenSet = true; m_columns = std::move(value); }
    inline QueryConstraintRequireOverlap& WithColumns(const Aws::Vector<Aws::String>& value) { SetColumns(value); return *this;}
    inline QueryConstraintRequireOverlap& WithColumns(Aws::Vector<Aws::String>&& value) { SetColumns(std::move(value)); return *this;}
    inline QueryConstraintRequireOverlap& AddColumns(const Aws::String& value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }
    inline QueryConstraintRequireOverlap& AddColumns(Aws::String&& value) { m_columnsHasBeenSet = true; m_columns.push_back(std::move(value)); return *this; }
    inline QueryConstraintRequireOverlap& AddColumns(const char* value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_columns;
    bool m_columnsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
