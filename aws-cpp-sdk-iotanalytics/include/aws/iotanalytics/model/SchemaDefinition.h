/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotanalytics/model/Column.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>Information needed to define a schema.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/SchemaDefinition">AWS
   * API Reference</a></p>
   */
  class SchemaDefinition
  {
  public:
    AWS_IOTANALYTICS_API SchemaDefinition();
    AWS_IOTANALYTICS_API SchemaDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API SchemaDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies one or more columns that store your data.</p> <p>Each schema can
     * have up to 100 columns. Each column can have up to 100 nested types.</p>
     */
    inline const Aws::Vector<Column>& GetColumns() const{ return m_columns; }

    /**
     * <p>Specifies one or more columns that store your data.</p> <p>Each schema can
     * have up to 100 columns. Each column can have up to 100 nested types.</p>
     */
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }

    /**
     * <p>Specifies one or more columns that store your data.</p> <p>Each schema can
     * have up to 100 columns. Each column can have up to 100 nested types.</p>
     */
    inline void SetColumns(const Aws::Vector<Column>& value) { m_columnsHasBeenSet = true; m_columns = value; }

    /**
     * <p>Specifies one or more columns that store your data.</p> <p>Each schema can
     * have up to 100 columns. Each column can have up to 100 nested types.</p>
     */
    inline void SetColumns(Aws::Vector<Column>&& value) { m_columnsHasBeenSet = true; m_columns = std::move(value); }

    /**
     * <p>Specifies one or more columns that store your data.</p> <p>Each schema can
     * have up to 100 columns. Each column can have up to 100 nested types.</p>
     */
    inline SchemaDefinition& WithColumns(const Aws::Vector<Column>& value) { SetColumns(value); return *this;}

    /**
     * <p>Specifies one or more columns that store your data.</p> <p>Each schema can
     * have up to 100 columns. Each column can have up to 100 nested types.</p>
     */
    inline SchemaDefinition& WithColumns(Aws::Vector<Column>&& value) { SetColumns(std::move(value)); return *this;}

    /**
     * <p>Specifies one or more columns that store your data.</p> <p>Each schema can
     * have up to 100 columns. Each column can have up to 100 nested types.</p>
     */
    inline SchemaDefinition& AddColumns(const Column& value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }

    /**
     * <p>Specifies one or more columns that store your data.</p> <p>Each schema can
     * have up to 100 columns. Each column can have up to 100 nested types.</p>
     */
    inline SchemaDefinition& AddColumns(Column&& value) { m_columnsHasBeenSet = true; m_columns.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Column> m_columns;
    bool m_columnsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
