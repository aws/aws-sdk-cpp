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
  class PutIndexPolicyRequest : public CloudWatchLogsRequest
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutIndexPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutIndexPolicy"; }

    AWS_CLOUDWATCHLOGS_API Aws::String SerializePayload() const override;

    AWS_CLOUDWATCHLOGS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specify either the log group name or log group ARN to apply this field index
     * policy to. If you specify an ARN, use the format
     * arn:aws:logs:<i>region</i>:<i>account-id</i>:log-group:<i>log_group_name</i>
     * Don't include an * at the end.</p>
     */
    inline const Aws::String& GetLogGroupIdentifier() const{ return m_logGroupIdentifier; }
    inline bool LogGroupIdentifierHasBeenSet() const { return m_logGroupIdentifierHasBeenSet; }
    inline void SetLogGroupIdentifier(const Aws::String& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = value; }
    inline void SetLogGroupIdentifier(Aws::String&& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = std::move(value); }
    inline void SetLogGroupIdentifier(const char* value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier.assign(value); }
    inline PutIndexPolicyRequest& WithLogGroupIdentifier(const Aws::String& value) { SetLogGroupIdentifier(value); return *this;}
    inline PutIndexPolicyRequest& WithLogGroupIdentifier(Aws::String&& value) { SetLogGroupIdentifier(std::move(value)); return *this;}
    inline PutIndexPolicyRequest& WithLogGroupIdentifier(const char* value) { SetLogGroupIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The index policy document, in JSON format. The following is an example of an
     * index policy document that creates two indexes, <code>RequestId</code> and
     * <code>TransactionId</code>.</p> <p> <code>"policyDocument": "{ "Fields": [
     * "RequestId", "TransactionId" ] }"</code> </p> <p>The policy document must
     * include at least one field index. For more information about the fields that can
     * be included and other restrictions, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/logs/CloudWatchLogs-Field-Indexing-Syntax.html">Field
     * index syntax and quotas</a>.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }
    inline PutIndexPolicyRequest& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}
    inline PutIndexPolicyRequest& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}
    inline PutIndexPolicyRequest& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}
    ///@}
  private:

    Aws::String m_logGroupIdentifier;
    bool m_logGroupIdentifierHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
