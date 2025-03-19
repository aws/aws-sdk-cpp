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
    AWS_CLOUDWATCHLOGS_API IndexPolicy() = default;
    AWS_CLOUDWATCHLOGS_API IndexPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API IndexPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the log group that this index policy applies to.</p>
     */
    inline const Aws::String& GetLogGroupIdentifier() const { return m_logGroupIdentifier; }
    inline bool LogGroupIdentifierHasBeenSet() const { return m_logGroupIdentifierHasBeenSet; }
    template<typename LogGroupIdentifierT = Aws::String>
    void SetLogGroupIdentifier(LogGroupIdentifierT&& value) { m_logGroupIdentifierHasBeenSet = true; m_logGroupIdentifier = std::forward<LogGroupIdentifierT>(value); }
    template<typename LogGroupIdentifierT = Aws::String>
    IndexPolicy& WithLogGroupIdentifier(LogGroupIdentifierT&& value) { SetLogGroupIdentifier(std::forward<LogGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that this index policy was most recently updated.</p>
     */
    inline long long GetLastUpdateTime() const { return m_lastUpdateTime; }
    inline bool LastUpdateTimeHasBeenSet() const { return m_lastUpdateTimeHasBeenSet; }
    inline void SetLastUpdateTime(long long value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = value; }
    inline IndexPolicy& WithLastUpdateTime(long long value) { SetLastUpdateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy document for this index policy, in JSON format.</p>
     */
    inline const Aws::String& GetPolicyDocument() const { return m_policyDocument; }
    inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }
    template<typename PolicyDocumentT = Aws::String>
    void SetPolicyDocument(PolicyDocumentT&& value) { m_policyDocumentHasBeenSet = true; m_policyDocument = std::forward<PolicyDocumentT>(value); }
    template<typename PolicyDocumentT = Aws::String>
    IndexPolicy& WithPolicyDocument(PolicyDocumentT&& value) { SetPolicyDocument(std::forward<PolicyDocumentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this policy. Responses about log group-level field index policies
     * don't have this field, because those policies don't have names.</p>
     */
    inline const Aws::String& GetPolicyName() const { return m_policyName; }
    inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
    template<typename PolicyNameT = Aws::String>
    void SetPolicyName(PolicyNameT&& value) { m_policyNameHasBeenSet = true; m_policyName = std::forward<PolicyNameT>(value); }
    template<typename PolicyNameT = Aws::String>
    IndexPolicy& WithPolicyName(PolicyNameT&& value) { SetPolicyName(std::forward<PolicyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This field indicates whether this is an account-level index policy or an
     * index policy that applies only to a single log group.</p>
     */
    inline IndexSource GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(IndexSource value) { m_sourceHasBeenSet = true; m_source = value; }
    inline IndexPolicy& WithSource(IndexSource value) { SetSource(value); return *this;}
    ///@}
  private:

    Aws::String m_logGroupIdentifier;
    bool m_logGroupIdentifierHasBeenSet = false;

    long long m_lastUpdateTime{0};
    bool m_lastUpdateTimeHasBeenSet = false;

    Aws::String m_policyDocument;
    bool m_policyDocumentHasBeenSet = false;

    Aws::String m_policyName;
    bool m_policyNameHasBeenSet = false;

    IndexSource m_source{IndexSource::NOT_SET};
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
