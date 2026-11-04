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
 * <p>Contains the bulk put vector bytes used by a vector index during a bulk
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/BulkOperationVectorBytes">AWS
 * API Reference</a></p>
 */
class BulkOperationVectorBytes {
 public:
  AWS_DYNAMODB_API BulkOperationVectorBytes() = default;
  AWS_DYNAMODB_API BulkOperationVectorBytes(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API BulkOperationVectorBytes& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of bulk put vector bytes used on the vector index.</p>
   */
  inline long long GetBulkPutVectorBytes() const { return m_bulkPutVectorBytes; }
  inline bool BulkPutVectorBytesHasBeenSet() const { return m_bulkPutVectorBytesHasBeenSet; }
  inline void SetBulkPutVectorBytes(long long value) {
    m_bulkPutVectorBytesHasBeenSet = true;
    m_bulkPutVectorBytes = value;
  }
  inline BulkOperationVectorBytes& WithBulkPutVectorBytes(long long value) {
    SetBulkPutVectorBytes(value);
    return *this;
  }
  ///@}
 private:
  long long m_bulkPutVectorBytes{0};
  bool m_bulkPutVectorBytesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
