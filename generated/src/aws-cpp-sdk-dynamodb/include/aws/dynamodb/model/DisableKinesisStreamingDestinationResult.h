/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/DestinationStatus.h>
#include <aws/dynamodb/model/EnableKinesisStreamingConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{
  class DisableKinesisStreamingDestinationResult
  {
  public:
    AWS_DYNAMODB_API DisableKinesisStreamingDestinationResult() = default;
    AWS_DYNAMODB_API DisableKinesisStreamingDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API DisableKinesisStreamingDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the table being modified.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    DisableKinesisStreamingDestinationResult& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the specific Kinesis data stream.</p>
     */
    inline const Aws::String& GetStreamArn() const { return m_streamArn; }
    template<typename StreamArnT = Aws::String>
    void SetStreamArn(StreamArnT&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::forward<StreamArnT>(value); }
    template<typename StreamArnT = Aws::String>
    DisableKinesisStreamingDestinationResult& WithStreamArn(StreamArnT&& value) { SetStreamArn(std::forward<StreamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the replication.</p>
     */
    inline DestinationStatus GetDestinationStatus() const { return m_destinationStatus; }
    inline void SetDestinationStatus(DestinationStatus value) { m_destinationStatusHasBeenSet = true; m_destinationStatus = value; }
    inline DisableKinesisStreamingDestinationResult& WithDestinationStatus(DestinationStatus value) { SetDestinationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination for the Kinesis streaming information that is being
     * enabled.</p>
     */
    inline const EnableKinesisStreamingConfiguration& GetEnableKinesisStreamingConfiguration() const { return m_enableKinesisStreamingConfiguration; }
    template<typename EnableKinesisStreamingConfigurationT = EnableKinesisStreamingConfiguration>
    void SetEnableKinesisStreamingConfiguration(EnableKinesisStreamingConfigurationT&& value) { m_enableKinesisStreamingConfigurationHasBeenSet = true; m_enableKinesisStreamingConfiguration = std::forward<EnableKinesisStreamingConfigurationT>(value); }
    template<typename EnableKinesisStreamingConfigurationT = EnableKinesisStreamingConfiguration>
    DisableKinesisStreamingDestinationResult& WithEnableKinesisStreamingConfiguration(EnableKinesisStreamingConfigurationT&& value) { SetEnableKinesisStreamingConfiguration(std::forward<EnableKinesisStreamingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DisableKinesisStreamingDestinationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet = false;

    DestinationStatus m_destinationStatus{DestinationStatus::NOT_SET};
    bool m_destinationStatusHasBeenSet = false;

    EnableKinesisStreamingConfiguration m_enableKinesisStreamingConfiguration;
    bool m_enableKinesisStreamingConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
