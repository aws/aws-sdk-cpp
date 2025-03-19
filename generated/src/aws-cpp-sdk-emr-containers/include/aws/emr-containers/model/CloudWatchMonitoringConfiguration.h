/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
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
namespace EMRContainers
{
namespace Model
{

  /**
   * <p>A configuration for CloudWatch monitoring. You can configure your jobs to
   * send log information to CloudWatch Logs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/CloudWatchMonitoringConfiguration">AWS
   * API Reference</a></p>
   */
  class CloudWatchMonitoringConfiguration
  {
  public:
    AWS_EMRCONTAINERS_API CloudWatchMonitoringConfiguration() = default;
    AWS_EMRCONTAINERS_API CloudWatchMonitoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API CloudWatchMonitoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the log group for log publishing.</p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    CloudWatchMonitoringConfiguration& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified name prefix for log streams.</p>
     */
    inline const Aws::String& GetLogStreamNamePrefix() const { return m_logStreamNamePrefix; }
    inline bool LogStreamNamePrefixHasBeenSet() const { return m_logStreamNamePrefixHasBeenSet; }
    template<typename LogStreamNamePrefixT = Aws::String>
    void SetLogStreamNamePrefix(LogStreamNamePrefixT&& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = std::forward<LogStreamNamePrefixT>(value); }
    template<typename LogStreamNamePrefixT = Aws::String>
    CloudWatchMonitoringConfiguration& WithLogStreamNamePrefix(LogStreamNamePrefixT&& value) { SetLogStreamNamePrefix(std::forward<LogStreamNamePrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_logStreamNamePrefix;
    bool m_logStreamNamePrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
