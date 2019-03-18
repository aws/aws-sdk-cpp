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
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dax/model/Endpoint.h>
#include <aws/core/utils/DateTime.h>
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
namespace DAX
{
namespace Model
{

  /**
   * <p>Represents an individual node within a DAX cluster.</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/dax-2017-04-19/Node">AWS API
   * Reference</a></p>
   */
  class AWS_DAX_API Node
  {
  public:
    Node();
    Node(Aws::Utils::Json::JsonView jsonValue);
    Node& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A system-generated identifier for the node.</p>
     */
    inline const Aws::String& GetNodeId() const{ return m_nodeId; }

    /**
     * <p>A system-generated identifier for the node.</p>
     */
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }

    /**
     * <p>A system-generated identifier for the node.</p>
     */
    inline void SetNodeId(const Aws::String& value) { m_nodeIdHasBeenSet = true; m_nodeId = value; }

    /**
     * <p>A system-generated identifier for the node.</p>
     */
    inline void SetNodeId(Aws::String&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::move(value); }

    /**
     * <p>A system-generated identifier for the node.</p>
     */
    inline void SetNodeId(const char* value) { m_nodeIdHasBeenSet = true; m_nodeId.assign(value); }

    /**
     * <p>A system-generated identifier for the node.</p>
     */
    inline Node& WithNodeId(const Aws::String& value) { SetNodeId(value); return *this;}

    /**
     * <p>A system-generated identifier for the node.</p>
     */
    inline Node& WithNodeId(Aws::String&& value) { SetNodeId(std::move(value)); return *this;}

    /**
     * <p>A system-generated identifier for the node.</p>
     */
    inline Node& WithNodeId(const char* value) { SetNodeId(value); return *this;}


