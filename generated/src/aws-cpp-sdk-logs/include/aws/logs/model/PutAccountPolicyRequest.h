/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/PolicyType.h>
#include <aws/logs/model/Scope.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class PutAccountPolicyRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutAccountPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccountPolicy"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A name for the policy. This must be unique within the account.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>A name for the policy. This must be unique within the account.</p>
     */
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }

    /**
     * <p>A name for the policy. This must be unique within the account.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>A name for the policy. This must be unique within the account.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }

    /**
     * <p>A name for the policy. This must be unique within the account.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>A name for the policy. This must be unique within the account.</p>
     */
    inline PutAccountPolicyRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>A name for the policy. This must be unique within the account.</p>
     */
    inline PutAccountPolicyRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}

    /**
     * <p>A name for the policy. This must be unique within the account.</p>
     */
    inline PutAccountPolicyRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}


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
     * destinations such as log groups, Kinesis Data Firehose streams, and S3 buckets,
     * they must already exist.</p> </li> <li> <p>The second block must include both a
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
     * is different than the operation's <code>policyName</code> parameter, and is used
     * as a dimension when CloudWatch Logs reports audit findings metrics to
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
     * destinations such as log groups, Kinesis Data Firehose streams, and S3 buckets,
     * they must already exist.</p> </li> <li> <p>The second block must include both a
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
     * is different than the operation's <code>policyName</code> parameter, and is used
     * as a dimension when CloudWatch Logs reports audit findings metrics to
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
     * destinations such as log groups, Kinesis Data Firehose streams, and S3 buckets,
     * they must already exist.</p> </li> <li> <p>The second block must include both a
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
     * is different than the operation's <code>policyName</code> parameter, and is used
     * as a dimension when CloudWatch Logs reports audit findings metrics to
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
     * destinations such as log groups, Kinesis Data Firehose streams, and S3 buckets,
     * they must already exist.</p> </li> <li> <p>The second block must include both a
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
     * is different than the operation's <code>policyName</code> parameter, and is used
     * as a dimension when CloudWatch Logs reports audit findings metrics to
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
     * destinations such as log groups, Kinesis Data Firehose streams, and S3 buckets,
     * they must already exist.</p> </li> <li> <p>The second block must include both a
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
     * is different than the operation's <code>policyName</code> parameter, and is used
     * as a dimension when CloudWatch Logs reports audit findings metrics to
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
     * destinations such as log groups, Kinesis Data Firehose streams, and S3 buckets,
     * they must already exist.</p> </li> <li> <p>The second block must include both a
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
     * is different than the operation's <code>policyName</code> parameter, and is used
     * as a dimension when CloudWatch Logs reports audit findings metrics to
     * CloudWatch.</p> <p>The JSON specified in <code>policyDocument</code> can be up
     * to 30,720 characters.</p>
     */
    inline PutAccountPolicyRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

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
     * destinations such as log groups, Kinesis Data Firehose streams, and S3 buckets,
     * they must already exist.</p> </li> <li> <p>The second block must include both a
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
     * is different than the operation's <code>policyName</code> parameter, and is used
     * as a dimension when CloudWatch Logs reports audit findings metrics to
     * CloudWatch.</p> <p>The JSON specified in <code>policyDocument</code> can be up
     * to 30,720 characters.</p>
     */
    inline PutAccountPolicyRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

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
     * destinations such as log groups, Kinesis Data Firehose streams, and S3 buckets,
     * they must already exist.</p> </li> <li> <p>The second block must include both a
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
     * is different than the operation's <code>policyName</code> parameter, and is used
     * as a dimension when CloudWatch Logs reports audit findings metrics to
     * CloudWatch.</p> <p>The JSON specified in <code>policyDocument</code> can be up
     * to 30,720 characters.</p>
     */
    inline PutAccountPolicyRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    /**
     * <p>Currently the only valid value for this parameter is
     * <code>DATA_PROTECTION_POLICY</code>.</p>
     */
    inline const PolicyType& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>Currently the only valid value for this parameter is
     * <code>DATA_PROTECTION_POLICY</code>.</p>
     */
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }

    /**
     * <p>Currently the only valid value for this parameter is
     * <code>DATA_PROTECTION_POLICY</code>.</p>
     */
    inline void SetPolicyType(const PolicyType& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>Currently the only valid value for this parameter is
     * <code>DATA_PROTECTION_POLICY</code>.</p>
     */
    inline void SetPolicyType(PolicyType&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }

    /**
     * <p>Currently the only valid value for this parameter is
     * <code>DATA_PROTECTION_POLICY</code>.</p>
     */
    inline PutAccountPolicyRequest& WithPolicyType(const PolicyType& value) { SetPolicyType(value); return *this;}

    /**
     * <p>Currently the only valid value for this parameter is
     * <code>DATA_PROTECTION_POLICY</code>.</p>
     */
    inline PutAccountPolicyRequest& WithPolicyType(PolicyType&& value) { SetPolicyType(std::move(value)); return *this;}


    /**
     * <p>Currently the only valid value for this parameter is <code>ALL</code>, which
     * specifies that the data protection policy applies to all log groups in the
     * account. If you omit this parameter, the default of <code>ALL</code> is
     * used.</p>
     */
    inline const Scope& GetScope() const{ return m_scope; }

    /**
     * <p>Currently the only valid value for this parameter is <code>ALL</code>, which
     * specifies that the data protection policy applies to all log groups in the
     * account. If you omit this parameter, the default of <code>ALL</code> is
     * used.</p>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>Currently the only valid value for this parameter is <code>ALL</code>, which
     * specifies that the data protection policy applies to all log groups in the
     * account. If you omit this parameter, the default of <code>ALL</code> is
     * used.</p>
     */
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>Currently the only valid value for this parameter is <code>ALL</code>, which
     * specifies that the data protection policy applies to all log groups in the
     * account. If you omit this parameter, the default of <code>ALL</code> is
     * used.</p>
     */
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>Currently the only valid value for this parameter is <code>ALL</code>, which
     * specifies that the data protection policy applies to all log groups in the
     * account. If you omit this parameter, the default of <code>ALL</code> is
     * used.</p>
     */
    inline PutAccountPolicyRequest& WithScope(const Scope& value) { SetScope(value); return *this;}

    /**
     * <p>Currently the only valid value for this parameter is <code>ALL</code>, which
     * specifies that the data protection policy applies to all log groups in the
     * account. If you omit this parameter, the default of <code>ALL</code> is
     * used.</p>
     */
    inline PutAccountPolicyRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}

  private:

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    PolicyType m_policyType;
    bool m_policyTypeHasBeenSet = false;

    Scope m_scope;
    bool m_scopeHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
