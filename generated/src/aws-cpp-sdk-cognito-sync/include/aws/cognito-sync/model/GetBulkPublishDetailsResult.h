/**
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
    AWS_COGNITOSYNC_API GetBulkPublishDetailsResult() = default;
    AWS_COGNITOSYNC_API GetBulkPublishDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOSYNC_API GetBulkPublishDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline const Aws::String& GetIdentityPoolId() const { return m_identityPoolId; }
    template<typename IdentityPoolIdT = Aws::String>
    void SetIdentityPoolId(IdentityPoolIdT&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::forward<IdentityPoolIdT>(value); }
    template<typename IdentityPoolIdT = Aws::String>
    GetBulkPublishDetailsResult& WithIdentityPoolId(IdentityPoolIdT&& value) { SetIdentityPoolId(std::forward<IdentityPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The date/time at which the last bulk publish was initiated.
     */
    inline const Aws::Utils::DateTime& GetBulkPublishStartTime() const { return m_bulkPublishStartTime; }
    template<typename BulkPublishStartTimeT = Aws::Utils::DateTime>
    void SetBulkPublishStartTime(BulkPublishStartTimeT&& value) { m_bulkPublishStartTimeHasBeenSet = true; m_bulkPublishStartTime = std::forward<BulkPublishStartTimeT>(value); }
    template<typename BulkPublishStartTimeT = Aws::Utils::DateTime>
    GetBulkPublishDetailsResult& WithBulkPublishStartTime(BulkPublishStartTimeT&& value) { SetBulkPublishStartTime(std::forward<BulkPublishStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * If BulkPublishStatus is SUCCEEDED, the time the last bulk publish operation
     * completed.
     */
    inline const Aws::Utils::DateTime& GetBulkPublishCompleteTime() const { return m_bulkPublishCompleteTime; }
    template<typename BulkPublishCompleteTimeT = Aws::Utils::DateTime>
    void SetBulkPublishCompleteTime(BulkPublishCompleteTimeT&& value) { m_bulkPublishCompleteTimeHasBeenSet = true; m_bulkPublishCompleteTime = std::forward<BulkPublishCompleteTimeT>(value); }
    template<typename BulkPublishCompleteTimeT = Aws::Utils::DateTime>
    GetBulkPublishDetailsResult& WithBulkPublishCompleteTime(BulkPublishCompleteTimeT&& value) { SetBulkPublishCompleteTime(std::forward<BulkPublishCompleteTimeT>(value)); return *this;}
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
    inline BulkPublishStatus GetBulkPublishStatus() const { return m_bulkPublishStatus; }
    inline void SetBulkPublishStatus(BulkPublishStatus value) { m_bulkPublishStatusHasBeenSet = true; m_bulkPublishStatus = value; }
    inline GetBulkPublishDetailsResult& WithBulkPublishStatus(BulkPublishStatus value) { SetBulkPublishStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * If BulkPublishStatus is FAILED this field will contain the error message that
     * caused the bulk publish to fail.
     */
    inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
    template<typename FailureMessageT = Aws::String>
    void SetFailureMessage(FailureMessageT&& value) { m_failureMessageHasBeenSet = true; m_failureMessage = std::forward<FailureMessageT>(value); }
    template<typename FailureMessageT = Aws::String>
    GetBulkPublishDetailsResult& WithFailureMessage(FailureMessageT&& value) { SetFailureMessage(std::forward<FailureMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBulkPublishDetailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet = false;

    Aws::Utils::DateTime m_bulkPublishStartTime{};
    bool m_bulkPublishStartTimeHasBeenSet = false;

    Aws::Utils::DateTime m_bulkPublishCompleteTime{};
    bool m_bulkPublishCompleteTimeHasBeenSet = false;

    BulkPublishStatus m_bulkPublishStatus{BulkPublishStatus::NOT_SET};
    bool m_bulkPublishStatusHasBeenSet = false;

    Aws::String m_failureMessage;
    bool m_failureMessageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
