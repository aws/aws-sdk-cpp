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
   * <p>Specifies that the expression is not null.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/IsNotNullExpression">AWS
   * API Reference</a></p>
   */
  class IsNotNullExpression
  {
  public:
    AWS_DATAZONE_API IsNotNullExpression();
    AWS_DATAZONE_API IsNotNullExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API IsNotNullExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline IsNotNullExpression& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}
    inline IsNotNullExpression& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}
    inline IsNotNullExpression& WithColumnName(const char* value) { SetColumnName(value); return *this;}
    ///@}
  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
