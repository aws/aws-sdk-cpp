/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>

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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>Information about the number of nodes and node types in a vehicle
   * network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/NodeCounts">AWS
   * API Reference</a></p>
   */
  class NodeCounts
  {
  public:
    AWS_IOTFLEETWISE_API NodeCounts();
    AWS_IOTFLEETWISE_API NodeCounts(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API NodeCounts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of nodes in a vehicle network.</p>
     */
    inline int GetTotalNodes() const{ return m_totalNodes; }

    /**
     * <p>The total number of nodes in a vehicle network.</p>
     */
    inline bool TotalNodesHasBeenSet() const { return m_totalNodesHasBeenSet; }

    /**
     * <p>The total number of nodes in a vehicle network.</p>
     */
    inline void SetTotalNodes(int value) { m_totalNodesHasBeenSet = true; m_totalNodes = value; }

    /**
     * <p>The total number of nodes in a vehicle network.</p>
     */
    inline NodeCounts& WithTotalNodes(int value) { SetTotalNodes(value); return *this;}


    /**
     * <p>The total number of nodes in a vehicle network that represent branches.</p>
     */
    inline int GetTotalBranches() const{ return m_totalBranches; }

    /**
     * <p>The total number of nodes in a vehicle network that represent branches.</p>
     */
    inline bool TotalBranchesHasBeenSet() const { return m_totalBranchesHasBeenSet; }

    /**
     * <p>The total number of nodes in a vehicle network that represent branches.</p>
     */
    inline void SetTotalBranches(int value) { m_totalBranchesHasBeenSet = true; m_totalBranches = value; }

    /**
     * <p>The total number of nodes in a vehicle network that represent branches.</p>
     */
    inline NodeCounts& WithTotalBranches(int value) { SetTotalBranches(value); return *this;}


    /**
     * <p>The total number of nodes in a vehicle network that represent sensors.</p>
     */
    inline int GetTotalSensors() const{ return m_totalSensors; }

    /**
     * <p>The total number of nodes in a vehicle network that represent sensors.</p>
     */
    inline bool TotalSensorsHasBeenSet() const { return m_totalSensorsHasBeenSet; }

    /**
     * <p>The total number of nodes in a vehicle network that represent sensors.</p>
     */
    inline void SetTotalSensors(int value) { m_totalSensorsHasBeenSet = true; m_totalSensors = value; }

    /**
     * <p>The total number of nodes in a vehicle network that represent sensors.</p>
     */
    inline NodeCounts& WithTotalSensors(int value) { SetTotalSensors(value); return *this;}


    /**
     * <p>The total number of nodes in a vehicle network that represent attributes.</p>
     */
    inline int GetTotalAttributes() const{ return m_totalAttributes; }

    /**
     * <p>The total number of nodes in a vehicle network that represent attributes.</p>
     */
    inline bool TotalAttributesHasBeenSet() const { return m_totalAttributesHasBeenSet; }

    /**
     * <p>The total number of nodes in a vehicle network that represent attributes.</p>
     */
    inline void SetTotalAttributes(int value) { m_totalAttributesHasBeenSet = true; m_totalAttributes = value; }

    /**
     * <p>The total number of nodes in a vehicle network that represent attributes.</p>
     */
    inline NodeCounts& WithTotalAttributes(int value) { SetTotalAttributes(value); return *this;}


    /**
     * <p>The total number of nodes in a vehicle network that represent actuators.</p>
     */
    inline int GetTotalActuators() const{ return m_totalActuators; }

    /**
     * <p>The total number of nodes in a vehicle network that represent actuators.</p>
     */
    inline bool TotalActuatorsHasBeenSet() const { return m_totalActuatorsHasBeenSet; }

    /**
     * <p>The total number of nodes in a vehicle network that represent actuators.</p>
     */
    inline void SetTotalActuators(int value) { m_totalActuatorsHasBeenSet = true; m_totalActuators = value; }

    /**
     * <p>The total number of nodes in a vehicle network that represent actuators.</p>
     */
    inline NodeCounts& WithTotalActuators(int value) { SetTotalActuators(value); return *this;}

  private:

    int m_totalNodes;
    bool m_totalNodesHasBeenSet = false;

    int m_totalBranches;
    bool m_totalBranchesHasBeenSet = false;

    int m_totalSensors;
    bool m_totalSensorsHasBeenSet = false;

    int m_totalAttributes;
    bool m_totalAttributesHasBeenSet = false;

    int m_totalActuators;
    bool m_totalActuatorsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
