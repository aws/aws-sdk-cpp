/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/Annotation.h>
#include <aws/iotsitewise/model/Csv.h>
#include <aws/iotsitewise/model/Mp4.h>
#include <aws/iotsitewise/model/Parquet.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * <p>The file format of the data in S3.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/FileFormat">AWS
 * API Reference</a></p>
 */
class FileFormat {
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
  template <typename CsvT = Csv>
  void SetCsv(CsvT&& value) {
    m_csvHasBeenSet = true;
    m_csv = std::forward<CsvT>(value);
  }
  template <typename CsvT = Csv>
  FileFormat& WithCsv(CsvT&& value) {
    SetCsv(std::forward<CsvT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The file is in parquet format.</p>
   */
  inline const Parquet& GetParquet() const { return m_parquet; }
  inline bool ParquetHasBeenSet() const { return m_parquetHasBeenSet; }
  template <typename ParquetT = Parquet>
  void SetParquet(ParquetT&& value) {
    m_parquetHasBeenSet = true;
    m_parquet = std::forward<ParquetT>(value);
  }
  template <typename ParquetT = Parquet>
  FileFormat& WithParquet(ParquetT&& value) {
    SetParquet(std::forward<ParquetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MP4 format configuration.</p>
   */
  inline const Mp4& GetMp4() const { return m_mp4; }
  inline bool Mp4HasBeenSet() const { return m_mp4HasBeenSet; }
  template <typename Mp4T = Mp4>
  void SetMp4(Mp4T&& value) {
    m_mp4HasBeenSet = true;
    m_mp4 = std::forward<Mp4T>(value);
  }
  template <typename Mp4T = Mp4>
  FileFormat& WithMp4(Mp4T&& value) {
    SetMp4(std::forward<Mp4T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The annotation format configuration.</p>
   */
  inline const Annotation& GetAnnotation() const { return m_annotation; }
  inline bool AnnotationHasBeenSet() const { return m_annotationHasBeenSet; }
  template <typename AnnotationT = Annotation>
  void SetAnnotation(AnnotationT&& value) {
    m_annotationHasBeenSet = true;
    m_annotation = std::forward<AnnotationT>(value);
  }
  template <typename AnnotationT = Annotation>
  FileFormat& WithAnnotation(AnnotationT&& value) {
    SetAnnotation(std::forward<AnnotationT>(value));
    return *this;
  }
  ///@}
 private:
  Csv m_csv;

  Parquet m_parquet;

  Mp4 m_mp4;

  Annotation m_annotation;
  bool m_csvHasBeenSet = false;
  bool m_parquetHasBeenSet = false;
  bool m_mp4HasBeenSet = false;
  bool m_annotationHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
