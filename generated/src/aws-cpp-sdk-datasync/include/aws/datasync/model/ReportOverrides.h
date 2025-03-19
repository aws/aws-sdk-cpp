/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/ReportOverride.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataSync
{
namespace Model
{

  /**
   * <p>The level of detail included in each aspect of your DataSync <a
   * href="https://docs.aws.amazon.com/datasync/latest/userguide/task-reports.html">task
   * report</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ReportOverrides">AWS
   * API Reference</a></p>
   */
  class ReportOverrides
  {
  public:
    AWS_DATASYNC_API ReportOverrides() = default;
    AWS_DATASYNC_API ReportOverrides(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API ReportOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the level of reporting for the files, objects, and directories that
     * DataSync attempted to transfer.</p>
     */
    inline const ReportOverride& GetTransferred() const { return m_transferred; }
    inline bool TransferredHasBeenSet() const { return m_transferredHasBeenSet; }
    template<typename TransferredT = ReportOverride>
    void SetTransferred(TransferredT&& value) { m_transferredHasBeenSet = true; m_transferred = std::forward<TransferredT>(value); }
    template<typename TransferredT = ReportOverride>
    ReportOverrides& WithTransferred(TransferredT&& value) { SetTransferred(std::forward<TransferredT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the level of reporting for the files, objects, and directories that
     * DataSync attempted to verify at the end of your transfer.</p>
     */
    inline const ReportOverride& GetVerified() const { return m_verified; }
    inline bool VerifiedHasBeenSet() const { return m_verifiedHasBeenSet; }
    template<typename VerifiedT = ReportOverride>
    void SetVerified(VerifiedT&& value) { m_verifiedHasBeenSet = true; m_verified = std::forward<VerifiedT>(value); }
    template<typename VerifiedT = ReportOverride>
    ReportOverrides& WithVerified(VerifiedT&& value) { SetVerified(std::forward<VerifiedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the level of reporting for the files, objects, and directories that
     * DataSync attempted to delete in your destination location. This only applies if
     * you <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-metadata.html">configure
     * your task</a> to delete data in the destination that isn't in the source.</p>
     */
    inline const ReportOverride& GetDeleted() const { return m_deleted; }
    inline bool DeletedHasBeenSet() const { return m_deletedHasBeenSet; }
    template<typename DeletedT = ReportOverride>
    void SetDeleted(DeletedT&& value) { m_deletedHasBeenSet = true; m_deleted = std::forward<DeletedT>(value); }
    template<typename DeletedT = ReportOverride>
    ReportOverrides& WithDeleted(DeletedT&& value) { SetDeleted(std::forward<DeletedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the level of reporting for the files, objects, and directories that
     * DataSync attempted to skip during your transfer.</p>
     */
    inline const ReportOverride& GetSkipped() const { return m_skipped; }
    inline bool SkippedHasBeenSet() const { return m_skippedHasBeenSet; }
    template<typename SkippedT = ReportOverride>
    void SetSkipped(SkippedT&& value) { m_skippedHasBeenSet = true; m_skipped = std::forward<SkippedT>(value); }
    template<typename SkippedT = ReportOverride>
    ReportOverrides& WithSkipped(SkippedT&& value) { SetSkipped(std::forward<SkippedT>(value)); return *this;}
    ///@}
  private:

    ReportOverride m_transferred;
    bool m_transferredHasBeenSet = false;

    ReportOverride m_verified;
    bool m_verifiedHasBeenSet = false;

    ReportOverride m_deleted;
    bool m_deletedHasBeenSet = false;

    ReportOverride m_skipped;
    bool m_skippedHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
