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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directconnect/model/AddressFamily.h>
#include <aws/directconnect/model/VirtualInterfaceState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/RouteFilterPrefix.h>
#include <aws/directconnect/model/BGPPeer.h>
#include <aws/directconnect/model/Tag.h>
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
namespace DirectConnect
{
namespace Model
{
  /**
   * <p>Information about a virtual interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/VirtualInterface">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API AllocatePrivateVirtualInterfaceResult
  {
  public:
    AllocatePrivateVirtualInterfaceResult();
    AllocatePrivateVirtualInterfaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AllocatePrivateVirtualInterfaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the AWS account that owns the virtual interface.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The ID of the AWS account that owns the virtual interface.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccount = value; }

    /**
     * <p>The ID of the AWS account that owns the virtual interface.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccount = std::move(value); }

    /**
     * <p>The ID of the AWS account that owns the virtual interface.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccount.assign(value); }

    /**
     * <p>The ID of the AWS account that owns the virtual interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The ID of the AWS account that owns the virtual interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that owns the virtual interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}


    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline const Aws::String& GetVirtualInterfaceId() const{ return m_virtualInterfaceId; }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline void SetVirtualInterfaceId(const Aws::String& value) { m_virtualInterfaceId = value; }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline void SetVirtualInterfaceId(Aws::String&& value) { m_virtualInterfaceId = std::move(value); }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline void SetVirtualInterfaceId(const char* value) { m_virtualInterfaceId.assign(value); }

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualInterfaceId(const Aws::String& value) { SetVirtualInterfaceId(value); return *this;}

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualInterfaceId(Aws::String&& value) { SetVirtualInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualInterfaceId(const char* value) { SetVirtualInterfaceId(value); return *this;}


    /**
     * <p>The location of the connection.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The location of the connection.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The location of the connection.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The location of the connection.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The location of the connection.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The location of the connection.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The location of the connection.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The ID of the connection.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of the connection.</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionId = value; }

    /**
     * <p>The ID of the connection.</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionId = std::move(value); }

    /**
     * <p>The ID of the connection.</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionId.assign(value); }

    /**
     * <p>The ID of the connection.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the connection.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the connection.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>The type of virtual interface. The possible values are <code>private</code>
     * and <code>public</code>.</p>
     */
    inline const Aws::String& GetVirtualInterfaceType() const{ return m_virtualInterfaceType; }

    /**
     * <p>The type of virtual interface. The possible values are <code>private</code>
     * and <code>public</code>.</p>
     */
    inline void SetVirtualInterfaceType(const Aws::String& value) { m_virtualInterfaceType = value; }

    /**
     * <p>The type of virtual interface. The possible values are <code>private</code>
     * and <code>public</code>.</p>
     */
    inline void SetVirtualInterfaceType(Aws::String&& value) { m_virtualInterfaceType = std::move(value); }

    /**
     * <p>The type of virtual interface. The possible values are <code>private</code>
     * and <code>public</code>.</p>
     */
    inline void SetVirtualInterfaceType(const char* value) { m_virtualInterfaceType.assign(value); }

    /**
     * <p>The type of virtual interface. The possible values are <code>private</code>
     * and <code>public</code>.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualInterfaceType(const Aws::String& value) { SetVirtualInterfaceType(value); return *this;}

    /**
     * <p>The type of virtual interface. The possible values are <code>private</code>
     * and <code>public</code>.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualInterfaceType(Aws::String&& value) { SetVirtualInterfaceType(std::move(value)); return *this;}

    /**
     * <p>The type of virtual interface. The possible values are <code>private</code>
     * and <code>public</code>.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualInterfaceType(const char* value) { SetVirtualInterfaceType(value); return *this;}


    /**
     * <p>The name of the virtual interface assigned by the customer network.</p>
     */
    inline const Aws::String& GetVirtualInterfaceName() const{ return m_virtualInterfaceName; }

    /**
     * <p>The name of the virtual interface assigned by the customer network.</p>
     */
    inline void SetVirtualInterfaceName(const Aws::String& value) { m_virtualInterfaceName = value; }

    /**
     * <p>The name of the virtual interface assigned by the customer network.</p>
     */
    inline void SetVirtualInterfaceName(Aws::String&& value) { m_virtualInterfaceName = std::move(value); }

