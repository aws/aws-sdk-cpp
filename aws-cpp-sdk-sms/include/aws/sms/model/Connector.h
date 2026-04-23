/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/ConnectorStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sms/model/VmManagerType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sms/model/ConnectorCapability.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Represents a connector.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/Connector">AWS API
   * Reference</a></p>
   */
  class AWS_SMS_API Connector
  {
  public:
    Connector();
    Connector(Aws::Utils::Json::JsonView jsonValue);
    Connector& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the connector.</p>
     */
    inline const Aws::String& GetConnectorId() const{ return m_connectorId; }

    /**
     * <p>The identifier of the connector.</p>
     */
    inline bool ConnectorIdHasBeenSet() const { return m_connectorIdHasBeenSet; }

    /**
     * <p>The identifier of the connector.</p>
     */
    inline void SetConnectorId(const Aws::String& value) { m_connectorIdHasBeenSet = true; m_connectorId = value; }

    /**
     * <p>The identifier of the connector.</p>
     */
    inline void SetConnectorId(Aws::String&& value) { m_connectorIdHasBeenSet = true; m_connectorId = std::move(value); }

    /**
     * <p>The identifier of the connector.</p>
     */
    inline void SetConnectorId(const char* value) { m_connectorIdHasBeenSet = true; m_connectorId.assign(value); }

    /**
     * <p>The identifier of the connector.</p>
     */
    inline Connector& WithConnectorId(const Aws::String& value) { SetConnectorId(value); return *this;}

    /**
     * <p>The identifier of the connector.</p>
     */
    inline Connector& WithConnectorId(Aws::String&& value) { SetConnectorId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the connector.</p>
     */
    inline Connector& WithConnectorId(const char* value) { SetConnectorId(value); return *this;}


    /**
     * <p>The connector version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The connector version.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The connector version.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The connector version.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The connector version.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The connector version.</p>
     */
    inline Connector& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The connector version.</p>
     */
    inline Connector& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The connector version.</p>
     */
    inline Connector& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The status of the connector.</p>
     */
    inline const ConnectorStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the connector.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the connector.</p>
     */
    inline void SetStatus(const ConnectorStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the connector.</p>
     */
    inline void SetStatus(ConnectorStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the connector.</p>
     */
    inline Connector& WithStatus(const ConnectorStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the connector.</p>
     */
    inline Connector& WithStatus(ConnectorStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The capabilities of the connector.</p>
     */
    inline const Aws::Vector<ConnectorCapability>& GetCapabilityList() const{ return m_capabilityList; }

    /**
     * <p>The capabilities of the connector.</p>
     */
    inline bool CapabilityListHasBeenSet() const { return m_capabilityListHasBeenSet; }

    /**
     * <p>The capabilities of the connector.</p>
     */
    inline void SetCapabilityList(const Aws::Vector<ConnectorCapability>& value) { m_capabilityListHasBeenSet = true; m_capabilityList = value; }

    /**
     * <p>The capabilities of the connector.</p>
     */
    inline void SetCapabilityList(Aws::Vector<ConnectorCapability>&& value) { m_capabilityListHasBeenSet = true; m_capabilityList = std::move(value); }

    /**
     * <p>The capabilities of the connector.</p>
     */
    inline Connector& WithCapabilityList(const Aws::Vector<ConnectorCapability>& value) { SetCapabilityList(value); return *this;}

    /**
     * <p>The capabilities of the connector.</p>
     */
    inline Connector& WithCapabilityList(Aws::Vector<ConnectorCapability>&& value) { SetCapabilityList(std::move(value)); return *this;}

    /**
     * <p>The capabilities of the connector.</p>
     */
    inline Connector& AddCapabilityList(const ConnectorCapability& value) { m_capabilityListHasBeenSet = true; m_capabilityList.push_back(value); return *this; }

    /**
     * <p>The capabilities of the connector.</p>
     */
    inline Connector& AddCapabilityList(ConnectorCapability&& value) { m_capabilityListHasBeenSet = true; m_capabilityList.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the VM manager.</p>
     */
    inline const Aws::String& GetVmManagerName() const{ return m_vmManagerName; }

    /**
     * <p>The name of the VM manager.</p>
     */
    inline bool VmManagerNameHasBeenSet() const { return m_vmManagerNameHasBeenSet; }

    /**
     * <p>The name of the VM manager.</p>
     */
    inline void SetVmManagerName(const Aws::String& value) { m_vmManagerNameHasBeenSet = true; m_vmManagerName = value; }

    /**
     * <p>The name of the VM manager.</p>
     */
    inline void SetVmManagerName(Aws::String&& value) { m_vmManagerNameHasBeenSet = true; m_vmManagerName = std::move(value); }

    /**
     * <p>The name of the VM manager.</p>
     */
    inline void SetVmManagerName(const char* value) { m_vmManagerNameHasBeenSet = true; m_vmManagerName.assign(value); }

    /**
     * <p>The name of the VM manager.</p>
     */
    inline Connector& WithVmManagerName(const Aws::String& value) { SetVmManagerName(value); return *this;}

    /**
     * <p>The name of the VM manager.</p>
     */
    inline Connector& WithVmManagerName(Aws::String&& value) { SetVmManagerName(std::move(value)); return *this;}

    /**
     * <p>The name of the VM manager.</p>
     */
    inline Connector& WithVmManagerName(const char* value) { SetVmManagerName(value); return *this;}


    /**
     * <p>The VM management product.</p>
     */
    inline const VmManagerType& GetVmManagerType() const{ return m_vmManagerType; }

    /**
     * <p>The VM management product.</p>
     */
    inline bool VmManagerTypeHasBeenSet() const { return m_vmManagerTypeHasBeenSet; }

    /**
     * <p>The VM management product.</p>
     */
    inline void SetVmManagerType(const VmManagerType& value) { m_vmManagerTypeHasBeenSet = true; m_vmManagerType = value; }

    /**
     * <p>The VM management product.</p>
     */
    inline void SetVmManagerType(VmManagerType&& value) { m_vmManagerTypeHasBeenSet = true; m_vmManagerType = std::move(value); }

    /**
     * <p>The VM management product.</p>
     */
    inline Connector& WithVmManagerType(const VmManagerType& value) { SetVmManagerType(value); return *this;}

    /**
     * <p>The VM management product.</p>
     */
    inline Connector& WithVmManagerType(VmManagerType&& value) { SetVmManagerType(std::move(value)); return *this;}


    /**
     * <p>The identifier of the VM manager.</p>
     */
    inline const Aws::String& GetVmManagerId() const{ return m_vmManagerId; }

    /**
     * <p>The identifier of the VM manager.</p>
     */
    inline bool VmManagerIdHasBeenSet() const { return m_vmManagerIdHasBeenSet; }

    /**
     * <p>The identifier of the VM manager.</p>
     */
    inline void SetVmManagerId(const Aws::String& value) { m_vmManagerIdHasBeenSet = true; m_vmManagerId = value; }

    /**
     * <p>The identifier of the VM manager.</p>
     */
    inline void SetVmManagerId(Aws::String&& value) { m_vmManagerIdHasBeenSet = true; m_vmManagerId = std::move(value); }

    /**
     * <p>The identifier of the VM manager.</p>
     */
    inline void SetVmManagerId(const char* value) { m_vmManagerIdHasBeenSet = true; m_vmManagerId.assign(value); }

    /**
     * <p>The identifier of the VM manager.</p>
     */
    inline Connector& WithVmManagerId(const Aws::String& value) { SetVmManagerId(value); return *this;}

    /**
     * <p>The identifier of the VM manager.</p>
     */
    inline Connector& WithVmManagerId(Aws::String&& value) { SetVmManagerId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the VM manager.</p>
     */
    inline Connector& WithVmManagerId(const char* value) { SetVmManagerId(value); return *this;}


    /**
     * <p>The IP address of the connector.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The IP address of the connector.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>The IP address of the connector.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The IP address of the connector.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The IP address of the connector.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>The IP address of the connector.</p>
     */
    inline Connector& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The IP address of the connector.</p>
     */
    inline Connector& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address of the connector.</p>
     */
    inline Connector& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p>The MAC address of the connector.</p>
     */
    inline const Aws::String& GetMacAddress() const{ return m_macAddress; }

    /**
     * <p>The MAC address of the connector.</p>
     */
    inline bool MacAddressHasBeenSet() const { return m_macAddressHasBeenSet; }

    /**
     * <p>The MAC address of the connector.</p>
     */
    inline void SetMacAddress(const Aws::String& value) { m_macAddressHasBeenSet = true; m_macAddress = value; }

    /**
     * <p>The MAC address of the connector.</p>
     */
    inline void SetMacAddress(Aws::String&& value) { m_macAddressHasBeenSet = true; m_macAddress = std::move(value); }

    /**
     * <p>The MAC address of the connector.</p>
     */
    inline void SetMacAddress(const char* value) { m_macAddressHasBeenSet = true; m_macAddress.assign(value); }

    /**
     * <p>The MAC address of the connector.</p>
     */
    inline Connector& WithMacAddress(const Aws::String& value) { SetMacAddress(value); return *this;}

    /**
     * <p>The MAC address of the connector.</p>
     */
    inline Connector& WithMacAddress(Aws::String&& value) { SetMacAddress(std::move(value)); return *this;}

    /**
     * <p>The MAC address of the connector.</p>
     */
    inline Connector& WithMacAddress(const char* value) { SetMacAddress(value); return *this;}


    /**
     * <p>The time the connector was associated.</p>
     */
    inline const Aws::Utils::DateTime& GetAssociatedOn() const{ return m_associatedOn; }

    /**
     * <p>The time the connector was associated.</p>
     */
    inline bool AssociatedOnHasBeenSet() const { return m_associatedOnHasBeenSet; }

    /**
     * <p>The time the connector was associated.</p>
     */
    inline void SetAssociatedOn(const Aws::Utils::DateTime& value) { m_associatedOnHasBeenSet = true; m_associatedOn = value; }

    /**
     * <p>The time the connector was associated.</p>
     */
    inline void SetAssociatedOn(Aws::Utils::DateTime&& value) { m_associatedOnHasBeenSet = true; m_associatedOn = std::move(value); }

    /**
     * <p>The time the connector was associated.</p>
     */
    inline Connector& WithAssociatedOn(const Aws::Utils::DateTime& value) { SetAssociatedOn(value); return *this;}

    /**
     * <p>The time the connector was associated.</p>
     */
    inline Connector& WithAssociatedOn(Aws::Utils::DateTime&& value) { SetAssociatedOn(std::move(value)); return *this;}

  private:

    Aws::String m_connectorId;
    bool m_connectorIdHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;

    ConnectorStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Vector<ConnectorCapability> m_capabilityList;
    bool m_capabilityListHasBeenSet;

    Aws::String m_vmManagerName;
    bool m_vmManagerNameHasBeenSet;

    VmManagerType m_vmManagerType;
    bool m_vmManagerTypeHasBeenSet;

    Aws::String m_vmManagerId;
    bool m_vmManagerIdHasBeenSet;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet;

    Aws::String m_macAddress;
    bool m_macAddressHasBeenSet;

    Aws::Utils::DateTime m_associatedOn;
    bool m_associatedOnHasBeenSet;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
