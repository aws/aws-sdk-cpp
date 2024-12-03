/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/ConnectionPropertiesOutput.h>
#include <aws/datazone/model/ConnectionType.h>
#include <aws/datazone/model/PhysicalEndpoint.h>
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
namespace DataZone
{
namespace Model
{
  class UpdateConnectionResult
  {
  public:
    AWS_DATAZONE_API UpdateConnectionResult();
    AWS_DATAZONE_API UpdateConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API UpdateConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the connection.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }
    inline void SetConnectionId(const Aws::String& value) { m_connectionId = value; }
    inline void SetConnectionId(Aws::String&& value) { m_connectionId = std::move(value); }
    inline void SetConnectionId(const char* value) { m_connectionId.assign(value); }
    inline UpdateConnectionResult& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}
    inline UpdateConnectionResult& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}
    inline UpdateConnectionResult& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline UpdateConnectionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateConnectionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateConnectionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where a connection is to be updated.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline UpdateConnectionResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline UpdateConnectionResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline UpdateConnectionResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain unit where a connection is to be updated.</p>
     */
    inline const Aws::String& GetDomainUnitId() const{ return m_domainUnitId; }
    inline void SetDomainUnitId(const Aws::String& value) { m_domainUnitId = value; }
    inline void SetDomainUnitId(Aws::String&& value) { m_domainUnitId = std::move(value); }
    inline void SetDomainUnitId(const char* value) { m_domainUnitId.assign(value); }
    inline UpdateConnectionResult& WithDomainUnitId(const Aws::String& value) { SetDomainUnitId(value); return *this;}
    inline UpdateConnectionResult& WithDomainUnitId(Aws::String&& value) { SetDomainUnitId(std::move(value)); return *this;}
    inline UpdateConnectionResult& WithDomainUnitId(const char* value) { SetDomainUnitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment where a connection is to be updated.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }
    inline UpdateConnectionResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline UpdateConnectionResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline UpdateConnectionResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline UpdateConnectionResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateConnectionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateConnectionResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The physical endpoints of the connection.</p>
     */
    inline const Aws::Vector<PhysicalEndpoint>& GetPhysicalEndpoints() const{ return m_physicalEndpoints; }
    inline void SetPhysicalEndpoints(const Aws::Vector<PhysicalEndpoint>& value) { m_physicalEndpoints = value; }
    inline void SetPhysicalEndpoints(Aws::Vector<PhysicalEndpoint>&& value) { m_physicalEndpoints = std::move(value); }
    inline UpdateConnectionResult& WithPhysicalEndpoints(const Aws::Vector<PhysicalEndpoint>& value) { SetPhysicalEndpoints(value); return *this;}
    inline UpdateConnectionResult& WithPhysicalEndpoints(Aws::Vector<PhysicalEndpoint>&& value) { SetPhysicalEndpoints(std::move(value)); return *this;}
    inline UpdateConnectionResult& AddPhysicalEndpoints(const PhysicalEndpoint& value) { m_physicalEndpoints.push_back(value); return *this; }
    inline UpdateConnectionResult& AddPhysicalEndpoints(PhysicalEndpoint&& value) { m_physicalEndpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The project ID of the connection.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }
    inline void SetProjectId(const Aws::String& value) { m_projectId = value; }
    inline void SetProjectId(Aws::String&& value) { m_projectId = std::move(value); }
    inline void SetProjectId(const char* value) { m_projectId.assign(value); }
    inline UpdateConnectionResult& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}
    inline UpdateConnectionResult& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}
    inline UpdateConnectionResult& WithProjectId(const char* value) { SetProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection props.</p>
     */
    inline const ConnectionPropertiesOutput& GetProps() const{ return m_props; }
    inline void SetProps(const ConnectionPropertiesOutput& value) { m_props = value; }
    inline void SetProps(ConnectionPropertiesOutput&& value) { m_props = std::move(value); }
    inline UpdateConnectionResult& WithProps(const ConnectionPropertiesOutput& value) { SetProps(value); return *this;}
    inline UpdateConnectionResult& WithProps(ConnectionPropertiesOutput&& value) { SetProps(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection type.</p>
     */
    inline const ConnectionType& GetType() const{ return m_type; }
    inline void SetType(const ConnectionType& value) { m_type = value; }
    inline void SetType(ConnectionType&& value) { m_type = std::move(value); }
    inline UpdateConnectionResult& WithType(const ConnectionType& value) { SetType(value); return *this;}
    inline UpdateConnectionResult& WithType(ConnectionType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateConnectionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateConnectionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateConnectionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_connectionId;

    Aws::String m_description;

    Aws::String m_domainId;

    Aws::String m_domainUnitId;

    Aws::String m_environmentId;

    Aws::String m_name;

    Aws::Vector<PhysicalEndpoint> m_physicalEndpoints;

    Aws::String m_projectId;

    ConnectionPropertiesOutput m_props;

    ConnectionType m_type;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
