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
   * <p>This processor parses CloudFront vended logs, extract fields, and convert
   * them into JSON format. Encoded field values are decoded. Values that are
   * integers and doubles are treated as such. For more information about this
   * processor including examples, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatch-Logs-Transformation.html#CloudWatch-Logs-Transformation-parseCloudfront">
   * parseCloudfront</a> </p> <p>For more information about CloudFront log format,
   * see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/AccessLogs.html">
   * Configure and use standard logs (access logs)</a>.</p> <p>If you use this
   * processor, it must be the first processor in your transformer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ParseCloudfront">AWS
   * API Reference</a></p>
   */
  class ParseCloudfront
  {
  public:
    AWS_CLOUDWATCHLOGS_API ParseCloudfront();
    AWS_CLOUDWATCHLOGS_API ParseCloudfront(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API ParseCloudfront& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Omit this parameter and the whole log message will be processed by this
     * processor. No other value than <code>@message</code> is allowed for
     * <code>source</code>.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline ParseCloudfront& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline ParseCloudfront& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline ParseCloudfront& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}
  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
