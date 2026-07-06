/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/ExportStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace MailManager {
namespace Model {

/**
 * <p>Summary statuses of an archive export job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/ExportSummary">AWS
 * API Reference</a></p>
 */
class ExportSummary {
 public:
  AWS_MAILMANAGER_API ExportSummary() = default;
  AWS_MAILMANAGER_API ExportSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_MAILMANAGER_API ExportSummary& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_MAILMANAGER_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The unique identifier of the export job.</p>
   */
  inline const Aws::String& GetExportId() const { return m_exportId; }
  inline bool ExportIdHasBeenSet() const { return m_exportIdHasBeenSet; }
  template <typename ExportIdT = Aws::String>
  void SetExportId(ExportIdT&& value) {
    m_exportIdHasBeenSet = true;
    m_exportId = std::forward<ExportIdT>(value);
  }
  template <typename ExportIdT = Aws::String>
  ExportSummary& WithExportId(ExportIdT&& value) {
    SetExportId(std::forward<ExportIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the export job.</p>
   */
  inline const ExportStatus& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = ExportStatus>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = ExportStatus>
  ExportSummary& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_exportId;

  ExportStatus m_status;
  bool m_exportIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
