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
  class AWS_ECR_API GetAuthorizationTokenResult
  {
  public:
    GetAuthorizationTokenResult();
    GetAuthorizationTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAuthorizationTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