    /**
     * <p>The endpoint for the node, consisting of a DNS name and a port number. Client
     * applications can connect directly to a node endpoint, if desired (as an
     * alternative to allowing DAX client software to intelligently route requests and
     * responses to nodes in the DAX cluster.</p>
     */
    inline const Endpoint& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint for the node, consisting of a DNS name and a port number. Client
     * applications can connect directly to a node endpoint, if desired (as an
     * alternative to allowing DAX client software to intelligently route requests and
     * responses to nodes in the DAX cluster.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The endpoint for the node, consisting of a DNS name and a port number. Client
     * applications can connect directly to a node endpoint, if desired (as an
     * alternative to allowing DAX client software to intelligently route requests and
     * responses to nodes in the DAX cluster.</p>
     */
    inline void SetEndpoint(const Endpoint& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint for the node, consisting of a DNS name and a port number. Client
     * applications can connect directly to a node endpoint, if desired (as an
     * alternative to allowing DAX client software to intelligently route requests and
     * responses to nodes in the DAX cluster.</p>
     */
    inline void SetEndpoint(Endpoint&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The endpoint for the node, consisting of a DNS name and a port number. Client
     * applications can connect directly to a node endpoint, if desired (as an
     * alternative to allowing DAX client software to intelligently route requests and
     * responses to nodes in the DAX cluster.</p>
     */
    inline Node& WithEndpoint(const Endpoint& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint for the node, consisting of a DNS name and a port number. Client
     * applications can connect directly to a node endpoint, if desired (as an
     * alternative to allowing DAX client software to intelligently route requests and
     * responses to nodes in the DAX cluster.</p>
     */
    inline Node& WithEndpoint(Endpoint&& value) { SetEndpoint(std::move(value)); return *this;}


    /**
     * <p>The date and time (in UNIX epoch format) when the node was launched.</p>
     */
    inline const Aws::Utils::DateTime& GetNodeCreateTime() const{ return m_nodeCreateTime; }

    /**
     * <p>The date and time (in UNIX epoch format) when the node was launched.</p>
     */
    inline bool NodeCreateTimeHasBeenSet() const { return m_nodeCreateTimeHasBeenSet; }

    /**
     * <p>The date and time (in UNIX epoch format) when the node was launched.</p>
     */
    inline void SetNodeCreateTime(const Aws::Utils::DateTime& value) { m_nodeCreateTimeHasBeenSet = true; m_nodeCreateTime = value; }

    /**
     * <p>The date and time (in UNIX epoch format) when the node was launched.</p>
     */
    inline void SetNodeCreateTime(Aws::Utils::DateTime&& value) { m_nodeCreateTimeHasBeenSet = true; m_nodeCreateTime = std::move(value); }

    /**
     * <p>The date and time (in UNIX epoch format) when the node was launched.</p>
     */
    inline Node& WithNodeCreateTime(const Aws::Utils::DateTime& value) { SetNodeCreateTime(value); return *this;}

    /**
     * <p>The date and time (in UNIX epoch format) when the node was launched.</p>
     */
    inline Node& WithNodeCreateTime(Aws::Utils::DateTime&& value) { SetNodeCreateTime(std::move(value)); return *this;}


    /**
     * <p>The Availability Zone (AZ) in which the node has been deployed.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone (AZ) in which the node has been deployed.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone (AZ) in which the node has been deployed.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone (AZ) in which the node has been deployed.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone (AZ) in which the node has been deployed.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone (AZ) in which the node has been deployed.</p>
     */
    inline Node& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone (AZ) in which the node has been deployed.</p>
     */
    inline Node& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone (AZ) in which the node has been deployed.</p>
     */
    inline Node& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The current status of the node. For example: <code>available</code>.</p>
     */
    inline const Aws::String& GetNodeStatus() const{ return m_nodeStatus; }

    /**
     * <p>The current status of the node. For example: <code>available</code>.</p>
     */
    inline bool NodeStatusHasBeenSet() const { return m_nodeStatusHasBeenSet; }

    /**
     * <p>The current status of the node. For example: <code>available</code>.</p>
     */
    inline void SetNodeStatus(const Aws::String& value) { m_nodeStatusHasBeenSet = true; m_nodeStatus = value; }

    /**
     * <p>The current status of the node. For example: <code>available</code>.</p>
     */
    inline void SetNodeStatus(Aws::String&& value) { m_nodeStatusHasBeenSet = true; m_nodeStatus = std::move(value); }

    /**
     * <p>The current status of the node. For example: <code>available</code>.</p>
     */
    inline void SetNodeStatus(const char* value) { m_nodeStatusHasBeenSet = true; m_nodeStatus.assign(value); }

    /**
     * <p>The current status of the node. For example: <code>available</code>.</p>
     */
    inline Node& WithNodeStatus(const Aws::String& value) { SetNodeStatus(value); return *this;}

    /**
     * <p>The current status of the node. For example: <code>available</code>.</p>
     */
    inline Node& WithNodeStatus(Aws::String&& value) { SetNodeStatus(std::move(value)); return *this;}

    /**
     * <p>The current status of the node. For example: <code>available</code>.</p>
     */
    inline Node& WithNodeStatus(const char* value) { SetNodeStatus(value); return *this;}


    /**
     * <p>The status of the parameter group associated with this node. For example,
     * <code>in-sync</code>.</p>
     */
    inline const Aws::String& GetParameterGroupStatus() const{ return m_parameterGroupStatus; }

    /**
     * <p>The status of the parameter group associated with this node. For example,
     * <code>in-sync</code>.</p>
     */
    inline bool ParameterGroupStatusHasBeenSet() const { return m_parameterGroupStatusHasBeenSet; }

    /**
     * <p>The status of the parameter group associated with this node. For example,
     * <code>in-sync</code>.</p>
     */
    inline void SetParameterGroupStatus(const Aws::String& value) { m_parameterGroupStatusHasBeenSet = true; m_parameterGroupStatus = value; }

    /**
     * <p>The status of the parameter group associated with this node. For example,
     * <code>in-sync</code>.</p>
     */
    inline void SetParameterGroupStatus(Aws::String&& value) { m_parameterGroupStatusHasBeenSet = true; m_parameterGroupStatus = std::move(value); }

    /**
     * <p>The status of the parameter group associated with this node. For example,
     * <code>in-sync</code>.</p>
     */
    inline void SetParameterGroupStatus(const char* value) { m_parameterGroupStatusHasBeenSet = true; m_parameterGroupStatus.assign(value); }

    /**
     * <p>The status of the parameter group associated with this node. For example,
     * <code>in-sync</code>.</p>
     */
    inline Node& WithParameterGroupStatus(const Aws::String& value) { SetParameterGroupStatus(value); return *this;}

    /**
     * <p>The status of the parameter group associated with this node. For example,
     * <code>in-sync</code>.</p>
     */
    inline Node& WithParameterGroupStatus(Aws::String&& value) { SetParameterGroupStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the parameter group associated with this node. For example,
     * <code>in-sync</code>.</p>
     */
    inline Node& WithParameterGroupStatus(const char* value) { SetParameterGroupStatus(value); return *this;}

  private:

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet;

    Endpoint m_endpoint;
    bool m_endpointHasBeenSet;

    Aws::Utils::DateTime m_nodeCreateTime;
    bool m_nodeCreateTimeHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::String m_nodeStatus;
    bool m_nodeStatusHasBeenSet;

    Aws::String m_parameterGroupStatus;
    bool m_parameterGroupStatusHasBeenSet;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
