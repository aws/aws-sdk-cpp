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
   * <p>This processor parses log events that are in JSON format. It can extract JSON
   * key-value pairs and place them under a destination that you specify.</p>
   * <p>Additionally, because you must have at least one parse-type processor in a
   * transformer, you can use <code>ParseJSON</code> as that processor for
   * JSON-format logs, so that you can also apply other processors, such as mutate
   * processors, to these logs.</p> <p>For more information about this processor
   * including examples, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-parseJSON">
   * parseJSON</a> in the <i>CloudWatch Logs User Guide</i>.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ParseJSON">AWS
   * API Reference</a></p>
   */
  class ParseJSON
  {
  public:
    AWS_CLOUDWATCHLOGS_API ParseJSON() = default;
    AWS_CLOUDWATCHLOGS_API ParseJSON(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API ParseJSON& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Path to the field in the log event that will be parsed. Use dot notation to
     * access child fields. For example, <code>store.book</code> </p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    ParseJSON& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location to put the parsed key value pair into. If you omit this
     * parameter, it is placed under the root node.</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    ParseJSON& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
