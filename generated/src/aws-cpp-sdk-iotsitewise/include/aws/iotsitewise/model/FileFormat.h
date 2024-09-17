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
    AWS_IOTSITEWISE_API FileFormat();
    AWS_IOTSITEWISE_API FileFormat(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API FileFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The file is in .CSV format.</p>
     */
    inline const Csv& GetCsv() const{ return m_csv; }
    inline bool CsvHasBeenSet() const { return m_csvHasBeenSet; }
    inline void SetCsv(const Csv& value) { m_csvHasBeenSet = true; m_csv = value; }
    inline void SetCsv(Csv&& value) { m_csvHasBeenSet = true; m_csv = std::move(value); }
    inline FileFormat& WithCsv(const Csv& value) { SetCsv(value); return *this;}
    inline FileFormat& WithCsv(Csv&& value) { SetCsv(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file is in parquet format.</p>
     */
    inline const Parquet& GetParquet() const{ return m_parquet; }
    inline bool ParquetHasBeenSet() const { return m_parquetHasBeenSet; }
    inline void SetParquet(const Parquet& value) { m_parquetHasBeenSet = true; m_parquet = value; }
    inline void SetParquet(Parquet&& value) { m_parquetHasBeenSet = true; m_parquet = std::move(value); }
    inline FileFormat& WithParquet(const Parquet& value) { SetParquet(value); return *this;}
    inline FileFormat& WithParquet(Parquet&& value) { SetParquet(std::move(value)); return *this;}
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
