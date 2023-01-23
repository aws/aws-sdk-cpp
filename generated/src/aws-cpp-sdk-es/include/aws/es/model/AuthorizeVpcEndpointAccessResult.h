/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
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
   * <code><a>AuthorizeVpcEndpointAccess</a></code> operation. Contains the account
   * ID and the type of the account being authorized to access the VPC
   * endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/AuthorizeVpcEndpointAccessResponse">AWS
   * API Reference</a></p>
   */
  class AuthorizeVpcEndpointAccessResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API AuthorizeVpcEndpointAccessResult();
    AWS_ELASTICSEARCHSERVICE_API AuthorizeVpcEndpointAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API AuthorizeVpcEndpointAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the account or service that was provided access to the
     * domain.</p>
     */
    inline const AuthorizedPrincipal& GetAuthorizedPrincipal() const{ return m_authorizedPrincipal; }

    /**
     * <p>Information about the account or service that was provided access to the
     * domain.</p>
     */
    inline void SetAuthorizedPrincipal(const AuthorizedPrincipal& value) { m_authorizedPrincipal = value; }

    /**
     * <p>Information about the account or service that was provided access to the
     * domain.</p>
     */
    inline void SetAuthorizedPrincipal(AuthorizedPrincipal&& value) { m_authorizedPrincipal = std::move(value); }

    /**
     * <p>Information about the account or service that was provided access to the
     * domain.</p>
     */
    inline AuthorizeVpcEndpointAccessResult& WithAuthorizedPrincipal(const AuthorizedPrincipal& value) { SetAuthorizedPrincipal(value); return *this;}

    /**
     * <p>Information about the account or service that was provided access to the
     * domain.</p>
     */
    inline AuthorizeVpcEndpointAccessResult& WithAuthorizedPrincipal(AuthorizedPrincipal&& value) { SetAuthorizedPrincipal(std::move(value)); return *this;}

  private:

    AuthorizedPrincipal m_authorizedPrincipal;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
