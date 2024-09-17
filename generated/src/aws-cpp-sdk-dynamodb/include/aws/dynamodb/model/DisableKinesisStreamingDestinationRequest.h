/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/EnableKinesisStreamingConfiguration.h>
#include <utility>

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

  /**
   */
  class DisableKinesisStreamingDestinationRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API DisableKinesisStreamingDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableKinesisStreamingDestination"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the DynamoDB table. You can also provide the Amazon Resource Name
     * (ARN) of the table in this parameter.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline DisableKinesisStreamingDestinationRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline DisableKinesisStreamingDestinationRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline DisableKinesisStreamingDestinationRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for a Kinesis data stream.</p>
     */
    inline const Aws::String& GetStreamArn() const{ return m_streamArn; }
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }
    inline void SetStreamArn(const Aws::String& value) { m_streamArnHasBeenSet = true; m_streamArn = value; }
    inline void SetStreamArn(Aws::String&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::move(value); }
    inline void SetStreamArn(const char* value) { m_streamArnHasBeenSet = true; m_streamArn.assign(value); }
    inline DisableKinesisStreamingDestinationRequest& WithStreamArn(const Aws::String& value) { SetStreamArn(value); return *this;}
    inline DisableKinesisStreamingDestinationRequest& WithStreamArn(Aws::String&& value) { SetStreamArn(std::move(value)); return *this;}
    inline DisableKinesisStreamingDestinationRequest& WithStreamArn(const char* value) { SetStreamArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source for the Kinesis streaming information that is being enabled.</p>
     */
    inline const EnableKinesisStreamingConfiguration& GetEnableKinesisStreamingConfiguration() const{ return m_enableKinesisStreamingConfiguration; }
    inline bool EnableKinesisStreamingConfigurationHasBeenSet() const { return m_enableKinesisStreamingConfigurationHasBeenSet; }
    inline void SetEnableKinesisStreamingConfiguration(const EnableKinesisStreamingConfiguration& value) { m_enableKinesisStreamingConfigurationHasBeenSet = true; m_enableKinesisStreamingConfiguration = value; }
    inline void SetEnableKinesisStreamingConfiguration(EnableKinesisStreamingConfiguration&& value) { m_enableKinesisStreamingConfigurationHasBeenSet = true; m_enableKinesisStreamingConfiguration = std::move(value); }
    inline DisableKinesisStreamingDestinationRequest& WithEnableKinesisStreamingConfiguration(const EnableKinesisStreamingConfiguration& value) { SetEnableKinesisStreamingConfiguration(value); return *this;}
    inline DisableKinesisStreamingDestinationRequest& WithEnableKinesisStreamingConfiguration(EnableKinesisStreamingConfiguration&& value) { SetEnableKinesisStreamingConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_streamArn;
    bool m_streamArnHasBeenSet = false;

    EnableKinesisStreamingConfiguration m_enableKinesisStreamingConfiguration;
    bool m_enableKinesisStreamingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
