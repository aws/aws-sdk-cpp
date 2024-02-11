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
    AWS_KAFKA_API ClusterOperationV2Provisioned();
    AWS_KAFKA_API ClusterOperationV2Provisioned(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ClusterOperationV2Provisioned& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>Steps completed during the operation.</p>
     */
    inline const Aws::Vector<ClusterOperationStep>& GetOperationSteps() const{ return m_operationSteps; }

    /**
     * 
            <p>Steps completed during the operation.</p>
     */
    inline bool OperationStepsHasBeenSet() const { return m_operationStepsHasBeenSet; }

    /**
     * 
            <p>Steps completed during the operation.</p>
     */
    inline void SetOperationSteps(const Aws::Vector<ClusterOperationStep>& value) { m_operationStepsHasBeenSet = true; m_operationSteps = value; }

    /**
     * 
            <p>Steps completed during the operation.</p>
     */
    inline void SetOperationSteps(Aws::Vector<ClusterOperationStep>&& value) { m_operationStepsHasBeenSet = true; m_operationSteps = std::move(value); }

    /**
     * 
            <p>Steps completed during the operation.</p>
     */
    inline ClusterOperationV2Provisioned& WithOperationSteps(const Aws::Vector<ClusterOperationStep>& value) { SetOperationSteps(value); return *this;}

    /**
     * 
            <p>Steps completed during the operation.</p>
     */
    inline ClusterOperationV2Provisioned& WithOperationSteps(Aws::Vector<ClusterOperationStep>&& value) { SetOperationSteps(std::move(value)); return *this;}

    /**
     * 
            <p>Steps completed during the operation.</p>
     */
    inline ClusterOperationV2Provisioned& AddOperationSteps(const ClusterOperationStep& value) { m_operationStepsHasBeenSet = true; m_operationSteps.push_back(value); return *this; }

    /**
     * 
            <p>Steps completed during the operation.</p>
     */
    inline ClusterOperationV2Provisioned& AddOperationSteps(ClusterOperationStep&& value) { m_operationStepsHasBeenSet = true; m_operationSteps.push_back(std::move(value)); return *this; }


    /**
     * 
            <p>Information about cluster attributes before a cluster is
     * updated.</p>
     */
    inline const MutableClusterInfo& GetSourceClusterInfo() const{ return m_sourceClusterInfo; }

    /**
     * 
            <p>Information about cluster attributes before a cluster is
     * updated.</p>
     */
    inline bool SourceClusterInfoHasBeenSet() const { return m_sourceClusterInfoHasBeenSet; }

    /**
     * 
            <p>Information about cluster attributes before a cluster is
     * updated.</p>
     */
    inline void SetSourceClusterInfo(const MutableClusterInfo& value) { m_sourceClusterInfoHasBeenSet = true; m_sourceClusterInfo = value; }

    /**
     * 
            <p>Information about cluster attributes before a cluster is
     * updated.</p>
     */
    inline void SetSourceClusterInfo(MutableClusterInfo&& value) { m_sourceClusterInfoHasBeenSet = true; m_sourceClusterInfo = std::move(value); }

    /**
     * 
            <p>Information about cluster attributes before a cluster is
     * updated.</p>
     */
    inline ClusterOperationV2Provisioned& WithSourceClusterInfo(const MutableClusterInfo& value) { SetSourceClusterInfo(value); return *this;}

    /**
     * 
            <p>Information about cluster attributes before a cluster is
     * updated.</p>
     */
    inline ClusterOperationV2Provisioned& WithSourceClusterInfo(MutableClusterInfo&& value) { SetSourceClusterInfo(std::move(value)); return *this;}


    /**
     * 
            <p>Information about cluster attributes after a cluster is
     * updated.</p>
     */
    inline const MutableClusterInfo& GetTargetClusterInfo() const{ return m_targetClusterInfo; }

    /**
     * 
            <p>Information about cluster attributes after a cluster is
     * updated.</p>
     */
    inline bool TargetClusterInfoHasBeenSet() const { return m_targetClusterInfoHasBeenSet; }

    /**
     * 
            <p>Information about cluster attributes after a cluster is
     * updated.</p>
     */
    inline void SetTargetClusterInfo(const MutableClusterInfo& value) { m_targetClusterInfoHasBeenSet = true; m_targetClusterInfo = value; }

    /**
     * 
            <p>Information about cluster attributes after a cluster is
     * updated.</p>
     */
    inline void SetTargetClusterInfo(MutableClusterInfo&& value) { m_targetClusterInfoHasBeenSet = true; m_targetClusterInfo = std::move(value); }

    /**
     * 
            <p>Information about cluster attributes after a cluster is
     * updated.</p>
     */
    inline ClusterOperationV2Provisioned& WithTargetClusterInfo(const MutableClusterInfo& value) { SetTargetClusterInfo(value); return *this;}

    /**
     * 
            <p>Information about cluster attributes after a cluster is
     * updated.</p>
     */
    inline ClusterOperationV2Provisioned& WithTargetClusterInfo(MutableClusterInfo&& value) { SetTargetClusterInfo(std::move(value)); return *this;}


    /**
     * 
            <p>Description of the VPC connection for CreateVpcConnection and
     * DeleteVpcConnection operations.</p>
     */
    inline const VpcConnectionInfo& GetVpcConnectionInfo() const{ return m_vpcConnectionInfo; }

    /**
     * 
            <p>Description of the VPC connection for CreateVpcConnection and
     * DeleteVpcConnection operations.</p>
     */
    inline bool VpcConnectionInfoHasBeenSet() const { return m_vpcConnectionInfoHasBeenSet; }

    /**
     * 
            <p>Description of the VPC connection for CreateVpcConnection and
     * DeleteVpcConnection operations.</p>
     */
    inline void SetVpcConnectionInfo(const VpcConnectionInfo& value) { m_vpcConnectionInfoHasBeenSet = true; m_vpcConnectionInfo = value; }

    /**
     * 
            <p>Description of the VPC connection for CreateVpcConnection and
     * DeleteVpcConnection operations.</p>
     */
    inline void SetVpcConnectionInfo(VpcConnectionInfo&& value) { m_vpcConnectionInfoHasBeenSet = true; m_vpcConnectionInfo = std::move(value); }

    /**
     * 
            <p>Description of the VPC connection for CreateVpcConnection and
     * DeleteVpcConnection operations.</p>
     */
    inline ClusterOperationV2Provisioned& WithVpcConnectionInfo(const VpcConnectionInfo& value) { SetVpcConnectionInfo(value); return *this;}

    /**
     * 
            <p>Description of the VPC connection for CreateVpcConnection and
     * DeleteVpcConnection operations.</p>
     */
    inline ClusterOperationV2Provisioned& WithVpcConnectionInfo(VpcConnectionInfo&& value) { SetVpcConnectionInfo(std::move(value)); return *this;}

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
