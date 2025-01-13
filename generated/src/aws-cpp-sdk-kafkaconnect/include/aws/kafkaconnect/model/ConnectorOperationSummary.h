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
    AWS_KAFKACONNECT_API ConnectorOperationSummary();
    AWS_KAFKACONNECT_API ConnectorOperationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API ConnectorOperationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connector operation.</p>
     */
    inline const Aws::String& GetConnectorOperationArn() const{ return m_connectorOperationArn; }
    inline bool ConnectorOperationArnHasBeenSet() const { return m_connectorOperationArnHasBeenSet; }
    inline void SetConnectorOperationArn(const Aws::String& value) { m_connectorOperationArnHasBeenSet = true; m_connectorOperationArn = value; }
    inline void SetConnectorOperationArn(Aws::String&& value) { m_connectorOperationArnHasBeenSet = true; m_connectorOperationArn = std::move(value); }
    inline void SetConnectorOperationArn(const char* value) { m_connectorOperationArnHasBeenSet = true; m_connectorOperationArn.assign(value); }
    inline ConnectorOperationSummary& WithConnectorOperationArn(const Aws::String& value) { SetConnectorOperationArn(value); return *this;}
    inline ConnectorOperationSummary& WithConnectorOperationArn(Aws::String&& value) { SetConnectorOperationArn(std::move(value)); return *this;}
    inline ConnectorOperationSummary& WithConnectorOperationArn(const char* value) { SetConnectorOperationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of connector operation performed.</p>
     */
    inline const ConnectorOperationType& GetConnectorOperationType() const{ return m_connectorOperationType; }
    inline bool ConnectorOperationTypeHasBeenSet() const { return m_connectorOperationTypeHasBeenSet; }
    inline void SetConnectorOperationType(const ConnectorOperationType& value) { m_connectorOperationTypeHasBeenSet = true; m_connectorOperationType = value; }
    inline void SetConnectorOperationType(ConnectorOperationType&& value) { m_connectorOperationTypeHasBeenSet = true; m_connectorOperationType = std::move(value); }
    inline ConnectorOperationSummary& WithConnectorOperationType(const ConnectorOperationType& value) { SetConnectorOperationType(value); return *this;}
    inline ConnectorOperationSummary& WithConnectorOperationType(ConnectorOperationType&& value) { SetConnectorOperationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the connector operation.</p>
     */
    inline const ConnectorOperationState& GetConnectorOperationState() const{ return m_connectorOperationState; }
    inline bool ConnectorOperationStateHasBeenSet() const { return m_connectorOperationStateHasBeenSet; }
    inline void SetConnectorOperationState(const ConnectorOperationState& value) { m_connectorOperationStateHasBeenSet = true; m_connectorOperationState = value; }
    inline void SetConnectorOperationState(ConnectorOperationState&& value) { m_connectorOperationStateHasBeenSet = true; m_connectorOperationState = std::move(value); }
    inline ConnectorOperationSummary& WithConnectorOperationState(const ConnectorOperationState& value) { SetConnectorOperationState(value); return *this;}
    inline ConnectorOperationSummary& WithConnectorOperationState(ConnectorOperationState&& value) { SetConnectorOperationState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when operation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ConnectorOperationSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ConnectorOperationSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when operation ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ConnectorOperationSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ConnectorOperationSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorOperationArn;
    bool m_connectorOperationArnHasBeenSet = false;

    ConnectorOperationType m_connectorOperationType;
    bool m_connectorOperationTypeHasBeenSet = false;

    ConnectorOperationState m_connectorOperationState;
    bool m_connectorOperationStateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
