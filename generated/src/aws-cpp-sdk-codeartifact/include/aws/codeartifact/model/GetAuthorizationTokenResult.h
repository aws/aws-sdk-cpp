/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
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
namespace CodeArtifact
{
namespace Model
{
  class GetAuthorizationTokenResult
  {
  public:
    AWS_CODEARTIFACT_API GetAuthorizationTokenResult();
    AWS_CODEARTIFACT_API GetAuthorizationTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEARTIFACT_API GetAuthorizationTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The returned authentication token. </p>
     */
    inline const Aws::String& GetAuthorizationToken() const{ return m_authorizationToken; }

    /**
     * <p> The returned authentication token. </p>
     */
    inline void SetAuthorizationToken(const Aws::String& value) { m_authorizationToken = value; }

    /**
     * <p> The returned authentication token. </p>
     */
    inline void SetAuthorizationToken(Aws::String&& value) { m_authorizationToken = std::move(value); }

    /**
     * <p> The returned authentication token. </p>
     */
    inline void SetAuthorizationToken(const char* value) { m_authorizationToken.assign(value); }

    /**
     * <p> The returned authentication token. </p>
     */
    inline GetAuthorizationTokenResult& WithAuthorizationToken(const Aws::String& value) { SetAuthorizationToken(value); return *this;}

    /**
     * <p> The returned authentication token. </p>
     */
    inline GetAuthorizationTokenResult& WithAuthorizationToken(Aws::String&& value) { SetAuthorizationToken(std::move(value)); return *this;}

    /**
     * <p> The returned authentication token. </p>
     */
    inline GetAuthorizationTokenResult& WithAuthorizationToken(const char* value) { SetAuthorizationToken(value); return *this;}


    /**
     * <p> A timestamp that specifies the date and time the authorization token
     * expires. </p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const{ return m_expiration; }

    /**
     * <p> A timestamp that specifies the date and time the authorization token
     * expires. </p>
     */
    inline void SetExpiration(const Aws::Utils::DateTime& value) { m_expiration = value; }

    /**
     * <p> A timestamp that specifies the date and time the authorization token
     * expires. </p>
     */
    inline void SetExpiration(Aws::Utils::DateTime&& value) { m_expiration = std::move(value); }

    /**
     * <p> A timestamp that specifies the date and time the authorization token
     * expires. </p>
     */
    inline GetAuthorizationTokenResult& WithExpiration(const Aws::Utils::DateTime& value) { SetExpiration(value); return *this;}

    /**
     * <p> A timestamp that specifies the date and time the authorization token
     * expires. </p>
     */
    inline GetAuthorizationTokenResult& WithExpiration(Aws::Utils::DateTime&& value) { SetExpiration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAuthorizationTokenResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAuthorizationTokenResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAuthorizationTokenResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_authorizationToken;

    Aws::Utils::DateTime m_expiration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
