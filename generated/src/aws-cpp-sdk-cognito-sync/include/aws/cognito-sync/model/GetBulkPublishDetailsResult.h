﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cognito-sync/model/BulkPublishStatus.h>
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
namespace CognitoSync
{
namespace Model
{
  /**
   * The output for the GetBulkPublishDetails operation.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/GetBulkPublishDetailsResponse">AWS
   * API Reference</a></p>
   */
  class GetBulkPublishDetailsResult
  {
  public:
    AWS_COGNITOSYNC_API GetBulkPublishDetailsResult();
    AWS_COGNITOSYNC_API GetBulkPublishDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOSYNC_API GetBulkPublishDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolId = value; }
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolId = std::move(value); }
    inline void SetIdentityPoolId(const char* value) { m_identityPoolId.assign(value); }
    inline GetBulkPublishDetailsResult& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}
    inline GetBulkPublishDetailsResult& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}
    inline GetBulkPublishDetailsResult& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * The date/time at which the last bulk publish was initiated.
     */
    inline const Aws::Utils::DateTime& GetBulkPublishStartTime() const{ return m_bulkPublishStartTime; }
    inline void SetBulkPublishStartTime(const Aws::Utils::DateTime& value) { m_bulkPublishStartTime = value; }
    inline void SetBulkPublishStartTime(Aws::Utils::DateTime&& value) { m_bulkPublishStartTime = std::move(value); }
    inline GetBulkPublishDetailsResult& WithBulkPublishStartTime(const Aws::Utils::DateTime& value) { SetBulkPublishStartTime(value); return *this;}
    inline GetBulkPublishDetailsResult& WithBulkPublishStartTime(Aws::Utils::DateTime&& value) { SetBulkPublishStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * If BulkPublishStatus is SUCCEEDED, the time the last bulk publish operation
     * completed.
     */
    inline const Aws::Utils::DateTime& GetBulkPublishCompleteTime() const{ return m_bulkPublishCompleteTime; }
    inline void SetBulkPublishCompleteTime(const Aws::Utils::DateTime& value) { m_bulkPublishCompleteTime = value; }
    inline void SetBulkPublishCompleteTime(Aws::Utils::DateTime&& value) { m_bulkPublishCompleteTime = std::move(value); }
    inline GetBulkPublishDetailsResult& WithBulkPublishCompleteTime(const Aws::Utils::DateTime& value) { SetBulkPublishCompleteTime(value); return *this;}
    inline GetBulkPublishDetailsResult& WithBulkPublishCompleteTime(Aws::Utils::DateTime&& value) { SetBulkPublishCompleteTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Status of the last bulk publish operation, valid values are: <p>NOT_STARTED - No
     * bulk publish has been requested for this identity pool</p> <p>IN_PROGRESS - Data
     * is being published to the configured stream</p> <p>SUCCEEDED - All data for the
     * identity pool has been published to the configured stream</p> <p>FAILED - Some
     * portion of the data has failed to publish, check FailureMessage for the
     * cause.</p>
     */
    inline const BulkPublishStatus& GetBulkPublishStatus() const{ return m_bulkPublishStatus; }
    inline void SetBulkPublishStatus(const BulkPublishStatus& value) { m_bulkPublishStatus = value; }
    inline void SetBulkPublishStatus(BulkPublishStatus&& value) { m_bulkPublishStatus = std::move(value); }
    inline GetBulkPublishDetailsResult& WithBulkPublishStatus(const BulkPublishStatus& value) { SetBulkPublishStatus(value); return *this;}
    inline GetBulkPublishDetailsResult& WithBulkPublishStatus(BulkPublishStatus&& value) { SetBulkPublishStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * If BulkPublishStatus is FAILED this field will contain the error message that
     * caused the bulk publish to fail.
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessage = value; }
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessage = std::move(value); }
    inline void SetFailureMessage(const char* value) { m_failureMessage.assign(value); }
    inline GetBulkPublishDetailsResult& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}
    inline GetBulkPublishDetailsResult& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}
    inline GetBulkPublishDetailsResult& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBulkPublishDetailsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBulkPublishDetailsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBulkPublishDetailsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_identityPoolId;

    Aws::Utils::DateTime m_bulkPublishStartTime;

    Aws::Utils::DateTime m_bulkPublishCompleteTime;

    BulkPublishStatus m_bulkPublishStatus;

    Aws::String m_failureMessage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
