/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/model/S3CompressionType.h>
#include <aws/kinesis/model/S3StorageClass.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kinesis {
namespace Model {

/**
 * <p>The Amazon S3 storage settings for a general purpose Amazon S3
 * destination.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/S3StorageConfiguration">AWS
 * API Reference</a></p>
 */
class S3StorageConfiguration {
 public:
  AWS_KINESIS_API S3StorageConfiguration() = default;
  AWS_KINESIS_API S3StorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API S3StorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the destination Amazon S3 bucket.</p>
   */
  inline const Aws::String& GetBucketARN() const { return m_bucketARN; }
  inline bool BucketARNHasBeenSet() const { return m_bucketARNHasBeenSet; }
  template <typename BucketARNT = Aws::String>
  void SetBucketARN(BucketARNT&& value) {
    m_bucketARNHasBeenSet = true;
    m_bucketARN = std::forward<BucketARNT>(value);
  }
  template <typename BucketARNT = Aws::String>
  S3StorageConfiguration& WithBucketARN(BucketARNT&& value) {
    SetBucketARN(std::forward<BucketARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the expected owner of the destination
   * bucket. This value helps prevent delivery to an unintended bucket if ownership
   * changes.</p>
   */
  inline const Aws::String& GetExpectedBucketOwner() const { return m_expectedBucketOwner; }
  inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }
  template <typename ExpectedBucketOwnerT = Aws::String>
  void SetExpectedBucketOwner(ExpectedBucketOwnerT&& value) {
    m_expectedBucketOwnerHasBeenSet = true;
    m_expectedBucketOwner = std::forward<ExpectedBucketOwnerT>(value);
  }
  template <typename ExpectedBucketOwnerT = Aws::String>
  S3StorageConfiguration& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) {
    SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The template used to construct the Amazon S3 object key for delivered
   * objects. If not specified, a default template is used.</p>
   */
  inline const Aws::String& GetOutputKeyTemplate() const { return m_outputKeyTemplate; }
  inline bool OutputKeyTemplateHasBeenSet() const { return m_outputKeyTemplateHasBeenSet; }
  template <typename OutputKeyTemplateT = Aws::String>
  void SetOutputKeyTemplate(OutputKeyTemplateT&& value) {
    m_outputKeyTemplateHasBeenSet = true;
    m_outputKeyTemplate = std::forward<OutputKeyTemplateT>(value);
  }
  template <typename OutputKeyTemplateT = Aws::String>
  S3StorageConfiguration& WithOutputKeyTemplate(OutputKeyTemplateT&& value) {
    SetOutputKeyTemplate(std::forward<OutputKeyTemplateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 storage class for delivered objects. Valid values:</p> <ul>
   * <li> <p> <code>STANDARD</code> (default)</p> </li> <li> <p>
   * <code>INTELLIGENT_TIERING</code> </p> </li> <li> <p> <code>GLACIER_IR</code>
   * </p> </li> </ul>
   */
  inline S3StorageClass GetStorageClass() const { return m_storageClass; }
  inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }
  inline void SetStorageClass(S3StorageClass value) {
    m_storageClassHasBeenSet = true;
    m_storageClass = value;
  }
  inline S3StorageConfiguration& WithStorageClass(S3StorageClass value) {
    SetStorageClass(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compression applied to delivered objects. Valid values:</p> <ul> <li> <p>
   * <code>NONE</code> - No compression.</p> </li> <li> <p> <code>GZIP</code> - gzip
   * compression.</p> </li> <li> <p> <code>ZSTD</code> - Zstandard compression.</p>
   * </li> </ul>
   */
  inline S3CompressionType GetCompressionType() const { return m_compressionType; }
  inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }
  inline void SetCompressionType(S3CompressionType value) {
    m_compressionTypeHasBeenSet = true;
    m_compressionType = value;
  }
  inline S3StorageConfiguration& WithCompressionType(S3CompressionType value) {
    SetCompressionType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucketARN;

  Aws::String m_expectedBucketOwner;

  Aws::String m_outputKeyTemplate;

  S3StorageClass m_storageClass{S3StorageClass::NOT_SET};

  S3CompressionType m_compressionType{S3CompressionType::NOT_SET};
  bool m_bucketARNHasBeenSet = false;
  bool m_expectedBucketOwnerHasBeenSet = false;
  bool m_outputKeyTemplateHasBeenSet = false;
  bool m_storageClassHasBeenSet = false;
  bool m_compressionTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
