/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/Csv.h>
#include <aws/iotsitewise/model/Parquet.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>The file format of the data in S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/FileFormat">AWS
   * API Reference</a></p>
   */
  class FileFormat
  {
  public:
    AWS_IOTSITEWISE_API FileFormat() = default;
    AWS_IOTSITEWISE_API FileFormat(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API FileFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file is in .CSV format.</p>
     */
    inline const Csv& GetCsv() const { return m_csv; }
    inline bool CsvHasBeenSet() const { return m_csvHasBeenSet; }
    template<typename CsvT = Csv>
    void SetCsv(CsvT&& value) { m_csvHasBeenSet = true; m_csv = std::forward<CsvT>(value); }
    template<typename CsvT = Csv>
    FileFormat& WithCsv(CsvT&& value) { SetCsv(std::forward<CsvT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file is in parquet format.</p>
     */
    inline const Parquet& GetParquet() const { return m_parquet; }
    inline bool ParquetHasBeenSet() const { return m_parquetHasBeenSet; }
    template<typename ParquetT = Parquet>
    void SetParquet(ParquetT&& value) { m_parquetHasBeenSet = true; m_parquet = std::forward<ParquetT>(value); }
    template<typename ParquetT = Parquet>
    FileFormat& WithParquet(ParquetT&& value) { SetParquet(std::forward<ParquetT>(value)); return *this;}
    ///@}
  private:

    Csv m_csv;
    bool m_csvHasBeenSet = false;

    Parquet m_parquet;
    bool m_parquetHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