    /**
     * <p>The name of the virtual interface assigned by the customer network.</p>
     */
    inline void SetVirtualInterfaceName(const char* value) { m_virtualInterfaceName.assign(value); }

    /**
     * <p>The name of the virtual interface assigned by the customer network.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualInterfaceName(const Aws::String& value) { SetVirtualInterfaceName(value); return *this;}

    /**
     * <p>The name of the virtual interface assigned by the customer network.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualInterfaceName(Aws::String&& value) { SetVirtualInterfaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the virtual interface assigned by the customer network.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualInterfaceName(const char* value) { SetVirtualInterfaceName(value); return *this;}


    /**
     * <p>The ID of the VLAN.</p>
     */
    inline int GetVlan() const{ return m_vlan; }

    /**
     * <p>The ID of the VLAN.</p>
     */
    inline void SetVlan(int value) { m_vlan = value; }

    /**
     * <p>The ID of the VLAN.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithVlan(int value) { SetVlan(value); return *this;}


    /**
     * <p>The autonomous system (AS) number for Border Gateway Protocol (BGP)
     * configuration.</p>
     */
    inline int GetAsn() const{ return m_asn; }

    /**
     * <p>The autonomous system (AS) number for Border Gateway Protocol (BGP)
     * configuration.</p>
     */
    inline void SetAsn(int value) { m_asn = value; }

    /**
     * <p>The autonomous system (AS) number for Border Gateway Protocol (BGP)
     * configuration.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithAsn(int value) { SetAsn(value); return *this;}


    /**
     * <p>The autonomous system number (ASN) for the Amazon side of the connection.</p>
     */
    inline long long GetAmazonSideAsn() const{ return m_amazonSideAsn; }

    /**
     * <p>The autonomous system number (ASN) for the Amazon side of the connection.</p>
     */
    inline void SetAmazonSideAsn(long long value) { m_amazonSideAsn = value; }

    /**
     * <p>The autonomous system number (ASN) for the Amazon side of the connection.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithAmazonSideAsn(long long value) { SetAmazonSideAsn(value); return *this;}


    /**
     * <p>The authentication key for BGP configuration. This string has a minimum
     * length of 6 characters and and a maximun lenth of 80 characters.</p>
     */
    inline const Aws::String& GetAuthKey() const{ return m_authKey; }

    /**
     * <p>The authentication key for BGP configuration. This string has a minimum
     * length of 6 characters and and a maximun lenth of 80 characters.</p>
     */
    inline void SetAuthKey(const Aws::String& value) { m_authKey = value; }

    /**
     * <p>The authentication key for BGP configuration. This string has a minimum
     * length of 6 characters and and a maximun lenth of 80 characters.</p>
     */
    inline void SetAuthKey(Aws::String&& value) { m_authKey = std::move(value); }

    /**
     * <p>The authentication key for BGP configuration. This string has a minimum
     * length of 6 characters and and a maximun lenth of 80 characters.</p>
     */
    inline void SetAuthKey(const char* value) { m_authKey.assign(value); }

    /**
     * <p>The authentication key for BGP configuration. This string has a minimum
     * length of 6 characters and and a maximun lenth of 80 characters.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithAuthKey(const Aws::String& value) { SetAuthKey(value); return *this;}

    /**
     * <p>The authentication key for BGP configuration. This string has a minimum
     * length of 6 characters and and a maximun lenth of 80 characters.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithAuthKey(Aws::String&& value) { SetAuthKey(std::move(value)); return *this;}

    /**
     * <p>The authentication key for BGP configuration. This string has a minimum
     * length of 6 characters and and a maximun lenth of 80 characters.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithAuthKey(const char* value) { SetAuthKey(value); return *this;}


    /**
     * <p>The IP address assigned to the Amazon interface.</p>
     */
    inline const Aws::String& GetAmazonAddress() const{ return m_amazonAddress; }

    /**
     * <p>The IP address assigned to the Amazon interface.</p>
     */
    inline void SetAmazonAddress(const Aws::String& value) { m_amazonAddress = value; }

    /**
     * <p>The IP address assigned to the Amazon interface.</p>
     */
    inline void SetAmazonAddress(Aws::String&& value) { m_amazonAddress = std::move(value); }

    /**
     * <p>The IP address assigned to the Amazon interface.</p>
     */
    inline void SetAmazonAddress(const char* value) { m_amazonAddress.assign(value); }

