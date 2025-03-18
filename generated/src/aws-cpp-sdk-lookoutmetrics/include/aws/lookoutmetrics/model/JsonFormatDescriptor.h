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
    AWS_LOOKOUTMETRICS_API JsonFormatDescriptor() = default;
    AWS_LOOKOUTMETRICS_API JsonFormatDescriptor(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API JsonFormatDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTMETRICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The level of compression of the source CSV file.</p>
     */
    inline JsonFileCompression GetFileCompression() const { return m_fileCompression; }
    inline bool FileCompressionHasBeenSet() const { return m_fileCompressionHasBeenSet; }
    inline void SetFileCompression(JsonFileCompression value) { m_fileCompressionHasBeenSet = true; m_fileCompression = value; }
    inline JsonFormatDescriptor& WithFileCompression(JsonFileCompression value) { SetFileCompression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The character set in which the source JSON file is written.</p>
     */
    inline const Aws::String& GetCharset() const { return m_charset; }
    inline bool CharsetHasBeenSet() const { return m_charsetHasBeenSet; }
    template<typename CharsetT = Aws::String>
    void SetCharset(CharsetT&& value) { m_charsetHasBeenSet = true; m_charset = std::forward<CharsetT>(value); }
    template<typename CharsetT = Aws::String>
    JsonFormatDescriptor& WithCharset(CharsetT&& value) { SetCharset(std::forward<CharsetT>(value)); return *this;}
    ///@}
  private:

    JsonFileCompression m_fileCompression{JsonFileCompression::NOT_SET};
    bool m_fileCompressionHasBeenSet = false;

    Aws::String m_charset;
    bool m_charsetHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutMetrics
} // namespace Aws
