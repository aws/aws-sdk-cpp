/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This object defines one log field that will be split with the <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-splitString">
   * splitString</a> processor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/SplitStringEntry">AWS
   * API Reference</a></p>
   */
  class SplitStringEntry
  {
  public:
    AWS_CLOUDWATCHLOGS_API SplitStringEntry() = default;
    AWS_CLOUDWATCHLOGS_API SplitStringEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API SplitStringEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key of the field to split.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    SplitStringEntry& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The separator characters to split the string entry on.</p>
     */
    inline const Aws::String& GetDelimiter() const { return m_delimiter; }
    inline bool DelimiterHasBeenSet() const { return m_delimiterHasBeenSet; }
    template<typename DelimiterT = Aws::String>
    void SetDelimiter(DelimiterT&& value) { m_delimiterHasBeenSet = true; m_delimiter = std::forward<DelimiterT>(value); }
    template<typename DelimiterT = Aws::String>
    SplitStringEntry& WithDelimiter(DelimiterT&& value) { SetDelimiter(std::forward<DelimiterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_delimiter;
    bool m_delimiterHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
