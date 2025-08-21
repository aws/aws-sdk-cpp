/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/GlueTable.h>
#include <aws/glue/model/DataQualityGlueTable.h>
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
    AWS_GLUE_API DataSource() = default;
    AWS_GLUE_API DataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Glue table.</p>
     */
    inline const GlueTable& GetGlueTable() const { return m_glueTable; }
    inline bool GlueTableHasBeenSet() const { return m_glueTableHasBeenSet; }
    template<typename GlueTableT = GlueTable>
    void SetGlueTable(GlueTableT&& value) { m_glueTableHasBeenSet = true; m_glueTable = std::forward<GlueTableT>(value); }
    template<typename GlueTableT = GlueTable>
    DataSource& WithGlueTable(GlueTableT&& value) { SetGlueTable(std::forward<GlueTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Glue table for Data Quality Operations.</p>
     */
    inline const DataQualityGlueTable& GetDataQualityGlueTable() const { return m_dataQualityGlueTable; }
    inline bool DataQualityGlueTableHasBeenSet() const { return m_dataQualityGlueTableHasBeenSet; }
    template<typename DataQualityGlueTableT = DataQualityGlueTable>
    void SetDataQualityGlueTable(DataQualityGlueTableT&& value) { m_dataQualityGlueTableHasBeenSet = true; m_dataQualityGlueTable = std::forward<DataQualityGlueTableT>(value); }
    template<typename DataQualityGlueTableT = DataQualityGlueTable>
    DataSource& WithDataQualityGlueTable(DataQualityGlueTableT&& value) { SetDataQualityGlueTable(std::forward<DataQualityGlueTableT>(value)); return *this;}
    ///@}
  private:

    GlueTable m_glueTable;
    bool m_glueTableHasBeenSet = false;

    DataQualityGlueTable m_dataQualityGlueTable;
    bool m_dataQualityGlueTableHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
