/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Specifies that a value is not in the expression.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/NotInExpression">AWS
   * API Reference</a></p>
   */
  class NotInExpression
  {
  public:
    AWS_DATAZONE_API NotInExpression();
    AWS_DATAZONE_API NotInExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API NotInExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the column.</p>
     */
    inline const Aws::String& GetColumnName() const{ return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    inline void SetColumnName(const Aws::String& value) { m_columnNameHasBeenSet = true; m_columnName = value; }
    inline void SetColumnName(Aws::String&& value) { m_columnNameHasBeenSet = true; m_columnName = std::move(value); }
    inline void SetColumnName(const char* value) { m_columnNameHasBeenSet = true; m_columnName.assign(value); }
    inline NotInExpression& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}
    inline NotInExpression& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}
    inline NotInExpression& WithColumnName(const char* value) { SetColumnName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that might not be in the expression.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline NotInExpression& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}
    inline NotInExpression& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}
    inline NotInExpression& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    inline NotInExpression& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }
    inline NotInExpression& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
