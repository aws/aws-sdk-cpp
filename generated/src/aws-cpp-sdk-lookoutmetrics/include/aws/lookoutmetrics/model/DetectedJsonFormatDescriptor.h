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
    AWS_LOOKOUTMETRICS_API DetectedJsonFormatDescriptor();
    AWS_LOOKOUTMETRICS_API DetectedJsonFormatDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API DetectedJsonFormatDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The format's file compression.</p>
     */
    inline const DetectedField& GetFileCompression() const{ return m_fileCompression; }

    /**
     * <p>The format's file compression.</p>
     */
    inline bool FileCompressionHasBeenSet() const { return m_fileCompressionHasBeenSet; }

    /**
     * <p>The format's file compression.</p>
     */
    inline void SetFileCompression(const DetectedField& value) { m_fileCompressionHasBeenSet = true; m_fileCompression = value; }

    /**
     * <p>The format's file compression.</p>
     */
    inline void SetFileCompression(DetectedField&& value) { m_fileCompressionHasBeenSet = true; m_fileCompression = std::move(value); }

    /**
     * <p>The format's file compression.</p>
     */
    inline DetectedJsonFormatDescriptor& WithFileCompression(const DetectedField& value) { SetFileCompression(value); return *this;}

    /**
     * <p>The format's file compression.</p>
     */
    inline DetectedJsonFormatDescriptor& WithFileCompression(DetectedField&& value) { SetFileCompression(std::move(value)); return *this;}


    /**
     * <p>The format's character set.</p>
     */
    inline const DetectedField& GetCharset() const{ return m_charset; }

    /**
     * <p>The format's character set.</p>
     */
    inline bool CharsetHasBeenSet() const { return m_charsetHasBeenSet; }

    /**
     * <p>The format's character set.</p>
     */
    inline void SetCharset(const DetectedField& value) { m_charsetHasBeenSet = true; m_charset = value; }

    /**
     * <p>The format's character set.</p>
     */
    inline void SetCharset(DetectedField&& value) { m_charsetHasBeenSet = true; m_charset = std::move(value); }

    /**
     * <p>The format's character set.</p>
     */
    inline DetectedJsonFormatDescriptor& WithCharset(const DetectedField& value) { SetCharset(value); return *this;}

    /**
     * <p>The format's character set.</p>
     */
    inline DetectedJsonFormatDescriptor& WithCharset(DetectedField&& value) { SetCharset(std::move(value)); return *this;}

  private:

    DetectedField m_fileCompression;
    bool m_fileCompressionHasBeenSet = false;

    DetectedField m_charset;
    bool m_charsetHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
