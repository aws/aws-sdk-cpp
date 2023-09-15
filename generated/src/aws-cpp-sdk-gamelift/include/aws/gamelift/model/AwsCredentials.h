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
   * Amazon GameLift resources. The credentials are temporary and valid for a limited
   * time span. You can request fresh credentials at any time. </p> <p> Amazon Web
   * Services security credentials consist of three parts: an access key ID, a secret
   * access key, and a session token. You must use all three parts together to
   * authenticate your access requests.</p> <p>You need Amazon Web Services
   * credentials for the following tasks: </p> <ul> <li> <p>To upload a game server
   * build directly to Amazon GameLift S3 storage using <code>CreateBuild</code>. To
   * get access for this task, call <a>RequestUploadCredentials</a>.</p> </li> <li>
   * <p>To remotely connect to an active Amazon GameLift fleet instances. To get
   * remote access, call <a>GetComputeAccess</a>.</p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/AwsCredentials">AWS
   * API Reference</a></p>
   */
  class AwsCredentials
  {
  public:
    AWS_GAMELIFT_API AwsCredentials();
    AWS_GAMELIFT_API AwsCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API AwsCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The access key ID that identifies the temporary security credentials. </p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * <p>The access key ID that identifies the temporary security credentials. </p>
     */
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }

    /**
     * <p>The access key ID that identifies the temporary security credentials. </p>
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p>The access key ID that identifies the temporary security credentials. </p>
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }

    /**
     * <p>The access key ID that identifies the temporary security credentials. </p>
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    /**
     * <p>The access key ID that identifies the temporary security credentials. </p>
     */
    inline AwsCredentials& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The access key ID that identifies the temporary security credentials. </p>
     */
    inline AwsCredentials& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}

    /**
     * <p>The access key ID that identifies the temporary security credentials. </p>
     */
    inline AwsCredentials& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}


    /**
     * <p>The secret access key that can be used to sign requests.</p>
     */
    inline const Aws::String& GetSecretAccessKey() const{ return m_secretAccessKey; }

    /**
     * <p>The secret access key that can be used to sign requests.</p>
     */
    inline bool SecretAccessKeyHasBeenSet() const { return m_secretAccessKeyHasBeenSet; }

    /**
     * <p>The secret access key that can be used to sign requests.</p>
     */
    inline void SetSecretAccessKey(const Aws::String& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = value; }

    /**
     * <p>The secret access key that can be used to sign requests.</p>
     */
    inline void SetSecretAccessKey(Aws::String&& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = std::move(value); }

    /**
     * <p>The secret access key that can be used to sign requests.</p>
     */
    inline void SetSecretAccessKey(const char* value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey.assign(value); }

    /**
     * <p>The secret access key that can be used to sign requests.</p>
     */
    inline AwsCredentials& WithSecretAccessKey(const Aws::String& value) { SetSecretAccessKey(value); return *this;}

    /**
     * <p>The secret access key that can be used to sign requests.</p>
     */
    inline AwsCredentials& WithSecretAccessKey(Aws::String&& value) { SetSecretAccessKey(std::move(value)); return *this;}

    /**
     * <p>The secret access key that can be used to sign requests.</p>
     */
    inline AwsCredentials& WithSecretAccessKey(const char* value) { SetSecretAccessKey(value); return *this;}


    /**
     * <p>The token that users must pass to the service API to use the temporary
     * credentials. </p>
     */
    inline const Aws::String& GetSessionToken() const{ return m_sessionToken; }

    /**
     * <p>The token that users must pass to the service API to use the temporary
     * credentials. </p>
     */
    inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }

    /**
     * <p>The token that users must pass to the service API to use the temporary
     * credentials. </p>
     */
    inline void SetSessionToken(const Aws::String& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = value; }

    /**
     * <p>The token that users must pass to the service API to use the temporary
     * credentials. </p>
     */
    inline void SetSessionToken(Aws::String&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::move(value); }

    /**
     * <p>The token that users must pass to the service API to use the temporary
     * credentials. </p>
     */
    inline void SetSessionToken(const char* value) { m_sessionTokenHasBeenSet = true; m_sessionToken.assign(value); }

    /**
     * <p>The token that users must pass to the service API to use the temporary
     * credentials. </p>
     */
    inline AwsCredentials& WithSessionToken(const Aws::String& value) { SetSessionToken(value); return *this;}

    /**
     * <p>The token that users must pass to the service API to use the temporary
     * credentials. </p>
     */
    inline AwsCredentials& WithSessionToken(Aws::String&& value) { SetSessionToken(std::move(value)); return *this;}

    /**
     * <p>The token that users must pass to the service API to use the temporary
     * credentials. </p>
     */
    inline AwsCredentials& WithSessionToken(const char* value) { SetSessionToken(value); return *this;}

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
