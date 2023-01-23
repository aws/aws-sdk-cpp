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
    AWS_LOOKOUTMETRICS_API FileFormatDescriptor();
    AWS_LOOKOUTMETRICS_API FileFormatDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API FileFormatDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains information about how a source CSV data file should be analyzed.</p>
     */
    inline const CsvFormatDescriptor& GetCsvFormatDescriptor() const{ return m_csvFormatDescriptor; }

    /**
     * <p>Contains information about how a source CSV data file should be analyzed.</p>
     */
    inline bool CsvFormatDescriptorHasBeenSet() const { return m_csvFormatDescriptorHasBeenSet; }

    /**
     * <p>Contains information about how a source CSV data file should be analyzed.</p>
     */
    inline void SetCsvFormatDescriptor(const CsvFormatDescriptor& value) { m_csvFormatDescriptorHasBeenSet = true; m_csvFormatDescriptor = value; }

    /**
     * <p>Contains information about how a source CSV data file should be analyzed.</p>
     */
    inline void SetCsvFormatDescriptor(CsvFormatDescriptor&& value) { m_csvFormatDescriptorHasBeenSet = true; m_csvFormatDescriptor = std::move(value); }

    /**
     * <p>Contains information about how a source CSV data file should be analyzed.</p>
     */
    inline FileFormatDescriptor& WithCsvFormatDescriptor(const CsvFormatDescriptor& value) { SetCsvFormatDescriptor(value); return *this;}

    /**
     * <p>Contains information about how a source CSV data file should be analyzed.</p>
     */
    inline FileFormatDescriptor& WithCsvFormatDescriptor(CsvFormatDescriptor&& value) { SetCsvFormatDescriptor(std::move(value)); return *this;}


    /**
     * <p>Contains information about how a source JSON data file should be
     * analyzed.</p>
     */
    inline const JsonFormatDescriptor& GetJsonFormatDescriptor() const{ return m_jsonFormatDescriptor; }

    /**
     * <p>Contains information about how a source JSON data file should be
     * analyzed.</p>
     */
    inline bool JsonFormatDescriptorHasBeenSet() const { return m_jsonFormatDescriptorHasBeenSet; }

    /**
     * <p>Contains information about how a source JSON data file should be
     * analyzed.</p>
     */
    inline void SetJsonFormatDescriptor(const JsonFormatDescriptor& value) { m_jsonFormatDescriptorHasBeenSet = true; m_jsonFormatDescriptor = value; }

    /**
     * <p>Contains information about how a source JSON data file should be
     * analyzed.</p>
     */
    inline void SetJsonFormatDescriptor(JsonFormatDescriptor&& value) { m_jsonFormatDescriptorHasBeenSet = true; m_jsonFormatDescriptor = std::move(value); }

    /**
     * <p>Contains information about how a source JSON data file should be
     * analyzed.</p>
     */
    inline FileFormatDescriptor& WithJsonFormatDescriptor(const JsonFormatDescriptor& value) { SetJsonFormatDescriptor(value); return *this;}

    /**
     * <p>Contains information about how a source JSON data file should be
     * analyzed.</p>
     */
    inline FileFormatDescriptor& WithJsonFormatDescriptor(JsonFormatDescriptor&& value) { SetJsonFormatDescriptor(std::move(value)); return *this;}

  private:

    CsvFormatDescriptor m_csvFormatDescriptor;
    bool m_csvFormatDescriptorHasBeenSet = false;

    JsonFormatDescriptor m_jsonFormatDescriptor;
    bool m_jsonFormatDescriptorHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
