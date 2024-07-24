/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
   * <p>Specifies that a value is less than or equal to an expression.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/LessThanOrEqualToExpression">AWS
   * API Reference</a></p>
   */
  class LessThanOrEqualToExpression
  {
  public:
    AWS_DATAZONE_API LessThanOrEqualToExpression();
    AWS_DATAZONE_API LessThanOrEqualToExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API LessThanOrEqualToExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline LessThanOrEqualToExpression& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}
    inline LessThanOrEqualToExpression& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}
    inline LessThanOrEqualToExpression& WithColumnName(const char* value) { SetColumnName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value that might be less than or equal to an expression.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline LessThanOrEqualToExpression& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline LessThanOrEqualToExpression& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline LessThanOrEqualToExpression& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
