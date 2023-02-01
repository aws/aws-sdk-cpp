/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutmetrics/LookoutMetrics_EXPORTS.h>
#include <aws/lookoutmetrics/model/JsonFileCompression.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information about how a source JSON data file should be
   * analyzed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutmetrics-2017-07-25/JsonFormatDescriptor">AWS
   * API Reference</a></p>
   */
  class JsonFormatDescriptor
  {
  public:
    AWS_LOOKOUTMETRICS_API JsonFormatDescriptor();
    AWS_LOOKOUTMETRICS_API JsonFormatDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API JsonFormatDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The level of compression of the source CSV file.</p>
     */
    inline const JsonFileCompression& GetFileCompression() const{ return m_fileCompression; }

    /**
     * <p>The level of compression of the source CSV file.</p>
     */
    inline bool FileCompressionHasBeenSet() const { return m_fileCompressionHasBeenSet; }

    /**
     * <p>The level of compression of the source CSV file.</p>
     */
    inline void SetFileCompression(const JsonFileCompression& value) { m_fileCompressionHasBeenSet = true; m_fileCompression = value; }

    /**
     * <p>The level of compression of the source CSV file.</p>
     */
    inline void SetFileCompression(JsonFileCompression&& value) { m_fileCompressionHasBeenSet = true; m_fileCompression = std::move(value); }

    /**
     * <p>The level of compression of the source CSV file.</p>
     */
    inline JsonFormatDescriptor& WithFileCompression(const JsonFileCompression& value) { SetFileCompression(value); return *this;}

    /**
     * <p>The level of compression of the source CSV file.</p>
     */
    inline JsonFormatDescriptor& WithFileCompression(JsonFileCompression&& value) { SetFileCompression(std::move(value)); return *this;}


    /**
     * <p>The character set in which the source JSON file is written.</p>
     */
    inline const Aws::String& GetCharset() const{ return m_charset; }

    /**
     * <p>The character set in which the source JSON file is written.</p>
     */
    inline bool CharsetHasBeenSet() const { return m_charsetHasBeenSet; }

    /**
     * <p>The character set in which the source JSON file is written.</p>
     */
    inline void SetCharset(const Aws::String& value) { m_charsetHasBeenSet = true; m_charset = value; }

    /**
     * <p>The character set in which the source JSON file is written.</p>
     */
    inline void SetCharset(Aws::String&& value) { m_charsetHasBeenSet = true; m_charset = std::move(value); }

    /**
     * <p>The character set in which the source JSON file is written.</p>
     */
    inline void SetCharset(const char* value) { m_charsetHasBeenSet = true; m_charset.assign(value); }

    /**
     * <p>The character set in which the source JSON file is written.</p>
     */
    inline JsonFormatDescriptor& WithCharset(const Aws::String& value) { SetCharset(value); return *this;}

    /**
     * <p>The character set in which the source JSON file is written.</p>
     */
    inline JsonFormatDescriptor& WithCharset(Aws::String&& value) { SetCharset(std::move(value)); return *this;}

    /**
     * <p>The character set in which the source JSON file is written.</p>
     */
    inline JsonFormatDescriptor& WithCharset(const char* value) { SetCharset(value); return *this;}

  private:

    JsonFileCompression m_fileCompression;
    bool m_fileCompressionHasBeenSet = false;

    Aws::String m_charset;
    bool m_charsetHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