    /**
     * <p>The IP address assigned to the Amazon interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithAmazonAddress(const Aws::String& value) { SetAmazonAddress(value); return *this;}

    /**
     * <p>The IP address assigned to the Amazon interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithAmazonAddress(Aws::String&& value) { SetAmazonAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address assigned to the Amazon interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithAmazonAddress(const char* value) { SetAmazonAddress(value); return *this;}


    /**
     * <p>The IP address assigned to the customer interface.</p>
     */
    inline const Aws::String& GetCustomerAddress() const{ return m_customerAddress; }

    /**
     * <p>The IP address assigned to the customer interface.</p>
     */
    inline void SetCustomerAddress(const Aws::String& value) { m_customerAddress = value; }

    /**
     * <p>The IP address assigned to the customer interface.</p>
     */
    inline void SetCustomerAddress(Aws::String&& value) { m_customerAddress = std::move(value); }

    /**
     * <p>The IP address assigned to the customer interface.</p>
     */
    inline void SetCustomerAddress(const char* value) { m_customerAddress.assign(value); }

    /**
     * <p>The IP address assigned to the customer interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithCustomerAddress(const Aws::String& value) { SetCustomerAddress(value); return *this;}

    /**
     * <p>The IP address assigned to the customer interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithCustomerAddress(Aws::String&& value) { SetCustomerAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address assigned to the customer interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithCustomerAddress(const char* value) { SetCustomerAddress(value); return *this;}


    /**
     * <p>The address family for the BGP peer.</p>
     */
    inline const AddressFamily& GetAddressFamily() const{ return m_addressFamily; }

    /**
     * <p>The address family for the BGP peer.</p>
     */
    inline void SetAddressFamily(const AddressFamily& value) { m_addressFamily = value; }

    /**
     * <p>The address family for the BGP peer.</p>
     */
    inline void SetAddressFamily(AddressFamily&& value) { m_addressFamily = std::move(value); }

    /**
     * <p>The address family for the BGP peer.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithAddressFamily(const AddressFamily& value) { SetAddressFamily(value); return *this;}

    /**
     * <p>The address family for the BGP peer.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithAddressFamily(AddressFamily&& value) { SetAddressFamily(std::move(value)); return *this;}


    /**
     * <p>The state of the virtual interface. The following are the possible
     * values:</p> <ul> <li> <p> <code>confirming</code>: The creation of the virtual
     * interface is pending confirmation from the virtual interface owner. If the owner
     * of the virtual interface is different from the owner of the connection on which
     * it is provisioned, then the virtual interface will remain in this state until it
     * is confirmed by the virtual interface owner.</p> </li> <li> <p>
     * <code>verifying</code>: This state only applies to public virtual interfaces.
     * Each public virtual interface needs validation before the virtual interface can
     * be created.</p> </li> <li> <p> <code>pending</code>: A virtual interface is in
     * this state from the time that it is created until the virtual interface is ready
     * to forward traffic.</p> </li> <li> <p> <code>available</code>: A virtual
     * interface that is able to forward traffic.</p> </li> <li> <p> <code>down</code>:
     * A virtual interface that is BGP down.</p> </li> <li> <p> <code>deleting</code>:
     * A virtual interface is in this state immediately after calling
     * <a>DeleteVirtualInterface</a> until it can no longer forward traffic.</p> </li>
     * <li> <p> <code>deleted</code>: A virtual interface that cannot forward
     * traffic.</p> </li> <li> <p> <code>rejected</code>: The virtual interface owner
     * has declined creation of the virtual interface. If a virtual interface in the
     * <code>Confirming</code> state is deleted by the virtual interface owner, the
     * virtual interface enters the <code>Rejected</code> state.</p> </li> <li> <p>
     * <code>unknown</code>: The state of the virtual interface is not available.</p>
     * </li> </ul>
     */
    inline const VirtualInterfaceState& GetVirtualInterfaceState() const{ return m_virtualInterfaceState; }

