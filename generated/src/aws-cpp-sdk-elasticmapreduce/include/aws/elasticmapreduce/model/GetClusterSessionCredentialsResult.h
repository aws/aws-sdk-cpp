/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/Credentials.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace EMR
{
namespace Model
{
  class GetClusterSessionCredentialsResult
  {
  public:
    AWS_EMR_API GetClusterSessionCredentialsResult();
    AWS_EMR_API GetClusterSessionCredentialsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API GetClusterSessionCredentialsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The credentials that you can use to connect to cluster endpoints that support
     * username and password authentication.</p>
     */
    inline const Credentials& GetCredentials() const{ return m_credentials; }

    /**
     * <p>The credentials that you can use to connect to cluster endpoints that support
     * username and password authentication.</p>
     */
    inline void SetCredentials(const Credentials& value) { m_credentials = value; }

    /**
     * <p>The credentials that you can use to connect to cluster endpoints that support
     * username and password authentication.</p>
     */
    inline void SetCredentials(Credentials&& value) { m_credentials = std::move(value); }

    /**
     * <p>The credentials that you can use to connect to cluster endpoints that support
     * username and password authentication.</p>
     */
    inline GetClusterSessionCredentialsResult& WithCredentials(const Credentials& value) { SetCredentials(value); return *this;}

    /**
     * <p>The credentials that you can use to connect to cluster endpoints that support
     * username and password authentication.</p>
     */
    inline GetClusterSessionCredentialsResult& WithCredentials(Credentials&& value) { SetCredentials(std::move(value)); return *this;}


    /**
     * <p>The time when the credentials that are returned by the
     * <code>GetClusterSessionCredentials</code> API expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiresAt() const{ return m_expiresAt; }

    /**
     * <p>The time when the credentials that are returned by the
     * <code>GetClusterSessionCredentials</code> API expire.</p>
     */
    inline void SetExpiresAt(const Aws::Utils::DateTime& value) { m_expiresAt = value; }

    /**
     * <p>The time when the credentials that are returned by the
     * <code>GetClusterSessionCredentials</code> API expire.</p>
     */
    inline void SetExpiresAt(Aws::Utils::DateTime&& value) { m_expiresAt = std::move(value); }

    /**
     * <p>The time when the credentials that are returned by the
     * <code>GetClusterSessionCredentials</code> API expire.</p>
     */
    inline GetClusterSessionCredentialsResult& WithExpiresAt(const Aws::Utils::DateTime& value) { SetExpiresAt(value); return *this;}

    /**
     * <p>The time when the credentials that are returned by the
     * <code>GetClusterSessionCredentials</code> API expire.</p>
     */
    inline GetClusterSessionCredentialsResult& WithExpiresAt(Aws::Utils::DateTime&& value) { SetExpiresAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetClusterSessionCredentialsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetClusterSessionCredentialsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetClusterSessionCredentialsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Credentials m_credentials;

    Aws::Utils::DateTime m_expiresAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
