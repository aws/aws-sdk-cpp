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
    AWS_COGNITOSYNC_API SetIdentityPoolConfigurationRequest();

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
    inline const Aws::String& GetIdentityPoolId() const{ return m_identityPoolId; }
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }
    inline void SetIdentityPoolId(const Aws::String& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = value; }
    inline void SetIdentityPoolId(Aws::String&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::move(value); }
    inline void SetIdentityPoolId(const char* value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId.assign(value); }
    inline SetIdentityPoolConfigurationRequest& WithIdentityPoolId(const Aws::String& value) { SetIdentityPoolId(value); return *this;}
    inline SetIdentityPoolConfigurationRequest& WithIdentityPoolId(Aws::String&& value) { SetIdentityPoolId(std::move(value)); return *this;}
    inline SetIdentityPoolConfigurationRequest& WithIdentityPoolId(const char* value) { SetIdentityPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to apply to this identity pool for push synchronization.</p>
     */
    inline const PushSync& GetPushSync() const{ return m_pushSync; }
    inline bool PushSyncHasBeenSet() const { return m_pushSyncHasBeenSet; }
    inline void SetPushSync(const PushSync& value) { m_pushSyncHasBeenSet = true; m_pushSync = value; }
    inline void SetPushSync(PushSync&& value) { m_pushSyncHasBeenSet = true; m_pushSync = std::move(value); }
    inline SetIdentityPoolConfigurationRequest& WithPushSync(const PushSync& value) { SetPushSync(value); return *this;}
    inline SetIdentityPoolConfigurationRequest& WithPushSync(PushSync&& value) { SetPushSync(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Options to apply to this identity pool for Amazon Cognito streams.
     */
    inline const CognitoStreams& GetCognitoStreams() const{ return m_cognitoStreams; }
    inline bool CognitoStreamsHasBeenSet() const { return m_cognitoStreamsHasBeenSet; }
    inline void SetCognitoStreams(const CognitoStreams& value) { m_cognitoStreamsHasBeenSet = true; m_cognitoStreams = value; }
    inline void SetCognitoStreams(CognitoStreams&& value) { m_cognitoStreamsHasBeenSet = true; m_cognitoStreams = std::move(value); }
    inline SetIdentityPoolConfigurationRequest& WithCognitoStreams(const CognitoStreams& value) { SetCognitoStreams(value); return *this;}
    inline SetIdentityPoolConfigurationRequest& WithCognitoStreams(CognitoStreams&& value) { SetCognitoStreams(std::move(value)); return *this;}
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
