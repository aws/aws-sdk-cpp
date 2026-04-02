/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CloudWatchLogs {
namespace Model {

/**
 * <p>Configuration for Amazon S3 destination where scheduled query results are
 * delivered.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/S3Configuration">AWS
 * API Reference</a></p>
 */
class S3Configuration {
 public:
  AWS_CLOUDWATCHLOGS_API S3Configuration() = default;
  AWS_CLOUDWATCHLOGS_API S3Configuration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API S3Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 URI where query results are delivered. Must be a valid S3 URI
   * format.</p>
   */
  inline const Aws::String& GetDestinationIdentifier() const { return m_destinationIdentifier; }
  inline bool DestinationIdentifierHasBeenSet() const { return m_destinationIdentifierHasBeenSet; }
  template <typename DestinationIdentifierT = Aws::String>
  void SetDestinationIdentifier(DestinationIdentifierT&& value) {
    m_destinationIdentifierHasBeenSet = true;
    m_destinationIdentifier = std::forward<DestinationIdentifierT>(value);
  }
  template <typename DestinationIdentifierT = Aws::String>
  S3Configuration& WithDestinationIdentifier(DestinationIdentifierT&& value) {
    SetDestinationIdentifier(std::forward<DestinationIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role that grants permissions to write query results to the
   * specified Amazon S3 destination.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  S3Configuration& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services accountId for the bucket owning account.</p>
   */
  inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
  inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
  template <typename OwnerAccountIdT = Aws::String>
  void SetOwnerAccountId(OwnerAccountIdT&& value) {
    m_ownerAccountIdHasBeenSet = true;
    m_ownerAccountId = std::forward<OwnerAccountIdT>(value);
  }
  template <typename OwnerAccountIdT = Aws::String>
  S3Configuration& WithOwnerAccountId(OwnerAccountIdT&& value) {
    SetOwnerAccountId(std::forward<OwnerAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the KMS encryption key. Must belong to the
   * same Amazon Web Services Region as the destination Amazon S3 bucket.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  S3Configuration& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_destinationIdentifier;

  Aws::String m_roleArn;

  Aws::String m_ownerAccountId;

  Aws::String m_kmsKeyId;
  bool m_destinationIdentifierHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_ownerAccountIdHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
