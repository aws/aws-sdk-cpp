/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/model/AuthorizationData.h>
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

  private:

    AuthorizationData m_authorizationData;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
