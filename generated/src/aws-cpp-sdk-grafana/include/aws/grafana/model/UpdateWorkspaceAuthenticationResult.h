/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/AuthenticationDescription.h>
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
namespace ManagedGrafana
{
namespace Model
{
  class UpdateWorkspaceAuthenticationResult
  {
  public:
    AWS_MANAGEDGRAFANA_API UpdateWorkspaceAuthenticationResult();
    AWS_MANAGEDGRAFANA_API UpdateWorkspaceAuthenticationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDGRAFANA_API UpdateWorkspaceAuthenticationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that describes the user authentication for this workspace after
     * the update is made.</p>
     */
    inline const AuthenticationDescription& GetAuthentication() const{ return m_authentication; }

    /**
     * <p>A structure that describes the user authentication for this workspace after
     * the update is made.</p>
     */
    inline void SetAuthentication(const AuthenticationDescription& value) { m_authentication = value; }

    /**
     * <p>A structure that describes the user authentication for this workspace after
     * the update is made.</p>
     */
    inline void SetAuthentication(AuthenticationDescription&& value) { m_authentication = std::move(value); }

    /**
     * <p>A structure that describes the user authentication for this workspace after
     * the update is made.</p>
     */
    inline UpdateWorkspaceAuthenticationResult& WithAuthentication(const AuthenticationDescription& value) { SetAuthentication(value); return *this;}

    /**
     * <p>A structure that describes the user authentication for this workspace after
     * the update is made.</p>
     */
    inline UpdateWorkspaceAuthenticationResult& WithAuthentication(AuthenticationDescription&& value) { SetAuthentication(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateWorkspaceAuthenticationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateWorkspaceAuthenticationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateWorkspaceAuthenticationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AuthenticationDescription m_authentication;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
