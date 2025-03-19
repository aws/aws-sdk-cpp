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
   * <p>Use this processor to parse WAF vended logs, extract fields, and and convert
   * them into a JSON format. This processor always processes the entire log event
   * message. For more information about this processor including examples, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-parsePostGres">
   * parseWAF</a>.</p> <p>For more information about WAF log format, see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/logging-examples.html">
   * Log examples for web ACL traffic</a>.</p>  <p>If you use this
   * processor, it must be the first processor in your transformer.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ParseWAF">AWS API
   * Reference</a></p>
   */
  class ParseWAF
  {
  public:
    AWS_CLOUDWATCHLOGS_API ParseWAF() = default;
    AWS_CLOUDWATCHLOGS_API ParseWAF(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API ParseWAF& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Omit this parameter and the whole log message will be processed by this
     * processor. No other value than <code>@message</code> is allowed for
     * <code>source</code>.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    ParseWAF& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
