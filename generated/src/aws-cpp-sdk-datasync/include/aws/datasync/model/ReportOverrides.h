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
    AWS_DATASYNC_API ReportOverrides();
    AWS_DATASYNC_API ReportOverrides(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API ReportOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATASYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the level of reporting for the files, objects, and directories that
     * DataSync attempted to transfer.</p>
     */
    inline const ReportOverride& GetTransferred() const{ return m_transferred; }
    inline bool TransferredHasBeenSet() const { return m_transferredHasBeenSet; }
    inline void SetTransferred(const ReportOverride& value) { m_transferredHasBeenSet = true; m_transferred = value; }
    inline void SetTransferred(ReportOverride&& value) { m_transferredHasBeenSet = true; m_transferred = std::move(value); }
    inline ReportOverrides& WithTransferred(const ReportOverride& value) { SetTransferred(value); return *this;}
    inline ReportOverrides& WithTransferred(ReportOverride&& value) { SetTransferred(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the level of reporting for the files, objects, and directories that
     * DataSync attempted to verify at the end of your transfer.</p>
     */
    inline const ReportOverride& GetVerified() const{ return m_verified; }
    inline bool VerifiedHasBeenSet() const { return m_verifiedHasBeenSet; }
    inline void SetVerified(const ReportOverride& value) { m_verifiedHasBeenSet = true; m_verified = value; }
    inline void SetVerified(ReportOverride&& value) { m_verifiedHasBeenSet = true; m_verified = std::move(value); }
    inline ReportOverrides& WithVerified(const ReportOverride& value) { SetVerified(value); return *this;}
    inline ReportOverrides& WithVerified(ReportOverride&& value) { SetVerified(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the level of reporting for the files, objects, and directories that
     * DataSync attempted to delete in your destination location. This only applies if
     * you <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/configure-metadata.html">configure
     * your task</a> to delete data in the destination that isn't in the source.</p>
     */
    inline const ReportOverride& GetDeleted() const{ return m_deleted; }
    inline bool DeletedHasBeenSet() const { return m_deletedHasBeenSet; }
    inline void SetDeleted(const ReportOverride& value) { m_deletedHasBeenSet = true; m_deleted = value; }
    inline void SetDeleted(ReportOverride&& value) { m_deletedHasBeenSet = true; m_deleted = std::move(value); }
    inline ReportOverrides& WithDeleted(const ReportOverride& value) { SetDeleted(value); return *this;}
    inline ReportOverrides& WithDeleted(ReportOverride&& value) { SetDeleted(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the level of reporting for the files, objects, and directories that
     * DataSync attempted to skip during your transfer.</p>
     */
    inline const ReportOverride& GetSkipped() const{ return m_skipped; }
    inline bool SkippedHasBeenSet() const { return m_skippedHasBeenSet; }
    inline void SetSkipped(const ReportOverride& value) { m_skippedHasBeenSet = true; m_skipped = value; }
    inline void SetSkipped(ReportOverride&& value) { m_skippedHasBeenSet = true; m_skipped = std::move(value); }
    inline ReportOverrides& WithSkipped(const ReportOverride& value) { SetSkipped(value); return *this;}
    inline ReportOverrides& WithSkipped(ReportOverride&& value) { SetSkipped(std::move(value)); return *this;}
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
