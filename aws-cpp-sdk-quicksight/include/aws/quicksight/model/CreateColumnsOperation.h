/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/CalculatedColumn.h>
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
   * <p>A transform operation that creates calculated columns. Columns created in one
   * such operation form a lexical closure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateColumnsOperation">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API CreateColumnsOperation
  {
  public:
    CreateColumnsOperation();
    CreateColumnsOperation(Aws::Utils::Json::JsonView jsonValue);
    CreateColumnsOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Calculated columns to create.</p>
     */
    inline const Aws::Vector<CalculatedColumn>& GetColumns() const{ return m_columns; }

    /**
     * <p>Calculated columns to create.</p>
     */
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }

    /**
     * <p>Calculated columns to create.</p>
     */
    inline void SetColumns(const Aws::Vector<CalculatedColumn>& value) { m_columnsHasBeenSet = true; m_columns = value; }

    /**
     * <p>Calculated columns to create.</p>
     */
    inline void SetColumns(Aws::Vector<CalculatedColumn>&& value) { m_columnsHasBeenSet = true; m_columns = std::move(value); }

    /**
     * <p>Calculated columns to create.</p>
     */
    inline CreateColumnsOperation& WithColumns(const Aws::Vector<CalculatedColumn>& value) { SetColumns(value); return *this;}

    /**
     * <p>Calculated columns to create.</p>
     */
    inline CreateColumnsOperation& WithColumns(Aws::Vector<CalculatedColumn>&& value) { SetColumns(std::move(value)); return *this;}

    /**
     * <p>Calculated columns to create.</p>
     */
    inline CreateColumnsOperation& AddColumns(const CalculatedColumn& value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }

    /**
     * <p>Calculated columns to create.</p>
     */
    inline CreateColumnsOperation& AddColumns(CalculatedColumn&& value) { m_columnsHasBeenSet = true; m_columns.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CalculatedColumn> m_columns;
    bool m_columnsHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
