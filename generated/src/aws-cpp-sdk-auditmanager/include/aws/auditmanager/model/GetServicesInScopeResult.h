/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/ServiceMetadata.h>
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
namespace AuditManager
{
namespace Model
{
  class GetServicesInScopeResult
  {
  public:
    AWS_AUDITMANAGER_API GetServicesInScopeResult() = default;
    AWS_AUDITMANAGER_API GetServicesInScopeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetServicesInScopeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The metadata that's associated with the Amazon Web Services service. </p>
     */
    inline const Aws::Vector<ServiceMetadata>& GetServiceMetadata() const { return m_serviceMetadata; }
    template<typename ServiceMetadataT = Aws::Vector<ServiceMetadata>>
    void SetServiceMetadata(ServiceMetadataT&& value) { m_serviceMetadataHasBeenSet = true; m_serviceMetadata = std::forward<ServiceMetadataT>(value); }
    template<typename ServiceMetadataT = Aws::Vector<ServiceMetadata>>
    GetServicesInScopeResult& WithServiceMetadata(ServiceMetadataT&& value) { SetServiceMetadata(std::forward<ServiceMetadataT>(value)); return *this;}
    template<typename ServiceMetadataT = ServiceMetadata>
    GetServicesInScopeResult& AddServiceMetadata(ServiceMetadataT&& value) { m_serviceMetadataHasBeenSet = true; m_serviceMetadata.emplace_back(std::forward<ServiceMetadataT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetServicesInScopeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ServiceMetadata> m_serviceMetadata;
    bool m_serviceMetadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
