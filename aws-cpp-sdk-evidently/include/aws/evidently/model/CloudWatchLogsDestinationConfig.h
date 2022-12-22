/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>A structure containing the CloudWatch Logs log group where the project stores
   * evaluation events.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/CloudWatchLogsDestinationConfig">AWS
   * API Reference</a></p>
   */
  class CloudWatchLogsDestinationConfig
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API CloudWatchLogsDestinationConfig();
    AWS_CLOUDWATCHEVIDENTLY_API CloudWatchLogsDestinationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API CloudWatchLogsDestinationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the log group where the project stores evaluation events.</p>
     */
    inline const Aws::String& GetLogGroup() const{ return m_logGroup; }

    /**
     * <p>The name of the log group where the project stores evaluation events.</p>
     */
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }

    /**
     * <p>The name of the log group where the project stores evaluation events.</p>
     */
    inline void SetLogGroup(const Aws::String& value) { m_logGroupHasBeenSet = true; m_logGroup = value; }

    /**
     * <p>The name of the log group where the project stores evaluation events.</p>
     */
    inline void SetLogGroup(Aws::String&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::move(value); }

    /**
     * <p>The name of the log group where the project stores evaluation events.</p>
     */
    inline void SetLogGroup(const char* value) { m_logGroupHasBeenSet = true; m_logGroup.assign(value); }

    /**
     * <p>The name of the log group where the project stores evaluation events.</p>
     */
    inline CloudWatchLogsDestinationConfig& WithLogGroup(const Aws::String& value) { SetLogGroup(value); return *this;}

    /**
     * <p>The name of the log group where the project stores evaluation events.</p>
     */
    inline CloudWatchLogsDestinationConfig& WithLogGroup(Aws::String&& value) { SetLogGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the log group where the project stores evaluation events.</p>
     */
    inline CloudWatchLogsDestinationConfig& WithLogGroup(const char* value) { SetLogGroup(value); return *this;}

  private:

    Aws::String m_logGroup;
    bool m_logGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
