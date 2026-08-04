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
 * <p>The consumed capacity for vector index operations, including vector search
 * request bytes and vector write request bytes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/VectorCapacity">AWS
 * API Reference</a></p>
 */
class VectorCapacity {
 public:
  AWS_DYNAMODB_API VectorCapacity() = default;
  AWS_DYNAMODB_API VectorCapacity(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API VectorCapacity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of vector search request bytes consumed by a
   * <code>SearchVectors</code> operation.</p>
   */
  inline double GetVectorSearchRequestBytes() const { return m_vectorSearchRequestBytes; }
  inline bool VectorSearchRequestBytesHasBeenSet() const { return m_vectorSearchRequestBytesHasBeenSet; }
  inline void SetVectorSearchRequestBytes(double value) {
    m_vectorSearchRequestBytesHasBeenSet = true;
    m_vectorSearchRequestBytes = value;
  }
  inline VectorCapacity& WithVectorSearchRequestBytes(double value) {
    SetVectorSearchRequestBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of vector write request bytes consumed when writing to a vector
   * index. Reported for write operations that modify attributes indexed by a vector
   * index.</p>
   */
  inline double GetVectorWriteRequestBytes() const { return m_vectorWriteRequestBytes; }
  inline bool VectorWriteRequestBytesHasBeenSet() const { return m_vectorWriteRequestBytesHasBeenSet; }
  inline void SetVectorWriteRequestBytes(double value) {
    m_vectorWriteRequestBytesHasBeenSet = true;
    m_vectorWriteRequestBytes = value;
  }
  inline VectorCapacity& WithVectorWriteRequestBytes(double value) {
    SetVectorWriteRequestBytes(value);
    return *this;
  }
  ///@}
 private:
  double m_vectorSearchRequestBytes{0.0};

  double m_vectorWriteRequestBytes{0.0};
  bool m_vectorSearchRequestBytesHasBeenSet = false;
  bool m_vectorWriteRequestBytesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
