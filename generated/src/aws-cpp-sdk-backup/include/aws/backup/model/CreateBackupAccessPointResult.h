/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/model/AccessPointStatus.h>
#include <aws/core/http/HttpResponse.h>
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
namespace Backup {
namespace Model {
class CreateBackupAccessPointResult {
 public:
  AWS_BACKUP_API CreateBackupAccessPointResult() = default;
  AWS_BACKUP_API CreateBackupAccessPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BACKUP_API CreateBackupAccessPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) that uniquely identifies the created backup
   * access point.</p>
   */
  inline const Aws::String& GetAccessPointArn() const { return m_accessPointArn; }
  template <typename AccessPointArnT = Aws::String>
  void SetAccessPointArn(AccessPointArnT&& value) {
    m_accessPointArnHasBeenSet = true;
    m_accessPointArn = std::forward<AccessPointArnT>(value);
  }
  template <typename AccessPointArnT = Aws::String>
  CreateBackupAccessPointResult& WithAccessPointArn(AccessPointArnT&& value) {
    SetAccessPointArn(std::forward<AccessPointArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the backup access point. A newly created backup access
   * point begins in the <code>CREATING</code> state and becomes usable when it
   * reaches <code>AVAILABLE</code>.</p>
   */
  inline AccessPointStatus GetStatus() const { return m_status; }
  inline void SetStatus(AccessPointStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateBackupAccessPointResult& WithStatus(AccessPointStatus value) {
    SetStatus(value);
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
  CreateBackupAccessPointResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_accessPointArn;

  AccessPointStatus m_status{AccessPointStatus::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_accessPointArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
