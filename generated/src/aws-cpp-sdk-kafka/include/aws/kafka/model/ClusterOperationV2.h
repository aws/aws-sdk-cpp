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
    AWS_KAFKA_API ClusterOperationV2();
    AWS_KAFKA_API ClusterOperationV2(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API ClusterOperationV2& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>ARN of the cluster.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * 
            <p>ARN of the cluster.</p>
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * 
            <p>ARN of the cluster.</p>
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * 
            <p>ARN of the cluster.</p>
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * 
            <p>ARN of the cluster.</p>
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * 
            <p>ARN of the cluster.</p>
     */
    inline ClusterOperationV2& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * 
            <p>ARN of the cluster.</p>
     */
    inline ClusterOperationV2& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * 
            <p>ARN of the cluster.</p>
     */
    inline ClusterOperationV2& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * 
            <p>Type of the backend cluster.</p>
     */
    inline const ClusterType& GetClusterType() const{ return m_clusterType; }

    /**
     * 
            <p>Type of the backend cluster.</p>
     */
    inline bool ClusterTypeHasBeenSet() const { return m_clusterTypeHasBeenSet; }

    /**
     * 
            <p>Type of the backend cluster.</p>
     */
    inline void SetClusterType(const ClusterType& value) { m_clusterTypeHasBeenSet = true; m_clusterType = value; }

    /**
     * 
            <p>Type of the backend cluster.</p>
     */
    inline void SetClusterType(ClusterType&& value) { m_clusterTypeHasBeenSet = true; m_clusterType = std::move(value); }

    /**
     * 
            <p>Type of the backend cluster.</p>
     */
    inline ClusterOperationV2& WithClusterType(const ClusterType& value) { SetClusterType(value); return *this;}

    /**
     * 
            <p>Type of the backend cluster.</p>
     */
    inline ClusterOperationV2& WithClusterType(ClusterType&& value) { SetClusterType(std::move(value)); return *this;}


    /**
     * 
            <p>The time at which operation was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * 
            <p>The time at which operation was started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * 
            <p>The time at which operation was started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * 
            <p>The time at which operation was started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * 
            <p>The time at which operation was started.</p>
     */
    inline ClusterOperationV2& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * 
            <p>The time at which operation was started.</p>
     */
    inline ClusterOperationV2& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * 
            <p>The time at which the operation finished.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * 
            <p>The time at which the operation finished.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * 
            <p>The time at which the operation finished.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * 
            <p>The time at which the operation finished.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * 
            <p>The time at which the operation finished.</p>
     */
    inline ClusterOperationV2& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * 
            <p>The time at which the operation finished.</p>
     */
    inline ClusterOperationV2& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * 
            <p>If cluster operation failed from an error, it describes the
     * error.</p>
     */
    inline const ErrorInfo& GetErrorInfo() const{ return m_errorInfo; }

    /**
     * 
            <p>If cluster operation failed from an error, it describes the
     * error.</p>
     */
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }

    /**
     * 
            <p>If cluster operation failed from an error, it describes the
     * error.</p>
     */
    inline void SetErrorInfo(const ErrorInfo& value) { m_errorInfoHasBeenSet = true; m_errorInfo = value; }

    /**
     * 
            <p>If cluster operation failed from an error, it describes the
     * error.</p>
     */
    inline void SetErrorInfo(ErrorInfo&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::move(value); }

    /**
     * 
            <p>If cluster operation failed from an error, it describes the
     * error.</p>
     */
    inline ClusterOperationV2& WithErrorInfo(const ErrorInfo& value) { SetErrorInfo(value); return *this;}

    /**
     * 
            <p>If cluster operation failed from an error, it describes the
     * error.</p>
     */
    inline ClusterOperationV2& WithErrorInfo(ErrorInfo&& value) { SetErrorInfo(std::move(value)); return *this;}


    /**
     * 
            <p>ARN of the cluster operation.</p>
     */
    inline const Aws::String& GetOperationArn() const{ return m_operationArn; }

    /**
     * 
            <p>ARN of the cluster operation.</p>
     */
    inline bool OperationArnHasBeenSet() const { return m_operationArnHasBeenSet; }

    /**
     * 
            <p>ARN of the cluster operation.</p>
     */
    inline void SetOperationArn(const Aws::String& value) { m_operationArnHasBeenSet = true; m_operationArn = value; }

    /**
     * 
            <p>ARN of the cluster operation.</p>
     */
    inline void SetOperationArn(Aws::String&& value) { m_operationArnHasBeenSet = true; m_operationArn = std::move(value); }

    /**
     * 
            <p>ARN of the cluster operation.</p>
     */
    inline void SetOperationArn(const char* value) { m_operationArnHasBeenSet = true; m_operationArn.assign(value); }

    /**
     * 
            <p>ARN of the cluster operation.</p>
     */
    inline ClusterOperationV2& WithOperationArn(const Aws::String& value) { SetOperationArn(value); return *this;}

    /**
     * 
            <p>ARN of the cluster operation.</p>
     */
    inline ClusterOperationV2& WithOperationArn(Aws::String&& value) { SetOperationArn(std::move(value)); return *this;}

    /**
     * 
            <p>ARN of the cluster operation.</p>
     */
    inline ClusterOperationV2& WithOperationArn(const char* value) { SetOperationArn(value); return *this;}


    /**
     * 
            <p>State of the cluster operation.</p>
     */
    inline const Aws::String& GetOperationState() const{ return m_operationState; }

    /**
     * 
            <p>State of the cluster operation.</p>
     */
    inline bool OperationStateHasBeenSet() const { return m_operationStateHasBeenSet; }

    /**
     * 
            <p>State of the cluster operation.</p>
     */
    inline void SetOperationState(const Aws::String& value) { m_operationStateHasBeenSet = true; m_operationState = value; }

    /**
     * 
            <p>State of the cluster operation.</p>
     */
    inline void SetOperationState(Aws::String&& value) { m_operationStateHasBeenSet = true; m_operationState = std::move(value); }

    /**
     * 
            <p>State of the cluster operation.</p>
     */
    inline void SetOperationState(const char* value) { m_operationStateHasBeenSet = true; m_operationState.assign(value); }

    /**
     * 
            <p>State of the cluster operation.</p>
     */
    inline ClusterOperationV2& WithOperationState(const Aws::String& value) { SetOperationState(value); return *this;}

    /**
     * 
            <p>State of the cluster operation.</p>
     */
    inline ClusterOperationV2& WithOperationState(Aws::String&& value) { SetOperationState(std::move(value)); return *this;}

    /**
     * 
            <p>State of the cluster operation.</p>
     */
    inline ClusterOperationV2& WithOperationState(const char* value) { SetOperationState(value); return *this;}


    /**
     * 
            <p>Type of the cluster operation.</p>
     */
    inline const Aws::String& GetOperationType() const{ return m_operationType; }

    /**
     * 
            <p>Type of the cluster operation.</p>
     */
    inline bool OperationTypeHasBeenSet() const { return m_operationTypeHasBeenSet; }

    /**
     * 
            <p>Type of the cluster operation.</p>
     */
    inline void SetOperationType(const Aws::String& value) { m_operationTypeHasBeenSet = true; m_operationType = value; }

    /**
     * 
            <p>Type of the cluster operation.</p>
     */
    inline void SetOperationType(Aws::String&& value) { m_operationTypeHasBeenSet = true; m_operationType = std::move(value); }

    /**
     * 
            <p>Type of the cluster operation.</p>
     */
    inline void SetOperationType(const char* value) { m_operationTypeHasBeenSet = true; m_operationType.assign(value); }

    /**
     * 
            <p>Type of the cluster operation.</p>
     */
    inline ClusterOperationV2& WithOperationType(const Aws::String& value) { SetOperationType(value); return *this;}

    /**
     * 
            <p>Type of the cluster operation.</p>
     */
    inline ClusterOperationV2& WithOperationType(Aws::String&& value) { SetOperationType(std::move(value)); return *this;}

    /**
     * 
            <p>Type of the cluster operation.</p>
     */
    inline ClusterOperationV2& WithOperationType(const char* value) { SetOperationType(value); return *this;}


    /**
     * 
            <p>Properties of a provisioned cluster.</p>
     */
    inline const ClusterOperationV2Provisioned& GetProvisioned() const{ return m_provisioned; }

    /**
     * 
            <p>Properties of a provisioned cluster.</p>
     */
    inline bool ProvisionedHasBeenSet() const { return m_provisionedHasBeenSet; }

    /**
     * 
            <p>Properties of a provisioned cluster.</p>
     */
    inline void SetProvisioned(const ClusterOperationV2Provisioned& value) { m_provisionedHasBeenSet = true; m_provisioned = value; }

    /**
     * 
            <p>Properties of a provisioned cluster.</p>
     */
    inline void SetProvisioned(ClusterOperationV2Provisioned&& value) { m_provisionedHasBeenSet = true; m_provisioned = std::move(value); }

    /**
     * 
            <p>Properties of a provisioned cluster.</p>
     */
    inline ClusterOperationV2& WithProvisioned(const ClusterOperationV2Provisioned& value) { SetProvisioned(value); return *this;}

    /**
     * 
            <p>Properties of a provisioned cluster.</p>
     */
    inline ClusterOperationV2& WithProvisioned(ClusterOperationV2Provisioned&& value) { SetProvisioned(std::move(value)); return *this;}


    /**
     * 
            <p>Properties of a serverless cluster.</p>
     */
    inline const ClusterOperationV2Serverless& GetServerless() const{ return m_serverless; }

    /**
     * 
            <p>Properties of a serverless cluster.</p>
     */
    inline bool ServerlessHasBeenSet() const { return m_serverlessHasBeenSet; }

    /**
     * 
            <p>Properties of a serverless cluster.</p>
     */
    inline void SetServerless(const ClusterOperationV2Serverless& value) { m_serverlessHasBeenSet = true; m_serverless = value; }

    /**
     * 
            <p>Properties of a serverless cluster.</p>
     */
    inline void SetServerless(ClusterOperationV2Serverless&& value) { m_serverlessHasBeenSet = true; m_serverless = std::move(value); }

    /**
     * 
            <p>Properties of a serverless cluster.</p>
     */
    inline ClusterOperationV2& WithServerless(const ClusterOperationV2Serverless& value) { SetServerless(value); return *this;}

    /**
     * 
            <p>Properties of a serverless cluster.</p>
     */
    inline ClusterOperationV2& WithServerless(ClusterOperationV2Serverless&& value) { SetServerless(std::move(value)); return *this;}

  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    ClusterType m_clusterType;
    bool m_clusterTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
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
