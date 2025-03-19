/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class Node
  {
  public:
    AWS_DAX_API Node() = default;
    AWS_DAX_API Node(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API Node& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DAX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A system-generated identifier for the node.</p>
     */
    inline const Aws::String& GetNodeId() const { return m_nodeId; }
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }
    template<typename NodeIdT = Aws::String>
    void SetNodeId(NodeIdT&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::forward<NodeIdT>(value); }
    template<typename NodeIdT = Aws::String>
    Node& WithNodeId(NodeIdT&& value) { SetNodeId(std::forward<NodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint for the node, consisting of a DNS name and a port number. Client
     * applications can connect directly to a node endpoint, if desired (as an
     * alternative to allowing DAX client software to intelligently route requests and
     * responses to nodes in the DAX cluster.</p>
     */
    inline const Endpoint& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Endpoint>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Endpoint>
    Node& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time (in UNIX epoch format) when the node was launched.</p>
     */
    inline const Aws::Utils::DateTime& GetNodeCreateTime() const { return m_nodeCreateTime; }
    inline bool NodeCreateTimeHasBeenSet() const { return m_nodeCreateTimeHasBeenSet; }
    template<typename NodeCreateTimeT = Aws::Utils::DateTime>
    void SetNodeCreateTime(NodeCreateTimeT&& value) { m_nodeCreateTimeHasBeenSet = true; m_nodeCreateTime = std::forward<NodeCreateTimeT>(value); }
    template<typename NodeCreateTimeT = Aws::Utils::DateTime>
    Node& WithNodeCreateTime(NodeCreateTimeT&& value) { SetNodeCreateTime(std::forward<NodeCreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone (AZ) in which the node has been deployed.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    Node& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the node. For example: <code>available</code>.</p>
     */
    inline const Aws::String& GetNodeStatus() const { return m_nodeStatus; }
    inline bool NodeStatusHasBeenSet() const { return m_nodeStatusHasBeenSet; }
    template<typename NodeStatusT = Aws::String>
    void SetNodeStatus(NodeStatusT&& value) { m_nodeStatusHasBeenSet = true; m_nodeStatus = std::forward<NodeStatusT>(value); }
    template<typename NodeStatusT = Aws::String>
    Node& WithNodeStatus(NodeStatusT&& value) { SetNodeStatus(std::forward<NodeStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the parameter group associated with this node. For example,
     * <code>in-sync</code>.</p>
     */
    inline const Aws::String& GetParameterGroupStatus() const { return m_parameterGroupStatus; }
    inline bool ParameterGroupStatusHasBeenSet() const { return m_parameterGroupStatusHasBeenSet; }
    template<typename ParameterGroupStatusT = Aws::String>
    void SetParameterGroupStatus(ParameterGroupStatusT&& value) { m_parameterGroupStatusHasBeenSet = true; m_parameterGroupStatus = std::forward<ParameterGroupStatusT>(value); }
    template<typename ParameterGroupStatusT = Aws::String>
    Node& WithParameterGroupStatus(ParameterGroupStatusT&& value) { SetParameterGroupStatus(std::forward<ParameterGroupStatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;

    Endpoint m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::Utils::DateTime m_nodeCreateTime{};
    bool m_nodeCreateTimeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_nodeStatus;
    bool m_nodeStatusHasBeenSet = false;

    Aws::String m_parameterGroupStatus;
    bool m_parameterGroupStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
