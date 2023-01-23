/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A structure containing the column name and column importance score for a
   * column. </p> <p>Column importance helps you understand how columns contribute to
   * your model, by identifying which columns in your records are more important than
   * others.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ColumnImportance">AWS
   * API Reference</a></p>
   */
  class ColumnImportance
  {
  public:
    AWS_GLUE_API ColumnImportance();
    AWS_GLUE_API ColumnImportance(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ColumnImportance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a column.</p>
     */
    inline const Aws::String& GetColumnName() const{ return m_columnName; }

    /**
     * <p>The name of a column.</p>
     */
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }

    /**
     * <p>The name of a column.</p>
     */
    inline void SetColumnName(const Aws::String& value) { m_columnNameHasBeenSet = true; m_columnName = value; }

    /**
     * <p>The name of a column.</p>
     */
    inline void SetColumnName(Aws::String&& value) { m_columnNameHasBeenSet = true; m_columnName = std::move(value); }

    /**
     * <p>The name of a column.</p>
     */
    inline void SetColumnName(const char* value) { m_columnNameHasBeenSet = true; m_columnName.assign(value); }

    /**
     * <p>The name of a column.</p>
     */
    inline ColumnImportance& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}

    /**
     * <p>The name of a column.</p>
     */
    inline ColumnImportance& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}

    /**
     * <p>The name of a column.</p>
     */
    inline ColumnImportance& WithColumnName(const char* value) { SetColumnName(value); return *this;}


    /**
     * <p>The column importance score for the column, as a decimal.</p>
     */
    inline double GetImportance() const{ return m_importance; }

    /**
     * <p>The column importance score for the column, as a decimal.</p>
     */
    inline bool ImportanceHasBeenSet() const { return m_importanceHasBeenSet; }

    /**
     * <p>The column importance score for the column, as a decimal.</p>
     */
    inline void SetImportance(double value) { m_importanceHasBeenSet = true; m_importance = value; }

    /**
     * <p>The column importance score for the column, as a decimal.</p>
     */
    inline ColumnImportance& WithImportance(double value) { SetImportance(value); return *this;}

  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    double m_importance;
    bool m_importanceHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
