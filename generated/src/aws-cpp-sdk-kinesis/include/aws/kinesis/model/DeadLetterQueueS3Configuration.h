/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesis/Kinesis_EXPORTS.h>

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
 * <p>The Amazon S3 dead-letter queue configuration for records that cannot be
 * delivered.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/DeadLetterQueueS3Configuration">AWS
 * API Reference</a></p>
 */
class DeadLetterQueueS3Configuration {
 public:
  AWS_KINESIS_API DeadLetterQueueS3Configuration() = default;
  AWS_KINESIS_API DeadLetterQueueS3Configuration(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API DeadLetterQueueS3Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the dead-letter queue Amazon S3 bucket.</p>
   */
  inline const Aws::String& GetBucketARN() const { return m_bucketARN; }
  inline bool BucketARNHasBeenSet() const { return m_bucketARNHasBeenSet; }
  template <typename BucketARNT = Aws::String>
  void SetBucketARN(BucketARNT&& value) {
    m_bucketARNHasBeenSet = true;
    m_bucketARN = std::forward<BucketARNT>(value);
  }
  template <typename BucketARNT = Aws::String>
  DeadLetterQueueS3Configuration& WithBucketARN(BucketARNT&& value) {
    SetBucketARN(std::forward<BucketARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the expected owner of the dead-letter
   * queue bucket.</p>
   */
  inline const Aws::String& GetExpectedBucketOwner() const { return m_expectedBucketOwner; }
  inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }
  template <typename ExpectedBucketOwnerT = Aws::String>
  void SetExpectedBucketOwner(ExpectedBucketOwnerT&& value) {
    m_expectedBucketOwnerHasBeenSet = true;
    m_expectedBucketOwner = std::forward<ExpectedBucketOwnerT>(value);
  }
  template <typename ExpectedBucketOwnerT = Aws::String>
  DeadLetterQueueS3Configuration& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) {
    SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 key prefix for error records.</p>
   */
  inline const Aws::String& GetErrorOutputPrefix() const { return m_errorOutputPrefix; }
  inline bool ErrorOutputPrefixHasBeenSet() const { return m_errorOutputPrefixHasBeenSet; }
  template <typename ErrorOutputPrefixT = Aws::String>
  void SetErrorOutputPrefix(ErrorOutputPrefixT&& value) {
    m_errorOutputPrefixHasBeenSet = true;
    m_errorOutputPrefix = std::forward<ErrorOutputPrefixT>(value);
  }
  template <typename ErrorOutputPrefixT = Aws::String>
  DeadLetterQueueS3Configuration& WithErrorOutputPrefix(ErrorOutputPrefixT&& value) {
    SetErrorOutputPrefix(std::forward<ErrorOutputPrefixT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucketARN;

  Aws::String m_expectedBucketOwner;

  Aws::String m_errorOutputPrefix;
  bool m_bucketARNHasBeenSet = false;
  bool m_expectedBucketOwnerHasBeenSet = false;
  bool m_errorOutputPrefixHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
