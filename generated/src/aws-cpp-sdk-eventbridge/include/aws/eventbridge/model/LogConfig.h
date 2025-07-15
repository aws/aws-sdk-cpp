/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/model/IncludeDetail.h>
#include <aws/eventbridge/model/Level.h>
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
namespace EventBridge
{
namespace Model
{

  /**
   * <p>The logging configuration settings for the event bus.</p> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/eb-event-bus-logs.html">Configuring logs for
   * event buses</a> in the <i>EventBridge User Guide</i>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridge-2015-10-07/LogConfig">AWS
   * API Reference</a></p>
   */
  class LogConfig
  {
  public:
    AWS_EVENTBRIDGE_API LogConfig() = default;
    AWS_EVENTBRIDGE_API LogConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API LogConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EVENTBRIDGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether EventBridge include detailed event information in the records it
     * generates. Detailed data can be useful for troubleshooting and debugging. This
     * information includes details of the event itself, as well as target details.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-bus-logs.html#eb-event-logs-data">Including
     * detail data in event bus logs</a> in the <i>EventBridge User Guide</i>.</p>
     */
    inline IncludeDetail GetIncludeDetail() const { return m_includeDetail; }
    inline bool IncludeDetailHasBeenSet() const { return m_includeDetailHasBeenSet; }
    inline void SetIncludeDetail(IncludeDetail value) { m_includeDetailHasBeenSet = true; m_includeDetail = value; }
    inline LogConfig& WithIncludeDetail(IncludeDetail value) { SetIncludeDetail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of logging detail to include. This applies to all log destinations
     * for the event bus.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/eventbridge/latest/userguide/eb-event-bus-logs.html#eb-event-bus-logs-level">Specifying
     * event bus log level</a> in the <i>EventBridge User Guide</i>.</p>
     */
    inline Level GetLevel() const { return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    inline void SetLevel(Level value) { m_levelHasBeenSet = true; m_level = value; }
    inline LogConfig& WithLevel(Level value) { SetLevel(value); return *this;}
    ///@}
  private:

    IncludeDetail m_includeDetail{IncludeDetail::NOT_SET};
    bool m_includeDetailHasBeenSet = false;

    Level m_level{Level::NOT_SET};
    bool m_levelHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
