/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/model/Credentials.h>
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
namespace EMRContainers
{
namespace Model
{
  class GetManagedEndpointSessionCredentialsResult
  {
  public:
    AWS_EMRCONTAINERS_API GetManagedEndpointSessionCredentialsResult();
    AWS_EMRCONTAINERS_API GetManagedEndpointSessionCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API GetManagedEndpointSessionCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the session token returned.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the session token returned.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the session token returned.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the session token returned.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the session token returned.</p>
     */
    inline GetManagedEndpointSessionCredentialsResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the session token returned.</p>
     */
    inline GetManagedEndpointSessionCredentialsResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the session token returned.</p>
     */
    inline GetManagedEndpointSessionCredentialsResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The structure containing the session credentials.</p>
     */
    inline const Credentials& GetCredentials() const{ return m_credentials; }

    /**
     * <p>The structure containing the session credentials.</p>
     */
    inline void SetCredentials(const Credentials& value) { m_credentials = value; }

    /**
     * <p>The structure containing the session credentials.</p>
     */
    inline void SetCredentials(Credentials&& value) { m_credentials = std::move(value); }

    /**
     * <p>The structure containing the session credentials.</p>
     */
    inline GetManagedEndpointSessionCredentialsResult& WithCredentials(const Credentials& value) { SetCredentials(value); return *this;}

    /**
     * <p>The structure containing the session credentials.</p>
     */
    inline GetManagedEndpointSessionCredentialsResult& WithCredentials(Credentials&& value) { SetCredentials(std::move(value)); return *this;}


    /**
     * <p>The date and time when the session token will expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const{ return m_expiresAt; }

    /**
     * <p>The date and time when the session token will expire.</p>
     */
    inline void SetExpiresAt(const Aws::Utils::DateTime& value) { m_expiresAt = value; }

    /**
     * <p>The date and time when the session token will expire.</p>
     */
    inline void SetExpiresAt(Aws::Utils::DateTime&& value) { m_expiresAt = std::move(value); }

    /**
     * <p>The date and time when the session token will expire.</p>
     */
    inline GetManagedEndpointSessionCredentialsResult& WithExpiresAt(const Aws::Utils::DateTime& value) { SetExpiresAt(value); return *this;}

    /**
     * <p>The date and time when the session token will expire.</p>
     */
    inline GetManagedEndpointSessionCredentialsResult& WithExpiresAt(Aws::Utils::DateTime&& value) { SetExpiresAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetManagedEndpointSessionCredentialsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetManagedEndpointSessionCredentialsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetManagedEndpointSessionCredentialsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_id;

    Credentials m_credentials;

    Aws::Utils::DateTime m_expiresAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