    /**
     * <p>The state of the virtual interface. The following are the possible
     * values:</p> <ul> <li> <p> <code>confirming</code>: The creation of the virtual
     * interface is pending confirmation from the virtual interface owner. If the owner
     * of the virtual interface is different from the owner of the connection on which
     * it is provisioned, then the virtual interface will remain in this state until it
     * is confirmed by the virtual interface owner.</p> </li> <li> <p>
     * <code>verifying</code>: This state only applies to public virtual interfaces.
     * Each public virtual interface needs validation before the virtual interface can
     * be created.</p> </li> <li> <p> <code>pending</code>: A virtual interface is in
     * this state from the time that it is created until the virtual interface is ready
     * to forward traffic.</p> </li> <li> <p> <code>available</code>: A virtual
     * interface that is able to forward traffic.</p> </li> <li> <p> <code>down</code>:
     * A virtual interface that is BGP down.</p> </li> <li> <p> <code>deleting</code>:
     * A virtual interface is in this state immediately after calling
     * <a>DeleteVirtualInterface</a> until it can no longer forward traffic.</p> </li>
     * <li> <p> <code>deleted</code>: A virtual interface that cannot forward
     * traffic.</p> </li> <li> <p> <code>rejected</code>: The virtual interface owner
     * has declined creation of the virtual interface. If a virtual interface in the
     * <code>Confirming</code> state is deleted by the virtual interface owner, the
     * virtual interface enters the <code>Rejected</code> state.</p> </li> <li> <p>
     * <code>unknown</code>: The state of the virtual interface is not available.</p>
     * </li> </ul>
     */
    inline void SetVirtualInterfaceState(const VirtualInterfaceState& value) { m_virtualInterfaceState = value; }

    /**
     * <p>The state of the virtual interface. The following are the possible
     * values:</p> <ul> <li> <p> <code>confirming</code>: The creation of the virtual
     * interface is pending confirmation from the virtual interface owner. If the owner
     * of the virtual interface is different from the owner of the connection on which
     * it is provisioned, then the virtual interface will remain in this state until it
     * is confirmed by the virtual interface owner.</p> </li> <li> <p>
     * <code>verifying</code>: This state only applies to public virtual interfaces.
     * Each public virtual interface needs validation before the virtual interface can
     * be created.</p> </li> <li> <p> <code>pending</code>: A virtual interface is in
     * this state from the time that it is created until the virtual interface is ready
     * to forward traffic.</p> </li> <li> <p> <code>available</code>: A virtual
     * interface that is able to forward traffic.</p> </li> <li> <p> <code>down</code>:
     * A virtual interface that is BGP down.</p> </li> <li> <p> <code>deleting</code>:
     * A virtual interface is in this state immediately after calling
     * <a>DeleteVirtualInterface</a> until it can no longer forward traffic.</p> </li>
     * <li> <p> <code>deleted</code>: A virtual interface that cannot forward
     * traffic.</p> </li> <li> <p> <code>rejected</code>: The virtual interface owner
     * has declined creation of the virtual interface. If a virtual interface in the
     * <code>Confirming</code> state is deleted by the virtual interface owner, the
     * virtual interface enters the <code>Rejected</code> state.</p> </li> <li> <p>
     * <code>unknown</code>: The state of the virtual interface is not available.</p>
     * </li> </ul>
     */
    inline void SetVirtualInterfaceState(VirtualInterfaceState&& value) { m_virtualInterfaceState = std::move(value); }

