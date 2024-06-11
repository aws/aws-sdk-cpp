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
  class EnableKinesisStreamingDestinationResult
  {
  public:
    AWS_DYNAMODB_API EnableKinesisStreamingDestinationResult();
    AWS_DYNAMODB_API EnableKinesisStreamingDestinationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API EnableKinesisStreamingDestinationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the table being modified.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline void SetTableName(const Aws::String& value) { m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableName.assign(value); }
    inline EnableKinesisStreamingDestinationResult& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline EnableKinesisStreamingDestinationResult& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline EnableKinesisStreamingDestinationResult& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the specific Kinesis data stream.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }
    inline void SetStreamArn(const Aws::String& value) { m_streamArn = value; }
    inline void SetStreamArn(Aws::String&& value) { m_streamArn = std::move(value); }
    inline void SetStreamArn(const char* value) { m_streamArn.assign(value); }
    inline EnableKinesisStreamingDestinationResult& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}
    inline EnableKinesisStreamingDestinationResult& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}
    inline EnableKinesisStreamingDestinationResult& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the replication.</p>
     */
    inline const DestinationStatus& GetDestinationStatus() const{ return m_destinationStatus; }
    inline void SetDestinationStatus(const DestinationStatus& value) { m_destinationStatus = value; }
    inline void SetDestinationStatus(DestinationStatus&& value) { m_destinationStatus = std::move(value); }
    inline EnableKinesisStreamingDestinationResult& WithDestinationStatus(const DestinationStatus& value) { SetDestinationStatus(value); return *this;}
    inline EnableKinesisStreamingDestinationResult& WithDestinationStatus(DestinationStatus&& value) { SetDestinationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination for the Kinesis streaming information that is being
     * enabled.</p>
     */
    inline const EnableKinesisStreamingConfiguration& GetEnableKinesisStreamingConfiguration() const{ return m_enableKinesisStreamingConfiguration; }
    inline void SetEnableKinesisStreamingConfiguration(const EnableKinesisStreamingConfiguration& value) { m_enableKinesisStreamingConfiguration = value; }
    inline void SetEnableKinesisStreamingConfiguration(EnableKinesisStreamingConfiguration&& value) { m_enableKinesisStreamingConfiguration = std::move(value); }
    inline EnableKinesisStreamingDestinationResult& WithEnableKinesisStreamingConfiguration(const EnableKinesisStreamingConfiguration& value) { SetEnableKinesisStreamingConfiguration(value); return *this;}
    inline EnableKinesisStreamingDestinationResult& WithEnableKinesisStreamingConfiguration(EnableKinesisStreamingConfiguration&& value) { SetEnableKinesisStreamingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline EnableKinesisStreamingDestinationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline EnableKinesisStreamingDestinationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline EnableKinesisStreamingDestinationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_tableName;

    Aws::String m_streamArn;

    DestinationStatus m_destinationStatus;

    EnableKinesisStreamingConfiguration m_enableKinesisStreamingConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
