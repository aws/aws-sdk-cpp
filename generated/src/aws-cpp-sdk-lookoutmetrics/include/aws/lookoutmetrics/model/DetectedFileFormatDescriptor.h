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
    AWS_LOOKOUTMETRICS_API DetectedFileFormatDescriptor();
    AWS_LOOKOUTMETRICS_API DetectedFileFormatDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API DetectedFileFormatDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about a CSV format.</p>
     */
    inline const DetectedCsvFormatDescriptor& GetCsvFormatDescriptor() const{ return m_csvFormatDescriptor; }

    /**
     * <p>Details about a CSV format.</p>
     */
    inline bool CsvFormatDescriptorHasBeenSet() const { return m_csvFormatDescriptorHasBeenSet; }

    /**
     * <p>Details about a CSV format.</p>
     */
    inline void SetCsvFormatDescriptor(const DetectedCsvFormatDescriptor& value) { m_csvFormatDescriptorHasBeenSet = true; m_csvFormatDescriptor = value; }

    /**
     * <p>Details about a CSV format.</p>
     */
    inline void SetCsvFormatDescriptor(DetectedCsvFormatDescriptor&& value) { m_csvFormatDescriptorHasBeenSet = true; m_csvFormatDescriptor = std::move(value); }

    /**
     * <p>Details about a CSV format.</p>
     */
    inline DetectedFileFormatDescriptor& WithCsvFormatDescriptor(const DetectedCsvFormatDescriptor& value) { SetCsvFormatDescriptor(value); return *this;}

    /**
     * <p>Details about a CSV format.</p>
     */
    inline DetectedFileFormatDescriptor& WithCsvFormatDescriptor(DetectedCsvFormatDescriptor&& value) { SetCsvFormatDescriptor(std::move(value)); return *this;}


    /**
     * <p>Details about a JSON format.</p>
     */
    inline const DetectedJsonFormatDescriptor& GetJsonFormatDescriptor() const{ return m_jsonFormatDescriptor; }

    /**
     * <p>Details about a JSON format.</p>
     */
    inline bool JsonFormatDescriptorHasBeenSet() const { return m_jsonFormatDescriptorHasBeenSet; }

    /**
     * <p>Details about a JSON format.</p>
     */
    inline void SetJsonFormatDescriptor(const DetectedJsonFormatDescriptor& value) { m_jsonFormatDescriptorHasBeenSet = true; m_jsonFormatDescriptor = value; }

    /**
     * <p>Details about a JSON format.</p>
     */
    inline void SetJsonFormatDescriptor(DetectedJsonFormatDescriptor&& value) { m_jsonFormatDescriptorHasBeenSet = true; m_jsonFormatDescriptor = std::move(value); }

    /**
     * <p>Details about a JSON format.</p>
     */
    inline DetectedFileFormatDescriptor& WithJsonFormatDescriptor(const DetectedJsonFormatDescriptor& value) { SetJsonFormatDescriptor(value); return *this;}

    /**
     * <p>Details about a JSON format.</p>
     */
    inline DetectedFileFormatDescriptor& WithJsonFormatDescriptor(DetectedJsonFormatDescriptor&& value) { SetJsonFormatDescriptor(std::move(value)); return *this;}

  private:

    DetectedCsvFormatDescriptor m_csvFormatDescriptor;
    bool m_csvFormatDescriptorHasBeenSet = false;

    DetectedJsonFormatDescriptor m_jsonFormatDescriptor;
    bool m_jsonFormatDescriptorHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
