/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/ConnectionCredentials.h>
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
  class GetConnectionResult
  {
  public:
    AWS_DATAZONE_API GetConnectionResult() = default;
    AWS_DATAZONE_API GetConnectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetConnectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Connection credentials.</p>
     */
    inline const ConnectionCredentials& GetConnectionCredentials() const { return m_connectionCredentials; }
    template<typename ConnectionCredentialsT = ConnectionCredentials>
    void SetConnectionCredentials(ConnectionCredentialsT&& value) { m_connectionCredentialsHasBeenSet = true; m_connectionCredentials = std::forward<ConnectionCredentialsT>(value); }
    template<typename ConnectionCredentialsT = ConnectionCredentials>
    GetConnectionResult& WithConnectionCredentials(ConnectionCredentialsT&& value) { SetConnectionCredentials(std::forward<ConnectionCredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the connection.</p>
     */
    inline const Aws::String& GetConnectionId() const { return m_connectionId; }
    template<typename ConnectionIdT = Aws::String>
    void SetConnectionId(ConnectionIdT&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::forward<ConnectionIdT>(value); }
    template<typename ConnectionIdT = Aws::String>
    GetConnectionResult& WithConnectionId(ConnectionIdT&& value) { SetConnectionId(std::forward<ConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connection description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetConnectionResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain ID of the connection.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    GetConnectionResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain unit ID of the connection.</p>
     */
    inline const Aws::String& GetDomainUnitId() const { return m_domainUnitId; }
    template<typename DomainUnitIdT = Aws::String>
    void SetDomainUnitId(DomainUnitIdT&& value) { m_domainUnitIdHasBeenSet = true; m_domainUnitId = std::forward<DomainUnitIdT>(value); }
    template<typename DomainUnitIdT = Aws::String>
    GetConnectionResult& WithDomainUnitId(DomainUnitIdT&& value) { SetDomainUnitId(std::forward<DomainUnitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    GetConnectionResult& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment user role.</p>
     */
    inline const Aws::String& GetEnvironmentUserRole() const { return m_environmentUserRole; }
    template<typename EnvironmentUserRoleT = Aws::String>
    void SetEnvironmentUserRole(EnvironmentUserRoleT&& value) { m_environmentUserRoleHasBeenSet = true; m_environmentUserRole = std::forward<EnvironmentUserRoleT>(value); }
    template<typename EnvironmentUserRoleT = Aws::String>
    GetConnectionResult& WithEnvironmentUserRole(EnvironmentUserRoleT&& value) { SetEnvironmentUserRole(std::forward<EnvironmentUserRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connection.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetConnectionResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The physical endpoints of the connection.</p>
     */
    inline const Aws::Vector<PhysicalEndpoint>& GetPhysicalEndpoints() const { return m_physicalEndpoints; }
    template<typename PhysicalEndpointsT = Aws::Vector<PhysicalEndpoint>>
    void SetPhysicalEndpoints(PhysicalEndpointsT&& value) { m_physicalEndpointsHasBeenSet = true; m_physicalEndpoints = std::forward<PhysicalEndpointsT>(value); }
    template<typename PhysicalEndpointsT = Aws::Vector<PhysicalEndpoint>>
    GetConnectionResult& WithPhysicalEndpoints(PhysicalEndpointsT&& value) { SetPhysicalEndpoints(std::forward<PhysicalEndpointsT>(value)); return *this;}
    template<typename PhysicalEndpointsT = PhysicalEndpoint>
    GetConnectionResult& AddPhysicalEndpoints(PhysicalEndpointsT&& value) { m_physicalEndpointsHasBeenSet = true; m_physicalEndpoints.emplace_back(std::forward<PhysicalEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the project.</p>
     */
    inline const Aws::String& GetProjectId() const { return m_projectId; }
    template<typename ProjectIdT = Aws::String>
    void SetProjectId(ProjectIdT&& value) { m_projectIdHasBeenSet = true; m_projectId = std::forward<ProjectIdT>(value); }
    template<typename ProjectIdT = Aws::String>
    GetConnectionResult& WithProjectId(ProjectIdT&& value) { SetProjectId(std::forward<ProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Connection props.</p>
     */
    inline const ConnectionPropertiesOutput& GetProps() const { return m_props; }
    template<typename PropsT = ConnectionPropertiesOutput>
    void SetProps(PropsT&& value) { m_propsHasBeenSet = true; m_props = std::forward<PropsT>(value); }
    template<typename PropsT = ConnectionPropertiesOutput>
    GetConnectionResult& WithProps(PropsT&& value) { SetProps(std::forward<PropsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the connection.</p>
     */
    inline ConnectionType GetType() const { return m_type; }
    inline void SetType(ConnectionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetConnectionResult& WithType(ConnectionType value) { SetType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetConnectionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ConnectionCredentials m_connectionCredentials;
    bool m_connectionCredentialsHasBeenSet = false;

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

    Aws::String m_environmentUserRole;
    bool m_environmentUserRoleHasBeenSet = false;

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
