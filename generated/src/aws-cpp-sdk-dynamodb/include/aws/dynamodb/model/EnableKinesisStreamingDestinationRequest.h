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
  class EnableKinesisStreamingDestinationRequest : public DynamoDBRequest
  {
  public:
    AWS_DYNAMODB_API EnableKinesisStreamingDestinationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableKinesisStreamingDestination"; }

    AWS_DYNAMODB_API Aws::String SerializePayload() const override;

    AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The name of the DynamoDB table. You can also provide the Amazon Resource Name
     * (ARN) of the table in this parameter.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    EnableKinesisStreamingDestinationRequest& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for a Kinesis data stream.</p>
     */
    inline const Aws::String& GetStreamArn() const { return m_streamArn; }
    inline bool StreamArnHasBeenSet() const { return m_streamArnHasBeenSet; }
    template<typename StreamArnT = Aws::String>
    void SetStreamArn(StreamArnT&& value) { m_streamArnHasBeenSet = true; m_streamArn = std::forward<StreamArnT>(value); }
    template<typename StreamArnT = Aws::String>
    EnableKinesisStreamingDestinationRequest& WithStreamArn(StreamArnT&& value) { SetStreamArn(std::forward<StreamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source for the Kinesis streaming information that is being enabled.</p>
     */
    inline const EnableKinesisStreamingConfiguration& GetEnableKinesisStreamingConfiguration() const { return m_enableKinesisStreamingConfiguration; }
    inline bool EnableKinesisStreamingConfigurationHasBeenSet() const { return m_enableKinesisStreamingConfigurationHasBeenSet; }
    template<typename EnableKinesisStreamingConfigurationT = EnableKinesisStreamingConfiguration>
    void SetEnableKinesisStreamingConfiguration(EnableKinesisStreamingConfigurationT&& value) { m_enableKinesisStreamingConfigurationHasBeenSet = true; m_enableKinesisStreamingConfiguration = std::forward<EnableKinesisStreamingConfigurationT>(value); }
    template<typename EnableKinesisStreamingConfigurationT = EnableKinesisStreamingConfiguration>
    EnableKinesisStreamingDestinationRequest& WithEnableKinesisStreamingConfiguration(EnableKinesisStreamingConfigurationT&& value) { SetEnableKinesisStreamingConfiguration(std::forward<EnableKinesisStreamingConfigurationT>(value)); return *this;}
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
