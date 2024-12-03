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
    AWS_DATAZONE_API ConnectionSummary();
    AWS_DATAZONE_API ConnectionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API ConnectionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of a connection.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    inline void SetConnectionId(const Aws::String& value) { m_connectionIdHasBeenSet = true; m_connectionId = value; }
    inline void SetConnectionId(Aws::String&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::move(value); }
    inline void SetConnectionId(const char* value) { m_connectionIdHasBeenSet = true; m_connectionId.assign(value); }
    inline ConnectionSummary& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}
    inline ConnectionSummary& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}
    inline ConnectionSummary& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain ID of a connection.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline ConnectionSummary& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline ConnectionSummary& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline ConnectionSummary& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain unit ID of a connection.</p>
     */
    inline const Aws::String& GetDomainUnitId() const{ return m_domainUnitId; }
    inline bool DomainUnitIdHasBeenSet() const { return m_domainUnitIdHasBeenSet; }
    inline void SetDomainUnitId(const Aws::String& value) { m_domainUnitIdHasBeenSet = true; m_domainUnitId = value; }
    inline void SetDomainUnitId(Aws::String&& value) { m_domainUnitIdHasBeenSet = true; m_domainUnitId = std::move(value); }
    inline void SetDomainUnitId(const char* value) { m_domainUnitIdHasBeenSet = true; m_domainUnitId.assign(value); }
    inline ConnectionSummary& WithDomainUnitId(const Aws::String& value) { SetDomainUnitId(value); return *this;}
    inline ConnectionSummary& WithDomainUnitId(Aws::String&& value) { SetDomainUnitId(std::move(value)); return *this;}
    inline ConnectionSummary& WithDomainUnitId(const char* value) { SetDomainUnitId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment ID of a connection.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline ConnectionSummary& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline ConnectionSummary& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline ConnectionSummary& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ConnectionSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ConnectionSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ConnectionSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection physical endpoints.</p>
     */
    inline const Aws::Vector<PhysicalEndpoint>& GetPhysicalEndpoints() const{ return m_physicalEndpoints; }
    inline bool PhysicalEndpointsHasBeenSet() const { return m_physicalEndpointsHasBeenSet; }
    inline void SetPhysicalEndpoints(const Aws::Vector<PhysicalEndpoint>& value) { m_physicalEndpointsHasBeenSet = true; m_physicalEndpoints = value; }
    inline void SetPhysicalEndpoints(Aws::Vector<PhysicalEndpoint>&& value) { m_physicalEndpointsHasBeenSet = true; m_physicalEndpoints = std::move(value); }
    inline ConnectionSummary& WithPhysicalEndpoints(const Aws::Vector<PhysicalEndpoint>& value) { SetPhysicalEndpoints(value); return *this;}
    inline ConnectionSummary& WithPhysicalEndpoints(Aws::Vector<PhysicalEndpoint>&& value) { SetPhysicalEndpoints(std::move(value)); return *this;}
    inline ConnectionSummary& AddPhysicalEndpoints(const PhysicalEndpoint& value) { m_physicalEndpointsHasBeenSet = true; m_physicalEndpoints.push_back(value); return *this; }
    inline ConnectionSummary& AddPhysicalEndpoints(PhysicalEndpoint&& value) { m_physicalEndpointsHasBeenSet = true; m_physicalEndpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The connection project ID.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }
    inline ConnectionSummary& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}
    inline ConnectionSummary& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}
    inline ConnectionSummary& WithProjectId(const char* value) { SetProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection props.</p>
     */
    inline const ConnectionPropertiesOutput& GetProps() const{ return m_props; }
    inline bool PropsHasBeenSet() const { return m_propsHasBeenSet; }
    inline void SetProps(const ConnectionPropertiesOutput& value) { m_propsHasBeenSet = true; m_props = value; }
    inline void SetProps(ConnectionPropertiesOutput&& value) { m_propsHasBeenSet = true; m_props = std::move(value); }
    inline ConnectionSummary& WithProps(const ConnectionPropertiesOutput& value) { SetProps(value); return *this;}
    inline ConnectionSummary& WithProps(ConnectionPropertiesOutput&& value) { SetProps(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection type.</p>
     */
    inline const ConnectionType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ConnectionType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ConnectionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ConnectionSummary& WithType(const ConnectionType& value) { SetType(value); return *this;}
    inline ConnectionSummary& WithType(ConnectionType&& value) { SetType(std::move(value)); return *this;}
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

    ConnectionType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
