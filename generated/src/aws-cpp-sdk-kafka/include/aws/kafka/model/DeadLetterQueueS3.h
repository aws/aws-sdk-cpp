/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>

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
 * <p>Configuration of the Amazon S3 bucket where records that fail to deliver are
 * stored.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/DeadLetterQueueS3">AWS
 * API Reference</a></p>
 */
class DeadLetterQueueS3 {
 public:
  AWS_KAFKA_API DeadLetterQueueS3() = default;
  AWS_KAFKA_API DeadLetterQueueS3(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API DeadLetterQueueS3& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the dead-letter Amazon S3 bucket.</p>
   */
  inline const Aws::String& GetBucketArn() const { return m_bucketArn; }
  inline bool BucketArnHasBeenSet() const { return m_bucketArnHasBeenSet; }
  template <typename BucketArnT = Aws::String>
  void SetBucketArn(BucketArnT&& value) {
    m_bucketArnHasBeenSet = true;
    m_bucketArn = std::forward<BucketArnT>(value);
  }
  template <typename BucketArnT = Aws::String>
  DeadLetterQueueS3& WithBucketArn(BucketArnT&& value) {
    SetBucketArn(std::forward<BucketArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional prefix prepended to every dead-letter Amazon S3 object key.</p>
   */
  inline const Aws::String& GetErrorOutputPrefix() const { return m_errorOutputPrefix; }
  inline bool ErrorOutputPrefixHasBeenSet() const { return m_errorOutputPrefixHasBeenSet; }
  template <typename ErrorOutputPrefixT = Aws::String>
  void SetErrorOutputPrefix(ErrorOutputPrefixT&& value) {
    m_errorOutputPrefixHasBeenSet = true;
    m_errorOutputPrefix = std::forward<ErrorOutputPrefixT>(value);
  }
  template <typename ErrorOutputPrefixT = Aws::String>
  DeadLetterQueueS3& WithErrorOutputPrefix(ErrorOutputPrefixT&& value) {
    SetErrorOutputPrefix(std::forward<ErrorOutputPrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional 12-digit AWS account ID expected to own the dead-letter Amazon S3
   * bucket.</p>
   */
  inline const Aws::String& GetExpectedBucketOwner() const { return m_expectedBucketOwner; }
  inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }
  template <typename ExpectedBucketOwnerT = Aws::String>
  void SetExpectedBucketOwner(ExpectedBucketOwnerT&& value) {
    m_expectedBucketOwnerHasBeenSet = true;
    m_expectedBucketOwner = std::forward<ExpectedBucketOwnerT>(value);
  }
  template <typename ExpectedBucketOwnerT = Aws::String>
  DeadLetterQueueS3& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) {
    SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucketArn;

  Aws::String m_errorOutputPrefix;

  Aws::String m_expectedBucketOwner;
  bool m_bucketArnHasBeenSet = false;
  bool m_errorOutputPrefixHasBeenSet = false;
  bool m_expectedBucketOwnerHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
