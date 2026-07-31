/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/S3CompressionType.h>
#include <aws/kafka/model/S3StorageClass.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kafka {
namespace Model {

/**
 * <p>Storage configuration for an Amazon S3 destination bucket.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/S3Storage">AWS API
 * Reference</a></p>
 */
class S3Storage {
 public:
  AWS_KAFKA_API S3Storage() = default;
  AWS_KAFKA_API S3Storage(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API S3Storage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the destination Amazon S3 bucket.</p>
   */
  inline const Aws::String& GetBucketArn() const { return m_bucketArn; }
  inline bool BucketArnHasBeenSet() const { return m_bucketArnHasBeenSet; }
  template <typename BucketArnT = Aws::String>
  void SetBucketArn(BucketArnT&& value) {
    m_bucketArnHasBeenSet = true;
    m_bucketArn = std::forward<BucketArnT>(value);
  }
  template <typename BucketArnT = Aws::String>
  S3Storage& WithBucketArn(BucketArnT&& value) {
    SetBucketArn(std::forward<BucketArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compression codec applied to delivered Amazon S3 objects.</p>
   */
  inline S3CompressionType GetCompressionType() const { return m_compressionType; }
  inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }
  inline void SetCompressionType(S3CompressionType value) {
    m_compressionTypeHasBeenSet = true;
    m_compressionType = value;
  }
  inline S3Storage& WithCompressionType(S3CompressionType value) {
    SetCompressionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional prefix prepended to every Amazon S3 object key written by the
   * channel.</p>
   */
  inline const Aws::String& GetOutputPrefix() const { return m_outputPrefix; }
  inline bool OutputPrefixHasBeenSet() const { return m_outputPrefixHasBeenSet; }
  template <typename OutputPrefixT = Aws::String>
  void SetOutputPrefix(OutputPrefixT&& value) {
    m_outputPrefixHasBeenSet = true;
    m_outputPrefix = std::forward<OutputPrefixT>(value);
  }
  template <typename OutputPrefixT = Aws::String>
  S3Storage& WithOutputPrefix(OutputPrefixT&& value) {
    SetOutputPrefix(std::forward<OutputPrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional template that controls the Amazon S3 object key for each
   * delivered record. Supports the placeholders !{partition-id}, !{sequence-number},
   * and !{kafka-offset}.</p>
   */
  inline const Aws::String& GetOutputKeyTemplate() const { return m_outputKeyTemplate; }
  inline bool OutputKeyTemplateHasBeenSet() const { return m_outputKeyTemplateHasBeenSet; }
  template <typename OutputKeyTemplateT = Aws::String>
  void SetOutputKeyTemplate(OutputKeyTemplateT&& value) {
    m_outputKeyTemplateHasBeenSet = true;
    m_outputKeyTemplate = std::forward<OutputKeyTemplateT>(value);
  }
  template <typename OutputKeyTemplateT = Aws::String>
  S3Storage& WithOutputKeyTemplate(OutputKeyTemplateT&& value) {
    SetOutputKeyTemplate(std::forward<OutputKeyTemplateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 storage class for delivered objects.</p>
   */
  inline S3StorageClass GetStorageClass() const { return m_storageClass; }
  inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
  inline void SetStorageClass(S3StorageClass value) {
    m_storageClassHasBeenSet = true;
    m_storageClass = value;
  }
  inline S3Storage& WithStorageClass(S3StorageClass value) {
    SetStorageClass(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional 12-digit AWS account ID expected to own the Amazon S3 bucket.</p>
   */
  inline const Aws::String& GetExpectedBucketOwner() const { return m_expectedBucketOwner; }
  inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }
  template <typename ExpectedBucketOwnerT = Aws::String>
  void SetExpectedBucketOwner(ExpectedBucketOwnerT&& value) {
    m_expectedBucketOwnerHasBeenSet = true;
    m_expectedBucketOwner = std::forward<ExpectedBucketOwnerT>(value);
  }
  template <typename ExpectedBucketOwnerT = Aws::String>
  S3Storage& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) {
    SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucketArn;

  S3CompressionType m_compressionType{S3CompressionType::NOT_SET};

  Aws::String m_outputPrefix;

  Aws::String m_outputKeyTemplate;

  S3StorageClass m_storageClass{S3StorageClass::NOT_SET};

  Aws::String m_expectedBucketOwner;
  bool m_bucketArnHasBeenSet = false;
  bool m_compressionTypeHasBeenSet = false;
  bool m_outputPrefixHasBeenSet = false;
  bool m_outputKeyTemplateHasBeenSet = false;
  bool m_storageClassHasBeenSet = false;
  bool m_expectedBucketOwnerHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
