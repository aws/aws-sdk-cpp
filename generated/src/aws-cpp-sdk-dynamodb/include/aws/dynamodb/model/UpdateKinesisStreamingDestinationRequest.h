/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/UpdateKinesisStreamingConfiguration.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class UpdateKinesisStreamingDestinationRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API UpdateKinesisStreamingDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateKinesisStreamingDestination"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The table name for the Kinesis streaming destination input.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The table name for the Kinesis streaming destination input.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The table name for the Kinesis streaming destination input.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The table name for the Kinesis streaming destination input.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The table name for the Kinesis streaming destination input.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The table name for the Kinesis streaming destination input.</p>
     */
    inline UpdateKinesisStreamingDestinationRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The table name for the Kinesis streaming destination input.</p>
     */
    inline UpdateKinesisStreamingDestinationRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The table name for the Kinesis streaming destination input.</p>
     */
    inline UpdateKinesisStreamingDestinationRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The ARN for the Kinesis stream input.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }

    /**
     * <p>The ARN for the Kinesis stream input.</p>
     */
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }

    /**
     * <p>The ARN for the Kinesis stream input.</p>
     */
    inline void SetStreamArn(const Aws::String& value) { m_streamArnHasBeenSet = true; m_streamArn = value; }

    /**
     * <p>The ARN for the Kinesis stream input.</p>
     */
    inline void SetStreamArn(Aws::String&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::move(value); }

    /**
     * <p>The ARN for the Kinesis stream input.</p>
     */
    inline void SetStreamArn(const char* value) { m_streamArnHasBeenSet = true; m_streamArn.assign(value); }

    /**
     * <p>The ARN for the Kinesis stream input.</p>
     */
    inline UpdateKinesisStreamingDestinationRequest& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}

    /**
     * <p>The ARN for the Kinesis stream input.</p>
     */
    inline UpdateKinesisStreamingDestinationRequest& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the Kinesis stream input.</p>
     */
    inline UpdateKinesisStreamingDestinationRequest& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}


    /**
     * <p>The command to update the Kinesis stream configuration.</p>
     */
    inline const UpdateKinesisStreamingConfiguration& GetUpdateKinesisStreamingConfiguration() const{ return m_updateKinesisStreamingConfiguration; }

    /**
     * <p>The command to update the Kinesis stream configuration.</p>
     */
    inline bool UpdateKinesisStreamingConfigurationHasBeenSet() const { return m_updateKinesisStreamingConfigurationHasBeenSet; }

    /**
     * <p>The command to update the Kinesis stream configuration.</p>
     */
    inline void SetUpdateKinesisStreamingConfiguration(const UpdateKinesisStreamingConfiguration& value) { m_updateKinesisStreamingConfigurationHasBeenSet = true; m_updateKinesisStreamingConfiguration = value; }

    /**
     * <p>The command to update the Kinesis stream configuration.</p>
     */
    inline void SetUpdateKinesisStreamingConfiguration(UpdateKinesisStreamingConfiguration&& value) { m_updateKinesisStreamingConfigurationHasBeenSet = true; m_updateKinesisStreamingConfiguration = std::move(value); }

    /**
     * <p>The command to update the Kinesis stream configuration.</p>
     */
    inline UpdateKinesisStreamingDestinationRequest& WithUpdateKinesisStreamingConfiguration(const UpdateKinesisStreamingConfiguration& value) { SetUpdateKinesisStreamingConfiguration(value); return *this;}

    /**
     * <p>The command to update the Kinesis stream configuration.</p>
     */
    inline UpdateKinesisStreamingDestinationRequest& WithUpdateKinesisStreamingConfiguration(UpdateKinesisStreamingConfiguration&& value) { SetUpdateKinesisStreamingConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet = false;

    UpdateKinesisStreamingConfiguration m_updateKinesisStreamingConfiguration;
    bool m_updateKinesisStreamingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
