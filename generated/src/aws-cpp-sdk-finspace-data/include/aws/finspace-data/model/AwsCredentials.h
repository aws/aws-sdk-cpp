/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace-data/FinSpaceData_EXPORTS.h>
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
namespace FinSpaceData
{
namespace Model
{

  /**
   * <p> The credentials required to access the external Dataview from the S3
   * location.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2020-07-13/AwsCredentials">AWS
   * API Reference</a></p>
   */
  class AwsCredentials
  {
  public:
    AWS_FINSPACEDATA_API AwsCredentials();
    AWS_FINSPACEDATA_API AwsCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API AwsCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The unique identifier for the security credentials.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * <p> The unique identifier for the security credentials.</p>
     */
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }

    /**
     * <p> The unique identifier for the security credentials.</p>
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p> The unique identifier for the security credentials.</p>
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }

    /**
     * <p> The unique identifier for the security credentials.</p>
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    /**
     * <p> The unique identifier for the security credentials.</p>
     */
    inline AwsCredentials& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p> The unique identifier for the security credentials.</p>
     */
    inline AwsCredentials& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}

    /**
     * <p> The unique identifier for the security credentials.</p>
     */
    inline AwsCredentials& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}


    /**
     * <p> The secret access key that can be used to sign requests.</p>
     */
    inline const Aws::String& GetSecretAccessKey() const{ return m_secretAccessKey; }

    /**
     * <p> The secret access key that can be used to sign requests.</p>
     */
    inline bool SecretAccessKeyHasBeenSet() const { return m_secretAccessKeyHasBeenSet; }

    /**
     * <p> The secret access key that can be used to sign requests.</p>
     */
    inline void SetSecretAccessKey(const Aws::String& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = value; }

    /**
     * <p> The secret access key that can be used to sign requests.</p>
     */
    inline void SetSecretAccessKey(Aws::String&& value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey = std::move(value); }

    /**
     * <p> The secret access key that can be used to sign requests.</p>
     */
    inline void SetSecretAccessKey(const char* value) { m_secretAccessKeyHasBeenSet = true; m_secretAccessKey.assign(value); }

    /**
     * <p> The secret access key that can be used to sign requests.</p>
     */
    inline AwsCredentials& WithSecretAccessKey(const Aws::String& value) { SetSecretAccessKey(value); return *this;}

    /**
     * <p> The secret access key that can be used to sign requests.</p>
     */
    inline AwsCredentials& WithSecretAccessKey(Aws::String&& value) { SetSecretAccessKey(std::move(value)); return *this;}

    /**
     * <p> The secret access key that can be used to sign requests.</p>
     */
    inline AwsCredentials& WithSecretAccessKey(const char* value) { SetSecretAccessKey(value); return *this;}


    /**
     * <p> The token that users must pass to use the credentials.</p>
     */
    inline const Aws::String& GetSessionToken() const{ return m_sessionToken; }

    /**
     * <p> The token that users must pass to use the credentials.</p>
     */
    inline bool SessionTokenHasBeenSet() const { return m_sessionTokenHasBeenSet; }

    /**
     * <p> The token that users must pass to use the credentials.</p>
     */
    inline void SetSessionToken(const Aws::String& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = value; }

    /**
     * <p> The token that users must pass to use the credentials.</p>
     */
    inline void SetSessionToken(Aws::String&& value) { m_sessionTokenHasBeenSet = true; m_sessionToken = std::move(value); }

    /**
     * <p> The token that users must pass to use the credentials.</p>
     */
    inline void SetSessionToken(const char* value) { m_sessionTokenHasBeenSet = true; m_sessionToken.assign(value); }

    /**
     * <p> The token that users must pass to use the credentials.</p>
     */
    inline AwsCredentials& WithSessionToken(const Aws::String& value) { SetSessionToken(value); return *this;}

    /**
     * <p> The token that users must pass to use the credentials.</p>
     */
    inline AwsCredentials& WithSessionToken(Aws::String&& value) { SetSessionToken(std::move(value)); return *this;}

    /**
     * <p> The token that users must pass to use the credentials.</p>
     */
    inline AwsCredentials& WithSessionToken(const char* value) { SetSessionToken(value); return *this;}


    /**
     * <p> The Epoch time when the current credentials expire.</p>
     */
    inline long long GetExpiration() const{ return m_expiration; }

    /**
     * <p> The Epoch time when the current credentials expire.</p>
     */
    inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }

    /**
     * <p> The Epoch time when the current credentials expire.</p>
     */
    inline void SetExpiration(long long value) { m_expirationHasBeenSet = true; m_expiration = value; }

    /**
     * <p> The Epoch time when the current credentials expire.</p>
     */
    inline AwsCredentials& WithExpiration(long long value) { SetExpiration(value); return *this;}

  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;

    Aws::String m_secretAccessKey;
    bool m_secretAccessKeyHasBeenSet = false;

    Aws::String m_sessionToken;
    bool m_sessionTokenHasBeenSet = false;

    long long m_expiration;
    bool m_expirationHasBeenSet = false;
  };

} // namespace Model
} // namespace FinSpaceData
} // namespace Aws
