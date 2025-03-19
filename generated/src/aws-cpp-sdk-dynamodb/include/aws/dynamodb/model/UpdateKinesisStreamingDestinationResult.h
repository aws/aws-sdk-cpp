/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/DestinationStatus.h>
#include <aws/dynamodb/model/UpdateKinesisStreamingConfiguration.h>
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
  class UpdateKinesisStreamingDestinationResult
  {
  public:
    AWS_DYNAMODB_API UpdateKinesisStreamingDestinationResult() = default;
    AWS_DYNAMODB_API UpdateKinesisStreamingDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API UpdateKinesisStreamingDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The table name for the Kinesis streaming destination output.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    UpdateKinesisStreamingDestinationResult& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the Kinesis stream input.</p>
     */
    inline const Aws::String& GetStreamArn() const { return m_streamArn; }
    template<typename StreamArnT = Aws::String>
    void SetStreamArn(StreamArnT&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::forward<StreamArnT>(value); }
    template<typename StreamArnT = Aws::String>
    UpdateKinesisStreamingDestinationResult& WithStreamArn(StreamArnT&& value) { SetStreamArn(std::forward<StreamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the attempt to update the Kinesis streaming destination
     * output.</p>
     */
    inline DestinationStatus GetDestinationStatus() const { return m_destinationStatus; }
    inline void SetDestinationStatus(DestinationStatus value) { m_destinationStatusHasBeenSet = true; m_destinationStatus = value; }
    inline UpdateKinesisStreamingDestinationResult& WithDestinationStatus(DestinationStatus value) { SetDestinationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command to update the Kinesis streaming destination configuration.</p>
     */
    inline const UpdateKinesisStreamingConfiguration& GetUpdateKinesisStreamingConfiguration() const { return m_updateKinesisStreamingConfiguration; }
    template<typename UpdateKinesisStreamingConfigurationT = UpdateKinesisStreamingConfiguration>
    void SetUpdateKinesisStreamingConfiguration(UpdateKinesisStreamingConfigurationT&& value) { m_updateKinesisStreamingConfigurationHasBeenSet = true; m_updateKinesisStreamingConfiguration = std::forward<UpdateKinesisStreamingConfigurationT>(value); }
    template<typename UpdateKinesisStreamingConfigurationT = UpdateKinesisStreamingConfiguration>
    UpdateKinesisStreamingDestinationResult& WithUpdateKinesisStreamingConfiguration(UpdateKinesisStreamingConfigurationT&& value) { SetUpdateKinesisStreamingConfiguration(std::forward<UpdateKinesisStreamingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateKinesisStreamingDestinationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet = false;

    DestinationStatus m_destinationStatus{DestinationStatus::NOT_SET};
    bool m_destinationStatusHasBeenSet = false;

    UpdateKinesisStreamingConfiguration m_updateKinesisStreamingConfiguration;
    bool m_updateKinesisStreamingConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
