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
  class AssociateKmsKeyRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API AssociateKmsKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateKmsKey"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the log group.</p> <p>In your <code>AssociateKmsKey</code>
     * operation, you must specify either the <code>resourceIdentifier</code> parameter
     * or the <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group.</p> <p>In your <code>AssociateKmsKey</code>
     * operation, you must specify either the <code>resourceIdentifier</code> parameter
     * or the <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the log group.</p> <p>In your <code>AssociateKmsKey</code>
     * operation, you must specify either the <code>resourceIdentifier</code> parameter
     * or the <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p> <p>In your <code>AssociateKmsKey</code>
     * operation, you must specify either the <code>resourceIdentifier</code> parameter
     * or the <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the log group.</p> <p>In your <code>AssociateKmsKey</code>
     * operation, you must specify either the <code>resourceIdentifier</code> parameter
     * or the <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group.</p> <p>In your <code>AssociateKmsKey</code>
     * operation, you must specify either the <code>resourceIdentifier</code> parameter
     * or the <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline AssociateKmsKeyRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p> <p>In your <code>AssociateKmsKey</code>
     * operation, you must specify either the <code>resourceIdentifier</code> parameter
     * or the <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline AssociateKmsKeyRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the log group.</p> <p>In your <code>AssociateKmsKey</code>
     * operation, you must specify either the <code>resourceIdentifier</code> parameter
     * or the <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline AssociateKmsKeyRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data. This must be a symmetric KMS key. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Amazon
     * Resource Names</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * Symmetric and Asymmetric Keys</a>.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data. This must be a symmetric KMS key. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Amazon
     * Resource Names</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * Symmetric and Asymmetric Keys</a>.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data. This must be a symmetric KMS key. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Amazon
     * Resource Names</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * Symmetric and Asymmetric Keys</a>.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data. This must be a symmetric KMS key. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Amazon
     * Resource Names</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * Symmetric and Asymmetric Keys</a>.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data. This must be a symmetric KMS key. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Amazon
     * Resource Names</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * Symmetric and Asymmetric Keys</a>.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data. This must be a symmetric KMS key. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Amazon
     * Resource Names</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * Symmetric and Asymmetric Keys</a>.</p>
     */
    inline AssociateKmsKeyRequest& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data. This must be a symmetric KMS key. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Amazon
     * Resource Names</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * Symmetric and Asymmetric Keys</a>.</p>
     */
    inline AssociateKmsKeyRequest& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use when encrypting log
     * data. This must be a symmetric KMS key. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html#arn-syntax-kms">Amazon
     * Resource Names</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/symmetric-asymmetric.html">Using
     * Symmetric and Asymmetric Keys</a>.</p>
     */
    inline AssociateKmsKeyRequest& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Specifies the target for this operation. You must specify one of the
     * following:</p> <ul> <li> <p>Specify the following ARN to have future <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_GetQueryResults.html">GetQueryResults</a>
     * operations in this account encrypt the results with the specified KMS key.
     * Replace <i>REGION</i> and <i>ACCOUNT_ID</i> with your Region and account ID.</p>
     * <p> <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:query-result:*</code>
     * </p> </li> <li> <p>Specify the ARN of a log group to have CloudWatch Logs use
     * the KMS key to encrypt log events that are ingested and stored by that log
     * group. The log group ARN must be in the following format. Replace <i>REGION</i>
     * and <i>ACCOUNT_ID</i> with your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:log-group:<i>LOG_GROUP_NAME</i>
     * </code> </p> </li> </ul> <p>In your <code>AssociateKmsKey</code> operation, you
     * must specify either the <code>resourceIdentifier</code> parameter or the
     * <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline const Aws::String& GetResourceIdentifier() const{ return m_resourceIdentifier; }

    /**
     * <p>Specifies the target for this operation. You must specify one of the
     * following:</p> <ul> <li> <p>Specify the following ARN to have future <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_GetQueryResults.html">GetQueryResults</a>
     * operations in this account encrypt the results with the specified KMS key.
     * Replace <i>REGION</i> and <i>ACCOUNT_ID</i> with your Region and account ID.</p>
     * <p> <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:query-result:*</code>
     * </p> </li> <li> <p>Specify the ARN of a log group to have CloudWatch Logs use
     * the KMS key to encrypt log events that are ingested and stored by that log
     * group. The log group ARN must be in the following format. Replace <i>REGION</i>
     * and <i>ACCOUNT_ID</i> with your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:log-group:<i>LOG_GROUP_NAME</i>
     * </code> </p> </li> </ul> <p>In your <code>AssociateKmsKey</code> operation, you
     * must specify either the <code>resourceIdentifier</code> parameter or the
     * <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline bool ResourceIdentifierHasBeenSet() const { return m_resourceIdentifierHasBeenSet; }

    /**
     * <p>Specifies the target for this operation. You must specify one of the
     * following:</p> <ul> <li> <p>Specify the following ARN to have future <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_GetQueryResults.html">GetQueryResults</a>
     * operations in this account encrypt the results with the specified KMS key.
     * Replace <i>REGION</i> and <i>ACCOUNT_ID</i> with your Region and account ID.</p>
     * <p> <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:query-result:*</code>
     * </p> </li> <li> <p>Specify the ARN of a log group to have CloudWatch Logs use
     * the KMS key to encrypt log events that are ingested and stored by that log
     * group. The log group ARN must be in the following format. Replace <i>REGION</i>
     * and <i>ACCOUNT_ID</i> with your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:log-group:<i>LOG_GROUP_NAME</i>
     * </code> </p> </li> </ul> <p>In your <code>AssociateKmsKey</code> operation, you
     * must specify either the <code>resourceIdentifier</code> parameter or the
     * <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline void SetResourceIdentifier(const Aws::String& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = value; }

    /**
     * <p>Specifies the target for this operation. You must specify one of the
     * following:</p> <ul> <li> <p>Specify the following ARN to have future <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_GetQueryResults.html">GetQueryResults</a>
     * operations in this account encrypt the results with the specified KMS key.
     * Replace <i>REGION</i> and <i>ACCOUNT_ID</i> with your Region and account ID.</p>
     * <p> <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:query-result:*</code>
     * </p> </li> <li> <p>Specify the ARN of a log group to have CloudWatch Logs use
     * the KMS key to encrypt log events that are ingested and stored by that log
     * group. The log group ARN must be in the following format. Replace <i>REGION</i>
     * and <i>ACCOUNT_ID</i> with your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:log-group:<i>LOG_GROUP_NAME</i>
     * </code> </p> </li> </ul> <p>In your <code>AssociateKmsKey</code> operation, you
     * must specify either the <code>resourceIdentifier</code> parameter or the
     * <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline void SetResourceIdentifier(Aws::String&& value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier = std::move(value); }

    /**
     * <p>Specifies the target for this operation. You must specify one of the
     * following:</p> <ul> <li> <p>Specify the following ARN to have future <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_GetQueryResults.html">GetQueryResults</a>
     * operations in this account encrypt the results with the specified KMS key.
     * Replace <i>REGION</i> and <i>ACCOUNT_ID</i> with your Region and account ID.</p>
     * <p> <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:query-result:*</code>
     * </p> </li> <li> <p>Specify the ARN of a log group to have CloudWatch Logs use
     * the KMS key to encrypt log events that are ingested and stored by that log
     * group. The log group ARN must be in the following format. Replace <i>REGION</i>
     * and <i>ACCOUNT_ID</i> with your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:log-group:<i>LOG_GROUP_NAME</i>
     * </code> </p> </li> </ul> <p>In your <code>AssociateKmsKey</code> operation, you
     * must specify either the <code>resourceIdentifier</code> parameter or the
     * <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline void SetResourceIdentifier(const char* value) { m_resourceIdentifierHasBeenSet = true; m_resourceIdentifier.assign(value); }

    /**
     * <p>Specifies the target for this operation. You must specify one of the
     * following:</p> <ul> <li> <p>Specify the following ARN to have future <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_GetQueryResults.html">GetQueryResults</a>
     * operations in this account encrypt the results with the specified KMS key.
     * Replace <i>REGION</i> and <i>ACCOUNT_ID</i> with your Region and account ID.</p>
     * <p> <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:query-result:*</code>
     * </p> </li> <li> <p>Specify the ARN of a log group to have CloudWatch Logs use
     * the KMS key to encrypt log events that are ingested and stored by that log
     * group. The log group ARN must be in the following format. Replace <i>REGION</i>
     * and <i>ACCOUNT_ID</i> with your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:log-group:<i>LOG_GROUP_NAME</i>
     * </code> </p> </li> </ul> <p>In your <code>AssociateKmsKey</code> operation, you
     * must specify either the <code>resourceIdentifier</code> parameter or the
     * <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline AssociateKmsKeyRequest& WithResourceIdentifier(const Aws::String& value) { SetResourceIdentifier(value); return *this;}

    /**
     * <p>Specifies the target for this operation. You must specify one of the
     * following:</p> <ul> <li> <p>Specify the following ARN to have future <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_GetQueryResults.html">GetQueryResults</a>
     * operations in this account encrypt the results with the specified KMS key.
     * Replace <i>REGION</i> and <i>ACCOUNT_ID</i> with your Region and account ID.</p>
     * <p> <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:query-result:*</code>
     * </p> </li> <li> <p>Specify the ARN of a log group to have CloudWatch Logs use
     * the KMS key to encrypt log events that are ingested and stored by that log
     * group. The log group ARN must be in the following format. Replace <i>REGION</i>
     * and <i>ACCOUNT_ID</i> with your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:log-group:<i>LOG_GROUP_NAME</i>
     * </code> </p> </li> </ul> <p>In your <code>AssociateKmsKey</code> operation, you
     * must specify either the <code>resourceIdentifier</code> parameter or the
     * <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline AssociateKmsKeyRequest& WithResourceIdentifier(Aws::String&& value) { SetResourceIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specifies the target for this operation. You must specify one of the
     * following:</p> <ul> <li> <p>Specify the following ARN to have future <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_GetQueryResults.html">GetQueryResults</a>
     * operations in this account encrypt the results with the specified KMS key.
     * Replace <i>REGION</i> and <i>ACCOUNT_ID</i> with your Region and account ID.</p>
     * <p> <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:query-result:*</code>
     * </p> </li> <li> <p>Specify the ARN of a log group to have CloudWatch Logs use
     * the KMS key to encrypt log events that are ingested and stored by that log
     * group. The log group ARN must be in the following format. Replace <i>REGION</i>
     * and <i>ACCOUNT_ID</i> with your Region and account ID.</p> <p>
     * <code>arn:aws:logs:<i>REGION</i>:<i>ACCOUNT_ID</i>:log-group:<i>LOG_GROUP_NAME</i>
     * </code> </p> </li> </ul> <p>In your <code>AssociateKmsKey</code> operation, you
     * must specify either the <code>resourceIdentifier</code> parameter or the
     * <code>logGroup</code> parameter, but you can't specify both.</p>
     */
    inline AssociateKmsKeyRequest& WithResourceIdentifier(const char* value) { SetResourceIdentifier(value); return *this;}

  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::String m_resourceIdentifier;
    bool m_resourceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
