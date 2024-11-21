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
    AWS_CLOUDWATCHLOGS_API ParseJSON();
    AWS_CLOUDWATCHLOGS_API ParseJSON(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API ParseJSON& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Path to the field in the log event that will be parsed. Use dot notation to
     * access child fields. For example, <code>store.book</code> </p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline ParseJSON& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline ParseJSON& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline ParseJSON& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location to put the parsed key value pair into. If you omit this
     * parameter, it is placed under the root node.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }
    inline ParseJSON& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}
    inline ParseJSON& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}
    inline ParseJSON& WithDestination(const char* value) { SetDestination(value); return *this;}
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
