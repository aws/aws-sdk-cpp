﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The output for the GetIdentityPoolConfiguration operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/GetIdentityPoolConfigurationResponse">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOSYNC_API GetIdentityPoolConfigurationResult
  {
  public:
    GetIdentityPoolConfigurationResult();
    GetIdentityPoolConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetIdentityPoolConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline GetIdentityPoolConfigurationResult& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}

    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito.</p>
     */
    inline GetIdentityPoolConfigurationResult& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}

    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito.</p>
     */
    inline GetIdentityPoolConfigurationResult& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}


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
    inline GetIdentityPoolConfigurationResult& WithPushSync(const PushSync& value) { SetPushSync(value); return *this;}

    /**
     * <p>Options to apply to this identity pool for push synchronization.</p>
     */
    inline GetIdentityPoolConfigurationResult& WithPushSync(PushSync&& value) { SetPushSync(std::move(value)); return *this;}


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
    inline GetIdentityPoolConfigurationResult& WithCognitoStreams(const CognitoStreams& value) { SetCognitoStreams(value); return *this;}

    /**
     * Options to apply to this identity pool for Amazon Cognito streams.
     */
    inline GetIdentityPoolConfigurationResult& WithCognitoStreams(CognitoStreams&& value) { SetCognitoStreams(std::move(value)); return *this;}

  private:

    Aws::String m_identityPoolId;

    PushSync m_pushSync;

    CognitoStreams m_cognitoStreams;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
