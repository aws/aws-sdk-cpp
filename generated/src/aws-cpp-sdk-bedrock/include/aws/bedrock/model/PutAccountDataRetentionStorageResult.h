/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/DataRetentionStorageConfiguration.h>
#include <aws/bedrock/model/DataRetentionStorageDestination.h>
#include <aws/bedrock/model/DataRetentionStorageModelProvider.h>
#include <aws/bedrock/model/DataRetentionStorageResourceStatus.h>
#include <aws/bedrock/model/DataRetentionStorageScope.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {
/**
 * <p>The stored configuration after the write.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/PutAccountDataRetentionStorageResponse">AWS
 * API Reference</a></p>
 */
class PutAccountDataRetentionStorageResult {
 public:
  AWS_BEDROCK_API PutAccountDataRetentionStorageResult() = default;
  AWS_BEDROCK_API PutAccountDataRetentionStorageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCK_API PutAccountDataRetentionStorageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Scope addressed by the operation that returned this record.</p>
   */
  inline DataRetentionStorageScope GetScope() const { return m_scope; }
  inline void SetScope(DataRetentionStorageScope value) {
    m_scopeHasBeenSet = true;
    m_scope = value;
  }
  inline PutAccountDataRetentionStorageResult& WithScope(DataRetentionStorageScope value) {
    SetScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Model provider this configuration applies to.</p>
   */
  inline DataRetentionStorageModelProvider GetModelProvider() const { return m_modelProvider; }
  inline void SetModelProvider(DataRetentionStorageModelProvider value) {
    m_modelProviderHasBeenSet = true;
    m_modelProvider = value;
  }
  inline PutAccountDataRetentionStorageResult& WithModelProvider(DataRetentionStorageModelProvider value) {
    SetModelProvider(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Where this record delivers retained data.</p>
   */
  inline DataRetentionStorageDestination GetStorageDestination() const { return m_storageDestination; }
  inline void SetStorageDestination(DataRetentionStorageDestination value) {
    m_storageDestinationHasBeenSet = true;
    m_storageDestination = value;
  }
  inline PutAccountDataRetentionStorageResult& WithStorageDestination(DataRetentionStorageDestination value) {
    SetStorageDestination(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The stored destination and key. Present only when storageDestination is
   * customer_managed.</p>
   */
  inline const DataRetentionStorageConfiguration& GetStorageConfiguration() const { return m_storageConfiguration; }
  template <typename StorageConfigurationT = DataRetentionStorageConfiguration>
  void SetStorageConfiguration(StorageConfigurationT&& value) {
    m_storageConfigurationHasBeenSet = true;
    m_storageConfiguration = std::forward<StorageConfigurationT>(value);
  }
  template <typename StorageConfigurationT = DataRetentionStorageConfiguration>
  PutAccountDataRetentionStorageResult& WithStorageConfiguration(StorageConfigurationT&& value) {
    SetStorageConfiguration(std::forward<StorageConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time the stored record last changed.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  PutAccountDataRetentionStorageResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Validation state of the KMS key. Present only when storageDestination is
   * customer_managed.</p>
   */
  inline DataRetentionStorageResourceStatus GetKmsKeyStatus() const { return m_kmsKeyStatus; }
  inline void SetKmsKeyStatus(DataRetentionStorageResourceStatus value) {
    m_kmsKeyStatusHasBeenSet = true;
    m_kmsKeyStatus = value;
  }
  inline PutAccountDataRetentionStorageResult& WithKmsKeyStatus(DataRetentionStorageResourceStatus value) {
    SetKmsKeyStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Validation state of the bucket. Present only when storageDestination is
   * customer_managed.</p>
   */
  inline DataRetentionStorageResourceStatus GetS3BucketStatus() const { return m_s3BucketStatus; }
  inline void SetS3BucketStatus(DataRetentionStorageResourceStatus value) {
    m_s3BucketStatusHasBeenSet = true;
    m_s3BucketStatus = value;
  }
  inline PutAccountDataRetentionStorageResult& WithS3BucketStatus(DataRetentionStorageResourceStatus value) {
    SetS3BucketStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  PutAccountDataRetentionStorageResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  DataRetentionStorageScope m_scope{DataRetentionStorageScope::NOT_SET};

  DataRetentionStorageModelProvider m_modelProvider{DataRetentionStorageModelProvider::NOT_SET};

  DataRetentionStorageDestination m_storageDestination{DataRetentionStorageDestination::NOT_SET};

  DataRetentionStorageConfiguration m_storageConfiguration;

  Aws::Utils::DateTime m_updatedAt{};

  DataRetentionStorageResourceStatus m_kmsKeyStatus{DataRetentionStorageResourceStatus::NOT_SET};

  DataRetentionStorageResourceStatus m_s3BucketStatus{DataRetentionStorageResourceStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_scopeHasBeenSet = false;
  bool m_modelProviderHasBeenSet = false;
  bool m_storageDestinationHasBeenSet = false;
  bool m_storageConfigurationHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_kmsKeyStatusHasBeenSet = false;
  bool m_s3BucketStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
