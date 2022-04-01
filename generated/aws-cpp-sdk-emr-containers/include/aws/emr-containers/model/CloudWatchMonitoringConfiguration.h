﻿/**
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
  class AWS_EMRCONTAINERS_API CloudWatchMonitoringConfiguration
  {
  public:
    CloudWatchMonitoringConfiguration();
    CloudWatchMonitoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
    CloudWatchMonitoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the log group for log publishing.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group for log publishing.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the log group for log publishing.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group for log publishing.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the log group for log publishing.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group for log publishing.</p>
     */
    inline CloudWatchMonitoringConfiguration& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group for log publishing.</p>
     */
    inline CloudWatchMonitoringConfiguration& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the log group for log publishing.</p>
     */
    inline CloudWatchMonitoringConfiguration& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>The specified name prefix for log streams.</p>
     */
    inline const Aws::String& GetLogStreamNamePrefix() const{ return m_logStreamNamePrefix; }

    /**
     * <p>The specified name prefix for log streams.</p>
     */
    inline bool LogStreamNamePrefixHasBeenSet() const { return m_logStreamNamePrefixHasBeenSet; }

    /**
     * <p>The specified name prefix for log streams.</p>
     */
    inline void SetLogStreamNamePrefix(const Aws::String& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = value; }

    /**
     * <p>The specified name prefix for log streams.</p>
     */
    inline void SetLogStreamNamePrefix(Aws::String&& value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix = std::move(value); }

    /**
     * <p>The specified name prefix for log streams.</p>
     */
    inline void SetLogStreamNamePrefix(const char* value) { m_logStreamNamePrefixHasBeenSet = true; m_logStreamNamePrefix.assign(value); }

    /**
     * <p>The specified name prefix for log streams.</p>
     */
    inline CloudWatchMonitoringConfiguration& WithLogStreamNamePrefix(const Aws::String& value) { SetLogStreamNamePrefix(value); return *this;}

    /**
     * <p>The specified name prefix for log streams.</p>
     */
    inline CloudWatchMonitoringConfiguration& WithLogStreamNamePrefix(Aws::String&& value) { SetLogStreamNamePrefix(std::move(value)); return *this;}

    /**
     * <p>The specified name prefix for log streams.</p>
     */
    inline CloudWatchMonitoringConfiguration& WithLogStreamNamePrefix(const char* value) { SetLogStreamNamePrefix(value); return *this;}

  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;

    Aws::String m_logStreamNamePrefix;
    bool m_logStreamNamePrefixHasBeenSet;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
