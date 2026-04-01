/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CloudWatchLogs {
namespace Model {
class GetLookupTableResult {
 public:
  AWS_CLOUDWATCHLOGS_API GetLookupTableResult() = default;
  AWS_CLOUDWATCHLOGS_API GetLookupTableResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CLOUDWATCHLOGS_API GetLookupTableResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the lookup table.</p>
   */
  inline const Aws::String& GetLookupTableArn() const { return m_lookupTableArn; }
  template <typename LookupTableArnT = Aws::String>
  void SetLookupTableArn(LookupTableArnT&& value) {
    m_lookupTableArnHasBeenSet = true;
    m_lookupTableArn = std::forward<LookupTableArnT>(value);
  }
  template <typename LookupTableArnT = Aws::String>
  GetLookupTableResult& WithLookupTableArn(LookupTableArnT&& value) {
    SetLookupTableArn(std::forward<LookupTableArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the lookup table.</p>
   */
  inline const Aws::String& GetLookupTableName() const { return m_lookupTableName; }
  template <typename LookupTableNameT = Aws::String>
  void SetLookupTableName(LookupTableNameT&& value) {
    m_lookupTableNameHasBeenSet = true;
    m_lookupTableName = std::forward<LookupTableNameT>(value);
  }
  template <typename LookupTableNameT = Aws::String>
  GetLookupTableResult& WithLookupTableName(LookupTableNameT&& value) {
    SetLookupTableName(std::forward<LookupTableNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the lookup table.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetLookupTableResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The full CSV content of the lookup table.</p>
   */
  inline const Aws::String& GetTableBody() const { return m_tableBody; }
  template <typename TableBodyT = Aws::String>
  void SetTableBody(TableBodyT&& value) {
    m_tableBodyHasBeenSet = true;
    m_tableBody = std::forward<TableBodyT>(value);
  }
  template <typename TableBodyT = Aws::String>
  GetLookupTableResult& WithTableBody(TableBodyT&& value) {
    SetTableBody(std::forward<TableBodyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size of the lookup table in bytes.</p>
   */
  inline long long GetSizeBytes() const { return m_sizeBytes; }
  inline void SetSizeBytes(long long value) {
    m_sizeBytesHasBeenSet = true;
    m_sizeBytes = value;
  }
  inline GetLookupTableResult& WithSizeBytes(long long value) {
    SetSizeBytes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the lookup table was last updated, expressed as the number of
   * milliseconds after <code>Jan 1, 1970 00:00:00 UTC</code>.</p>
   */
  inline long long GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  inline void SetLastUpdatedTime(long long value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = value;
  }
  inline GetLookupTableResult& WithLastUpdatedTime(long long value) {
    SetLastUpdatedTime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the KMS key used to encrypt the lookup table data, if
   * applicable.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  GetLookupTableResult& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
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
  GetLookupTableResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_lookupTableArn;

  Aws::String m_lookupTableName;

  Aws::String m_description;

  Aws::String m_tableBody;

  long long m_sizeBytes{0};

  long long m_lastUpdatedTime{0};

  Aws::String m_kmsKeyId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_lookupTableArnHasBeenSet = false;
  bool m_lookupTableNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_tableBodyHasBeenSet = false;
  bool m_sizeBytesHasBeenSet = false;
  bool m_lastUpdatedTimeHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
