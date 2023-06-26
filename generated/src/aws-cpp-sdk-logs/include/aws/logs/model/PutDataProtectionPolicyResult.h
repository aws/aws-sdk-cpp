/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{
  class PutDataProtectionPolicyResult
  {
  public:
    AWS_CLOUDWATCHLOGS_API PutDataProtectionPolicyResult();
    AWS_CLOUDWATCHLOGS_API PutDataProtectionPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHLOGS_API PutDataProtectionPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The log group name or ARN that you specified in your request.</p>
     */
    inline const Aws::String& GetLogGroupIdentifier() const{ return m_logGroupIdentifier; }

    /**
     * <p>The log group name or ARN that you specified in your request.</p>
     */
    inline void SetLogGroupIdentifier(const Aws::String& value) { m_logGroupIdentifier = value; }

    /**
     * <p>The log group name or ARN that you specified in your request.</p>
     */
    inline void SetLogGroupIdentifier(Aws::String&& value) { m_logGroupIdentifier = std::move(value); }

    /**
     * <p>The log group name or ARN that you specified in your request.</p>
     */
    inline void SetLogGroupIdentifier(const char* value) { m_logGroupIdentifier.assign(value); }

    /**
     * <p>The log group name or ARN that you specified in your request.</p>
     */
    inline PutDataProtectionPolicyResult& WithLogGroupIdentifier(const Aws::String& value) { SetLogGroupIdentifier(value); return *this;}

    /**
     * <p>The log group name or ARN that you specified in your request.</p>
     */
    inline PutDataProtectionPolicyResult& WithLogGroupIdentifier(Aws::String&& value) { SetLogGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>The log group name or ARN that you specified in your request.</p>
     */
    inline PutDataProtectionPolicyResult& WithLogGroupIdentifier(const char* value) { SetLogGroupIdentifier(value); return *this;}


    /**
     * <p>The data protection policy used for this log group.</p>
     */
    inline const Aws::String& GetPolicyDocument() const{ return m_policyDocument; }

    /**
     * <p>The data protection policy used for this log group.</p>
     */
    inline void SetPolicyDocument(const Aws::String& value) { m_policyDocument = value; }

    /**
     * <p>The data protection policy used for this log group.</p>
     */
    inline void SetPolicyDocument(Aws::String&& value) { m_policyDocument = std::move(value); }

    /**
     * <p>The data protection policy used for this log group.</p>
     */
    inline void SetPolicyDocument(const char* value) { m_policyDocument.assign(value); }

    /**
     * <p>The data protection policy used for this log group.</p>
     */
    inline PutDataProtectionPolicyResult& WithPolicyDocument(const Aws::String& value) { SetPolicyDocument(value); return *this;}

    /**
     * <p>The data protection policy used for this log group.</p>
     */
    inline PutDataProtectionPolicyResult& WithPolicyDocument(Aws::String&& value) { SetPolicyDocument(std::move(value)); return *this;}

    /**
     * <p>The data protection policy used for this log group.</p>
     */
    inline PutDataProtectionPolicyResult& WithPolicyDocument(const char* value) { SetPolicyDocument(value); return *this;}


    /**
     * <p>The date and time that this policy was most recently updated.</p>
     */
    inline long long GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The date and time that this policy was most recently updated.</p>
     */
    inline void SetLastUpdatedTime(long long value) { m_lastUpdatedTime = value; }

    /**
     * <p>The date and time that this policy was most recently updated.</p>
     */
    inline PutDataProtectionPolicyResult& WithLastUpdatedTime(long long value) { SetLastUpdatedTime(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutDataProtectionPolicyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutDataProtectionPolicyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutDataProtectionPolicyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_logGroupIdentifier;

    Aws::String m_policyDocument;

    long long m_lastUpdatedTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
