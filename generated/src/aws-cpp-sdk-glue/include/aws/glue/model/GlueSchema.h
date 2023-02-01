/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/GlueStudioSchemaColumn.h>
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
   * <p>Specifies a user-defined schema when a schema cannot be determined by
   * Glue.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/GlueSchema">AWS API
   * Reference</a></p>
   */
  class GlueSchema
  {
  public:
    AWS_GLUE_API GlueSchema();
    AWS_GLUE_API GlueSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API GlueSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the column definitions that make up a Glue schema.</p>
     */
    inline const Aws::Vector<GlueStudioSchemaColumn>& GetColumns() const{ return m_columns; }

    /**
     * <p>Specifies the column definitions that make up a Glue schema.</p>
     */
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }

    /**
     * <p>Specifies the column definitions that make up a Glue schema.</p>
     */
    inline void SetColumns(const Aws::Vector<GlueStudioSchemaColumn>& value) { m_columnsHasBeenSet = true; m_columns = value; }

    /**
     * <p>Specifies the column definitions that make up a Glue schema.</p>
     */
    inline void SetColumns(Aws::Vector<GlueStudioSchemaColumn>&& value) { m_columnsHasBeenSet = true; m_columns = std::move(value); }

    /**
     * <p>Specifies the column definitions that make up a Glue schema.</p>
     */
    inline GlueSchema& WithColumns(const Aws::Vector<GlueStudioSchemaColumn>& value) { SetColumns(value); return *this;}

    /**
     * <p>Specifies the column definitions that make up a Glue schema.</p>
     */
    inline GlueSchema& WithColumns(Aws::Vector<GlueStudioSchemaColumn>&& value) { SetColumns(std::move(value)); return *this;}

    /**
     * <p>Specifies the column definitions that make up a Glue schema.</p>
     */
    inline GlueSchema& AddColumns(const GlueStudioSchemaColumn& value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }

    /**
     * <p>Specifies the column definitions that make up a Glue schema.</p>
     */
    inline GlueSchema& AddColumns(GlueStudioSchemaColumn&& value) { m_columnsHasBeenSet = true; m_columns.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<GlueStudioSchemaColumn> m_columns;
    bool m_columnsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
