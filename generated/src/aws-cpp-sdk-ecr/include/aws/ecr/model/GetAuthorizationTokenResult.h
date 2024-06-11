/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/AuthorizationData.h>
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
namespace ECR
{
namespace Model
{
  class GetAuthorizationTokenResult
  {
  public:
    AWS_ECR_API GetAuthorizationTokenResult();
    AWS_ECR_API GetAuthorizationTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API GetAuthorizationTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of authorization token data objects that correspond to the
     * <code>registryIds</code> values in the request.</p>
     */
    inline const Aws::Vector<AuthorizationData>& GetAuthorizationData() const{ return m_authorizationData; }
    inline void SetAuthorizationData(const Aws::Vector<AuthorizationData>& value) { m_authorizationData = value; }
    inline void SetAuthorizationData(Aws::Vector<AuthorizationData>&& value) { m_authorizationData = std::move(value); }
    inline GetAuthorizationTokenResult& WithAuthorizationData(const Aws::Vector<AuthorizationData>& value) { SetAuthorizationData(value); return *this;}
    inline GetAuthorizationTokenResult& WithAuthorizationData(Aws::Vector<AuthorizationData>&& value) { SetAuthorizationData(std::move(value)); return *this;}
    inline GetAuthorizationTokenResult& AddAuthorizationData(const AuthorizationData& value) { m_authorizationData.push_back(value); return *this; }
    inline GetAuthorizationTokenResult& AddAuthorizationData(AuthorizationData&& value) { m_authorizationData.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetAuthorizationTokenResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetAuthorizationTokenResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetAuthorizationTokenResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AuthorizationData> m_authorizationData;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
