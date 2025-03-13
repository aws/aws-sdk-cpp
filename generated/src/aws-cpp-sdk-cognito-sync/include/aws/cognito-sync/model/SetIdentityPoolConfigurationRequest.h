/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/cognito-sync/CognitoSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-sync/model/PushSync.h>
#include <aws/cognito-sync/model/CognitoStreams.h>
#include <utility>

namespace Aws
{
namespace CognitoSync
{
namespace Model
{

  /**
   * <p>The input for the SetIdentityPoolConfiguration operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/SetIdentityPoolConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class SetIdentityPoolConfigurationRequest : public CognitoSyncRequest
  {
  public:
    AWS_COGNITOSYNC_API SetIdentityPoolConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetIdentityPoolConfiguration"; }

    AWS_COGNITOSYNC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A name-spaced GUID (for example,
     * us-east-1:23EC4050-6AEA-7089-A2DD-08002EXAMPLE) created by Amazon Cognito. This
     * is the ID of the pool to modify.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const { return m_identityPoolId; }
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }
    template<typename IdentityPoolIdT = Aws::String>
    void SetIdentityPoolId(IdentityPoolIdT&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::forward<IdentityPoolIdT>(value); }
    template<typename IdentityPoolIdT = Aws::String>
    SetIdentityPoolConfigurationRequest& WithIdentityPoolId(IdentityPoolIdT&& value) { SetIdentityPoolId(std::forward<IdentityPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to apply to this identity pool for push synchronization.</p>
     */
    inline const PushSync& GetPushSync() const { return m_pushSync; }
    inline bool PushSyncHasBeenSet() const { return m_pushSyncHasBeenSet; }
    template<typename PushSyncT = PushSync>
    void SetPushSync(PushSyncT&& value) { m_pushSyncHasBeenSet = true; m_pushSync = std::forward<PushSyncT>(value); }
    template<typename PushSyncT = PushSync>
    SetIdentityPoolConfigurationRequest& WithPushSync(PushSyncT&& value) { SetPushSync(std::forward<PushSyncT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Options to apply to this identity pool for Amazon Cognito streams.
     */
    inline const CognitoStreams& GetCognitoStreams() const { return m_cognitoStreams; }
    inline bool CognitoStreamsHasBeenSet() const { return m_cognitoStreamsHasBeenSet; }
    template<typename CognitoStreamsT = CognitoStreams>
    void SetCognitoStreams(CognitoStreamsT&& value) { m_cognitoStreamsHasBeenSet = true; m_cognitoStreams = std::forward<CognitoStreamsT>(value); }
    template<typename CognitoStreamsT = CognitoStreams>
    SetIdentityPoolConfigurationRequest& WithCognitoStreams(CognitoStreamsT&& value) { SetCognitoStreams(std::forward<CognitoStreamsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet = false;

    PushSync m_pushSync;
    bool m_pushSyncHasBeenSet = false;

    CognitoStreams m_cognitoStreams;
    bool m_cognitoStreamsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
