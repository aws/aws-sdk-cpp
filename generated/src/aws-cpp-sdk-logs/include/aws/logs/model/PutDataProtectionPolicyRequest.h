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
  class PutDataProtectionPolicyRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutDataProtectionPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDataProtectionPolicy"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specify either the log group name or log group ARN.</p>
     */
    inline const Aws::String& GetLogGroupIdentifier() const{ return m_logGroupIdentifier; }

    /**
     * <p>Specify either the log group name or log group ARN.</p>
     */
    inline bool LogGroupIdentifierHasBeenSet() const { return m_logGroupIdentifierHasBeenSet; }

    /**
     * <p>Specify either the log group name or log group ARN.</p>
     */
    inline void SetLogGroupIdentifier(const Aws::String& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = value; }

    /**
     * <p>Specify either the log group name or log group ARN.</p>
     */
    inline void SetLogGroupIdentifier(Aws::String&& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = std::move(value); }

    /**
     * <p>Specify either the log group name or log group ARN.</p>
     */
    inline void SetLogGroupIdentifier(const char* value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier.assign(value); }

    /**
     * <p>Specify either the log group name or log group ARN.</p>
     */
    inline PutDataProtectionPolicyRequest& WithLogGroupIdentifier(const Aws::String& value) { SetLogGroupIdentifier(value); return *this;}

    /**
     * <p>Specify either the log group name or log group ARN.</p>
     */
    inline PutDataProtectionPolicyRequest& WithLogGroupIdentifier(Aws::String&& value) { SetLogGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>Specify either the log group name or log group ARN.</p>
     */
    inline PutDataProtectionPolicyRequest& WithLogGroupIdentifier(const char* value) { SetLogGroupIdentifier(value); return *this;}


    /**
     * <p>Specify the data protection policy, in JSON.</p> <p>This policy must include
     * two JSON blocks:</p> <ul> <li> <p>The first block must include both a
     * <code>DataIdentifer</code> array and an <code>Operation</code> property with an
     * <code>Audit</code> action. The <code>DataIdentifer</code> array lists the types
     * of sensitive data that you want to mask. For more information about the
     * available options, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/mask-sensitive-log-data-types.html">Types
     * of data that you can mask</a>.</p> <p>The <code>Operation</code> property with
     * an <code>Audit</code> action is required to find the sensitive data terms. This
     * <code>Audit</code> action must contain a <code>FindingsDestination</code>
     * object. You can optionally use that <code>FindingsDestination</code> object to
     * list one or more destinations to send audit findings to. If you specify
     * destinations such as log groups, Firehose streams, and S3 buckets, they must
     * already exist.</p> </li> <li> <p>The second block must include both a
     * <code>DataIdentifer</code> array and an <code>Operation</code> property with an
     * <code>Deidentify</code> action. The <code>DataIdentifer</code> array must
     * exactly match the <code>DataIdentifer</code> array in the first block of the
     * policy.</p> <p>The <code>Operation</code> property with the
     * <code>Deidentify</code> action is what actually masks the data, and it must
     * contain the <code> "MaskConfig": {}</code> object. The <code> "MaskConfig":
     * {}</code> object must be empty.</p> </li> </ul> <p>For an example data
     * protection policy, see the <b>Examples</b> section on this page.</p> 
     * <p>The contents of the two <code>DataIdentifer</code> arrays must match
     * exactly.</p>  <p>In addition to the two JSON blocks, the
     * <code>policyDocument</code> can also include <code>Name</code>,
     * <code>Description</code>, and <code>Version</code> fields. The <code>Name</code>
     * is used as a dimension when CloudWatch Logs reports audit findings metrics to
     * CloudWatch.</p> <p>The JSON specified in <code>policyDocument</code> can be up
     * to 30,720 characters.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>Specify the data protection policy, in JSON.</p> <p>This policy must include
     * two JSON blocks:</p> <ul> <li> <p>The first block must include both a
     * <code>DataIdentifer</code> array and an <code>Operation</code> property with an
     * <code>Audit</code> action. The <code>DataIdentifer</code> array lists the types
     * of sensitive data that you want to mask. For more information about the
     * available options, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/mask-sensitive-log-data-types.html">Types
     * of data that you can mask</a>.</p> <p>The <code>Operation</code> property with
     * an <code>Audit</code> action is required to find the sensitive data terms. This
     * <code>Audit</code> action must contain a <code>FindingsDestination</code>
     * object. You can optionally use that <code>FindingsDestination</code> object to
     * list one or more destinations to send audit findings to. If you specify
     * destinations such as log groups, Firehose streams, and S3 buckets, they must
     * already exist.</p> </li> <li> <p>The second block must include both a
     * <code>DataIdentifer</code> array and an <code>Operation</code> property with an
     * <code>Deidentify</code> action. The <code>DataIdentifer</code> array must
     * exactly match the <code>DataIdentifer</code> array in the first block of the
     * policy.</p> <p>The <code>Operation</code> property with the
     * <code>Deidentify</code> action is what actually masks the data, and it must
     * contain the <code> "MaskConfig": {}</code> object. The <code> "MaskConfig":
     * {}</code> object must be empty.</p> </li> </ul> <p>For an example data
     * protection policy, see the <b>Examples</b> section on this page.</p> 
     * <p>The contents of the two <code>DataIdentifer</code> arrays must match
     * exactly.</p>  <p>In addition to the two JSON blocks, the
     * <code>policyDocument</code> can also include <code>Name</code>,
     * <code>Description</code>, and <code>Version</code> fields. The <code>Name</code>
     * is used as a dimension when CloudWatch Logs reports audit findings metrics to
     * CloudWatch.</p> <p>The JSON specified in <code>policyDocument</code> can be up
     * to 30,720 characters.</p>
     */
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }

    /**
     * <p>Specify the data protection policy, in JSON.</p> <p>This policy must include
     * two JSON blocks:</p> <ul> <li> <p>The first block must include both a
     * <code>DataIdentifer</code> array and an <code>Operation</code> property with an
     * <code>Audit</code> action. The <code>DataIdentifer</code> array lists the types
     * of sensitive data that you want to mask. For more information about the
     * available options, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/mask-sensitive-log-data-types.html">Types
     * of data that you can mask</a>.</p> <p>The <code>Operation</code> property with
     * an <code>Audit</code> action is required to find the sensitive data terms. This
     * <code>Audit</code> action must contain a <code>FindingsDestination</code>
     * object. You can optionally use that <code>FindingsDestination</code> object to
     * list one or more destinations to send audit findings to. If you specify
     * destinations such as log groups, Firehose streams, and S3 buckets, they must
     * already exist.</p> </li> <li> <p>The second block must include both a
     * <code>DataIdentifer</code> array and an <code>Operation</code> property with an
     * <code>Deidentify</code> action. The <code>DataIdentifer</code> array must
     * exactly match the <code>DataIdentifer</code> array in the first block of the
     * policy.</p> <p>The <code>Operation</code> property with the
     * <code>Deidentify</code> action is what actually masks the data, and it must
     * contain the <code> "MaskConfig": {}</code> object. The <code> "MaskConfig":
     * {}</code> object must be empty.</p> </li> </ul> <p>For an example data
     * protection policy, see the <b>Examples</b> section on this page.</p> 
     * <p>The contents of the two <code>DataIdentifer</code> arrays must match
     * exactly.</p>  <p>In addition to the two JSON blocks, the
     * <code>policyDocument</code> can also include <code>Name</code>,
     * <code>Description</code>, and <code>Version</code> fields. The <code>Name</code>
     * is used as a dimension when CloudWatch Logs reports audit findings metrics to
     * CloudWatch.</p> <p>The JSON specified in <code>policyDocument</code> can be up
     * to 30,720 characters.</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }

    /**
     * <p>Specify the data protection policy, in JSON.</p> <p>This policy must include
     * two JSON blocks:</p> <ul> <li> <p>The first block must include both a
     * <code>DataIdentifer</code> array and an <code>Operation</code> property with an
     * <code>Audit</code> action. The <code>DataIdentifer</code> array lists the types
     * of sensitive data that you want to mask. For more information about the
     * available options, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/mask-sensitive-log-data-types.html">Types
     * of data that you can mask</a>.</p> <p>The <code>Operation</code> property with
     * an <code>Audit</code> action is required to find the sensitive data terms. This
     * <code>Audit</code> action must contain a <code>FindingsDestination</code>
     * object. You can optionally use that <code>FindingsDestination</code> object to
     * list one or more destinations to send audit findings to. If you specify
     * destinations such as log groups, Firehose streams, and S3 buckets, they must
     * already exist.</p> </li> <li> <p>The second block must include both a
     * <code>DataIdentifer</code> array and an <code>Operation</code> property with an
     * <code>Deidentify</code> action. The <code>DataIdentifer</code> array must
     * exactly match the <code>DataIdentifer</code> array in the first block of the
     * policy.</p> <p>The <code>Operation</code> property with the
     * <code>Deidentify</code> action is what actually masks the data, and it must
     * contain the <code> "MaskConfig": {}</code> object. The <code> "MaskConfig":
     * {}</code> object must be empty.</p> </li> </ul> <p>For an example data
     * protection policy, see the <b>Examples</b> section on this page.</p> 
     * <p>The contents of the two <code>DataIdentifer</code> arrays must match
     * exactly.</p>  <p>In addition to the two JSON blocks, the
     * <code>policyDocument</code> can also include <code>Name</code>,
     * <code>Description</code>, and <code>Version</code> fields. The <code>Name</code>
     * is used as a dimension when CloudWatch Logs reports audit findings metrics to
     * CloudWatch.</p> <p>The JSON specified in <code>policyDocument</code> can be up
     * to 30,720 characters.</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }

    /**
     * <p>Specify the data protection policy, in JSON.</p> <p>This policy must include
     * two JSON blocks:</p> <ul> <li> <p>The first block must include both a
     * <code>DataIdentifer</code> array and an <code>Operation</code> property with an
     * <code>Audit</code> action. The <code>DataIdentifer</code> array lists the types
     * of sensitive data that you want to mask. For more information about the
     * available options, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/mask-sensitive-log-data-types.html">Types
     * of data that you can mask</a>.</p> <p>The <code>Operation</code> property with
     * an <code>Audit</code> action is required to find the sensitive data terms. This
     * <code>Audit</code> action must contain a <code>FindingsDestination</code>
     * object. You can optionally use that <code>FindingsDestination</code> object to
     * list one or more destinations to send audit findings to. If you specify
     * destinations such as log groups, Firehose streams, and S3 buckets, they must
     * already exist.</p> </li> <li> <p>The second block must include both a
     * <code>DataIdentifer</code> array and an <code>Operation</code> property with an
     * <code>Deidentify</code> action. The <code>DataIdentifer</code> array must
     * exactly match the <code>DataIdentifer</code> array in the first block of the
     * policy.</p> <p>The <code>Operation</code> property with the
     * <code>Deidentify</code> action is what actually masks the data, and it must
     * contain the <code> "MaskConfig": {}</code> object. The <code> "MaskConfig":
     * {}</code> object must be empty.</p> </li> </ul> <p>For an example data
     * protection policy, see the <b>Examples</b> section on this page.</p> 
     * <p>The contents of the two <code>DataIdentifer</code> arrays must match
     * exactly.</p>  <p>In addition to the two JSON blocks, the
     * <code>policyDocument</code> can also include <code>Name</code>,
     * <code>Description</code>, and <code>Version</code> fields. The <code>Name</code>
     * is used as a dimension when CloudWatch Logs reports audit findings metrics to
     * CloudWatch.</p> <p>The JSON specified in <code>policyDocument</code> can be up
     * to 30,720 characters.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }

    /**
     * <p>Specify the data protection policy, in JSON.</p> <p>This policy must include
     * two JSON blocks:</p> <ul> <li> <p>The first block must include both a
     * <code>DataIdentifer</code> array and an <code>Operation</code> property with an
     * <code>Audit</code> action. The <code>DataIdentifer</code> array lists the types
     * of sensitive data that you want to mask. For more information about the
     * available options, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/mask-sensitive-log-data-types.html">Types
     * of data that you can mask</a>.</p> <p>The <code>Operation</code> property with
     * an <code>Audit</code> action is required to find the sensitive data terms. This
     * <code>Audit</code> action must contain a <code>FindingsDestination</code>
     * object. You can optionally use that <code>FindingsDestination</code> object to
     * list one or more destinations to send audit findings to. If you specify
     * destinations such as log groups, Firehose streams, and S3 buckets, they must
     * already exist.</p> </li> <li> <p>The second block must include both a
     * <code>DataIdentifer</code> array and an <code>Operation</code> property with an
     * <code>Deidentify</code> action. The <code>DataIdentifer</code> array must
     * exactly match the <code>DataIdentifer</code> array in the first block of the
     * policy.</p> <p>The <code>Operation</code> property with the
     * <code>Deidentify</code> action is what actually masks the data, and it must
     * contain the <code> "MaskConfig": {}</code> object. The <code> "MaskConfig":
     * {}</code> object must be empty.</p> </li> </ul> <p>For an example data
     * protection policy, see the <b>Examples</b> section on this page.</p> 
     * <p>The contents of the two <code>DataIdentifer</code> arrays must match
     * exactly.</p>  <p>In addition to the two JSON blocks, the
     * <code>policyDocument</code> can also include <code>Name</code>,
     * <code>Description</code>, and <code>Version</code> fields. The <code>Name</code>
     * is used as a dimension when CloudWatch Logs reports audit findings metrics to
     * CloudWatch.</p> <p>The JSON specified in <code>policyDocument</code> can be up
     * to 30,720 characters.</p>
     */
    inline PutDataProtectionPolicyRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>Specify the data protection policy, in JSON.</p> <p>This policy must include
     * two JSON blocks:</p> <ul> <li> <p>The first block must include both a
     * <code>DataIdentifer</code> array and an <code>Operation</code> property with an
     * <code>Audit</code> action. The <code>DataIdentifer</code> array lists the types
     * of sensitive data that you want to mask. For more information about the
     * available options, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/mask-sensitive-log-data-types.html">Types
     * of data that you can mask</a>.</p> <p>The <code>Operation</code> property with
     * an <code>Audit</code> action is required to find the sensitive data terms. This
     * <code>Audit</code> action must contain a <code>FindingsDestination</code>
     * object. You can optionally use that <code>FindingsDestination</code> object to
     * list one or more destinations to send audit findings to. If you specify
     * destinations such as log groups, Firehose streams, and S3 buckets, they must
     * already exist.</p> </li> <li> <p>The second block must include both a
     * <code>DataIdentifer</code> array and an <code>Operation</code> property with an
     * <code>Deidentify</code> action. The <code>DataIdentifer</code> array must
     * exactly match the <code>DataIdentifer</code> array in the first block of the
     * policy.</p> <p>The <code>Operation</code> property with the
     * <code>Deidentify</code> action is what actually masks the data, and it must
     * contain the <code> "MaskConfig": {}</code> object. The <code> "MaskConfig":
     * {}</code> object must be empty.</p> </li> </ul> <p>For an example data
     * protection policy, see the <b>Examples</b> section on this page.</p> 
     * <p>The contents of the two <code>DataIdentifer</code> arrays must match
     * exactly.</p>  <p>In addition to the two JSON blocks, the
     * <code>policyDocument</code> can also include <code>Name</code>,
     * <code>Description</code>, and <code>Version</code> fields. The <code>Name</code>
     * is used as a dimension when CloudWatch Logs reports audit findings metrics to
     * CloudWatch.</p> <p>The JSON specified in <code>policyDocument</code> can be up
     * to 30,720 characters.</p>
     */
    inline PutDataProtectionPolicyRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>Specify the data protection policy, in JSON.</p> <p>This policy must include
     * two JSON blocks:</p> <ul> <li> <p>The first block must include both a
     * <code>DataIdentifer</code> array and an <code>Operation</code> property with an
     * <code>Audit</code> action. The <code>DataIdentifer</code> array lists the types
     * of sensitive data that you want to mask. For more information about the
     * available options, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/mask-sensitive-log-data-types.html">Types
     * of data that you can mask</a>.</p> <p>The <code>Operation</code> property with
     * an <code>Audit</code> action is required to find the sensitive data terms. This
     * <code>Audit</code> action must contain a <code>FindingsDestination</code>
     * object. You can optionally use that <code>FindingsDestination</code> object to
     * list one or more destinations to send audit findings to. If you specify
     * destinations such as log groups, Firehose streams, and S3 buckets, they must
     * already exist.</p> </li> <li> <p>The second block must include both a
     * <code>DataIdentifer</code> array and an <code>Operation</code> property with an
     * <code>Deidentify</code> action. The <code>DataIdentifer</code> array must
     * exactly match the <code>DataIdentifer</code> array in the first block of the
     * policy.</p> <p>The <code>Operation</code> property with the
     * <code>Deidentify</code> action is what actually masks the data, and it must
     * contain the <code> "MaskConfig": {}</code> object. The <code> "MaskConfig":
     * {}</code> object must be empty.</p> </li> </ul> <p>For an example data
     * protection policy, see the <b>Examples</b> section on this page.</p> 
     * <p>The contents of the two <code>DataIdentifer</code> arrays must match
     * exactly.</p>  <p>In addition to the two JSON blocks, the
     * <code>policyDocument</code> can also include <code>Name</code>,
     * <code>Description</code>, and <code>Version</code> fields. The <code>Name</code>
     * is used as a dimension when CloudWatch Logs reports audit findings metrics to
     * CloudWatch.</p> <p>The JSON specified in <code>policyDocument</code> can be up
     * to 30,720 characters.</p>
     */
    inline PutDataProtectionPolicyRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}

  private:

    Aws::String m_logGroupIdentifier;
    bool m_logGroupIdentifierHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
