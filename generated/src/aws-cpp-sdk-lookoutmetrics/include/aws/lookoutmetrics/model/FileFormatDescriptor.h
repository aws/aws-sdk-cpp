/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/model/CsvFormatDescriptor.h>
#include <aws/lookoutmetrics/model/JsonFormatDescriptor.h>
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
   * <p>Contains information about a source file's formatting.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/FileFormatDescriptor">AWS
   * API Reference</a></p>
   */
  class FileFormatDescriptor
  {
  public:
    AWS_LOOKOUTMETRICS_API FileFormatDescriptor() = default;
    AWS_LOOKOUTMETRICS_API FileFormatDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API FileFormatDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains information about how a source CSV data file should be analyzed.</p>
     */
    inline const CsvFormatDescriptor& GetCsvFormatDescriptor() const { return m_csvFormatDescriptor; }
    inline bool CsvFormatDescriptorHasBeenSet() const { return m_csvFormatDescriptorHasBeenSet; }
    template<typename CsvFormatDescriptorT = CsvFormatDescriptor>
    void SetCsvFormatDescriptor(CsvFormatDescriptorT&& value) { m_csvFormatDescriptorHasBeenSet = true; m_csvFormatDescriptor = std::forward<CsvFormatDescriptorT>(value); }
    template<typename CsvFormatDescriptorT = CsvFormatDescriptor>
    FileFormatDescriptor& WithCsvFormatDescriptor(CsvFormatDescriptorT&& value) { SetCsvFormatDescriptor(std::forward<CsvFormatDescriptorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about how a source JSON data file should be
     * analyzed.</p>
     */
    inline const JsonFormatDescriptor& GetJsonFormatDescriptor() const { return m_jsonFormatDescriptor; }
    inline bool JsonFormatDescriptorHasBeenSet() const { return m_jsonFormatDescriptorHasBeenSet; }
    template<typename JsonFormatDescriptorT = JsonFormatDescriptor>
    void SetJsonFormatDescriptor(JsonFormatDescriptorT&& value) { m_jsonFormatDescriptorHasBeenSet = true; m_jsonFormatDescriptor = std::forward<JsonFormatDescriptorT>(value); }
    template<typename JsonFormatDescriptorT = JsonFormatDescriptor>
    FileFormatDescriptor& WithJsonFormatDescriptor(JsonFormatDescriptorT&& value) { SetJsonFormatDescriptor(std::forward<JsonFormatDescriptorT>(value)); return *this;}
    ///@}
  private:

    CsvFormatDescriptor m_csvFormatDescriptor;
    bool m_csvFormatDescriptorHasBeenSet = false;

    JsonFormatDescriptor m_jsonFormatDescriptor;
    bool m_jsonFormatDescriptorHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
