/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/directconnect/model/LagState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/Connection.h>

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
   * <p>Describes a link aggregation group (LAG). A LAG is a connection that uses the
   * Link Aggregation Control Protocol (LACP) to logically aggregate a bundle of
   * physical connections. Like an interconnect, it can host other connections. All
   * connections in a LAG must terminate on the same physical AWS Direct Connect
   * endpoint, and must be the same bandwidth.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/Lag">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API UpdateLagResult
  {
  public:
    UpdateLagResult();
    UpdateLagResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateLagResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG.</p>
     * <p>Available values: 1Gbps, 10Gbps</p>
     */
    inline const Aws::String& GetConnectionsBandwidth() const{ return m_connectionsBandwidth; }

    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG.</p>
     * <p>Available values: 1Gbps, 10Gbps</p>
     */
    inline void SetConnectionsBandwidth(const Aws::String& value) { m_connectionsBandwidth = value; }

    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG.</p>
     * <p>Available values: 1Gbps, 10Gbps</p>
     */
    inline void SetConnectionsBandwidth(Aws::String&& value) { m_connectionsBandwidth = value; }

    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG.</p>
     * <p>Available values: 1Gbps, 10Gbps</p>
     */
    inline void SetConnectionsBandwidth(const char* value) { m_connectionsBandwidth.assign(value); }

    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG.</p>
     * <p>Available values: 1Gbps, 10Gbps</p>
     */
    inline UpdateLagResult& WithConnectionsBandwidth(const Aws::String& value) { SetConnectionsBandwidth(value); return *this;}

    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG.</p>
     * <p>Available values: 1Gbps, 10Gbps</p>
     */
    inline UpdateLagResult& WithConnectionsBandwidth(Aws::String&& value) { SetConnectionsBandwidth(value); return *this;}

    /**
     * <p>The individual bandwidth of the physical connections bundled by the LAG.</p>
     * <p>Available values: 1Gbps, 10Gbps</p>
     */
    inline UpdateLagResult& WithConnectionsBandwidth(const char* value) { SetConnectionsBandwidth(value); return *this;}

    /**
     * <p>The number of physical connections bundled by the LAG, up to a maximum of
     * 10.</p>
     */
    inline int GetNumberOfConnections() const{ return m_numberOfConnections; }

    /**
     * <p>The number of physical connections bundled by the LAG, up to a maximum of
     * 10.</p>
     */
    inline void SetNumberOfConnections(int value) { m_numberOfConnections = value; }

    /**
     * <p>The number of physical connections bundled by the LAG, up to a maximum of
     * 10.</p>
     */
    inline UpdateLagResult& WithNumberOfConnections(int value) { SetNumberOfConnections(value); return *this;}

    
    inline const Aws::String& GetLagId() const{ return m_lagId; }

    
    inline void SetLagId(const Aws::String& value) { m_lagId = value; }

    
    inline void SetLagId(Aws::String&& value) { m_lagId = value; }

    
    inline void SetLagId(const char* value) { m_lagId.assign(value); }

    
    inline UpdateLagResult& WithLagId(const Aws::String& value) { SetLagId(value); return *this;}

    
    inline UpdateLagResult& WithLagId(Aws::String&& value) { SetLagId(value); return *this;}

    
    inline UpdateLagResult& WithLagId(const char* value) { SetLagId(value); return *this;}

    /**
     * <p>The owner of the LAG.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The owner of the LAG.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccount = value; }

    /**
     * <p>The owner of the LAG.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccount = value; }

    /**
     * <p>The owner of the LAG.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccount.assign(value); }

    /**
     * <p>The owner of the LAG.</p>
     */
    inline UpdateLagResult& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The owner of the LAG.</p>
     */
    inline UpdateLagResult& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The owner of the LAG.</p>
     */
    inline UpdateLagResult& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The name of the LAG.</p>
     */
    inline const Aws::String& GetLagName() const{ return m_lagName; }

    /**
     * <p>The name of the LAG.</p>
     */
    inline void SetLagName(const Aws::String& value) { m_lagName = value; }

    /**
     * <p>The name of the LAG.</p>
     */
    inline void SetLagName(Aws::String&& value) { m_lagName = value; }

    /**
     * <p>The name of the LAG.</p>
     */
    inline void SetLagName(const char* value) { m_lagName.assign(value); }

    /**
     * <p>The name of the LAG.</p>
     */
    inline UpdateLagResult& WithLagName(const Aws::String& value) { SetLagName(value); return *this;}

    /**
     * <p>The name of the LAG.</p>
     */
    inline UpdateLagResult& WithLagName(Aws::String&& value) { SetLagName(value); return *this;}

    /**
     * <p>The name of the LAG.</p>
     */
    inline UpdateLagResult& WithLagName(const char* value) { SetLagName(value); return *this;}

    
    inline const LagState& GetLagState() const{ return m_lagState; }

    
    inline void SetLagState(const LagState& value) { m_lagState = value; }

    
    inline void SetLagState(LagState&& value) { m_lagState = value; }

    
    inline UpdateLagResult& WithLagState(const LagState& value) { SetLagState(value); return *this;}

    
    inline UpdateLagResult& WithLagState(LagState&& value) { SetLagState(value); return *this;}

    
    inline const Aws::String& GetLocation() const{ return m_location; }

    
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    
    inline void SetLocation(Aws::String&& value) { m_location = value; }

    
    inline void SetLocation(const char* value) { m_location.assign(value); }

    
    inline UpdateLagResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    
    inline UpdateLagResult& WithLocation(Aws::String&& value) { SetLocation(value); return *this;}

    
    inline UpdateLagResult& WithLocation(const char* value) { SetLocation(value); return *this;}

    
    inline const Aws::String& GetRegion() const{ return m_region; }

    
    inline void SetRegion(const Aws::String& value) { m_region = value; }

    
    inline void SetRegion(Aws::String&& value) { m_region = value; }

    
    inline void SetRegion(const char* value) { m_region.assign(value); }

    
    inline UpdateLagResult& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    
    inline UpdateLagResult& WithRegion(Aws::String&& value) { SetRegion(value); return *this;}

    
    inline UpdateLagResult& WithRegion(const char* value) { SetRegion(value); return *this;}

    /**
     * <p>The minimum number of physical connections that must be operational for the
     * LAG itself to be operational. If the number of operational connections drops
     * below this setting, the LAG state changes to <code>down</code>. This value can
     * help to ensure that a LAG is not overutilized if a significant number of its
     * bundled connections go down.</p>
     */
    inline int GetMinimumLinks() const{ return m_minimumLinks; }

    /**
     * <p>The minimum number of physical connections that must be operational for the
     * LAG itself to be operational. If the number of operational connections drops
     * below this setting, the LAG state changes to <code>down</code>. This value can
     * help to ensure that a LAG is not overutilized if a significant number of its
     * bundled connections go down.</p>
     */
    inline void SetMinimumLinks(int value) { m_minimumLinks = value; }

    /**
     * <p>The minimum number of physical connections that must be operational for the
     * LAG itself to be operational. If the number of operational connections drops
     * below this setting, the LAG state changes to <code>down</code>. This value can
     * help to ensure that a LAG is not overutilized if a significant number of its
     * bundled connections go down.</p>
     */
    inline UpdateLagResult& WithMinimumLinks(int value) { SetMinimumLinks(value); return *this;}

    /**
     * <p>The AWS Direct Connection endpoint that hosts the LAG.</p>
     */
    inline const Aws::String& GetAwsDevice() const{ return m_awsDevice; }

    /**
     * <p>The AWS Direct Connection endpoint that hosts the LAG.</p>
     */
    inline void SetAwsDevice(const Aws::String& value) { m_awsDevice = value; }

    /**
     * <p>The AWS Direct Connection endpoint that hosts the LAG.</p>
     */
    inline void SetAwsDevice(Aws::String&& value) { m_awsDevice = value; }

    /**
     * <p>The AWS Direct Connection endpoint that hosts the LAG.</p>
     */
    inline void SetAwsDevice(const char* value) { m_awsDevice.assign(value); }

    /**
     * <p>The AWS Direct Connection endpoint that hosts the LAG.</p>
     */
    inline UpdateLagResult& WithAwsDevice(const Aws::String& value) { SetAwsDevice(value); return *this;}

    /**
     * <p>The AWS Direct Connection endpoint that hosts the LAG.</p>
     */
    inline UpdateLagResult& WithAwsDevice(Aws::String&& value) { SetAwsDevice(value); return *this;}

    /**
     * <p>The AWS Direct Connection endpoint that hosts the LAG.</p>
     */
    inline UpdateLagResult& WithAwsDevice(const char* value) { SetAwsDevice(value); return *this;}

    /**
     * <p>A list of connections bundled by this LAG.</p>
     */
    inline const Aws::Vector<Connection>& GetConnections() const{ return m_connections; }

    /**
     * <p>A list of connections bundled by this LAG.</p>
     */
    inline void SetConnections(const Aws::Vector<Connection>& value) { m_connections = value; }

    /**
     * <p>A list of connections bundled by this LAG.</p>
     */
    inline void SetConnections(Aws::Vector<Connection>&& value) { m_connections = value; }

    /**
     * <p>A list of connections bundled by this LAG.</p>
     */
    inline UpdateLagResult& WithConnections(const Aws::Vector<Connection>& value) { SetConnections(value); return *this;}

    /**
     * <p>A list of connections bundled by this LAG.</p>
     */
    inline UpdateLagResult& WithConnections(Aws::Vector<Connection>&& value) { SetConnections(value); return *this;}

    /**
     * <p>A list of connections bundled by this LAG.</p>
     */
    inline UpdateLagResult& AddConnections(const Connection& value) { m_connections.push_back(value); return *this; }

    /**
     * <p>A list of connections bundled by this LAG.</p>
     */
    inline UpdateLagResult& AddConnections(Connection&& value) { m_connections.push_back(value); return *this; }

    /**
     * <p>Indicates whether the LAG can host other connections.</p> <note> <p>This is
     * intended for use by AWS Direct Connect partners only.</p> </note>
     */
    inline bool GetAllowsHostedConnections() const{ return m_allowsHostedConnections; }

    /**
     * <p>Indicates whether the LAG can host other connections.</p> <note> <p>This is
     * intended for use by AWS Direct Connect partners only.</p> </note>
     */
    inline void SetAllowsHostedConnections(bool value) { m_allowsHostedConnections = value; }

    /**
     * <p>Indicates whether the LAG can host other connections.</p> <note> <p>This is
     * intended for use by AWS Direct Connect partners only.</p> </note>
     */
    inline UpdateLagResult& WithAllowsHostedConnections(bool value) { SetAllowsHostedConnections(value); return *this;}

  private:
    Aws::String m_connectionsBandwidth;
    int m_numberOfConnections;
    Aws::String m_lagId;
    Aws::String m_ownerAccount;
    Aws::String m_lagName;
    LagState m_lagState;
    Aws::String m_location;
    Aws::String m_region;
    int m_minimumLinks;
    Aws::String m_awsDevice;
    Aws::Vector<Connection> m_connections;
    bool m_allowsHostedConnections;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
