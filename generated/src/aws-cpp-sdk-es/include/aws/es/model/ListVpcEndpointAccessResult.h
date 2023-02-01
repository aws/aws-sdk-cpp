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
    AWS_ELASTICSEARCHSERVICE_API ListVpcEndpointAccessResult();
    AWS_ELASTICSEARCHSERVICE_API ListVpcEndpointAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API ListVpcEndpointAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of <code>AuthorizedPrincipal</code> describing the details of the
     * permissions to manage VPC endpoints against the specified domain.</p>
     */
    inline const Aws::Vector<AuthorizedPrincipal>& GetAuthorizedPrincipalList() const{ return m_authorizedPrincipalList; }

    /**
     * <p>List of <code>AuthorizedPrincipal</code> describing the details of the
     * permissions to manage VPC endpoints against the specified domain.</p>
     */
    inline void SetAuthorizedPrincipalList(const Aws::Vector<AuthorizedPrincipal>& value) { m_authorizedPrincipalList = value; }

    /**
     * <p>List of <code>AuthorizedPrincipal</code> describing the details of the
     * permissions to manage VPC endpoints against the specified domain.</p>
     */
    inline void SetAuthorizedPrincipalList(Aws::Vector<AuthorizedPrincipal>&& value) { m_authorizedPrincipalList = std::move(value); }

    /**
     * <p>List of <code>AuthorizedPrincipal</code> describing the details of the
     * permissions to manage VPC endpoints against the specified domain.</p>
     */
    inline ListVpcEndpointAccessResult& WithAuthorizedPrincipalList(const Aws::Vector<AuthorizedPrincipal>& value) { SetAuthorizedPrincipalList(value); return *this;}

    /**
     * <p>List of <code>AuthorizedPrincipal</code> describing the details of the
     * permissions to manage VPC endpoints against the specified domain.</p>
     */
    inline ListVpcEndpointAccessResult& WithAuthorizedPrincipalList(Aws::Vector<AuthorizedPrincipal>&& value) { SetAuthorizedPrincipalList(std::move(value)); return *this;}

    /**
     * <p>List of <code>AuthorizedPrincipal</code> describing the details of the
     * permissions to manage VPC endpoints against the specified domain.</p>
     */
    inline ListVpcEndpointAccessResult& AddAuthorizedPrincipalList(const AuthorizedPrincipal& value) { m_authorizedPrincipalList.push_back(value); return *this; }

    /**
     * <p>List of <code>AuthorizedPrincipal</code> describing the details of the
     * permissions to manage VPC endpoints against the specified domain.</p>
     */
    inline ListVpcEndpointAccessResult& AddAuthorizedPrincipalList(AuthorizedPrincipal&& value) { m_authorizedPrincipalList.push_back(std::move(value)); return *this; }


    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline ListVpcEndpointAccessResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline ListVpcEndpointAccessResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline ListVpcEndpointAccessResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AuthorizedPrincipal> m_authorizedPrincipalList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
