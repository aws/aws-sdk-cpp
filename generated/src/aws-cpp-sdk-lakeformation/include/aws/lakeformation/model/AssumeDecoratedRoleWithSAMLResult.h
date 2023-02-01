/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace LakeFormation
{
namespace Model
{
  class AssumeDecoratedRoleWithSAMLResult
  {
  public:
    AWS_LAKEFORMATION_API AssumeDecoratedRoleWithSAMLResult();
    AWS_LAKEFORMATION_API AssumeDecoratedRoleWithSAMLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API AssumeDecoratedRoleWithSAMLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The access key ID for the temporary credentials. (The access key consists of
     * an access key ID and a secret key).</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * <p>The access key ID for the temporary credentials. (The access key consists of
     * an access key ID and a secret key).</p>
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyId = value; }

    /**
     * <p>The access key ID for the temporary credentials. (The access key consists of
     * an access key ID and a secret key).</p>
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyId = std::move(value); }

    /**
     * <p>The access key ID for the temporary credentials. (The access key consists of
     * an access key ID and a secret key).</p>
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyId.assign(value); }

    /**
     * <p>The access key ID for the temporary credentials. (The access key consists of
     * an access key ID and a secret key).</p>
     */
    inline AssumeDecoratedRoleWithSAMLResult& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The access key ID for the temporary credentials. (The access key consists of
     * an access key ID and a secret key).</p>
     */
    inline AssumeDecoratedRoleWithSAMLResult& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}

    /**
     * <p>The access key ID for the temporary credentials. (The access key consists of
     * an access key ID and a secret key).</p>
     */
    inline AssumeDecoratedRoleWithSAMLResult& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}


    /**
     * <p>The secret key for the temporary credentials. (The access key consists of an
     * access key ID and a secret key).</p>
     */
    inline const Aws::String& GetSecretAccessKey() const{ return m_secretAccessKey; }

    /**
     * <p>The secret key for the temporary credentials. (The access key consists of an
     * access key ID and a secret key).</p>
     */
    inline void SetSecretAccessKey(const Aws::String& value) { m_secretAccessKey = value; }

    /**
     * <p>The secret key for the temporary credentials. (The access key consists of an
     * access key ID and a secret key).</p>
     */
    inline void SetSecretAccessKey(Aws::String&& value) { m_secretAccessKey = std::move(value); }

    /**
     * <p>The secret key for the temporary credentials. (The access key consists of an
     * access key ID and a secret key).</p>
     */
    inline void SetSecretAccessKey(const char* value) { m_secretAccessKey.assign(value); }

    /**
     * <p>The secret key for the temporary credentials. (The access key consists of an
     * access key ID and a secret key).</p>
     */
    inline AssumeDecoratedRoleWithSAMLResult& WithSecretAccessKey(const Aws::String& value) { SetSecretAccessKey(value); return *this;}

    /**
     * <p>The secret key for the temporary credentials. (The access key consists of an
     * access key ID and a secret key).</p>
     */
    inline AssumeDecoratedRoleWithSAMLResult& WithSecretAccessKey(Aws::String&& value) { SetSecretAccessKey(std::move(value)); return *this;}

    /**
     * <p>The secret key for the temporary credentials. (The access key consists of an
     * access key ID and a secret key).</p>
     */
    inline AssumeDecoratedRoleWithSAMLResult& WithSecretAccessKey(const char* value) { SetSecretAccessKey(value); return *this;}


    /**
     * <p>The session token for the temporary credentials.</p>
     */
    inline const Aws::String& GetSessionToken() const{ return m_sessionToken; }

    /**
     * <p>The session token for the temporary credentials.</p>
     */
    inline void SetSessionToken(const Aws::String& value) { m_sessionToken = value; }

    /**
     * <p>The session token for the temporary credentials.</p>
     */
    inline void SetSessionToken(Aws::String&& value) { m_sessionToken = std::move(value); }

    /**
     * <p>The session token for the temporary credentials.</p>
     */
    inline void SetSessionToken(const char* value) { m_sessionToken.assign(value); }

    /**
     * <p>The session token for the temporary credentials.</p>
     */
    inline AssumeDecoratedRoleWithSAMLResult& WithSessionToken(const Aws::String& value) { SetSessionToken(value); return *this;}

    /**
     * <p>The session token for the temporary credentials.</p>
     */
    inline AssumeDecoratedRoleWithSAMLResult& WithSessionToken(Aws::String&& value) { SetSessionToken(std::move(value)); return *this;}

    /**
     * <p>The session token for the temporary credentials.</p>
     */
    inline AssumeDecoratedRoleWithSAMLResult& WithSessionToken(const char* value) { SetSessionToken(value); return *this;}


    /**
     * <p>The date and time when the temporary credentials expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const{ return m_expiration; }

    /**
     * <p>The date and time when the temporary credentials expire.</p>
     */
    inline void SetExpiration(const Aws::Utils::DateTime& value) { m_expiration = value; }

    /**
     * <p>The date and time when the temporary credentials expire.</p>
     */
    inline void SetExpiration(Aws::Utils::DateTime&& value) { m_expiration = std::move(value); }

    /**
     * <p>The date and time when the temporary credentials expire.</p>
     */
    inline AssumeDecoratedRoleWithSAMLResult& WithExpiration(const Aws::Utils::DateTime& value) { SetExpiration(value); return *this;}

    /**
     * <p>The date and time when the temporary credentials expire.</p>
     */
    inline AssumeDecoratedRoleWithSAMLResult& WithExpiration(Aws::Utils::DateTime&& value) { SetExpiration(std::move(value)); return *this;}

  private:

    Aws::String m_accessKeyId;

    Aws::String m_secretAccessKey;

    Aws::String m_sessionToken;

    Aws::Utils::DateTime m_expiration;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
