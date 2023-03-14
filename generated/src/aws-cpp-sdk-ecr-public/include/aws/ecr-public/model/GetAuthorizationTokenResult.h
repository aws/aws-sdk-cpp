/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/model/AuthorizationData.h>
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
namespace ECRPublic
{
namespace Model
{
  class GetAuthorizationTokenResult
  {
  public:
    AWS_ECRPUBLIC_API GetAuthorizationTokenResult();
    AWS_ECRPUBLIC_API GetAuthorizationTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECRPUBLIC_API GetAuthorizationTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An authorization token data object that corresponds to a public registry.</p>
     */
    inline const AuthorizationData& GetAuthorizationData() const{ return m_authorizationData; }

    /**
     * <p>An authorization token data object that corresponds to a public registry.</p>
     */
    inline void SetAuthorizationData(const AuthorizationData& value) { m_authorizationData = value; }

    /**
     * <p>An authorization token data object that corresponds to a public registry.</p>
     */
    inline void SetAuthorizationData(AuthorizationData&& value) { m_authorizationData = std::move(value); }

    /**
     * <p>An authorization token data object that corresponds to a public registry.</p>
     */
    inline GetAuthorizationTokenResult& WithAuthorizationData(const AuthorizationData& value) { SetAuthorizationData(value); return *this;}

    /**
     * <p>An authorization token data object that corresponds to a public registry.</p>
     */
    inline GetAuthorizationTokenResult& WithAuthorizationData(AuthorizationData&& value) { SetAuthorizationData(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAuthorizationTokenResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAuthorizationTokenResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAuthorizationTokenResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AuthorizationData m_authorizationData;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
