/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/ClusterType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kafka/model/ErrorInfo.h>
#include <aws/kafka/model/ClusterOperationV2Provisioned.h>
#include <aws/kafka/model/ClusterOperationV2Serverless.h>
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
            <p>Returns information about a cluster operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ClusterOperationV2">AWS
   * API Reference</a></p>
   */
  class ClusterOperationV2
  {
  public:
    AWS_KAFKA_API ClusterOperationV2() = default;
    AWS_KAFKA_API ClusterOperationV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ClusterOperationV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    ClusterOperationV2& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Type of the backend cluster.</p>
     */
    inline ClusterType GetClusterType() const { return m_clusterType; }
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }
    inline void SetClusterType(ClusterType value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }
    inline ClusterOperationV2& WithClusterType(ClusterType value) { SetClusterType(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>The time at which operation was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ClusterOperationV2& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
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
    ClusterOperationV2& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>If cluster operation failed from an error, it describes the
     * error.</p>
     */
    inline const ErrorInfo& GetErrorInfo() const { return m_errorInfo; }
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }
    template<typename ErrorInfoT = ErrorInfo>
    void SetErrorInfo(ErrorInfoT&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::forward<ErrorInfoT>(value); }
    template<typename ErrorInfoT = ErrorInfo>
    ClusterOperationV2& WithErrorInfo(ErrorInfoT&& value) { SetErrorInfo(std::forward<ErrorInfoT>(value)); return *this;}
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
    ClusterOperationV2& WithOperationArn(OperationArnT&& value) { SetOperationArn(std::forward<OperationArnT>(value)); return *this;}
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
    ClusterOperationV2& WithOperationState(OperationStateT&& value) { SetOperationState(std::forward<OperationStateT>(value)); return *this;}
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
    ClusterOperationV2& WithOperationType(OperationTypeT&& value) { SetOperationType(std::forward<OperationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Properties of a provisioned cluster.</p>
     */
    inline const ClusterOperationV2Provisioned& GetProvisioned() const { return m_provisioned; }
    inline bool ProvisionedHasBeenSet() const { return m_provisionedHasBeenSet; }
    template<typename ProvisionedT = ClusterOperationV2Provisioned>
    void SetProvisioned(ProvisionedT&& value) { m_provisionedHasBeenSet = true; m_provisioned = std::forward<ProvisionedT>(value); }
    template<typename ProvisionedT = ClusterOperationV2Provisioned>
    ClusterOperationV2& WithProvisioned(ProvisionedT&& value) { SetProvisioned(std::forward<ProvisionedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>Properties of a serverless cluster.</p>
     */
    inline const ClusterOperationV2Serverless& GetServerless() const { return m_serverless; }
    inline bool ServerlessHasBeenSet() const { return m_serverlessHasBeenSet; }
    template<typename ServerlessT = ClusterOperationV2Serverless>
    void SetServerless(ServerlessT&& value) { m_serverlessHasBeenSet = true; m_serverless = std::forward<ServerlessT>(value); }
    template<typename ServerlessT = ClusterOperationV2Serverless>
    ClusterOperationV2& WithServerless(ServerlessT&& value) { SetServerless(std::forward<ServerlessT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    ClusterType m_clusterType{ClusterType::NOT_SET};
    bool m_clusterTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    ErrorInfo m_errorInfo;
    bool m_errorInfoHasBeenSet = false;

    Aws::String m_operationArn;
    bool m_operationArnHasBeenSet = false;

    Aws::String m_operationState;
    bool m_operationStateHasBeenSet = false;

    Aws::String m_operationType;
    bool m_operationTypeHasBeenSet = false;

    ClusterOperationV2Provisioned m_provisioned;
    bool m_provisionedHasBeenSet = false;

    ClusterOperationV2Serverless m_serverless;
    bool m_serverlessHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
