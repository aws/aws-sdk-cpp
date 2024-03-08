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
    AWS_DYNAMODB_API UpdateKinesisStreamingDestinationResult();
    AWS_DYNAMODB_API UpdateKinesisStreamingDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API UpdateKinesisStreamingDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The table name for the Kinesis streaming destination output.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The table name for the Kinesis streaming destination output.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableName = value; }

    /**
     * <p>The table name for the Kinesis streaming destination output.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableName = std::move(value); }

    /**
     * <p>The table name for the Kinesis streaming destination output.</p>
     */
    inline void SetTableName(const char* value) { m_tableName.assign(value); }

    /**
     * <p>The table name for the Kinesis streaming destination output.</p>
     */
    inline UpdateKinesisStreamingDestinationResult& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The table name for the Kinesis streaming destination output.</p>
     */
    inline UpdateKinesisStreamingDestinationResult& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The table name for the Kinesis streaming destination output.</p>
     */
    inline UpdateKinesisStreamingDestinationResult& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The ARN for the Kinesis stream input.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }

    /**
     * <p>The ARN for the Kinesis stream input.</p>
     */
    inline void SetStreamArn(const Aws::String& value) { m_streamArn = value; }

    /**
     * <p>The ARN for the Kinesis stream input.</p>
     */
    inline void SetStreamArn(Aws::String&& value) { m_streamArn = std::move(value); }

    /**
     * <p>The ARN for the Kinesis stream input.</p>
     */
    inline void SetStreamArn(const char* value) { m_streamArn.assign(value); }

    /**
     * <p>The ARN for the Kinesis stream input.</p>
     */
    inline UpdateKinesisStreamingDestinationResult& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}

    /**
     * <p>The ARN for the Kinesis stream input.</p>
     */
    inline UpdateKinesisStreamingDestinationResult& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the Kinesis stream input.</p>
     */
    inline UpdateKinesisStreamingDestinationResult& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}


    /**
     * <p>The status of the attempt to update the Kinesis streaming destination
     * output.</p>
     */
    inline const DestinationStatus& GetDestinationStatus() const{ return m_destinationStatus; }

    /**
     * <p>The status of the attempt to update the Kinesis streaming destination
     * output.</p>
     */
    inline void SetDestinationStatus(const DestinationStatus& value) { m_destinationStatus = value; }

    /**
     * <p>The status of the attempt to update the Kinesis streaming destination
     * output.</p>
     */
    inline void SetDestinationStatus(DestinationStatus&& value) { m_destinationStatus = std::move(value); }

    /**
     * <p>The status of the attempt to update the Kinesis streaming destination
     * output.</p>
     */
    inline UpdateKinesisStreamingDestinationResult& WithDestinationStatus(const DestinationStatus& value) { SetDestinationStatus(value); return *this;}

    /**
     * <p>The status of the attempt to update the Kinesis streaming destination
     * output.</p>
     */
    inline UpdateKinesisStreamingDestinationResult& WithDestinationStatus(DestinationStatus&& value) { SetDestinationStatus(std::move(value)); return *this;}


    /**
     * <p>The command to update the Kinesis streaming destination configuration.</p>
     */
    inline const UpdateKinesisStreamingConfiguration& GetUpdateKinesisStreamingConfiguration() const{ return m_updateKinesisStreamingConfiguration; }

    /**
     * <p>The command to update the Kinesis streaming destination configuration.</p>
     */
    inline void SetUpdateKinesisStreamingConfiguration(const UpdateKinesisStreamingConfiguration& value) { m_updateKinesisStreamingConfiguration = value; }

    /**
     * <p>The command to update the Kinesis streaming destination configuration.</p>
     */
    inline void SetUpdateKinesisStreamingConfiguration(UpdateKinesisStreamingConfiguration&& value) { m_updateKinesisStreamingConfiguration = std::move(value); }

    /**
     * <p>The command to update the Kinesis streaming destination configuration.</p>
     */
    inline UpdateKinesisStreamingDestinationResult& WithUpdateKinesisStreamingConfiguration(const UpdateKinesisStreamingConfiguration& value) { SetUpdateKinesisStreamingConfiguration(value); return *this;}

    /**
     * <p>The command to update the Kinesis streaming destination configuration.</p>
     */
    inline UpdateKinesisStreamingDestinationResult& WithUpdateKinesisStreamingConfiguration(UpdateKinesisStreamingConfiguration&& value) { SetUpdateKinesisStreamingConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateKinesisStreamingDestinationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateKinesisStreamingDestinationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateKinesisStreamingDestinationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_tableName;

    Aws::String m_streamArn;

    DestinationStatus m_destinationStatus;

    UpdateKinesisStreamingConfiguration m_updateKinesisStreamingConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
