/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>A list of authorization token data objects that correspond to the
     * <code>registryIds</code> values in the request.</p>
     */
    inline const Aws::Vector<AuthorizationData>& GetAuthorizationData() const{ return m_authorizationData; }

    /**
     * <p>A list of authorization token data objects that correspond to the
     * <code>registryIds</code> values in the request.</p>
     */
    inline void SetAuthorizationData(const Aws::Vector<AuthorizationData>& value) { m_authorizationData = value; }

    /**
     * <p>A list of authorization token data objects that correspond to the
     * <code>registryIds</code> values in the request.</p>
     */
    inline void SetAuthorizationData(Aws::Vector<AuthorizationData>&& value) { m_authorizationData = std::move(value); }

    /**
     * <p>A list of authorization token data objects that correspond to the
     * <code>registryIds</code> values in the request.</p>
     */
    inline GetAuthorizationTokenResult& WithAuthorizationData(const Aws::Vector<AuthorizationData>& value) { SetAuthorizationData(value); return *this;}

    /**
     * <p>A list of authorization token data objects that correspond to the
     * <code>registryIds</code> values in the request.</p>
     */
    inline GetAuthorizationTokenResult& WithAuthorizationData(Aws::Vector<AuthorizationData>&& value) { SetAuthorizationData(std::move(value)); return *this;}

    /**
     * <p>A list of authorization token data objects that correspond to the
     * <code>registryIds</code> values in the request.</p>
     */
    inline GetAuthorizationTokenResult& AddAuthorizationData(const AuthorizationData& value) { m_authorizationData.push_back(value); return *this; }

    /**
     * <p>A list of authorization token data objects that correspond to the
     * <code>registryIds</code> values in the request.</p>
     */
    inline GetAuthorizationTokenResult& AddAuthorizationData(AuthorizationData&& value) { m_authorizationData.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AuthorizationData> m_authorizationData;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
