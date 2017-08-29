/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_COGNITOSYNC_API GetBulkPublishDetailsResult
  {
  public:
    GetBulkPublishDetailsResult();
    GetBulkPublishDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetBulkPublishDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolId = value; }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolId = std::move(value); }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolId.assign(value); }

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline GetBulkPublishDetailsResult& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline GetBulkPublishDetailsResult& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}

    /**
     * A name-spaced GUID (for example, us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE)
     * created by Amazon Cognito. GUID generation is unique within a region.
     */
    inline GetBulkPublishDetailsResult& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}


    /**
     * The date/time at which the last bulk publish was initiated.
     */
    inline const Aws::Utils::DateTime& GetBulkPublishStartTime() const{ return m_bulkPublishStartTime; }

    /**
     * The date/time at which the last bulk publish was initiated.
     */
    inline void SetBulkPublishStartTime(const Aws::Utils::DateTime& value) { m_bulkPublishStartTime = value; }

    /**
     * The date/time at which the last bulk publish was initiated.
     */
    inline void SetBulkPublishStartTime(Aws::Utils::DateTime&& value) { m_bulkPublishStartTime = std::move(value); }

    /**
     * The date/time at which the last bulk publish was initiated.
     */
    inline GetBulkPublishDetailsResult& WithBulkPublishStartTime(const Aws::Utils::DateTime& value) { SetBulkPublishStartTime(value); return *this;}

    /**
     * The date/time at which the last bulk publish was initiated.
     */
    inline GetBulkPublishDetailsResult& WithBulkPublishStartTime(Aws::Utils::DateTime&& value) { SetBulkPublishStartTime(std::move(value)); return *this;}


    /**
     * If BulkPublishStatus is SUCCEEDED, the time the last bulk publish operation
     * completed.
     */
    inline const Aws::Utils::DateTime& GetBulkPublishCompleteTime() const{ return m_bulkPublishCompleteTime; }

    /**
     * If BulkPublishStatus is SUCCEEDED, the time the last bulk publish operation
     * completed.
     */
    inline void SetBulkPublishCompleteTime(const Aws::Utils::DateTime& value) { m_bulkPublishCompleteTime = value; }

    /**
     * If BulkPublishStatus is SUCCEEDED, the time the last bulk publish operation
     * completed.
     */
    inline void SetBulkPublishCompleteTime(Aws::Utils::DateTime&& value) { m_bulkPublishCompleteTime = std::move(value); }

    /**
     * If BulkPublishStatus is SUCCEEDED, the time the last bulk publish operation
     * completed.
     */
    inline GetBulkPublishDetailsResult& WithBulkPublishCompleteTime(const Aws::Utils::DateTime& value) { SetBulkPublishCompleteTime(value); return *this;}

    /**
     * If BulkPublishStatus is SUCCEEDED, the time the last bulk publish operation
     * completed.
     */
    inline GetBulkPublishDetailsResult& WithBulkPublishCompleteTime(Aws::Utils::DateTime&& value) { SetBulkPublishCompleteTime(std::move(value)); return *this;}


    /**
     * Status of the last bulk publish operation, valid values are: <p>NOT_STARTED - No
     * bulk publish has been requested for this identity pool</p> <p>IN_PROGRESS - Data
     * is being published to the configured stream</p> <p>SUCCEEDED - All data for the
     * identity pool has been published to the configured stream</p> <p>FAILED - Some
     * portion of the data has failed to publish, check FailureMessage for the
     * cause.</p>
     */
    inline const BulkPublishStatus& GetBulkPublishStatus() const{ return m_bulkPublishStatus; }

    /**
     * Status of the last bulk publish operation, valid values are: <p>NOT_STARTED - No
     * bulk publish has been requested for this identity pool</p> <p>IN_PROGRESS - Data
     * is being published to the configured stream</p> <p>SUCCEEDED - All data for the
     * identity pool has been published to the configured stream</p> <p>FAILED - Some
     * portion of the data has failed to publish, check FailureMessage for the
     * cause.</p>
     */
    inline void SetBulkPublishStatus(const BulkPublishStatus& value) { m_bulkPublishStatus = value; }

    /**
     * Status of the last bulk publish operation, valid values are: <p>NOT_STARTED - No
     * bulk publish has been requested for this identity pool</p> <p>IN_PROGRESS - Data
     * is being published to the configured stream</p> <p>SUCCEEDED - All data for the
     * identity pool has been published to the configured stream</p> <p>FAILED - Some
     * portion of the data has failed to publish, check FailureMessage for the
     * cause.</p>
     */
    inline void SetBulkPublishStatus(BulkPublishStatus&& value) { m_bulkPublishStatus = std::move(value); }

    /**
     * Status of the last bulk publish operation, valid values are: <p>NOT_STARTED - No
     * bulk publish has been requested for this identity pool</p> <p>IN_PROGRESS - Data
     * is being published to the configured stream</p> <p>SUCCEEDED - All data for the
     * identity pool has been published to the configured stream</p> <p>FAILED - Some
     * portion of the data has failed to publish, check FailureMessage for the
     * cause.</p>
     */
    inline GetBulkPublishDetailsResult& WithBulkPublishStatus(const BulkPublishStatus& value) { SetBulkPublishStatus(value); return *this;}

    /**
     * Status of the last bulk publish operation, valid values are: <p>NOT_STARTED - No
     * bulk publish has been requested for this identity pool</p> <p>IN_PROGRESS - Data
     * is being published to the configured stream</p> <p>SUCCEEDED - All data for the
     * identity pool has been published to the configured stream</p> <p>FAILED - Some
     * portion of the data has failed to publish, check FailureMessage for the
     * cause.</p>
     */
    inline GetBulkPublishDetailsResult& WithBulkPublishStatus(BulkPublishStatus&& value) { SetBulkPublishStatus(std::move(value)); return *this;}


    /**
     * If BulkPublishStatus is FAILED this field will contain the error message that
     * caused the bulk publish to fail.
     */
    inline const Aws::String& GetFailureMessage() const{ return m_failureMessage; }

    /**
     * If BulkPublishStatus is FAILED this field will contain the error message that
     * caused the bulk publish to fail.
     */
    inline void SetFailureMessage(const Aws::String& value) { m_failureMessage = value; }

    /**
     * If BulkPublishStatus is FAILED this field will contain the error message that
     * caused the bulk publish to fail.
     */
    inline void SetFailureMessage(Aws::String&& value) { m_failureMessage = std::move(value); }

    /**
     * If BulkPublishStatus is FAILED this field will contain the error message that
     * caused the bulk publish to fail.
     */
    inline void SetFailureMessage(const char* value) { m_failureMessage.assign(value); }

    /**
     * If BulkPublishStatus is FAILED this field will contain the error message that
     * caused the bulk publish to fail.
     */
    inline GetBulkPublishDetailsResult& WithFailureMessage(const Aws::String& value) { SetFailureMessage(value); return *this;}

    /**
     * If BulkPublishStatus is FAILED this field will contain the error message that
     * caused the bulk publish to fail.
     */
    inline GetBulkPublishDetailsResult& WithFailureMessage(Aws::String&& value) { SetFailureMessage(std::move(value)); return *this;}

    /**
     * If BulkPublishStatus is FAILED this field will contain the error message that
     * caused the bulk publish to fail.
     */
    inline GetBulkPublishDetailsResult& WithFailureMessage(const char* value) { SetFailureMessage(value); return *this;}

  private:

    Aws::String m_identityPoolId;

    Aws::Utils::DateTime m_bulkPublishStartTime;

    Aws::Utils::DateTime m_bulkPublishCompleteTime;

    BulkPublishStatus m_bulkPublishStatus;

    Aws::String m_failureMessage;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
