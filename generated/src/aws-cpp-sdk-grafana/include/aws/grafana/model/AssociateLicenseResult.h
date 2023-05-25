/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/WorkspaceDescription.h>
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
  class AssociateLicenseResult
  {
  public:
    AWS_MANAGEDGRAFANA_API AssociateLicenseResult();
    AWS_MANAGEDGRAFANA_API AssociateLicenseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDGRAFANA_API AssociateLicenseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure containing data about the workspace.</p>
     */
    inline const WorkspaceDescription& GetWorkspace() const{ return m_workspace; }

    /**
     * <p>A structure containing data about the workspace.</p>
     */
    inline void SetWorkspace(const WorkspaceDescription& value) { m_workspace = value; }

    /**
     * <p>A structure containing data about the workspace.</p>
     */
    inline void SetWorkspace(WorkspaceDescription&& value) { m_workspace = std::move(value); }

    /**
     * <p>A structure containing data about the workspace.</p>
     */
    inline AssociateLicenseResult& WithWorkspace(const WorkspaceDescription& value) { SetWorkspace(value); return *this;}

    /**
     * <p>A structure containing data about the workspace.</p>
     */
    inline AssociateLicenseResult& WithWorkspace(WorkspaceDescription&& value) { SetWorkspace(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AssociateLicenseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AssociateLicenseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AssociateLicenseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    WorkspaceDescription m_workspace;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
