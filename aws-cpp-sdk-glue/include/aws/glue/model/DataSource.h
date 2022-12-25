/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/GlueTable.h>
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
   * <p>A data source (an Glue table) for which you want data quality
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataSource">AWS API
   * Reference</a></p>
   */
  class DataSource
  {
  public:
    AWS_GLUE_API DataSource();
    AWS_GLUE_API DataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An Glue table.</p>
     */
    inline const GlueTable& GetGlueTable() const{ return m_glueTable; }

    /**
     * <p>An Glue table.</p>
     */
    inline bool GlueTableHasBeenSet() const { return m_glueTableHasBeenSet; }

    /**
     * <p>An Glue table.</p>
     */
    inline void SetGlueTable(const GlueTable& value) { m_glueTableHasBeenSet = true; m_glueTable = value; }

    /**
     * <p>An Glue table.</p>
     */
    inline void SetGlueTable(GlueTable&& value) { m_glueTableHasBeenSet = true; m_glueTable = std::move(value); }

    /**
     * <p>An Glue table.</p>
     */
    inline DataSource& WithGlueTable(const GlueTable& value) { SetGlueTable(value); return *this;}

    /**
     * <p>An Glue table.</p>
     */
    inline DataSource& WithGlueTable(GlueTable&& value) { SetGlueTable(std::move(value)); return *this;}

  private:

    GlueTable m_glueTable;
    bool m_glueTableHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
