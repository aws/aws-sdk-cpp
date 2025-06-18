/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/EventSource.h>
#include <aws/logs/model/OCSFVersion.h>
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
   * <p>This processor converts logs into <a href="https://ocsf.io">Open
   * Cybersecurity Schema Framework (OCSF)</a> events.</p> <p>For more information
   * about this processor including examples, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-parseToOCSF">
   * parseToOSCF</a> in the <i>CloudWatch Logs User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ParseToOCSF">AWS
   * API Reference</a></p>
   */
  class ParseToOCSF
  {
  public:
    AWS_CLOUDWATCHLOGS_API ParseToOCSF() = default;
    AWS_CLOUDWATCHLOGS_API ParseToOCSF(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API ParseToOCSF& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The path to the field in the log event that you want to parse. If you omit
     * this value, the whole log message is parsed.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    ParseToOCSF& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the service or process that produces the log events that will be
     * converted with this processor.</p>
     */
    inline EventSource GetEventSource() const { return m_eventSource; }
    inline bool EventSourceHasBeenSet() const { return m_eventSourceHasBeenSet; }
    inline void SetEventSource(EventSource value) { m_eventSourceHasBeenSet = true; m_eventSource = value; }
    inline ParseToOCSF& WithEventSource(EventSource value) { SetEventSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify which version of the OCSF schema to use for the transformed log
     * events.</p>
     */
    inline OCSFVersion GetOcsfVersion() const { return m_ocsfVersion; }
    inline bool OcsfVersionHasBeenSet() const { return m_ocsfVersionHasBeenSet; }
    inline void SetOcsfVersion(OCSFVersion value) { m_ocsfVersionHasBeenSet = true; m_ocsfVersion = value; }
    inline ParseToOCSF& WithOcsfVersion(OCSFVersion value) { SetOcsfVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    EventSource m_eventSource{EventSource::NOT_SET};
    bool m_eventSourceHasBeenSet = false;

    OCSFVersion m_ocsfVersion{OCSFVersion::NOT_SET};
    bool m_ocsfVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