    /**
     * <p>The state of the virtual interface. The following are the possible
     * values:</p> <ul> <li> <p> <code>confirming</code>: The creation of the virtual
     * interface is pending confirmation from the virtual interface owner. If the owner
     * of the virtual interface is different from the owner of the connection on which
     * it is provisioned, then the virtual interface will remain in this state until it
     * is confirmed by the virtual interface owner.</p> </li> <li> <p>
     * <code>verifying</code>: This state only applies to public virtual interfaces.
     * Each public virtual interface needs validation before the virtual interface can
     * be created.</p> </li> <li> <p> <code>pending</code>: A virtual interface is in
     * this state from the time that it is created until the virtual interface is ready
     * to forward traffic.</p> </li> <li> <p> <code>available</code>: A virtual
     * interface that is able to forward traffic.</p> </li> <li> <p> <code>down</code>:
     * A virtual interface that is BGP down.</p> </li> <li> <p> <code>deleting</code>:
     * A virtual interface is in this state immediately after calling
     * <a>DeleteVirtualInterface</a> until it can no longer forward traffic.</p> </li>
     * <li> <p> <code>deleted</code>: A virtual interface that cannot forward
     * traffic.</p> </li> <li> <p> <code>rejected</code>: The virtual interface owner
     * has declined creation of the virtual interface. If a virtual interface in the
     * <code>Confirming</code> state is deleted by the virtual interface owner, the
     * virtual interface enters the <code>Rejected</code> state.</p> </li> <li> <p>
     * <code>unknown</code>: The state of the virtual interface is not available.</p>
     * </li> </ul>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualInterfaceState(const VirtualInterfaceState& value) { SetVirtualInterfaceState(value); return *this;}

    /**
     * <p>The state of the virtual interface. The following are the possible
     * values:</p> <ul> <li> <p> <code>confirming</code>: The creation of the virtual
     * interface is pending confirmation from the virtual interface owner. If the owner
     * of the virtual interface is different from the owner of the connection on which
     * it is provisioned, then the virtual interface will remain in this state until it
     * is confirmed by the virtual interface owner.</p> </li> <li> <p>
     * <code>verifying</code>: This state only applies to public virtual interfaces.
     * Each public virtual interface needs validation before the virtual interface can
     * be created.</p> </li> <li> <p> <code>pending</code>: A virtual interface is in
     * this state from the time that it is created until the virtual interface is ready
     * to forward traffic.</p> </li> <li> <p> <code>available</code>: A virtual
     * interface that is able to forward traffic.</p> </li> <li> <p> <code>down</code>:
     * A virtual interface that is BGP down.</p> </li> <li> <p> <code>deleting</code>:
     * A virtual interface is in this state immediately after calling
     * <a>DeleteVirtualInterface</a> until it can no longer forward traffic.</p> </li>
     * <li> <p> <code>deleted</code>: A virtual interface that cannot forward
     * traffic.</p> </li> <li> <p> <code>rejected</code>: The virtual interface owner
     * has declined creation of the virtual interface. If a virtual interface in the
     * <code>Confirming</code> state is deleted by the virtual interface owner, the
     * virtual interface enters the <code>Rejected</code> state.</p> </li> <li> <p>
     * <code>unknown</code>: The state of the virtual interface is not available.</p>
     * </li> </ul>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualInterfaceState(VirtualInterfaceState&& value) { SetVirtualInterfaceState(std::move(value)); return *this;}


    /**
     * <p>The customer router configuration.</p>
     */
    inline const Aws::String& GetCustomerRouterConfig() const{ return m_customerRouterConfig; }

    /**
     * <p>The customer router configuration.</p>
     */
    inline void SetCustomerRouterConfig(const Aws::String& value) { m_customerRouterConfig = value; }

    /**
     * <p>The customer router configuration.</p>
     */
    inline void SetCustomerRouterConfig(Aws::String&& value) { m_customerRouterConfig = std::move(value); }

    /**
     * <p>The customer router configuration.</p>
     */
    inline void SetCustomerRouterConfig(const char* value) { m_customerRouterConfig.assign(value); }

    /**
     * <p>The customer router configuration.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithCustomerRouterConfig(const Aws::String& value) { SetCustomerRouterConfig(value); return *this;}

    /**
     * <p>The customer router configuration.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithCustomerRouterConfig(Aws::String&& value) { SetCustomerRouterConfig(std::move(value)); return *this;}

    /**
     * <p>The customer router configuration.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithCustomerRouterConfig(const char* value) { SetCustomerRouterConfig(value); return *this;}


    /**
     * <p>The maximum transmission unit (MTU), in bytes. The supported values are 1500
     * and 9001. The default value is 1500.</p>
     */
    inline int GetMtu() const{ return m_mtu; }

    /**
     * <p>The maximum transmission unit (MTU), in bytes. The supported values are 1500
     * and 9001. The default value is 1500.</p>
     */
    inline void SetMtu(int value) { m_mtu = value; }

    /**
     * <p>The maximum transmission unit (MTU), in bytes. The supported values are 1500
     * and 9001. The default value is 1500.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithMtu(int value) { SetMtu(value); return *this;}


    /**
     * <p>Indicates whether jumbo frames (9001 MTU) are supported.</p>
     */
    inline bool GetJumboFrameCapable() const{ return m_jumboFrameCapable; }

    /**
     * <p>Indicates whether jumbo frames (9001 MTU) are supported.</p>
     */
    inline void SetJumboFrameCapable(bool value) { m_jumboFrameCapable = value; }

