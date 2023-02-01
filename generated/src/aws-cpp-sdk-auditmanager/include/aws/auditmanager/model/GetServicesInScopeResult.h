/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_AUDITMANAGER_API GetServicesInScopeResult();
    AWS_AUDITMANAGER_API GetServicesInScopeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetServicesInScopeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The metadata that's associated with the Amazon Web Service. </p>
     */
    inline const Aws::Vector<ServiceMetadata>& GetServiceMetadata() const{ return m_serviceMetadata; }

    /**
     * <p> The metadata that's associated with the Amazon Web Service. </p>
     */
    inline void SetServiceMetadata(const Aws::Vector<ServiceMetadata>& value) { m_serviceMetadata = value; }

    /**
     * <p> The metadata that's associated with the Amazon Web Service. </p>
     */
    inline void SetServiceMetadata(Aws::Vector<ServiceMetadata>&& value) { m_serviceMetadata = std::move(value); }

    /**
     * <p> The metadata that's associated with the Amazon Web Service. </p>
     */
    inline GetServicesInScopeResult& WithServiceMetadata(const Aws::Vector<ServiceMetadata>& value) { SetServiceMetadata(value); return *this;}

    /**
     * <p> The metadata that's associated with the Amazon Web Service. </p>
     */
    inline GetServicesInScopeResult& WithServiceMetadata(Aws::Vector<ServiceMetadata>&& value) { SetServiceMetadata(std::move(value)); return *this;}

    /**
     * <p> The metadata that's associated with the Amazon Web Service. </p>
     */
    inline GetServicesInScopeResult& AddServiceMetadata(const ServiceMetadata& value) { m_serviceMetadata.push_back(value); return *this; }

    /**
     * <p> The metadata that's associated with the Amazon Web Service. </p>
     */
    inline GetServicesInScopeResult& AddServiceMetadata(ServiceMetadata&& value) { m_serviceMetadata.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ServiceMetadata> m_serviceMetadata;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
