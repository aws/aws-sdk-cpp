/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/model/MutableClusterInfo.h>
#include <aws/kafka/model/VpcConnectionInfo.h>
#include <aws/kafka/model/ClusterOperationStep.h>
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
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>Returns information about a provisioned cluster
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ClusterOperationV2Provisioned">AWS
   * API Reference</a></p>
   */
  class ClusterOperationV2Provisioned
  {
  public:
    AWS_KAFKA_API ClusterOperationV2Provisioned() = default;
    AWS_KAFKA_API ClusterOperationV2Provisioned(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ClusterOperationV2Provisioned& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>Steps completed during the operation.</p>
     */
    inline const Aws::Vector<ClusterOperationStep>& GetOperationSteps() const { return m_operationSteps; }
    inline bool OperationStepsHasBeenSet() const { return m_operationStepsHasBeenSet; }
    template<typename OperationStepsT = Aws::Vector<ClusterOperationStep>>
    void SetOperationSteps(OperationStepsT&& value) { m_operationStepsHasBeenSet = true; m_operationSteps = std::forward<OperationStepsT>(value); }
    template<typename OperationStepsT = Aws::Vector<ClusterOperationStep>>
    ClusterOperationV2Provisioned& WithOperationSteps(OperationStepsT&& value) { SetOperationSteps(std::forward<OperationStepsT>(value)); return *this;}
    template<typename OperationStepsT = ClusterOperationStep>
    ClusterOperationV2Provisioned& AddOperationSteps(OperationStepsT&& value) { m_operationStepsHasBeenSet = true; m_operationSteps.emplace_back(std::forward<OperationStepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>Information about cluster attributes before a cluster is
     * updated.</p>
     */
    inline const MutableClusterInfo& GetSourceClusterInfo() const { return m_sourceClusterInfo; }
    inline bool SourceClusterInfoHasBeenSet() const { return m_sourceClusterInfoHasBeenSet; }
    template<typename SourceClusterInfoT = MutableClusterInfo>
    void SetSourceClusterInfo(SourceClusterInfoT&& value) { m_sourceClusterInfoHasBeenSet = true; m_sourceClusterInfo = std::forward<SourceClusterInfoT>(value); }
    template<typename SourceClusterInfoT = MutableClusterInfo>
    ClusterOperationV2Provisioned& WithSourceClusterInfo(SourceClusterInfoT&& value) { SetSourceClusterInfo(std::forward<SourceClusterInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Information about cluster attributes after a cluster is
     * updated.</p>
     */
    inline const MutableClusterInfo& GetTargetClusterInfo() const { return m_targetClusterInfo; }
    inline bool TargetClusterInfoHasBeenSet() const { return m_targetClusterInfoHasBeenSet; }
    template<typename TargetClusterInfoT = MutableClusterInfo>
    void SetTargetClusterInfo(TargetClusterInfoT&& value) { m_targetClusterInfoHasBeenSet = true; m_targetClusterInfo = std::forward<TargetClusterInfoT>(value); }
    template<typename TargetClusterInfoT = MutableClusterInfo>
    ClusterOperationV2Provisioned& WithTargetClusterInfo(TargetClusterInfoT&& value) { SetTargetClusterInfo(std::forward<TargetClusterInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Description of the VPC connection for CreateVpcConnection and
     * DeleteVpcConnection operations.</p>
     */
    inline const VpcConnectionInfo& GetVpcConnectionInfo() const { return m_vpcConnectionInfo; }
    inline bool VpcConnectionInfoHasBeenSet() const { return m_vpcConnectionInfoHasBeenSet; }
    template<typename VpcConnectionInfoT = VpcConnectionInfo>
    void SetVpcConnectionInfo(VpcConnectionInfoT&& value) { m_vpcConnectionInfoHasBeenSet = true; m_vpcConnectionInfo = std::forward<VpcConnectionInfoT>(value); }
    template<typename VpcConnectionInfoT = VpcConnectionInfo>
    ClusterOperationV2Provisioned& WithVpcConnectionInfo(VpcConnectionInfoT&& value) { SetVpcConnectionInfo(std::forward<VpcConnectionInfoT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ClusterOperationStep> m_operationSteps;
    bool m_operationStepsHasBeenSet = false;

    MutableClusterInfo m_sourceClusterInfo;
    bool m_sourceClusterInfoHasBeenSet = false;

    MutableClusterInfo m_targetClusterInfo;
    bool m_targetClusterInfoHasBeenSet = false;

    VpcConnectionInfo m_vpcConnectionInfo;
    bool m_vpcConnectionInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
