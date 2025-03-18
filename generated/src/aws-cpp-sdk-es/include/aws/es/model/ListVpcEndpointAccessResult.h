/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/AuthorizedPrincipal.h>
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
   * <code><a>ListVpcEndpointAccess</a></code> operation. Returns a list of accounts
   * id and account type authorized to manage VPC endpoints.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListVpcEndpointAccessResponse">AWS
   * API Reference</a></p>
   */
  class ListVpcEndpointAccessResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ListVpcEndpointAccessResult() = default;
    AWS_ELASTICSEARCHSERVICE_API ListVpcEndpointAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API ListVpcEndpointAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of <code>AuthorizedPrincipal</code> describing the details of the
     * permissions to manage VPC endpoints against the specified domain.</p>
     */
    inline const Aws::Vector<AuthorizedPrincipal>& GetAuthorizedPrincipalList() const { return m_authorizedPrincipalList; }
    template<typename AuthorizedPrincipalListT = Aws::Vector<AuthorizedPrincipal>>
    void SetAuthorizedPrincipalList(AuthorizedPrincipalListT&& value) { m_authorizedPrincipalListHasBeenSet = true; m_authorizedPrincipalList = std::forward<AuthorizedPrincipalListT>(value); }
    template<typename AuthorizedPrincipalListT = Aws::Vector<AuthorizedPrincipal>>
    ListVpcEndpointAccessResult& WithAuthorizedPrincipalList(AuthorizedPrincipalListT&& value) { SetAuthorizedPrincipalList(std::forward<AuthorizedPrincipalListT>(value)); return *this;}
    template<typename AuthorizedPrincipalListT = AuthorizedPrincipal>
    ListVpcEndpointAccessResult& AddAuthorizedPrincipalList(AuthorizedPrincipalListT&& value) { m_authorizedPrincipalListHasBeenSet = true; m_authorizedPrincipalList.emplace_back(std::forward<AuthorizedPrincipalListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVpcEndpointAccessResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVpcEndpointAccessResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AuthorizedPrincipal> m_authorizedPrincipalList;
    bool m_authorizedPrincipalListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
