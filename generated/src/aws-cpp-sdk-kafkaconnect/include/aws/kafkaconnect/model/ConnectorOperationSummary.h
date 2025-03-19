/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafkaconnect/model/ConnectorOperationType.h>
#include <aws/kafkaconnect/model/ConnectorOperationState.h>
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
namespace KafkaConnect
{
namespace Model
{

  /**
   * <p>Summary of a connector operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/ConnectorOperationSummary">AWS
   * API Reference</a></p>
   */
  class ConnectorOperationSummary
  {
  public:
    AWS_KAFKACONNECT_API ConnectorOperationSummary() = default;
    AWS_KAFKACONNECT_API ConnectorOperationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API ConnectorOperationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connector operation.</p>
     */
    inline const Aws::String& GetConnectorOperationArn() const { return m_connectorOperationArn; }
    inline bool ConnectorOperationArnHasBeenSet() const { return m_connectorOperationArnHasBeenSet; }
    template<typename ConnectorOperationArnT = Aws::String>
    void SetConnectorOperationArn(ConnectorOperationArnT&& value) { m_connectorOperationArnHasBeenSet = true; m_connectorOperationArn = std::forward<ConnectorOperationArnT>(value); }
    template<typename ConnectorOperationArnT = Aws::String>
    ConnectorOperationSummary& WithConnectorOperationArn(ConnectorOperationArnT&& value) { SetConnectorOperationArn(std::forward<ConnectorOperationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of connector operation performed.</p>
     */
    inline ConnectorOperationType GetConnectorOperationType() const { return m_connectorOperationType; }
    inline bool ConnectorOperationTypeHasBeenSet() const { return m_connectorOperationTypeHasBeenSet; }
    inline void SetConnectorOperationType(ConnectorOperationType value) { m_connectorOperationTypeHasBeenSet = true; m_connectorOperationType = value; }
    inline ConnectorOperationSummary& WithConnectorOperationType(ConnectorOperationType value) { SetConnectorOperationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the connector operation.</p>
     */
    inline ConnectorOperationState GetConnectorOperationState() const { return m_connectorOperationState; }
    inline bool ConnectorOperationStateHasBeenSet() const { return m_connectorOperationStateHasBeenSet; }
    inline void SetConnectorOperationState(ConnectorOperationState value) { m_connectorOperationStateHasBeenSet = true; m_connectorOperationState = value; }
    inline ConnectorOperationSummary& WithConnectorOperationState(ConnectorOperationState value) { SetConnectorOperationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when operation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ConnectorOperationSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when operation ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ConnectorOperationSummary& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorOperationArn;
    bool m_connectorOperationArnHasBeenSet = false;

    ConnectorOperationType m_connectorOperationType{ConnectorOperationType::NOT_SET};
    bool m_connectorOperationTypeHasBeenSet = false;

    ConnectorOperationState m_connectorOperationState{ConnectorOperationState::NOT_SET};
    bool m_connectorOperationStateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