    /**
     * <p>Indicates whether jumbo frames (9001 MTU) are supported.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithJumboFrameCapable(bool value) { SetJumboFrameCapable(value); return *this;}


    /**
     * <p>The ID of the virtual private gateway. Applies only to private virtual
     * interfaces.</p>
     */
    inline const Aws::String& GetVirtualGatewayId() const{ return m_virtualGatewayId; }

    /**
     * <p>The ID of the virtual private gateway. Applies only to private virtual
     * interfaces.</p>
     */
    inline void SetVirtualGatewayId(const Aws::String& value) { m_virtualGatewayId = value; }

    /**
     * <p>The ID of the virtual private gateway. Applies only to private virtual
     * interfaces.</p>
     */
    inline void SetVirtualGatewayId(Aws::String&& value) { m_virtualGatewayId = std::move(value); }

    /**
     * <p>The ID of the virtual private gateway. Applies only to private virtual
     * interfaces.</p>
     */
    inline void SetVirtualGatewayId(const char* value) { m_virtualGatewayId.assign(value); }

    /**
     * <p>The ID of the virtual private gateway. Applies only to private virtual
     * interfaces.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualGatewayId(const Aws::String& value) { SetVirtualGatewayId(value); return *this;}

    /**
     * <p>The ID of the virtual private gateway. Applies only to private virtual
     * interfaces.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualGatewayId(Aws::String&& value) { SetVirtualGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual private gateway. Applies only to private virtual
     * interfaces.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithVirtualGatewayId(const char* value) { SetVirtualGatewayId(value); return *this;}


    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline const Aws::String& GetDirectConnectGatewayId() const{ return m_directConnectGatewayId; }

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline void SetDirectConnectGatewayId(const Aws::String& value) { m_directConnectGatewayId = value; }

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline void SetDirectConnectGatewayId(Aws::String&& value) { m_directConnectGatewayId = std::move(value); }

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline void SetDirectConnectGatewayId(const char* value) { m_directConnectGatewayId.assign(value); }

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithDirectConnectGatewayId(const Aws::String& value) { SetDirectConnectGatewayId(value); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithDirectConnectGatewayId(Aws::String&& value) { SetDirectConnectGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Direct Connect gateway.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithDirectConnectGatewayId(const char* value) { SetDirectConnectGatewayId(value); return *this;}


    /**
     * <p>The routes to be advertised to the AWS network in this Region. Applies to
     * public virtual interfaces.</p>
     */
    inline const Aws::Vector<RouteFilterPrefix>& GetRouteFilterPrefixes() const{ return m_routeFilterPrefixes; }

    /**
     * <p>The routes to be advertised to the AWS network in this Region. Applies to
     * public virtual interfaces.</p>
     */
    inline void SetRouteFilterPrefixes(const Aws::Vector<RouteFilterPrefix>& value) { m_routeFilterPrefixes = value; }

    /**
     * <p>The routes to be advertised to the AWS network in this Region. Applies to
     * public virtual interfaces.</p>
     */
    inline void SetRouteFilterPrefixes(Aws::Vector<RouteFilterPrefix>&& value) { m_routeFilterPrefixes = std::move(value); }

    /**
     * <p>The routes to be advertised to the AWS network in this Region. Applies to
     * public virtual interfaces.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithRouteFilterPrefixes(const Aws::Vector<RouteFilterPrefix>& value) { SetRouteFilterPrefixes(value); return *this;}

    /**
     * <p>The routes to be advertised to the AWS network in this Region. Applies to
     * public virtual interfaces.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithRouteFilterPrefixes(Aws::Vector<RouteFilterPrefix>&& value) { SetRouteFilterPrefixes(std::move(value)); return *this;}

    /**
     * <p>The routes to be advertised to the AWS network in this Region. Applies to
     * public virtual interfaces.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& AddRouteFilterPrefixes(const RouteFilterPrefix& value) { m_routeFilterPrefixes.push_back(value); return *this; }

    /**
     * <p>The routes to be advertised to the AWS network in this Region. Applies to
     * public virtual interfaces.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& AddRouteFilterPrefixes(RouteFilterPrefix&& value) { m_routeFilterPrefixes.push_back(std::move(value)); return *this; }


    /**
     * <p>The BGP peers configured on this virtual interface.</p>
     */
    inline const Aws::Vector<BGPPeer>& GetBgpPeers() const{ return m_bgpPeers; }

