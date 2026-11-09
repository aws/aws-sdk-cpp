/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DynamoDB {
namespace Model {

/**
 * <p>Contains the bulk put bytes used during a bulk operation.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BulkOperationBytes">AWS
 * API Reference</a></p>
 */
class BulkOperationBytes {
 public:
  AWS_DYNAMODB_API BulkOperationBytes() = default;
  AWS_DYNAMODB_API BulkOperationBytes(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API BulkOperationBytes& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of bulk put bytes.</p>
   */
  inline long long GetBulkPutBytes() const { return m_bulkPutBytes; }
  inline bool BulkPutBytesHasBeenSet() const { return m_bulkPutBytesHasBeenSet; }
  inline void SetBulkPutBytes(long long value) {
    m_bulkPutBytesHasBeenSet = true;
    m_bulkPutBytes = value;
  }
  inline BulkOperationBytes& WithBulkPutBytes(long long value) {
    SetBulkPutBytes(value);
    return *this;
  }
  ///@}
 private:
  long long m_bulkPutBytes{0};
  bool m_bulkPutBytesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
