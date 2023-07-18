﻿/**
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
  class AWS_TRANSFER_API LoggingConfiguration
  {
  public:
    LoggingConfiguration();
    LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline const Aws::String& GetLoggingRole() const{ return m_loggingRole; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline bool LoggingRoleHasBeenSet() const { return m_loggingRoleHasBeenSet; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline void SetLoggingRole(const Aws::String& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = value; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline void SetLoggingRole(Aws::String&& value) { m_loggingRoleHasBeenSet = true; m_loggingRole = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline void SetLoggingRole(const char* value) { m_loggingRoleHasBeenSet = true; m_loggingRole.assign(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline LoggingConfiguration& WithLoggingRole(const Aws::String& value) { SetLoggingRole(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline LoggingConfiguration& WithLoggingRole(Aws::String&& value) { SetLoggingRole(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Identity
     * and Access Management (IAM) role that allows a server to turn on Amazon
     * CloudWatch logging for Amazon S3 or Amazon EFS events. When set, user activity
     * can be viewed in your CloudWatch logs.</p>
     */
    inline LoggingConfiguration& WithLoggingRole(const char* value) { SetLoggingRole(value); return *this;}


    /**
     * <p>The name of the CloudWatch logging group for the Amazon Web Services Transfer
     * server to which this workflow belongs.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the CloudWatch logging group for the Amazon Web Services Transfer
     * server to which this workflow belongs.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the CloudWatch logging group for the Amazon Web Services Transfer
     * server to which this workflow belongs.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the CloudWatch logging group for the Amazon Web Services Transfer
     * server to which this workflow belongs.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the CloudWatch logging group for the Amazon Web Services Transfer
     * server to which this workflow belongs.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the CloudWatch logging group for the Amazon Web Services Transfer
     * server to which this workflow belongs.</p>
     */
    inline LoggingConfiguration& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the CloudWatch logging group for the Amazon Web Services Transfer
     * server to which this workflow belongs.</p>
     */
    inline LoggingConfiguration& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch logging group for the Amazon Web Services Transfer
     * server to which this workflow belongs.</p>
     */
    inline LoggingConfiguration& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}

  private:

    Aws::String m_loggingRole;
    bool m_loggingRoleHasBeenSet;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
