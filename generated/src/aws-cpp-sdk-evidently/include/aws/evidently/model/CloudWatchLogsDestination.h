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
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/CloudWatchLogsDestination">AWS
   * API Reference</a></p>
   */
  class CloudWatchLogsDestination
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API CloudWatchLogsDestination();
    AWS_CLOUDWATCHEVIDENTLY_API CloudWatchLogsDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API CloudWatchLogsDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the log group where the project stores evaluation events.</p>
     */
    inline const Aws::String& GetLogGroup() const{ return m_logGroup; }
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }
    inline void SetLogGroup(const Aws::String& value) { m_logGroupHasBeenSet = true; m_logGroup = value; }
    inline void SetLogGroup(Aws::String&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::move(value); }
    inline void SetLogGroup(const char* value) { m_logGroupHasBeenSet = true; m_logGroup.assign(value); }
    inline CloudWatchLogsDestination& WithLogGroup(const Aws::String& value) { SetLogGroup(value); return *this;}
    inline CloudWatchLogsDestination& WithLogGroup(Aws::String&& value) { SetLogGroup(std::move(value)); return *this;}
    inline CloudWatchLogsDestination& WithLogGroup(const char* value) { SetLogGroup(value); return *this;}
    ///@}
  private:

    Aws::String m_logGroup;
    bool m_logGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
