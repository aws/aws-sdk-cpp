/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/ds/DirectoryService_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace DirectoryService {
namespace Model {

/**
 * <p>Contains manual snapshot limit information for a directory.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/SnapshotLimits">AWS
 * API Reference</a></p>
 */
class SnapshotLimits {
 public:
  AWS_DIRECTORYSERVICE_API SnapshotLimits() = default;
  AWS_DIRECTORYSERVICE_API SnapshotLimits(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_DIRECTORYSERVICE_API SnapshotLimits& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_DIRECTORYSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The maximum number of manual snapshots allowed.</p>
   */
  inline int64_t GetManualSnapshotsLimit() const { return m_manualSnapshotsLimit; }
  inline bool ManualSnapshotsLimitHasBeenSet() const { return m_manualSnapshotsLimitHasBeenSet; }
  inline void SetManualSnapshotsLimit(int64_t value) {
    m_manualSnapshotsLimitHasBeenSet = true;
    m_manualSnapshotsLimit = value;
  }
  inline SnapshotLimits& WithManualSnapshotsLimit(int64_t value) {
    SetManualSnapshotsLimit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current number of manual snapshots of the directory.</p>
   */
  inline int64_t GetManualSnapshotsCurrentCount() const { return m_manualSnapshotsCurrentCount; }
  inline bool ManualSnapshotsCurrentCountHasBeenSet() const { return m_manualSnapshotsCurrentCountHasBeenSet; }
  inline void SetManualSnapshotsCurrentCount(int64_t value) {
    m_manualSnapshotsCurrentCountHasBeenSet = true;
    m_manualSnapshotsCurrentCount = value;
  }
  inline SnapshotLimits& WithManualSnapshotsCurrentCount(int64_t value) {
    SetManualSnapshotsCurrentCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates if the manual snapshot limit has been reached.</p>
   */
  inline bool GetManualSnapshotsLimitReached() const { return m_manualSnapshotsLimitReached; }
  inline bool ManualSnapshotsLimitReachedHasBeenSet() const { return m_manualSnapshotsLimitReachedHasBeenSet; }
  inline void SetManualSnapshotsLimitReached(bool value) {
    m_manualSnapshotsLimitReachedHasBeenSet = true;
    m_manualSnapshotsLimitReached = value;
  }
  inline SnapshotLimits& WithManualSnapshotsLimitReached(bool value) {
    SetManualSnapshotsLimitReached(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_manualSnapshotsLimit{0};

  int64_t m_manualSnapshotsCurrentCount{0};

  bool m_manualSnapshotsLimitReached{false};
  bool m_manualSnapshotsLimitHasBeenSet = false;
  bool m_manualSnapshotsCurrentCountHasBeenSet = false;
  bool m_manualSnapshotsLimitReachedHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectoryService
}  // namespace Aws
