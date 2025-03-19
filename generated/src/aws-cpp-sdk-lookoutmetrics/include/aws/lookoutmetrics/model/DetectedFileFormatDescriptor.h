/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/model/DetectedCsvFormatDescriptor.h>
#include <aws/lookoutmetrics/model/DetectedJsonFormatDescriptor.h>
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
namespace LookoutMetrics
{
namespace Model
{

  /**
   * <p>Properties of an inferred data format.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DetectedFileFormatDescriptor">AWS
   * API Reference</a></p>
   */
  class DetectedFileFormatDescriptor
  {
  public:
    AWS_LOOKOUTMETRICS_API DetectedFileFormatDescriptor() = default;
    AWS_LOOKOUTMETRICS_API DetectedFileFormatDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API DetectedFileFormatDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Details about a CSV format.</p>
     */
    inline const DetectedCsvFormatDescriptor& GetCsvFormatDescriptor() const { return m_csvFormatDescriptor; }
    inline bool CsvFormatDescriptorHasBeenSet() const { return m_csvFormatDescriptorHasBeenSet; }
    template<typename CsvFormatDescriptorT = DetectedCsvFormatDescriptor>
    void SetCsvFormatDescriptor(CsvFormatDescriptorT&& value) { m_csvFormatDescriptorHasBeenSet = true; m_csvFormatDescriptor = std::forward<CsvFormatDescriptorT>(value); }
    template<typename CsvFormatDescriptorT = DetectedCsvFormatDescriptor>
    DetectedFileFormatDescriptor& WithCsvFormatDescriptor(CsvFormatDescriptorT&& value) { SetCsvFormatDescriptor(std::forward<CsvFormatDescriptorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about a JSON format.</p>
     */
    inline const DetectedJsonFormatDescriptor& GetJsonFormatDescriptor() const { return m_jsonFormatDescriptor; }
    inline bool JsonFormatDescriptorHasBeenSet() const { return m_jsonFormatDescriptorHasBeenSet; }
    template<typename JsonFormatDescriptorT = DetectedJsonFormatDescriptor>
    void SetJsonFormatDescriptor(JsonFormatDescriptorT&& value) { m_jsonFormatDescriptorHasBeenSet = true; m_jsonFormatDescriptor = std::forward<JsonFormatDescriptorT>(value); }
    template<typename JsonFormatDescriptorT = DetectedJsonFormatDescriptor>
    DetectedFileFormatDescriptor& WithJsonFormatDescriptor(JsonFormatDescriptorT&& value) { SetJsonFormatDescriptor(std::forward<JsonFormatDescriptorT>(value)); return *this;}
    ///@}
  private:

    DetectedCsvFormatDescriptor m_csvFormatDescriptor;
    bool m_csvFormatDescriptorHasBeenSet = false;

    DetectedJsonFormatDescriptor m_jsonFormatDescriptor;
    bool m_jsonFormatDescriptorHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
