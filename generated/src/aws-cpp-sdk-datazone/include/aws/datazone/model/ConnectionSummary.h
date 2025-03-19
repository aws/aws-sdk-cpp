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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{

  /**
   * <p>The summary of a connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ConnectionSummary">AWS
   * API Reference</a></p>
   */
  class ConnectionSummary
  {
  public:
    AWS_DATAZONE_API ConnectionSummary() = default;
    AWS_DATAZONE_API ConnectionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ConnectionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a connection.</p>
     */
    inline const Aws::String& GetConnectionId() const { return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    template<typename ConnectionIdT = Aws::String>
    void SetConnectionId(ConnectionIdT&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::forward<ConnectionIdT>(value); }
    template<typename ConnectionIdT = Aws::String>
    ConnectionSummary& WithConnectionId(ConnectionIdT&& value) { SetConnectionId(std::forward<ConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain ID of a connection.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    ConnectionSummary& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain unit ID of a connection.</p>
     */
    inline const Aws::String& GetDomainUnitId() const { return m_domainUnitId; }
    inline bool DomainUnitIdHasBeenSet() const { return m_domainUnitIdHasBeenSet; }
    template<typename DomainUnitIdT = Aws::String>
    void SetDomainUnitId(DomainUnitIdT&& value) { m_domainUnitIdHasBeenSet = true; m_domainUnitId = std::forward<DomainUnitIdT>(value); }
    template<typename DomainUnitIdT = Aws::String>
    ConnectionSummary& WithDomainUnitId(DomainUnitIdT&& value) { SetDomainUnitId(std::forward<DomainUnitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment ID of a connection.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    ConnectionSummary& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ConnectionSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection physical endpoints.</p>
     */
    inline const Aws::Vector<PhysicalEndpoint>& GetPhysicalEndpoints() const { return m_physicalEndpoints; }
    inline bool PhysicalEndpointsHasBeenSet() const { return m_physicalEndpointsHasBeenSet; }
    template<typename PhysicalEndpointsT = Aws::Vector<PhysicalEndpoint>>
    void SetPhysicalEndpoints(PhysicalEndpointsT&& value) { m_physicalEndpointsHasBeenSet = true; m_physicalEndpoints = std::forward<PhysicalEndpointsT>(value); }
    template<typename PhysicalEndpointsT = Aws::Vector<PhysicalEndpoint>>
    ConnectionSummary& WithPhysicalEndpoints(PhysicalEndpointsT&& value) { SetPhysicalEndpoints(std::forward<PhysicalEndpointsT>(value)); return *this;}
    template<typename PhysicalEndpointsT = PhysicalEndpoint>
    ConnectionSummary& AddPhysicalEndpoints(PhysicalEndpointsT&& value) { m_physicalEndpointsHasBeenSet = true; m_physicalEndpoints.emplace_back(std::forward<PhysicalEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The connection project ID.</p>
     */
    inline const Aws::String& GetProjectId() const { return m_projectId; }
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
    template<typename ProjectIdT = Aws::String>
    void SetProjectId(ProjectIdT&& value) { m_projectIdHasBeenSet = true; m_projectId = std::forward<ProjectIdT>(value); }
    template<typename ProjectIdT = Aws::String>
    ConnectionSummary& WithProjectId(ProjectIdT&& value) { SetProjectId(std::forward<ProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection props.</p>
     */
    inline const ConnectionPropertiesOutput& GetProps() const { return m_props; }
    inline bool PropsHasBeenSet() const { return m_propsHasBeenSet; }
    template<typename PropsT = ConnectionPropertiesOutput>
    void SetProps(PropsT&& value) { m_propsHasBeenSet = true; m_props = std::forward<PropsT>(value); }
    template<typename PropsT = ConnectionPropertiesOutput>
    ConnectionSummary& WithProps(PropsT&& value) { SetProps(std::forward<PropsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection type.</p>
     */
    inline ConnectionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ConnectionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ConnectionSummary& WithType(ConnectionType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

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
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
