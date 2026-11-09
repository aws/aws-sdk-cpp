/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/OutputTypeEnum.h>
#include <aws/dynamodb/model/S3SseAlgorithm.h>

#include <utility>

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
 * <p>Contains the Amazon S3 location, encryption settings, and output types for a
 * bulk operation. The <code>S3Bucket</code> and <code>OutputType</code> fields are
 * required.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/OutputS3Configuration">AWS
 * API Reference</a></p>
 */
class OutputS3Configuration {
 public:
  AWS_DYNAMODB_API OutputS3Configuration() = default;
  AWS_DYNAMODB_API OutputS3Configuration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API OutputS3Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the output bucket owner. If you omit
   * this value, DynamoDB uses the Amazon Web Services account ID of the
   * requester.</p>  <p> <code>S3BucketOwner</code> is required when the bucket
   * is owned by another Amazon Web Services account.</p>
   */
  inline const Aws::String& GetS3BucketOwner() const { return m_s3BucketOwner; }
  inline bool S3BucketOwnerHasBeenSet() const { return m_s3BucketOwnerHasBeenSet; }
  template <typename S3BucketOwnerT = Aws::String>
  void SetS3BucketOwner(S3BucketOwnerT&& value) {
    m_s3BucketOwnerHasBeenSet = true;
    m_s3BucketOwner = std::forward<S3BucketOwnerT>(value);
  }
  template <typename S3BucketOwnerT = Aws::String>
  OutputS3Configuration& WithS3BucketOwner(S3BucketOwnerT&& value) {
    SetS3BucketOwner(std::forward<S3BucketOwnerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Amazon S3 bucket where DynamoDB writes output records.</p>
   */
  inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
  inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
  template <typename S3BucketT = Aws::String>
  void SetS3Bucket(S3BucketT&& value) {
    m_s3BucketHasBeenSet = true;
    m_s3Bucket = std::forward<S3BucketT>(value);
  }
  template <typename S3BucketT = Aws::String>
  OutputS3Configuration& WithS3Bucket(S3BucketT&& value) {
    SetS3Bucket(std::forward<S3BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional key prefix under which DynamoDB writes the output records.</p>
   */
  inline const Aws::String& GetS3KeyPrefix() const { return m_s3KeyPrefix; }
  inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }
  template <typename S3KeyPrefixT = Aws::String>
  void SetS3KeyPrefix(S3KeyPrefixT&& value) {
    m_s3KeyPrefixHasBeenSet = true;
    m_s3KeyPrefix = std::forward<S3KeyPrefixT>(value);
  }
  template <typename S3KeyPrefixT = Aws::String>
  OutputS3Configuration& WithS3KeyPrefix(S3KeyPrefixT&& value) {
    SetS3KeyPrefix(std::forward<S3KeyPrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The server-side encryption algorithm for the output objects. Valid values are
   * <code>AES256</code> and <code>KMS</code>. If you don't specify a value, Amazon
   * S3 applies the destination bucket's default encryption settings.</p>
   */
  inline S3SseAlgorithm GetS3SseAlgorithm() const { return m_s3SseAlgorithm; }
  inline bool S3SseAlgorithmHasBeenSet() const { return m_s3SseAlgorithmHasBeenSet; }
  inline void SetS3SseAlgorithm(S3SseAlgorithm value) {
    m_s3SseAlgorithmHasBeenSet = true;
    m_s3SseAlgorithm = value;
  }
  inline OutputS3Configuration& WithS3SseAlgorithm(S3SseAlgorithm value) {
    SetS3SseAlgorithm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the KMS key that encrypts the output objects. Specify this
   * value when <code>S3SseAlgorithm</code> is <code>KMS</code>. Don't specify it
   * when the algorithm is <code>AES256</code>.</p>
   */
  inline const Aws::String& GetS3SseKmsKeyId() const { return m_s3SseKmsKeyId; }
  inline bool S3SseKmsKeyIdHasBeenSet() const { return m_s3SseKmsKeyIdHasBeenSet; }
  template <typename S3SseKmsKeyIdT = Aws::String>
  void SetS3SseKmsKeyId(S3SseKmsKeyIdT&& value) {
    m_s3SseKmsKeyIdHasBeenSet = true;
    m_s3SseKmsKeyId = std::forward<S3SseKmsKeyIdT>(value);
  }
  template <typename S3SseKmsKeyIdT = Aws::String>
  OutputS3Configuration& WithS3SseKmsKeyId(S3SseKmsKeyIdT&& value) {
    SetS3SseKmsKeyId(std::forward<S3SseKmsKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The following values describe the types of output that DynamoDB writes for
   * individual input items. Include one or both values.</p> <dl> <dt> ERROR </dt>
   * <dd> <p>Reports input records or input objects that DynamoDB couldn't process.
   * This includes malformed input and item validation failures, such as a missing or
   * incorrectly typed primary key attribute or an item that exceeds a DynamoDB
   * limit.</p> </dd> <dt> CONDITION_CHECK_FAILURE </dt> <dd> <p>Reports the
   * attempted item and, when present, the existing item for a write whose condition
   * expression evaluates to false.</p> </dd> </dl>
   */
  inline const Aws::Vector<OutputTypeEnum>& GetOutputType() const { return m_outputType; }
  inline bool OutputTypeHasBeenSet() const { return m_outputTypeHasBeenSet; }
  template <typename OutputTypeT = Aws::Vector<OutputTypeEnum>>
  void SetOutputType(OutputTypeT&& value) {
    m_outputTypeHasBeenSet = true;
    m_outputType = std::forward<OutputTypeT>(value);
  }
  template <typename OutputTypeT = Aws::Vector<OutputTypeEnum>>
  OutputS3Configuration& WithOutputType(OutputTypeT&& value) {
    SetOutputType(std::forward<OutputTypeT>(value));
    return *this;
  }
  inline OutputS3Configuration& AddOutputType(OutputTypeEnum value) {
    m_outputTypeHasBeenSet = true;
    m_outputType.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3BucketOwner;

  Aws::String m_s3Bucket;

  Aws::String m_s3KeyPrefix;

  S3SseAlgorithm m_s3SseAlgorithm{S3SseAlgorithm::NOT_SET};

  Aws::String m_s3SseKmsKeyId;

  Aws::Vector<OutputTypeEnum> m_outputType;
  bool m_s3BucketOwnerHasBeenSet = false;
  bool m_s3BucketHasBeenSet = false;
  bool m_s3KeyPrefixHasBeenSet = false;
  bool m_s3SseAlgorithmHasBeenSet = false;
  bool m_s3SseKmsKeyIdHasBeenSet = false;
  bool m_outputTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
