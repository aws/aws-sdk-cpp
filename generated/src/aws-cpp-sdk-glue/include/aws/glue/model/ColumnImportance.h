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
    AWS_GLUE_API ColumnImportance() = default;
    AWS_GLUE_API ColumnImportance(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ColumnImportance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a column.</p>
     */
    inline const Aws::String& GetColumnName() const { return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    template<typename ColumnNameT = Aws::String>
    void SetColumnName(ColumnNameT&& value) { m_columnNameHasBeenSet = true; m_columnName = std::forward<ColumnNameT>(value); }
    template<typename ColumnNameT = Aws::String>
    ColumnImportance& WithColumnName(ColumnNameT&& value) { SetColumnName(std::forward<ColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column importance score for the column, as a decimal.</p>
     */
    inline double GetImportance() const { return m_importance; }
    inline bool ImportanceHasBeenSet() const { return m_importanceHasBeenSet; }
    inline void SetImportance(double value) { m_importanceHasBeenSet = true; m_importance = value; }
    inline ColumnImportance& WithImportance(double value) { SetImportance(value); return *this;}
    ///@}
  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    double m_importance{0.0};
    bool m_importanceHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
