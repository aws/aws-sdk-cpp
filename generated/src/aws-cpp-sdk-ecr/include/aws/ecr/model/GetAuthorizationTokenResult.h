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
    AWS_ECR_API GetAuthorizationTokenResult() = default;
    AWS_ECR_API GetAuthorizationTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API GetAuthorizationTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of authorization token data objects that correspond to the
     * <code>registryIds</code> values in the request.</p>  <p>The size of the
     * authorization token returned by Amazon ECR is not fixed. We recommend that you
     * don't make assumptions about the maximum size.</p> 
     */
    inline const Aws::Vector<AuthorizationData>& GetAuthorizationData() const { return m_authorizationData; }
    template<typename AuthorizationDataT = Aws::Vector<AuthorizationData>>
    void SetAuthorizationData(AuthorizationDataT&& value) { m_authorizationDataHasBeenSet = true; m_authorizationData = std::forward<AuthorizationDataT>(value); }
    template<typename AuthorizationDataT = Aws::Vector<AuthorizationData>>
    GetAuthorizationTokenResult& WithAuthorizationData(AuthorizationDataT&& value) { SetAuthorizationData(std::forward<AuthorizationDataT>(value)); return *this;}
    template<typename AuthorizationDataT = AuthorizationData>
    GetAuthorizationTokenResult& AddAuthorizationData(AuthorizationDataT&& value) { m_authorizationDataHasBeenSet = true; m_authorizationData.emplace_back(std::forward<AuthorizationDataT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAuthorizationTokenResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AuthorizationData> m_authorizationData;
    bool m_authorizationDataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
