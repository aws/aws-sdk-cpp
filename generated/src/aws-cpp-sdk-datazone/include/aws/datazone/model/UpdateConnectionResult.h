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
    AWS_DATAZONE_API UpdateConnectionResult() = default;
    AWS_DATAZONE_API UpdateConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API UpdateConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the connection.</p>
     */
    inline const Aws::String& GetConnectionId() const { return m_connectionId; }
    template<typename ConnectionIdT = Aws::String>
    void SetConnectionId(ConnectionIdT&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::forward<ConnectionIdT>(value); }
    template<typename ConnectionIdT = Aws::String>
    UpdateConnectionResult& WithConnectionId(ConnectionIdT&& value) { SetConnectionId(std::forward<ConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateConnectionResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where a connection is to be updated.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    UpdateConnectionResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain unit where a connection is to be updated.</p>
     */
    inline const Aws::String& GetDomainUnitId() const { return m_domainUnitId; }
    template<typename DomainUnitIdT = Aws::String>
    void SetDomainUnitId(DomainUnitIdT&& value) { m_domainUnitIdHasBeenSet = true; m_domainUnitId = std::forward<DomainUnitIdT>(value); }
    template<typename DomainUnitIdT = Aws::String>
    UpdateConnectionResult& WithDomainUnitId(DomainUnitIdT&& value) { SetDomainUnitId(std::forward<DomainUnitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment where a connection is to be updated.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    UpdateConnectionResult& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateConnectionResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The physical endpoints of the connection.</p>
     */
    inline const Aws::Vector<PhysicalEndpoint>& GetPhysicalEndpoints() const { return m_physicalEndpoints; }
    template<typename PhysicalEndpointsT = Aws::Vector<PhysicalEndpoint>>
    void SetPhysicalEndpoints(PhysicalEndpointsT&& value) { m_physicalEndpointsHasBeenSet = true; m_physicalEndpoints = std::forward<PhysicalEndpointsT>(value); }
    template<typename PhysicalEndpointsT = Aws::Vector<PhysicalEndpoint>>
    UpdateConnectionResult& WithPhysicalEndpoints(PhysicalEndpointsT&& value) { SetPhysicalEndpoints(std::forward<PhysicalEndpointsT>(value)); return *this;}
    template<typename PhysicalEndpointsT = PhysicalEndpoint>
    UpdateConnectionResult& AddPhysicalEndpoints(PhysicalEndpointsT&& value) { m_physicalEndpointsHasBeenSet = true; m_physicalEndpoints.emplace_back(std::forward<PhysicalEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The project ID of the connection.</p>
     */
    inline const Aws::String& GetProjectId() const { return m_projectId; }
    template<typename ProjectIdT = Aws::String>
    void SetProjectId(ProjectIdT&& value) { m_projectIdHasBeenSet = true; m_projectId = std::forward<ProjectIdT>(value); }
    template<typename ProjectIdT = Aws::String>
    UpdateConnectionResult& WithProjectId(ProjectIdT&& value) { SetProjectId(std::forward<ProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection props.</p>
     */
    inline const ConnectionPropertiesOutput& GetProps() const { return m_props; }
    template<typename PropsT = ConnectionPropertiesOutput>
    void SetProps(PropsT&& value) { m_propsHasBeenSet = true; m_props = std::forward<PropsT>(value); }
    template<typename PropsT = ConnectionPropertiesOutput>
    UpdateConnectionResult& WithProps(PropsT&& value) { SetProps(std::forward<PropsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection type.</p>
     */
    inline ConnectionType GetType() const { return m_type; }
    inline void SetType(ConnectionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline UpdateConnectionResult& WithType(ConnectionType value) { SetType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateConnectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_domainUnitId;
    bool m_domainUnitIdHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<PhysicalEndpoint> m_physicalEndpoints;
    bool m_physicalEndpointsHasBeenSet = false;

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    ConnectionPropertiesOutput m_props;
    bool m_propsHasBeenSet = false;

    ConnectionType m_type{ConnectionType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
