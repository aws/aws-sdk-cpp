/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/AuthenticationDescription.h>
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
namespace ManagedGrafana
{
namespace Model
{
  class DescribeWorkspaceAuthenticationResult
  {
  public:
    AWS_MANAGEDGRAFANA_API DescribeWorkspaceAuthenticationResult();
    AWS_MANAGEDGRAFANA_API DescribeWorkspaceAuthenticationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDGRAFANA_API DescribeWorkspaceAuthenticationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure containing information about the authentication methods used in
     * the workspace.</p>
     */
    inline const AuthenticationDescription& GetAuthentication() const{ return m_authentication; }

    /**
     * <p>A structure containing information about the authentication methods used in
     * the workspace.</p>
     */
    inline void SetAuthentication(const AuthenticationDescription& value) { m_authentication = value; }

    /**
     * <p>A structure containing information about the authentication methods used in
     * the workspace.</p>
     */
    inline void SetAuthentication(AuthenticationDescription&& value) { m_authentication = std::move(value); }

    /**
     * <p>A structure containing information about the authentication methods used in
     * the workspace.</p>
     */
    inline DescribeWorkspaceAuthenticationResult& WithAuthentication(const AuthenticationDescription& value) { SetAuthentication(value); return *this;}

    /**
     * <p>A structure containing information about the authentication methods used in
     * the workspace.</p>
     */
    inline DescribeWorkspaceAuthenticationResult& WithAuthentication(AuthenticationDescription&& value) { SetAuthentication(std::move(value)); return *this;}

  private:

    AuthenticationDescription m_authentication;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
