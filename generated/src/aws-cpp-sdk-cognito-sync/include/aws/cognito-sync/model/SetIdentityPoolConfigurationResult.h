/**
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
   * <p>The output for the SetIdentityPoolConfiguration operation</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/SetIdentityPoolConfigurationResponse">AWS
   * API Reference</a></p>
   */
  class SetIdentityPoolConfigurationResult
  {
  public:
    AWS_COGNITOSYNC_API SetIdentityPoolConfigurationResult() = default;
    AWS_COGNITOSYNC_API SetIdentityPoolConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOSYNC_API SetIdentityPoolConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const { return m_identityPoolId; }
    template<typename IdentityPoolIdT = Aws::String>
    void SetIdentityPoolId(IdentityPoolIdT&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::forward<IdentityPoolIdT>(value); }
    template<typename IdentityPoolIdT = Aws::String>
    SetIdentityPoolConfigurationResult& WithIdentityPoolId(IdentityPoolIdT&& value) { SetIdentityPoolId(std::forward<IdentityPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to apply to this identity pool for push synchronization.</p>
     */
    inline const PushSync& GetPushSync() const { return m_pushSync; }
    template<typename PushSyncT = PushSync>
    void SetPushSync(PushSyncT&& value) { m_pushSyncHasBeenSet = true; m_pushSync = std::forward<PushSyncT>(value); }
    template<typename PushSyncT = PushSync>
    SetIdentityPoolConfigurationResult& WithPushSync(PushSyncT&& value) { SetPushSync(std::forward<PushSyncT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Options to apply to this identity pool for Amazon Cognito streams.
     */
    inline const CognitoStreams& GetCognitoStreams() const { return m_cognitoStreams; }
    template<typename CognitoStreamsT = CognitoStreams>
    void SetCognitoStreams(CognitoStreamsT&& value) { m_cognitoStreamsHasBeenSet = true; m_cognitoStreams = std::forward<CognitoStreamsT>(value); }
    template<typename CognitoStreamsT = CognitoStreams>
    SetIdentityPoolConfigurationResult& WithCognitoStreams(CognitoStreamsT&& value) { SetCognitoStreams(std::forward<CognitoStreamsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SetIdentityPoolConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet = false;

    PushSync m_pushSync;
    bool m_pushSyncHasBeenSet = false;

    CognitoStreams m_cognitoStreams;
    bool m_cognitoStreamsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
