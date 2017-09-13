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
#include <aws/cognito-sync/model/PushSync.h>
#include <aws/cognito-sync/model/CognitoStreams.h>
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
   * <p>The output for the SetIdentityPoolConfiguration operation</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/SetIdentityPoolConfigurationResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOSYNC_API SetIdentityPoolConfigurationResult
  {
  public:
    SetIdentityPoolConfigurationResult();
    SetIdentityPoolConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    SetIdentityPoolConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }

    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito.</p>
     */
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolId = value; }

    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito.</p>
     */
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolId = std::move(value); }

    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito.</p>
     */
    inline void SetIdentityPoolId(const char* value) { m_identityPoolId.assign(value); }

    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito.</p>
     */
    inline SetIdentityPoolConfigurationResult& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito.</p>
     */
    inline SetIdentityPoolConfigurationResult& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}

    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito.</p>
     */
    inline SetIdentityPoolConfigurationResult& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}


    /**
     * <p>Options to apply to this identity pool for push synchronization.</p>
     */
    inline const PushSync& GetPushSync() const{ return m_pushSync; }

    /**
     * <p>Options to apply to this identity pool for push synchronization.</p>
     */
    inline void SetPushSync(const PushSync& value) { m_pushSync = value; }

    /**
     * <p>Options to apply to this identity pool for push synchronization.</p>
     */
    inline void SetPushSync(PushSync&& value) { m_pushSync = std::move(value); }

    /**
     * <p>Options to apply to this identity pool for push synchronization.</p>
     */
    inline SetIdentityPoolConfigurationResult& WithPushSync(const PushSync& value) { SetPushSync(value); return *this;}

    /**
     * <p>Options to apply to this identity pool for push synchronization.</p>
     */
    inline SetIdentityPoolConfigurationResult& WithPushSync(PushSync&& value) { SetPushSync(std::move(value)); return *this;}


    /**
     * Options to apply to this identity pool for Amazon Cognito streams.
     */
    inline const CognitoStreams& GetCognitoStreams() const{ return m_cognitoStreams; }

    /**
     * Options to apply to this identity pool for Amazon Cognito streams.
     */
    inline void SetCognitoStreams(const CognitoStreams& value) { m_cognitoStreams = value; }

    /**
     * Options to apply to this identity pool for Amazon Cognito streams.
     */
    inline void SetCognitoStreams(CognitoStreams&& value) { m_cognitoStreams = std::move(value); }

    /**
     * Options to apply to this identity pool for Amazon Cognito streams.
     */
    inline SetIdentityPoolConfigurationResult& WithCognitoStreams(const CognitoStreams& value) { SetCognitoStreams(value); return *this;}

    /**
     * Options to apply to this identity pool for Amazon Cognito streams.
     */
    inline SetIdentityPoolConfigurationResult& WithCognitoStreams(CognitoStreams&& value) { SetCognitoStreams(std::move(value)); return *this;}

  private:

    Aws::String m_identityPoolId;

    PushSync m_pushSync;

    CognitoStreams m_cognitoStreams;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
