/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDBRequest.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>

#include <utility>

namespace Aws {
namespace DynamoDB {
namespace Model {

/**
 */
class DescribeBulkOperationRequest : public DynamoDBRequest {
 public:
  AWS_DYNAMODB_API DescribeBulkOperationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeBulkOperation"; }

  AWS_DYNAMODB_API Aws::String SerializePayload() const override;

  AWS_DYNAMODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_DYNAMODB_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the bulk operation to describe.</p>
   */
  inline const Aws::String& GetBulkOperationArn() const { return m_bulkOperationArn; }
  inline bool BulkOperationArnHasBeenSet() const { return m_bulkOperationArnHasBeenSet; }
  template <typename BulkOperationArnT = Aws::String>
  void SetBulkOperationArn(BulkOperationArnT&& value) {
    m_bulkOperationArnHasBeenSet = true;
    m_bulkOperationArn = std::forward<BulkOperationArnT>(value);
  }
  template <typename BulkOperationArnT = Aws::String>
  DescribeBulkOperationRequest& WithBulkOperationArn(BulkOperationArnT&& value) {
    SetBulkOperationArn(std::forward<BulkOperationArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bulkOperationArn;
  bool m_bulkOperationArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
