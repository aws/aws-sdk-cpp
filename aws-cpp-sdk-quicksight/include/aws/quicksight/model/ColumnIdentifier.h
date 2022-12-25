/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A column of a data set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ColumnIdentifier">AWS
   * API Reference</a></p>
   */
  class ColumnIdentifier
  {
  public:
    AWS_QUICKSIGHT_API ColumnIdentifier();
    AWS_QUICKSIGHT_API ColumnIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ColumnIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The data set that the column belongs to.</p>
     */
    inline const Aws::String& GetDataSetIdentifier() const{ return m_dataSetIdentifier; }

    /**
     * <p>The data set that the column belongs to.</p>
     */
    inline bool DataSetIdentifierHasBeenSet() const { return m_dataSetIdentifierHasBeenSet; }

    /**
     * <p>The data set that the column belongs to.</p>
     */
    inline void SetDataSetIdentifier(const Aws::String& value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier = value; }

    /**
     * <p>The data set that the column belongs to.</p>
     */
    inline void SetDataSetIdentifier(Aws::String&& value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier = std::move(value); }

    /**
     * <p>The data set that the column belongs to.</p>
     */
    inline void SetDataSetIdentifier(const char* value) { m_dataSetIdentifierHasBeenSet = true; m_dataSetIdentifier.assign(value); }

    /**
     * <p>The data set that the column belongs to.</p>
     */
    inline ColumnIdentifier& WithDataSetIdentifier(const Aws::String& value) { SetDataSetIdentifier(value); return *this;}

    /**
     * <p>The data set that the column belongs to.</p>
     */
    inline ColumnIdentifier& WithDataSetIdentifier(Aws::String&& value) { SetDataSetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The data set that the column belongs to.</p>
     */
    inline ColumnIdentifier& WithDataSetIdentifier(const char* value) { SetDataSetIdentifier(value); return *this;}


    /**
     * <p>The name of the column.</p>
     */
    inline const Aws::String& GetColumnName() const{ return m_columnName; }

    /**
     * <p>The name of the column.</p>
     */
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }

    /**
     * <p>The name of the column.</p>
     */
    inline void SetColumnName(const Aws::String& value) { m_columnNameHasBeenSet = true; m_columnName = value; }

    /**
     * <p>The name of the column.</p>
     */
    inline void SetColumnName(Aws::String&& value) { m_columnNameHasBeenSet = true; m_columnName = std::move(value); }

    /**
     * <p>The name of the column.</p>
     */
    inline void SetColumnName(const char* value) { m_columnNameHasBeenSet = true; m_columnName.assign(value); }

    /**
     * <p>The name of the column.</p>
     */
    inline ColumnIdentifier& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}

    /**
     * <p>The name of the column.</p>
     */
    inline ColumnIdentifier& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}

    /**
     * <p>The name of the column.</p>
     */
    inline ColumnIdentifier& WithColumnName(const char* value) { SetColumnName(value); return *this;}

  private:

    Aws::String m_dataSetIdentifier;
    bool m_dataSetIdentifierHasBeenSet = false;

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
