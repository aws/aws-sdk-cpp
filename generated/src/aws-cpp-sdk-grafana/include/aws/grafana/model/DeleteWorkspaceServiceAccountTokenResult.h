/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
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
  class DeleteWorkspaceServiceAccountTokenResult
  {
  public:
    AWS_MANAGEDGRAFANA_API DeleteWorkspaceServiceAccountTokenResult();
    AWS_MANAGEDGRAFANA_API DeleteWorkspaceServiceAccountTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDGRAFANA_API DeleteWorkspaceServiceAccountTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the service account where the token was deleted.</p>
     */
    inline const Aws::String& GetServiceAccountId() const{ return m_serviceAccountId; }
    inline void SetServiceAccountId(const Aws::String& value) { m_serviceAccountId = value; }
    inline void SetServiceAccountId(Aws::String&& value) { m_serviceAccountId = std::move(value); }
    inline void SetServiceAccountId(const char* value) { m_serviceAccountId.assign(value); }
    inline DeleteWorkspaceServiceAccountTokenResult& WithServiceAccountId(const Aws::String& value) { SetServiceAccountId(value); return *this;}
    inline DeleteWorkspaceServiceAccountTokenResult& WithServiceAccountId(Aws::String&& value) { SetServiceAccountId(std::move(value)); return *this;}
    inline DeleteWorkspaceServiceAccountTokenResult& WithServiceAccountId(const char* value) { SetServiceAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the token that was deleted.</p>
     */
    inline const Aws::String& GetTokenId() const{ return m_tokenId; }
    inline void SetTokenId(const Aws::String& value) { m_tokenId = value; }
    inline void SetTokenId(Aws::String&& value) { m_tokenId = std::move(value); }
    inline void SetTokenId(const char* value) { m_tokenId.assign(value); }
    inline DeleteWorkspaceServiceAccountTokenResult& WithTokenId(const Aws::String& value) { SetTokenId(value); return *this;}
    inline DeleteWorkspaceServiceAccountTokenResult& WithTokenId(Aws::String&& value) { SetTokenId(std::move(value)); return *this;}
    inline DeleteWorkspaceServiceAccountTokenResult& WithTokenId(const char* value) { SetTokenId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workspace where the token was deleted.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceId.assign(value); }
    inline DeleteWorkspaceServiceAccountTokenResult& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline DeleteWorkspaceServiceAccountTokenResult& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline DeleteWorkspaceServiceAccountTokenResult& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteWorkspaceServiceAccountTokenResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteWorkspaceServiceAccountTokenResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteWorkspaceServiceAccountTokenResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceAccountId;

    Aws::String m_tokenId;

    Aws::String m_workspaceId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
