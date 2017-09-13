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
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>Temporary access credentials used for uploading game build files to Amazon
   * GameLift. They are valid for a limited time. If they expire before you upload
   * your game build, get a new set by calling
   * <a>RequestUploadCredentials</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/AwsCredentials">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API AwsCredentials
  {
  public:
    AwsCredentials();
    AwsCredentials(const Aws::Utils::Json::JsonValue& jsonValue);
    AwsCredentials& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Temporary key allowing access to the Amazon GameLift S3 account.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * <p>Temporary key allowing access to the Amazon GameLift S3 account.</p>
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p>Temporary key allowing access to the Amazon GameLift S3 account.</p>
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }

    /**
     * <p>Temporary key allowing access to the Amazon GameLift S3 account.</p>
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    /**
     * <p>Temporary key allowing access to the Amazon GameLift S3 account.</p>
     */
    inline AwsCredentials& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>Temporary key allowing access to the Amazon GameLift S3 account.</p>
     */
    inline AwsCredentials& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}

    /**
     * <p>Temporary key allowing access to the Amazon GameLift S3 account.</p>
     */
    inline AwsCredentials& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}


    /**
     * <p>Temporary secret key allowing access to the Amazon GameLift S3 account.</p>
     */
    inline const Aws::String& GetSecretAccessKey() const{ return m_secretAccessKey; }

    /**
     * <p>Temporary secret key allowing access to the Amazon GameLift S3 account.</p>
     */
    inline void SetSecretAccessKey(const Aws::String& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = value; }

    /**
     * <p>Temporary secret key allowing access to the Amazon GameLift S3 account.</p>
     */
    inline void SetSecretAccessKey(Aws::String&& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = std::move(value); }

    /**
     * <p>Temporary secret key allowing access to the Amazon GameLift S3 account.</p>
     */
    inline void SetSecretAccessKey(const char* value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey.assign(value); }

    /**
     * <p>Temporary secret key allowing access to the Amazon GameLift S3 account.</p>
     */
    inline AwsCredentials& WithSecretAccessKey(const Aws::String& value) { SetSecretAccessKey(value); return *this;}

    /**
     * <p>Temporary secret key allowing access to the Amazon GameLift S3 account.</p>
     */
    inline AwsCredentials& WithSecretAccessKey(Aws::String&& value) { SetSecretAccessKey(std::move(value)); return *this;}

    /**
     * <p>Temporary secret key allowing access to the Amazon GameLift S3 account.</p>
     */
    inline AwsCredentials& WithSecretAccessKey(const char* value) { SetSecretAccessKey(value); return *this;}


    /**
     * <p>Token used to associate a specific build ID with the files uploaded using
     * these credentials.</p>
     */
    inline const Aws::String& GetSessionToken() const{ return m_sessionToken; }

    /**
     * <p>Token used to associate a specific build ID with the files uploaded using
     * these credentials.</p>
     */
    inline void SetSessionToken(const Aws::String& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = value; }

    /**
     * <p>Token used to associate a specific build ID with the files uploaded using
     * these credentials.</p>
     */
    inline void SetSessionToken(Aws::String&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::move(value); }

    /**
     * <p>Token used to associate a specific build ID with the files uploaded using
     * these credentials.</p>
     */
    inline void SetSessionToken(const char* value) { m_sessionTokenHasBeenSet = true; m_sessionToken.assign(value); }

    /**
     * <p>Token used to associate a specific build ID with the files uploaded using
     * these credentials.</p>
     */
    inline AwsCredentials& WithSessionToken(const Aws::String& value) { SetSessionToken(value); return *this;}

    /**
     * <p>Token used to associate a specific build ID with the files uploaded using
     * these credentials.</p>
     */
    inline AwsCredentials& WithSessionToken(Aws::String&& value) { SetSessionToken(std::move(value)); return *this;}

    /**
     * <p>Token used to associate a specific build ID with the files uploaded using
     * these credentials.</p>
     */
    inline AwsCredentials& WithSessionToken(const char* value) { SetSessionToken(value); return *this;}

  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet;

    Aws::String m_secretAccessKey;
    bool m_secretAccessKeyHasBeenSet;

    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
