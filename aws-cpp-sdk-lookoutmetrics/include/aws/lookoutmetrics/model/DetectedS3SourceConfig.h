/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/model/DetectedFileFormatDescriptor.h>
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
   * <p>An inferred source configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DetectedS3SourceConfig">AWS
   * API Reference</a></p>
   */
  class DetectedS3SourceConfig
  {
  public:
    AWS_LOOKOUTMETRICS_API DetectedS3SourceConfig();
    AWS_LOOKOUTMETRICS_API DetectedS3SourceConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API DetectedS3SourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source's file format descriptor.</p>
     */
    inline const DetectedFileFormatDescriptor& GetFileFormatDescriptor() const{ return m_fileFormatDescriptor; }

    /**
     * <p>The source's file format descriptor.</p>
     */
    inline bool FileFormatDescriptorHasBeenSet() const { return m_fileFormatDescriptorHasBeenSet; }

    /**
     * <p>The source's file format descriptor.</p>
     */
    inline void SetFileFormatDescriptor(const DetectedFileFormatDescriptor& value) { m_fileFormatDescriptorHasBeenSet = true; m_fileFormatDescriptor = value; }

    /**
     * <p>The source's file format descriptor.</p>
     */
    inline void SetFileFormatDescriptor(DetectedFileFormatDescriptor&& value) { m_fileFormatDescriptorHasBeenSet = true; m_fileFormatDescriptor = std::move(value); }

    /**
     * <p>The source's file format descriptor.</p>
     */
    inline DetectedS3SourceConfig& WithFileFormatDescriptor(const DetectedFileFormatDescriptor& value) { SetFileFormatDescriptor(value); return *this;}

    /**
     * <p>The source's file format descriptor.</p>
     */
    inline DetectedS3SourceConfig& WithFileFormatDescriptor(DetectedFileFormatDescriptor&& value) { SetFileFormatDescriptor(std::move(value)); return *this;}

  private:

    DetectedFileFormatDescriptor m_fileFormatDescriptor;
    bool m_fileFormatDescriptorHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