    /**
     * <p>The BGP peers configured on this virtual interface.</p>
     */
    inline void SetBgpPeers(const Aws::Vector<BGPPeer>& value) { m_bgpPeers = value; }

    /**
     * <p>The BGP peers configured on this virtual interface.</p>
     */
    inline void SetBgpPeers(Aws::Vector<BGPPeer>&& value) { m_bgpPeers = std::move(value); }

    /**
     * <p>The BGP peers configured on this virtual interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithBgpPeers(const Aws::Vector<BGPPeer>& value) { SetBgpPeers(value); return *this;}

    /**
     * <p>The BGP peers configured on this virtual interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithBgpPeers(Aws::Vector<BGPPeer>&& value) { SetBgpPeers(std::move(value)); return *this;}

    /**
     * <p>The BGP peers configured on this virtual interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& AddBgpPeers(const BGPPeer& value) { m_bgpPeers.push_back(value); return *this; }

    /**
     * <p>The BGP peers configured on this virtual interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& AddBgpPeers(BGPPeer&& value) { m_bgpPeers.push_back(std::move(value)); return *this; }


    /**
     * <p>The AWS Region where the virtual interface is located.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS Region where the virtual interface is located.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_region = value; }

    /**
     * <p>The AWS Region where the virtual interface is located.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_region = std::move(value); }

    /**
     * <p>The AWS Region where the virtual interface is located.</p>
     */
    inline void SetRegion(const char* value) { m_region.assign(value); }

    /**
     * <p>The AWS Region where the virtual interface is located.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS Region where the virtual interface is located.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region where the virtual interface is located.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The Direct Connect endpoint on which the virtual interface terminates.</p>
     */
    inline const Aws::String& GetAwsDeviceV2() const{ return m_awsDeviceV2; }

    /**
     * <p>The Direct Connect endpoint on which the virtual interface terminates.</p>
     */
    inline void SetAwsDeviceV2(const Aws::String& value) { m_awsDeviceV2 = value; }

    /**
     * <p>The Direct Connect endpoint on which the virtual interface terminates.</p>
     */
    inline void SetAwsDeviceV2(Aws::String&& value) { m_awsDeviceV2 = std::move(value); }

    /**
     * <p>The Direct Connect endpoint on which the virtual interface terminates.</p>
     */
    inline void SetAwsDeviceV2(const char* value) { m_awsDeviceV2.assign(value); }

    /**
     * <p>The Direct Connect endpoint on which the virtual interface terminates.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithAwsDeviceV2(const Aws::String& value) { SetAwsDeviceV2(value); return *this;}

    /**
     * <p>The Direct Connect endpoint on which the virtual interface terminates.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithAwsDeviceV2(Aws::String&& value) { SetAwsDeviceV2(std::move(value)); return *this;}

    /**
     * <p>The Direct Connect endpoint on which the virtual interface terminates.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithAwsDeviceV2(const char* value) { SetAwsDeviceV2(value); return *this;}


    /**
     * <p>Any tags assigned to the virtual interface.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the virtual interface.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Any tags assigned to the virtual interface.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the virtual interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the virtual interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the virtual interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the virtual interface.</p>
     */
    inline AllocatePrivateVirtualInterfaceResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_ownerAccount;

    Aws::String m_virtualInterfaceId;

    Aws::String m_location;

    Aws::String m_connectionId;

    Aws::String m_virtualInterfaceType;

    Aws::String m_virtualInterfaceName;

    int m_vlan;

    int m_asn;

    long long m_amazonSideAsn;

    Aws::String m_authKey;

    Aws::String m_amazonAddress;

    Aws::String m_customerAddress;

    AddressFamily m_addressFamily;

    VirtualInterfaceState m_virtualInterfaceState;

    Aws::String m_customerRouterConfig;

    int m_mtu;

    bool m_jumboFrameCapable;

    Aws::String m_virtualGatewayId;

    Aws::String m_directConnectGatewayId;

    Aws::Vector<RouteFilterPrefix> m_routeFilterPrefixes;

    Aws::Vector<BGPPeer> m_bgpPeers;

    Aws::String m_region;

    Aws::String m_awsDeviceV2;

    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
