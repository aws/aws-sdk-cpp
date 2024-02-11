/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class DisassociateKmsKeyRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API DisassociateKmsKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateKmsKey"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the log group.</p> <p>In your <code>DisassociateKmsKey</code>
     * operation, you must specify either the <code>resourceIdentifier</code> parameter
     * or the <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group.</p> <p>In your <code>DisassociateKmsKey</code>
     * operation, you must specify either the <code>resourceIdentifier</code> parameter
     * or the <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the log group.</p> <p>In your <code>DisassociateKmsKey</code>
     * operation, you must specify either the <code>resourceIdentifier</code> parameter
     * or the <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p> <p>In your <code>DisassociateKmsKey</code>
     * operation, you must specify either the <code>resourceIdentifier</code> parameter
     * or the <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the log group.</p> <p>In your <code>DisassociateKmsKey</code>
     * operation, you must specify either the <code>resourceIdentifier</code> parameter
     * or the <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group.</p> <p>In your <code>DisassociateKmsKey</code>
     * operation, you must specify either the <code>resourceIdentifier</code> parameter
     * or the <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline DisassociateKmsKeyRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p> <p>In your <code>DisassociateKmsKey</code>
     * operation, you must specify either the <code>resourceIdentifier</code> parameter
     * or the <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline DisassociateKmsKeyRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the log group.</p> <p>In your <code>DisassociateKmsKey</code>
     * operation, you must specify either the <code>resourceIdentifier</code> parameter
     * or the <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline DisassociateKmsKeyRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>Specifies the target for this operation. You must specify one of the
     * following:</p> <ul> <li> <p>Specify the ARN of a log group to stop having
     * CloudWatch Logs use the KMS key to encrypt log events that are ingested and
     * stored by that log group. After you run this operation, CloudWatch Logs encrypts
     * ingested log events with the default CloudWatch Logs method. The log group ARN
     * must be in the following format. Replace <i>REGION</i> and <i>ACCOUNT_ID</i>
     * with your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:log-group:<i>LOG_GROUP_NAME</i>
     * </code> </p> </li> <li> <p>Specify the following ARN to stop using this key to
     * encrypt the results of future <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_StartQuery.html">StartQuery</a>
     * operations in this account. Replace <i>REGION</i> and <i>ACCOUNT_ID</i> with
     * your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:query-result:*</code> </p>
     * </li> </ul> <p>In your <code>DisssociateKmsKey</code> operation, you must
     * specify either the <code>resourceIdentifier</code> parameter or the
     * <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>Specifies the target for this operation. You must specify one of the
     * following:</p> <ul> <li> <p>Specify the ARN of a log group to stop having
     * CloudWatch Logs use the KMS key to encrypt log events that are ingested and
     * stored by that log group. After you run this operation, CloudWatch Logs encrypts
     * ingested log events with the default CloudWatch Logs method. The log group ARN
     * must be in the following format. Replace <i>REGION</i> and <i>ACCOUNT_ID</i>
     * with your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:log-group:<i>LOG_GROUP_NAME</i>
     * </code> </p> </li> <li> <p>Specify the following ARN to stop using this key to
     * encrypt the results of future <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_StartQuery.html">StartQuery</a>
     * operations in this account. Replace <i>REGION</i> and <i>ACCOUNT_ID</i> with
     * your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:query-result:*</code> </p>
     * </li> </ul> <p>In your <code>DisssociateKmsKey</code> operation, you must
     * specify either the <code>resourceIdentifier</code> parameter or the
     * <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p>Specifies the target for this operation. You must specify one of the
     * following:</p> <ul> <li> <p>Specify the ARN of a log group to stop having
     * CloudWatch Logs use the KMS key to encrypt log events that are ingested and
     * stored by that log group. After you run this operation, CloudWatch Logs encrypts
     * ingested log events with the default CloudWatch Logs method. The log group ARN
     * must be in the following format. Replace <i>REGION</i> and <i>ACCOUNT_ID</i>
     * with your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:log-group:<i>LOG_GROUP_NAME</i>
     * </code> </p> </li> <li> <p>Specify the following ARN to stop using this key to
     * encrypt the results of future <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_StartQuery.html">StartQuery</a>
     * operations in this account. Replace <i>REGION</i> and <i>ACCOUNT_ID</i> with
     * your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:query-result:*</code> </p>
     * </li> </ul> <p>In your <code>DisssociateKmsKey</code> operation, you must
     * specify either the <code>resourceIdentifier</code> parameter or the
     * <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>Specifies the target for this operation. You must specify one of the
     * following:</p> <ul> <li> <p>Specify the ARN of a log group to stop having
     * CloudWatch Logs use the KMS key to encrypt log events that are ingested and
     * stored by that log group. After you run this operation, CloudWatch Logs encrypts
     * ingested log events with the default CloudWatch Logs method. The log group ARN
     * must be in the following format. Replace <i>REGION</i> and <i>ACCOUNT_ID</i>
     * with your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:log-group:<i>LOG_GROUP_NAME</i>
     * </code> </p> </li> <li> <p>Specify the following ARN to stop using this key to
     * encrypt the results of future <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_StartQuery.html">StartQuery</a>
     * operations in this account. Replace <i>REGION</i> and <i>ACCOUNT_ID</i> with
     * your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:query-result:*</code> </p>
     * </li> </ul> <p>In your <code>DisssociateKmsKey</code> operation, you must
     * specify either the <code>resourceIdentifier</code> parameter or the
     * <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p>Specifies the target for this operation. You must specify one of the
     * following:</p> <ul> <li> <p>Specify the ARN of a log group to stop having
     * CloudWatch Logs use the KMS key to encrypt log events that are ingested and
     * stored by that log group. After you run this operation, CloudWatch Logs encrypts
     * ingested log events with the default CloudWatch Logs method. The log group ARN
     * must be in the following format. Replace <i>REGION</i> and <i>ACCOUNT_ID</i>
     * with your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:log-group:<i>LOG_GROUP_NAME</i>
     * </code> </p> </li> <li> <p>Specify the following ARN to stop using this key to
     * encrypt the results of future <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_StartQuery.html">StartQuery</a>
     * operations in this account. Replace <i>REGION</i> and <i>ACCOUNT_ID</i> with
     * your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:query-result:*</code> </p>
     * </li> </ul> <p>In your <code>DisssociateKmsKey</code> operation, you must
     * specify either the <code>resourceIdentifier</code> parameter or the
     * <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p>Specifies the target for this operation. You must specify one of the
     * following:</p> <ul> <li> <p>Specify the ARN of a log group to stop having
     * CloudWatch Logs use the KMS key to encrypt log events that are ingested and
     * stored by that log group. After you run this operation, CloudWatch Logs encrypts
     * ingested log events with the default CloudWatch Logs method. The log group ARN
     * must be in the following format. Replace <i>REGION</i> and <i>ACCOUNT_ID</i>
     * with your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:log-group:<i>LOG_GROUP_NAME</i>
     * </code> </p> </li> <li> <p>Specify the following ARN to stop using this key to
     * encrypt the results of future <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_StartQuery.html">StartQuery</a>
     * operations in this account. Replace <i>REGION</i> and <i>ACCOUNT_ID</i> with
     * your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:query-result:*</code> </p>
     * </li> </ul> <p>In your <code>DisssociateKmsKey</code> operation, you must
     * specify either the <code>resourceIdentifier</code> parameter or the
     * <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline DisassociateKmsKeyRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>Specifies the target for this operation. You must specify one of the
     * following:</p> <ul> <li> <p>Specify the ARN of a log group to stop having
     * CloudWatch Logs use the KMS key to encrypt log events that are ingested and
     * stored by that log group. After you run this operation, CloudWatch Logs encrypts
     * ingested log events with the default CloudWatch Logs method. The log group ARN
     * must be in the following format. Replace <i>REGION</i> and <i>ACCOUNT_ID</i>
     * with your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:log-group:<i>LOG_GROUP_NAME</i>
     * </code> </p> </li> <li> <p>Specify the following ARN to stop using this key to
     * encrypt the results of future <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_StartQuery.html">StartQuery</a>
     * operations in this account. Replace <i>REGION</i> and <i>ACCOUNT_ID</i> with
     * your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:query-result:*</code> </p>
     * </li> </ul> <p>In your <code>DisssociateKmsKey</code> operation, you must
     * specify either the <code>resourceIdentifier</code> parameter or the
     * <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline DisassociateKmsKeyRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specifies the target for this operation. You must specify one of the
     * following:</p> <ul> <li> <p>Specify the ARN of a log group to stop having
     * CloudWatch Logs use the KMS key to encrypt log events that are ingested and
     * stored by that log group. After you run this operation, CloudWatch Logs encrypts
     * ingested log events with the default CloudWatch Logs method. The log group ARN
     * must be in the following format. Replace <i>REGION</i> and <i>ACCOUNT_ID</i>
     * with your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:log-group:<i>LOG_GROUP_NAME</i>
     * </code> </p> </li> <li> <p>Specify the following ARN to stop using this key to
     * encrypt the results of future <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_StartQuery.html">StartQuery</a>
     * operations in this account. Replace <i>REGION</i> and <i>ACCOUNT_ID</i> with
     * your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:query-result:*</code> </p>
     * </li> </ul> <p>In your <code>DisssociateKmsKey</code> operation, you must
     * specify either the <code>resourceIdentifier</code> parameter or the
     * <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline DisassociateKmsKeyRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}

  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
