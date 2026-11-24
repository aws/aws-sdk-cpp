/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/AssetOwnershipTransferStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The details of an asset ownership transfer.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AssetOwnershipTransfer">AWS
 * API Reference</a></p>
 */
class AssetOwnershipTransfer {
 public:
  AWS_DATAZONE_API AssetOwnershipTransfer() = default;
  AWS_DATAZONE_API AssetOwnershipTransfer(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API AssetOwnershipTransfer& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of the ownership transfer. Valid values:</p> <ul> <li> <p>
   * <code>IN_PROGRESS</code> — The transfer is in progress. Requests that change the
   * asset or its listing fail until the transfer completes.</p> </li> <li> <p>
   * <code>SUCCEEDED</code> — The transfer completed. The target project owns the
   * asset, its listing, and the subscriptions to the asset.</p> </li> <li> <p>
   * <code>FAILED</code> — The transfer didn't complete, and the service rolled back
   * its changes. The source project owns the asset.</p> </li> </ul>
   */
  inline AssetOwnershipTransferStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AssetOwnershipTransferStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AssetOwnershipTransfer& WithStatus(AssetOwnershipTransferStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the project that owned the asset when the transfer started.</p>
   */
  inline const Aws::String& GetSourceProjectId() const { return m_sourceProjectId; }
  inline bool SourceProjectIdHasBeenSet() const { return m_sourceProjectIdHasBeenSet; }
  template <typename SourceProjectIdT = Aws::String>
  void SetSourceProjectId(SourceProjectIdT&& value) {
    m_sourceProjectIdHasBeenSet = true;
    m_sourceProjectId = std::forward<SourceProjectIdT>(value);
  }
  template <typename SourceProjectIdT = Aws::String>
  AssetOwnershipTransfer& WithSourceProjectId(SourceProjectIdT&& value) {
    SetSourceProjectId(std::forward<SourceProjectIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the project that the asset is transferred to.</p>
   */
  inline const Aws::String& GetTargetProjectId() const { return m_targetProjectId; }
  inline bool TargetProjectIdHasBeenSet() const { return m_targetProjectIdHasBeenSet; }
  template <typename TargetProjectIdT = Aws::String>
  void SetTargetProjectId(TargetProjectIdT&& value) {
    m_targetProjectIdHasBeenSet = true;
    m_targetProjectId = std::forward<TargetProjectIdT>(value);
  }
  template <typename TargetProjectIdT = Aws::String>
  AssetOwnershipTransfer& WithTargetProjectId(TargetProjectIdT&& value) {
    SetTargetProjectId(std::forward<TargetProjectIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the transfer started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  AssetOwnershipTransfer& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the status of the transfer was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  AssetOwnershipTransfer& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  AssetOwnershipTransferStatus m_status{AssetOwnershipTransferStatus::NOT_SET};

  Aws::String m_sourceProjectId;

  Aws::String m_targetProjectId;

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_statusHasBeenSet = false;
  bool m_sourceProjectIdHasBeenSet = false;
  bool m_targetProjectIdHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
