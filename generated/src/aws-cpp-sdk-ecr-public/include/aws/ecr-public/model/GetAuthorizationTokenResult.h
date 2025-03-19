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
    AWS_ECRPUBLIC_API GetAuthorizationTokenResult() = default;
    AWS_ECRPUBLIC_API GetAuthorizationTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECRPUBLIC_API GetAuthorizationTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An authorization token data object that corresponds to a public registry.</p>
     */
    inline const AuthorizationData& GetAuthorizationData() const { return m_authorizationData; }
    template<typename AuthorizationDataT = AuthorizationData>
    void SetAuthorizationData(AuthorizationDataT&& value) { m_authorizationDataHasBeenSet = true; m_authorizationData = std::forward<AuthorizationDataT>(value); }
    template<typename AuthorizationDataT = AuthorizationData>
    GetAuthorizationTokenResult& WithAuthorizationData(AuthorizationDataT&& value) { SetAuthorizationData(std::forward<AuthorizationDataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAuthorizationTokenResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AuthorizationData m_authorizationData;
    bool m_authorizationDataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
