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
    AWS_KAFKA_API ClusterOperationInfo();
    AWS_KAFKA_API ClusterOperationInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ClusterOperationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>The ID of the API request that triggered this operation.</p>
   
     *      
     */
    inline const Aws::String& GetClientRequestId() const{ return m_clientRequestId; }
    inline bool ClientRequestIdHasBeenSet() const { return m_clientRequestIdHasBeenSet; }
    inline void SetClientRequestId(const Aws::String& value) { m_clientRequestIdHasBeenSet = true; m_clientRequestId = value; }
    inline void SetClientRequestId(Aws::String&& value) { m_clientRequestIdHasBeenSet = true; m_clientRequestId = std::move(value); }
    inline void SetClientRequestId(const char* value) { m_clientRequestIdHasBeenSet = true; m_clientRequestId.assign(value); }
    inline ClusterOperationInfo& WithClientRequestId(const Aws::String& value) { SetClientRequestId(value); return *this;}
    inline ClusterOperationInfo& WithClientRequestId(Aws::String&& value) { SetClientRequestId(std::move(value)); return *this;}
    inline ClusterOperationInfo& WithClientRequestId(const char* value) { SetClientRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>ARN of the cluster.</p>
         
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }
    inline ClusterOperationInfo& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline ClusterOperationInfo& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline ClusterOperationInfo& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The time that the operation was created.</p>
         
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ClusterOperationInfo& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ClusterOperationInfo& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The time at which the operation finished.</p>
         
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ClusterOperationInfo& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ClusterOperationInfo& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Describes the error if the operation fails.</p>
         
     */
    inline const ErrorInfo& GetErrorInfo() const{ return m_errorInfo; }
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }
    inline void SetErrorInfo(const ErrorInfo& value) { m_errorInfoHasBeenSet = true; m_errorInfo = value; }
    inline void SetErrorInfo(ErrorInfo&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::move(value); }
    inline ClusterOperationInfo& WithErrorInfo(const ErrorInfo& value) { SetErrorInfo(value); return *this;}
    inline ClusterOperationInfo& WithErrorInfo(ErrorInfo&& value) { SetErrorInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>ARN of the cluster operation.</p>
         
     */
    inline const Aws::String& GetOperationArn() const{ return m_operationArn; }
    inline bool OperationArnHasBeenSet() const { return m_operationArnHasBeenSet; }
    inline void SetOperationArn(const Aws::String& value) { m_operationArnHasBeenSet = true; m_operationArn = value; }
    inline void SetOperationArn(Aws::String&& value) { m_operationArnHasBeenSet = true; m_operationArn = std::move(value); }
    inline void SetOperationArn(const char* value) { m_operationArnHasBeenSet = true; m_operationArn.assign(value); }
    inline ClusterOperationInfo& WithOperationArn(const Aws::String& value) { SetOperationArn(value); return *this;}
    inline ClusterOperationInfo& WithOperationArn(Aws::String&& value) { SetOperationArn(std::move(value)); return *this;}
    inline ClusterOperationInfo& WithOperationArn(const char* value) { SetOperationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>State of the cluster operation.</p>
         
     */
    inline const Aws::String& GetOperationState() const{ return m_operationState; }
    inline bool OperationStateHasBeenSet() const { return m_operationStateHasBeenSet; }
    inline void SetOperationState(const Aws::String& value) { m_operationStateHasBeenSet = true; m_operationState = value; }
    inline void SetOperationState(Aws::String&& value) { m_operationStateHasBeenSet = true; m_operationState = std::move(value); }
    inline void SetOperationState(const char* value) { m_operationStateHasBeenSet = true; m_operationState.assign(value); }
    inline ClusterOperationInfo& WithOperationState(const Aws::String& value) { SetOperationState(value); return *this;}
    inline ClusterOperationInfo& WithOperationState(Aws::String&& value) { SetOperationState(std::move(value)); return *this;}
    inline ClusterOperationInfo& WithOperationState(const char* value) { SetOperationState(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Steps completed during the operation.</p>
         
     */
    inline const Aws::Vector<ClusterOperationStep>& GetOperationSteps() const{ return m_operationSteps; }
    inline bool OperationStepsHasBeenSet() const { return m_operationStepsHasBeenSet; }
    inline void SetOperationSteps(const Aws::Vector<ClusterOperationStep>& value) { m_operationStepsHasBeenSet = true; m_operationSteps = value; }
    inline void SetOperationSteps(Aws::Vector<ClusterOperationStep>&& value) { m_operationStepsHasBeenSet = true; m_operationSteps = std::move(value); }
    inline ClusterOperationInfo& WithOperationSteps(const Aws::Vector<ClusterOperationStep>& value) { SetOperationSteps(value); return *this;}
    inline ClusterOperationInfo& WithOperationSteps(Aws::Vector<ClusterOperationStep>&& value) { SetOperationSteps(std::move(value)); return *this;}
    inline ClusterOperationInfo& AddOperationSteps(const ClusterOperationStep& value) { m_operationStepsHasBeenSet = true; m_operationSteps.push_back(value); return *this; }
    inline ClusterOperationInfo& AddOperationSteps(ClusterOperationStep&& value) { m_operationStepsHasBeenSet = true; m_operationSteps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>Type of the cluster operation.</p>
         
     */
    inline const Aws::String& GetOperationType() const{ return m_operationType; }
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }
    inline void SetOperationType(const Aws::String& value) { m_operationTypeHasBeenSet = true; m_operationType = value; }
    inline void SetOperationType(Aws::String&& value) { m_operationTypeHasBeenSet = true; m_operationType = std::move(value); }
    inline void SetOperationType(const char* value) { m_operationTypeHasBeenSet = true; m_operationType.assign(value); }
    inline ClusterOperationInfo& WithOperationType(const Aws::String& value) { SetOperationType(value); return *this;}
    inline ClusterOperationInfo& WithOperationType(Aws::String&& value) { SetOperationType(std::move(value)); return *this;}
    inline ClusterOperationInfo& WithOperationType(const char* value) { SetOperationType(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Information about cluster attributes before a cluster is
     * updated.</p>
         
     */
    inline const MutableClusterInfo& GetSourceClusterInfo() const{ return m_sourceClusterInfo; }
    inline bool SourceClusterInfoHasBeenSet() const { return m_sourceClusterInfoHasBeenSet; }
    inline void SetSourceClusterInfo(const MutableClusterInfo& value) { m_sourceClusterInfoHasBeenSet = true; m_sourceClusterInfo = value; }
    inline void SetSourceClusterInfo(MutableClusterInfo&& value) { m_sourceClusterInfoHasBeenSet = true; m_sourceClusterInfo = std::move(value); }
    inline ClusterOperationInfo& WithSourceClusterInfo(const MutableClusterInfo& value) { SetSourceClusterInfo(value); return *this;}
    inline ClusterOperationInfo& WithSourceClusterInfo(MutableClusterInfo&& value) { SetSourceClusterInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Information about cluster attributes after a cluster is
     * updated.</p>
         
     */
    inline const MutableClusterInfo& GetTargetClusterInfo() const{ return m_targetClusterInfo; }
    inline bool TargetClusterInfoHasBeenSet() const { return m_targetClusterInfoHasBeenSet; }
    inline void SetTargetClusterInfo(const MutableClusterInfo& value) { m_targetClusterInfoHasBeenSet = true; m_targetClusterInfo = value; }
    inline void SetTargetClusterInfo(MutableClusterInfo&& value) { m_targetClusterInfoHasBeenSet = true; m_targetClusterInfo = std::move(value); }
    inline ClusterOperationInfo& WithTargetClusterInfo(const MutableClusterInfo& value) { SetTargetClusterInfo(value); return *this;}
    inline ClusterOperationInfo& WithTargetClusterInfo(MutableClusterInfo&& value) { SetTargetClusterInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Description of the VPC connection for CreateVpcConnection and
     * DeleteVpcConnection operations.</p>
         
     */
    inline const VpcConnectionInfo& GetVpcConnectionInfo() const{ return m_vpcConnectionInfo; }
    inline bool VpcConnectionInfoHasBeenSet() const { return m_vpcConnectionInfoHasBeenSet; }
    inline void SetVpcConnectionInfo(const VpcConnectionInfo& value) { m_vpcConnectionInfoHasBeenSet = true; m_vpcConnectionInfo = value; }
    inline void SetVpcConnectionInfo(VpcConnectionInfo&& value) { m_vpcConnectionInfoHasBeenSet = true; m_vpcConnectionInfo = std::move(value); }
    inline ClusterOperationInfo& WithVpcConnectionInfo(const VpcConnectionInfo& value) { SetVpcConnectionInfo(value); return *this;}
    inline ClusterOperationInfo& WithVpcConnectionInfo(VpcConnectionInfo&& value) { SetVpcConnectionInfo(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientRequestId;
    bool m_clientRequestIdHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
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
