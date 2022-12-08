/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/dlm/model/RetentionArchiveTier.h>
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
namespace DLM
{
namespace Model
{

  /**
   * <p> <b>[Snapshot policies only]</b> Specifies information about the archive
   * storage tier retention period.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/ArchiveRetainRule">AWS
   * API Reference</a></p>
   */
  class ArchiveRetainRule
  {
  public:
    AWS_DLM_API ArchiveRetainRule();
    AWS_DLM_API ArchiveRetainRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API ArchiveRetainRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about retention period in the Amazon EBS Snapshots Archive. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/snapshot-archive.html">Archive
     * Amazon EBS snapshots</a>.</p>
     */
    inline const RetentionArchiveTier& GetRetentionArchiveTier() const{ return m_retentionArchiveTier; }

    /**
     * <p>Information about retention period in the Amazon EBS Snapshots Archive. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/snapshot-archive.html">Archive
     * Amazon EBS snapshots</a>.</p>
     */
    inline bool RetentionArchiveTierHasBeenSet() const { return m_retentionArchiveTierHasBeenSet; }

    /**
     * <p>Information about retention period in the Amazon EBS Snapshots Archive. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/snapshot-archive.html">Archive
     * Amazon EBS snapshots</a>.</p>
     */
    inline void SetRetentionArchiveTier(const RetentionArchiveTier& value) { m_retentionArchiveTierHasBeenSet = true; m_retentionArchiveTier = value; }

    /**
     * <p>Information about retention period in the Amazon EBS Snapshots Archive. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/snapshot-archive.html">Archive
     * Amazon EBS snapshots</a>.</p>
     */
    inline void SetRetentionArchiveTier(RetentionArchiveTier&& value) { m_retentionArchiveTierHasBeenSet = true; m_retentionArchiveTier = std::move(value); }

    /**
     * <p>Information about retention period in the Amazon EBS Snapshots Archive. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/snapshot-archive.html">Archive
     * Amazon EBS snapshots</a>.</p>
     */
    inline ArchiveRetainRule& WithRetentionArchiveTier(const RetentionArchiveTier& value) { SetRetentionArchiveTier(value); return *this;}

    /**
     * <p>Information about retention period in the Amazon EBS Snapshots Archive. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/snapshot-archive.html">Archive
     * Amazon EBS snapshots</a>.</p>
     */
    inline ArchiveRetainRule& WithRetentionArchiveTier(RetentionArchiveTier&& value) { SetRetentionArchiveTier(std::move(value)); return *this;}

  private:

    RetentionArchiveTier m_retentionArchiveTier;
    bool m_retentionArchiveTierHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
