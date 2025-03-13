/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/model/DetectedField.h>
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
   * <p>A detected JSON format descriptor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/DetectedJsonFormatDescriptor">AWS
   * API Reference</a></p>
   */
  class DetectedJsonFormatDescriptor
  {
  public:
    AWS_LOOKOUTMETRICS_API DetectedJsonFormatDescriptor() = default;
    AWS_LOOKOUTMETRICS_API DetectedJsonFormatDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API DetectedJsonFormatDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The format's file compression.</p>
     */
    inline const DetectedField& GetFileCompression() const { return m_fileCompression; }
    inline bool FileCompressionHasBeenSet() const { return m_fileCompressionHasBeenSet; }
    template<typename FileCompressionT = DetectedField>
    void SetFileCompression(FileCompressionT&& value) { m_fileCompressionHasBeenSet = true; m_fileCompression = std::forward<FileCompressionT>(value); }
    template<typename FileCompressionT = DetectedField>
    DetectedJsonFormatDescriptor& WithFileCompression(FileCompressionT&& value) { SetFileCompression(std::forward<FileCompressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format's character set.</p>
     */
    inline const DetectedField& GetCharset() const { return m_charset; }
    inline bool CharsetHasBeenSet() const { return m_charsetHasBeenSet; }
    template<typename CharsetT = DetectedField>
    void SetCharset(CharsetT&& value) { m_charsetHasBeenSet = true; m_charset = std::forward<CharsetT>(value); }
    template<typename CharsetT = DetectedField>
    DetectedJsonFormatDescriptor& WithCharset(CharsetT&& value) { SetCharset(std::forward<CharsetT>(value)); return *this;}
    ///@}
  private:

    DetectedField m_fileCompression;
    bool m_fileCompressionHasBeenSet = false;

    DetectedField m_charset;
    bool m_charsetHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
