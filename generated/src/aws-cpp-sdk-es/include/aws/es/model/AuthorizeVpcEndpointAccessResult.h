/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/AuthorizedPrincipal.h>
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
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p>Container for response parameters to the
   * <code><a>AuthorizeVpcEndpointAccess</a></code> operation. Contains the account
   * ID and the type of the account being authorized to access the VPC
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AuthorizeVpcEndpointAccessResponse">AWS
   * API Reference</a></p>
   */
  class AuthorizeVpcEndpointAccessResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API AuthorizeVpcEndpointAccessResult() = default;
    AWS_ELASTICSEARCHSERVICE_API AuthorizeVpcEndpointAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API AuthorizeVpcEndpointAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the account or service that was provided access to the
     * domain.</p>
     */
    inline const AuthorizedPrincipal& GetAuthorizedPrincipal() const { return m_authorizedPrincipal; }
    template<typename AuthorizedPrincipalT = AuthorizedPrincipal>
    void SetAuthorizedPrincipal(AuthorizedPrincipalT&& value) { m_authorizedPrincipalHasBeenSet = true; m_authorizedPrincipal = std::forward<AuthorizedPrincipalT>(value); }
    template<typename AuthorizedPrincipalT = AuthorizedPrincipal>
    AuthorizeVpcEndpointAccessResult& WithAuthorizedPrincipal(AuthorizedPrincipalT&& value) { SetAuthorizedPrincipal(std::forward<AuthorizedPrincipalT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AuthorizeVpcEndpointAccessResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AuthorizedPrincipal m_authorizedPrincipal;
    bool m_authorizedPrincipalHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
