/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
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
namespace Backup {
namespace Model {
class StartScanJobResult {
 public:
  AWS_BACKUP_API StartScanJobResult() = default;
  AWS_BACKUP_API StartScanJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BACKUP_API StartScanJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The date and time that a backup job is created, in Unix format and
   * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
   * accurate to milliseconds. For example, the value 1516925490.087 represents
   * Friday, January 26, 2018 12:11:30.087 AM.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
  template <typename CreationDateT = Aws::Utils::DateTime>
  void SetCreationDate(CreationDateT&& value) {
    m_creationDateHasBeenSet = true;
    m_creationDate = std::forward<CreationDateT>(value);
  }
  template <typename CreationDateT = Aws::Utils::DateTime>
  StartScanJobResult& WithCreationDate(CreationDateT&& value) {
    SetCreationDate(std::forward<CreationDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Uniquely identifies a request to Backup to back up a resource.</p>
   */
  inline const Aws::String& GetScanJobId() const { return m_scanJobId; }
  template <typename ScanJobIdT = Aws::String>
  void SetScanJobId(ScanJobIdT&& value) {
    m_scanJobIdHasBeenSet = true;
    m_scanJobId = std::forward<ScanJobIdT>(value);
  }
  template <typename ScanJobIdT = Aws::String>
  StartScanJobResult& WithScanJobId(ScanJobIdT&& value) {
    SetScanJobId(std::forward<ScanJobIdT>(value));
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
  StartScanJobResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_creationDate{};
  bool m_creationDateHasBeenSet = false;

  Aws::String m_scanJobId;
  bool m_scanJobIdHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
