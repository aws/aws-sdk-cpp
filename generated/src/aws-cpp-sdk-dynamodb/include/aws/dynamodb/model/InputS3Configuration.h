/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/BulkOperationInputFormat.h>
#include <aws/dynamodb/model/InputCompressionType.h>

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
 * <p>Contains the Amazon S3 location and format settings for bulk operation input.
 * The <code>S3Bucket</code> and <code>InputFormat</code> fields are
 * required.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/InputS3Configuration">AWS
 * API Reference</a></p>
 */
class InputS3Configuration {
 public:
  AWS_DYNAMODB_API InputS3Configuration() = default;
  AWS_DYNAMODB_API InputS3Configuration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API InputS3Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the input bucket owner. If you omit
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
  InputS3Configuration& WithS3BucketOwner(S3BucketOwnerT&& value) {
    SetS3BucketOwner(std::forward<S3BucketOwnerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Amazon S3 bucket that contains the input objects.</p>
   */
  inline const Aws::String& GetS3Bucket() const { return m_s3Bucket; }
  inline bool S3BucketHasBeenSet() const { return m_s3BucketHasBeenSet; }
  template <typename S3BucketT = Aws::String>
  void SetS3Bucket(S3BucketT&& value) {
    m_s3BucketHasBeenSet = true;
    m_s3Bucket = std::forward<S3BucketT>(value);
  }
  template <typename S3BucketT = Aws::String>
  InputS3Configuration& WithS3Bucket(S3BucketT&& value) {
    SetS3Bucket(std::forward<S3BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional key prefix that limits the input to matching objects in the
   * Amazon S3 bucket.</p>
   */
  inline const Aws::String& GetS3KeyPrefix() const { return m_s3KeyPrefix; }
  inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }
  template <typename S3KeyPrefixT = Aws::String>
  void SetS3KeyPrefix(S3KeyPrefixT&& value) {
    m_s3KeyPrefixHasBeenSet = true;
    m_s3KeyPrefix = std::forward<S3KeyPrefixT>(value);
  }
  template <typename S3KeyPrefixT = Aws::String>
  InputS3Configuration& WithS3KeyPrefix(S3KeyPrefixT&& value) {
    SetS3KeyPrefix(std::forward<S3KeyPrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The format of the input objects. <code>DYNAMODB_JSON</code> uses JSON Lines,
   * with one JSON record per line. <code>ION</code> uses a sequence of Ion
   * structs.</p>
   */
  inline BulkOperationInputFormat GetInputFormat() const { return m_inputFormat; }
  inline bool InputFormatHasBeenSet() const { return m_inputFormatHasBeenSet; }
  inline void SetInputFormat(BulkOperationInputFormat value) {
    m_inputFormatHasBeenSet = true;
    m_inputFormat = value;
  }
  inline InputS3Configuration& WithInputFormat(BulkOperationInputFormat value) {
    SetInputFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compression type of the input objects. Valid values are
   * <code>GZIP</code>, <code>ZSTD</code>, and <code>NONE</code>. If you don't
   * specify a value, DynamoDB uses <code>NONE</code>.</p>
   */
  inline InputCompressionType GetInputCompressionType() const { return m_inputCompressionType; }
  inline bool InputCompressionTypeHasBeenSet() const { return m_inputCompressionTypeHasBeenSet; }
  inline void SetInputCompressionType(InputCompressionType value) {
    m_inputCompressionTypeHasBeenSet = true;
    m_inputCompressionType = value;
  }
  inline InputS3Configuration& WithInputCompressionType(InputCompressionType value) {
    SetInputCompressionType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3BucketOwner;

  Aws::String m_s3Bucket;

  Aws::String m_s3KeyPrefix;

  BulkOperationInputFormat m_inputFormat{BulkOperationInputFormat::NOT_SET};

  InputCompressionType m_inputCompressionType{InputCompressionType::NOT_SET};
  bool m_s3BucketOwnerHasBeenSet = false;
  bool m_s3BucketHasBeenSet = false;
  bool m_s3KeyPrefixHasBeenSet = false;
  bool m_inputFormatHasBeenSet = false;
  bool m_inputCompressionTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
