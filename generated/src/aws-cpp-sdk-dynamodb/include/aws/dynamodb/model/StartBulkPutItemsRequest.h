/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/BulkOperationPerformanceTier.h>
#include <aws/dynamodb/model/InputS3Configuration.h>
#include <aws/dynamodb/model/OutputS3Configuration.h>

#include <utility>

namespace Aws {
namespace DynamoDB {
namespace Model {

/**
 */
class StartBulkPutItemsRequest : public DynamoDBRequest {
 public:
  AWS_DYNAMODB_API StartBulkPutItemsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartBulkPutItems"; }

  AWS_DYNAMODB_API Aws::String SerializePayload() const override;

  AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that ensures the bulk operation starts no
   * more than one time. During the 8 hours after the initial request, repeated
   * requests that use the same token and parameters return the same bulk operation.
   * If a request reuses the token with different parameters, DynamoDB returns an
   * <code>IdempotentParameterMismatchException</code>. If you omit the token, an
   * Amazon Web Services SDK automatically generates one.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartBulkPutItemsRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 location, data format, and compression settings for the input
   * objects.</p>
   */
  inline const InputS3Configuration& GetInputS3Configuration() const { return m_inputS3Configuration; }
  inline bool InputS3ConfigurationHasBeenSet() const { return m_inputS3ConfigurationHasBeenSet; }
  template <typename InputS3ConfigurationT = InputS3Configuration>
  void SetInputS3Configuration(InputS3ConfigurationT&& value) {
    m_inputS3ConfigurationHasBeenSet = true;
    m_inputS3Configuration = std::forward<InputS3ConfigurationT>(value);
  }
  template <typename InputS3ConfigurationT = InputS3Configuration>
  StartBulkPutItemsRequest& WithInputS3Configuration(InputS3ConfigurationT&& value) {
    SetInputS3Configuration(std::forward<InputS3ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 location, encryption settings, and output types for the bulk
   * operation.</p>
   */
  inline const OutputS3Configuration& GetOutputS3Configuration() const { return m_outputS3Configuration; }
  inline bool OutputS3ConfigurationHasBeenSet() const { return m_outputS3ConfigurationHasBeenSet; }
  template <typename OutputS3ConfigurationT = OutputS3Configuration>
  void SetOutputS3Configuration(OutputS3ConfigurationT&& value) {
    m_outputS3ConfigurationHasBeenSet = true;
    m_outputS3Configuration = std::forward<OutputS3ConfigurationT>(value);
  }
  template <typename OutputS3ConfigurationT = OutputS3Configuration>
  StartBulkPutItemsRequest& WithOutputS3Configuration(OutputS3ConfigurationT&& value) {
    SetOutputS3Configuration(std::forward<OutputS3ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name or ARN of the existing DynamoDB table that receives the items.</p>
   */
  inline const Aws::String& GetTableName() const { return m_tableName; }
  inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
  template <typename TableNameT = Aws::String>
  void SetTableName(TableNameT&& value) {
    m_tableNameHasBeenSet = true;
    m_tableName = std::forward<TableNameT>(value);
  }
  template <typename TableNameT = Aws::String>
  StartBulkPutItemsRequest& WithTableName(TableNameT&& value) {
    SetTableName(std::forward<TableNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum rate, in write request units per second, at which the bulk
   * operation attempts to write. The value must be at least 1,024. With this
   * setting, you limit only the bulk operation; the table's provisioned or on-demand
   * capacity settings don't change. The actual write rate can be lower.</p>
   */
  inline long long GetMaxWriteRequestUnits() const { return m_maxWriteRequestUnits; }
  inline bool MaxWriteRequestUnitsHasBeenSet() const { return m_maxWriteRequestUnitsHasBeenSet; }
  inline void SetMaxWriteRequestUnits(long long value) {
    m_maxWriteRequestUnitsHasBeenSet = true;
    m_maxWriteRequestUnits = value;
  }
  inline StartBulkPutItemsRequest& WithMaxWriteRequestUnits(long long value) {
    SetMaxWriteRequestUnits(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The performance tier for the bulk operation. Valid values are
   * <code>STANDARD</code> and <code>ACCELERATED</code>. If you don't specify a
   * value, the operation uses <code>STANDARD</code>.</p>
   */
  inline BulkOperationPerformanceTier GetPerformanceTier() const { return m_performanceTier; }
  inline bool PerformanceTierHasBeenSet() const { return m_performanceTierHasBeenSet; }
  inline void SetPerformanceTier(BulkOperationPerformanceTier value) {
    m_performanceTierHasBeenSet = true;
    m_performanceTier = value;
  }
  inline StartBulkPutItemsRequest& WithPerformanceTier(BulkOperationPerformanceTier value) {
    SetPerformanceTier(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  InputS3Configuration m_inputS3Configuration;

  OutputS3Configuration m_outputS3Configuration;

  Aws::String m_tableName;

  long long m_maxWriteRequestUnits{0};

  BulkOperationPerformanceTier m_performanceTier{BulkOperationPerformanceTier::NOT_SET};
  bool m_clientTokenHasBeenSet = true;
  bool m_inputS3ConfigurationHasBeenSet = false;
  bool m_outputS3ConfigurationHasBeenSet = false;
  bool m_tableNameHasBeenSet = false;
  bool m_maxWriteRequestUnitsHasBeenSet = false;
  bool m_performanceTierHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
