/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kafka/model/ErrorInfo.h>
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
            <p>Returns information about a cluster operation.</p>
        
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ClusterOperationInfo">AWS
   * API Reference</a></p>
   */
  class ClusterOperationInfo
  {
  public:
    AWS_KAFKA_API ClusterOperationInfo() = default;
    AWS_KAFKA_API ClusterOperationInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ClusterOperationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>The ID of the API request that triggered this operation.</p>
   
     *      
     */
    inline const Aws::String& GetClientRequestId() const { return m_clientRequestId; }
    inline bool ClientRequestIdHasBeenSet() const { return m_clientRequestIdHasBeenSet; }
    template<typename ClientRequestIdT = Aws::String>
    void SetClientRequestId(ClientRequestIdT&& value) { m_clientRequestIdHasBeenSet = true; m_clientRequestId = std::forward<ClientRequestIdT>(value); }
    template<typename ClientRequestIdT = Aws::String>
    ClusterOperationInfo& WithClientRequestId(ClientRequestIdT&& value) { SetClientRequestId(std::forward<ClientRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>ARN of the cluster.</p>
         
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    ClusterOperationInfo& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The time that the operation was created.</p>
         
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ClusterOperationInfo& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The time at which the operation finished.</p>
         
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ClusterOperationInfo& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Describes the error if the operation fails.</p>
         
     */
    inline const ErrorInfo& GetErrorInfo() const { return m_errorInfo; }
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }
    template<typename ErrorInfoT = ErrorInfo>
    void SetErrorInfo(ErrorInfoT&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::forward<ErrorInfoT>(value); }
    template<typename ErrorInfoT = ErrorInfo>
    ClusterOperationInfo& WithErrorInfo(ErrorInfoT&& value) { SetErrorInfo(std::forward<ErrorInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>ARN of the cluster operation.</p>
         
     */
    inline const Aws::String& GetOperationArn() const { return m_operationArn; }
    inline bool OperationArnHasBeenSet() const { return m_operationArnHasBeenSet; }
    template<typename OperationArnT = Aws::String>
    void SetOperationArn(OperationArnT&& value) { m_operationArnHasBeenSet = true; m_operationArn = std::forward<OperationArnT>(value); }
    template<typename OperationArnT = Aws::String>
    ClusterOperationInfo& WithOperationArn(OperationArnT&& value) { SetOperationArn(std::forward<OperationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>State of the cluster operation.</p>
         
     */
    inline const Aws::String& GetOperationState() const { return m_operationState; }
    inline bool OperationStateHasBeenSet() const { return m_operationStateHasBeenSet; }
    template<typename OperationStateT = Aws::String>
    void SetOperationState(OperationStateT&& value) { m_operationStateHasBeenSet = true; m_operationState = std::forward<OperationStateT>(value); }
    template<typename OperationStateT = Aws::String>
    ClusterOperationInfo& WithOperationState(OperationStateT&& value) { SetOperationState(std::forward<OperationStateT>(value)); return *this;}
    ///@}

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
    ClusterOperationInfo& WithOperationSteps(OperationStepsT&& value) { SetOperationSteps(std::forward<OperationStepsT>(value)); return *this;}
    template<typename OperationStepsT = ClusterOperationStep>
    ClusterOperationInfo& AddOperationSteps(OperationStepsT&& value) { m_operationStepsHasBeenSet = true; m_operationSteps.emplace_back(std::forward<OperationStepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>Type of the cluster operation.</p>
         
     */
    inline const Aws::String& GetOperationType() const { return m_operationType; }
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
    template<typename OperationTypeT = Aws::String>
    void SetOperationType(OperationTypeT&& value) { m_operationTypeHasBeenSet = true; m_operationType = std::forward<OperationTypeT>(value); }
    template<typename OperationTypeT = Aws::String>
    ClusterOperationInfo& WithOperationType(OperationTypeT&& value) { SetOperationType(std::forward<OperationTypeT>(value)); return *this;}
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
    ClusterOperationInfo& WithSourceClusterInfo(SourceClusterInfoT&& value) { SetSourceClusterInfo(std::forward<SourceClusterInfoT>(value)); return *this;}
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
    ClusterOperationInfo& WithTargetClusterInfo(TargetClusterInfoT&& value) { SetTargetClusterInfo(std::forward<TargetClusterInfoT>(value)); return *this;}
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
    ClusterOperationInfo& WithVpcConnectionInfo(VpcConnectionInfoT&& value) { SetVpcConnectionInfo(std::forward<VpcConnectionInfoT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientRequestId;
    bool m_clientRequestIdHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    ErrorInfo m_errorInfo;
    bool m_errorInfoHasBeenSet = false;

    Aws::String m_operationArn;
    bool m_operationArnHasBeenSet = false;

    Aws::String m_operationState;
    bool m_operationStateHasBeenSet = false;

    Aws::Vector<ClusterOperationStep> m_operationSteps;
    bool m_operationStepsHasBeenSet = false;

    Aws::String m_operationType;
    bool m_operationTypeHasBeenSet = false;

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
