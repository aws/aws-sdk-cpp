/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{
  class GetEnvironmentCredentialsResult
  {
  public:
    AWS_DATAZONE_API GetEnvironmentCredentialsResult();
    AWS_DATAZONE_API GetEnvironmentCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetEnvironmentCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The access key ID of the environment.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyId = value; }
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyId = std::move(value); }
    inline void SetAccessKeyId(const char* value) { m_accessKeyId.assign(value); }
    inline GetEnvironmentCredentialsResult& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}
    inline GetEnvironmentCredentialsResult& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}
    inline GetEnvironmentCredentialsResult& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration timestamp of the environment credentials.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const{ return m_expiration; }
    inline void SetExpiration(const Aws::Utils::DateTime& value) { m_expiration = value; }
    inline void SetExpiration(Aws::Utils::DateTime&& value) { m_expiration = std::move(value); }
    inline GetEnvironmentCredentialsResult& WithExpiration(const Aws::Utils::DateTime& value) { SetExpiration(value); return *this;}
    inline GetEnvironmentCredentialsResult& WithExpiration(Aws::Utils::DateTime&& value) { SetExpiration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The secret access key of the environment credentials.</p>
     */
    inline const Aws::String& GetSecretAccessKey() const{ return m_secretAccessKey; }
    inline void SetSecretAccessKey(const Aws::String& value) { m_secretAccessKey = value; }
    inline void SetSecretAccessKey(Aws::String&& value) { m_secretAccessKey = std::move(value); }
    inline void SetSecretAccessKey(const char* value) { m_secretAccessKey.assign(value); }
    inline GetEnvironmentCredentialsResult& WithSecretAccessKey(const Aws::String& value) { SetSecretAccessKey(value); return *this;}
    inline GetEnvironmentCredentialsResult& WithSecretAccessKey(Aws::String&& value) { SetSecretAccessKey(std::move(value)); return *this;}
    inline GetEnvironmentCredentialsResult& WithSecretAccessKey(const char* value) { SetSecretAccessKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session token of the environment credentials.</p>
     */
    inline const Aws::String& GetSessionToken() const{ return m_sessionToken; }
    inline void SetSessionToken(const Aws::String& value) { m_sessionToken = value; }
    inline void SetSessionToken(Aws::String&& value) { m_sessionToken = std::move(value); }
    inline void SetSessionToken(const char* value) { m_sessionToken.assign(value); }
    inline GetEnvironmentCredentialsResult& WithSessionToken(const Aws::String& value) { SetSessionToken(value); return *this;}
    inline GetEnvironmentCredentialsResult& WithSessionToken(Aws::String&& value) { SetSessionToken(std::move(value)); return *this;}
    inline GetEnvironmentCredentialsResult& WithSessionToken(const char* value) { SetSessionToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetEnvironmentCredentialsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetEnvironmentCredentialsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetEnvironmentCredentialsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_accessKeyId;

    Aws::Utils::DateTime m_expiration;

    Aws::String m_secretAccessKey;

    Aws::String m_sessionToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
