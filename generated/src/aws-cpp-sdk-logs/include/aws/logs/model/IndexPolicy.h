/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/model/IndexSource.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This structure contains information about one field index policy in this
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/IndexPolicy">AWS
   * API Reference</a></p>
   */
  class IndexPolicy
  {
  public:
    AWS_CLOUDWATCHLOGS_API IndexPolicy();
    AWS_CLOUDWATCHLOGS_API IndexPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API IndexPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the log group that this index policy applies to.</p>
     */
    inline const Aws::String& GetLogGroupIdentifier() const{ return m_logGroupIdentifier; }
    inline bool LogGroupIdentifierHasBeenSet() const { return m_logGroupIdentifierHasBeenSet; }
    inline void SetLogGroupIdentifier(const Aws::String& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = value; }
    inline void SetLogGroupIdentifier(Aws::String&& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = std::move(value); }
    inline void SetLogGroupIdentifier(const char* value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier.assign(value); }
    inline IndexPolicy& WithLogGroupIdentifier(const Aws::String& value) { SetLogGroupIdentifier(value); return *this;}
    inline IndexPolicy& WithLogGroupIdentifier(Aws::String&& value) { SetLogGroupIdentifier(std::move(value)); return *this;}
    inline IndexPolicy& WithLogGroupIdentifier(const char* value) { SetLogGroupIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that this index policy was most recently updated.</p>
     */
    inline long long GetLastUpdateTime() const{ return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(long long value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline IndexPolicy& WithLastUpdateTime(long long value) { SetLastUpdateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy document for this index policy, in JSON format.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = value; }
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::move(value); }
    inline void SetPolicyDocument(const char* value) { m_policyDocumentHasBeenSet = true; m_policyDocument.assign(value); }
    inline IndexPolicy& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}
    inline IndexPolicy& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}
    inline IndexPolicy& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this policy. Responses about log group-level field index policies
     * don't have this field, because those policies don't have names.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = std::move(value); }
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }
    inline IndexPolicy& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}
    inline IndexPolicy& WithPolicyName(Aws::String&& value) { SetPolicyName(std::move(value)); return *this;}
    inline IndexPolicy& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field indicates whether this is an account-level index policy or an
     * index policy that applies only to a single log group.</p>
     */
    inline const IndexSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const IndexSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(IndexSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline IndexPolicy& WithSource(const IndexSource& value) { SetSource(value); return *this;}
    inline IndexPolicy& WithSource(IndexSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_logGroupIdentifier;
    bool m_logGroupIdentifierHasBeenSet = false;

    long long m_lastUpdateTime;
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    IndexSource m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
