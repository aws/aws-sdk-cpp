/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>Amazon Web Services account security credentials that allow interactions with
   * Amazon GameLift Servers resources. The credentials are temporary and valid for a
   * limited time span. You can request fresh credentials at any time. </p> <p>
   * Amazon Web Services security credentials consist of three parts: an access key
   * ID, a secret access key, and a session token. You must use all three parts
   * together to authenticate your access requests.</p> <p>You need Amazon Web
   * Services credentials for the following tasks: </p> <ul> <li> <p>To upload a game
   * server build directly to Amazon GameLift Servers S3 storage using
   * <code>CreateBuild</code>. To get access for this task, call <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_RequestUploadCredentials.html">https://docs.aws.amazon.com/gamelift/latest/apireference/API_RequestUploadCredentials.html</a>.</p>
   * </li> <li> <p>To remotely connect to an active Amazon GameLift Servers fleet
   * instances. To get remote access, call <a
   * href="https://docs.aws.amazon.com/gamelift/latest/apireference/API_GetComputeAccess.html">https://docs.aws.amazon.com/gamelift/latest/apireference/API_GetComputeAccess.html</a>.</p>
   * </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/AwsCredentials">AWS
   * API Reference</a></p>
   */
  class AwsCredentials
  {
  public:
    AWS_GAMELIFT_API AwsCredentials() = default;
    AWS_GAMELIFT_API AwsCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API AwsCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The access key ID that identifies the temporary security credentials. </p>
     */
    inline const Aws::String& GetAccessKeyId() const { return m_accessKeyId; }
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }
    template<typename AccessKeyIdT = Aws::String>
    void SetAccessKeyId(AccessKeyIdT&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::forward<AccessKeyIdT>(value); }
    template<typename AccessKeyIdT = Aws::String>
    AwsCredentials& WithAccessKeyId(AccessKeyIdT&& value) { SetAccessKeyId(std::forward<AccessKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret access key that can be used to sign requests.</p>
     */
    inline const Aws::String& GetSecretAccessKey() const { return m_secretAccessKey; }
    inline bool SecretAccessKeyHasBeenSet() const { return m_secretAccessKeyHasBeenSet; }
    template<typename SecretAccessKeyT = Aws::String>
    void SetSecretAccessKey(SecretAccessKeyT&& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = std::forward<SecretAccessKeyT>(value); }
    template<typename SecretAccessKeyT = Aws::String>
    AwsCredentials& WithSecretAccessKey(SecretAccessKeyT&& value) { SetSecretAccessKey(std::forward<SecretAccessKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token that users must pass to the service API to use the temporary
     * credentials. </p>
     */
    inline const Aws::String& GetSessionToken() const { return m_sessionToken; }
    inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }
    template<typename SessionTokenT = Aws::String>
    void SetSessionToken(SessionTokenT&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::forward<SessionTokenT>(value); }
    template<typename SessionTokenT = Aws::String>
    AwsCredentials& WithSessionToken(SessionTokenT&& value) { SetSessionToken(std::forward<SessionTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;

    Aws::String m_secretAccessKey;
    bool m_secretAccessKeyHasBeenSet = false;

    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
