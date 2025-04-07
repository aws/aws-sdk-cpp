/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Consists of the logging role and the log group name.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/LoggingConfiguration">AWS
   * API Reference</a></p>
   */
  class LoggingConfiguration
  {
  public:
    AWS_TRANSFER_API LoggingConfiguration() = default;
    AWS_TRANSFER_API LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that allows a server to turn on Amazon CloudWatch logging for Amazon S3 or
     * Amazon EFS events. When set, you can view user activity in your CloudWatch
     * logs.</p>
     */
    inline const Aws::String& GetLoggingRole() const { return m_loggingRole; }
    inline bool LoggingRoleHasBeenSet() const { return m_loggingRoleHasBeenSet; }
    template<typename LoggingRoleT = Aws::String>
    void SetLoggingRole(LoggingRoleT&& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = std::forward<LoggingRoleT>(value); }
    template<typename LoggingRoleT = Aws::String>
    LoggingConfiguration& WithLoggingRole(LoggingRoleT&& value) { SetLoggingRole(std::forward<LoggingRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the CloudWatch logging group for the Transfer Family server to
     * which this workflow belongs.</p>
     */
    inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
    template<typename LogGroupNameT = Aws::String>
    void SetLogGroupName(LogGroupNameT&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::forward<LogGroupNameT>(value); }
    template<typename LogGroupNameT = Aws::String>
    LoggingConfiguration& WithLogGroupName(LogGroupNameT&& value) { SetLogGroupName(std::forward<LogGroupNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_loggingRole;
    bool m_loggingRoleHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
