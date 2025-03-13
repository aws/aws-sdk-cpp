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
   * <p>Use this processor to parse Amazon VPC vended logs, extract fields, and and
   * convert them into a JSON format. This processor always processes the entire log
   * event message.</p> <p>This processor doesn't support custom log formats, such as
   * NAT gateway logs. For more information about custom log formats in Amazon VPC,
   * see <a
   * href="https://docs.aws.amazon.com/vpc/latest/userguide/flow-logs-records-examples.html#flow-log-example-tcp-flag">
   * parseVPC</a> For more information about this processor including examples, see
   * <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-parseVPC">
   * parseVPC</a>.</p>  <p>If you use this processor, it must be the first
   * processor in your transformer.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ParseVPC">AWS API
   * Reference</a></p>
   */
  class ParseVPC
  {
  public:
    AWS_CLOUDWATCHLOGS_API ParseVPC() = default;
    AWS_CLOUDWATCHLOGS_API ParseVPC(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API ParseVPC& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ParseVPC& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
