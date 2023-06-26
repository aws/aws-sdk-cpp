/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Total number of scanned files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ScannedItemCount">AWS
   * API Reference</a></p>
   */
  class ScannedItemCount
  {
  public:
    AWS_GUARDDUTY_API ScannedItemCount();
    AWS_GUARDDUTY_API ScannedItemCount(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ScannedItemCount& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Total GB of files scanned for malware.</p>
     */
    inline int GetTotalGb() const{ return m_totalGb; }

    /**
     * <p>Total GB of files scanned for malware.</p>
     */
    inline bool TotalGbHasBeenSet() const { return m_totalGbHasBeenSet; }

    /**
     * <p>Total GB of files scanned for malware.</p>
     */
    inline void SetTotalGb(int value) { m_totalGbHasBeenSet = true; m_totalGb = value; }

    /**
     * <p>Total GB of files scanned for malware.</p>
     */
    inline ScannedItemCount& WithTotalGb(int value) { SetTotalGb(value); return *this;}


    /**
     * <p>Number of files scanned.</p>
     */
    inline int GetFiles() const{ return m_files; }

    /**
     * <p>Number of files scanned.</p>
     */
    inline bool FilesHasBeenSet() const { return m_filesHasBeenSet; }

    /**
     * <p>Number of files scanned.</p>
     */
    inline void SetFiles(int value) { m_filesHasBeenSet = true; m_files = value; }

    /**
     * <p>Number of files scanned.</p>
     */
    inline ScannedItemCount& WithFiles(int value) { SetFiles(value); return *this;}


    /**
     * <p>Total number of scanned volumes.</p>
     */
    inline int GetVolumes() const{ return m_volumes; }

    /**
     * <p>Total number of scanned volumes.</p>
     */
    inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }

    /**
     * <p>Total number of scanned volumes.</p>
     */
    inline void SetVolumes(int value) { m_volumesHasBeenSet = true; m_volumes = value; }

    /**
     * <p>Total number of scanned volumes.</p>
     */
    inline ScannedItemCount& WithVolumes(int value) { SetVolumes(value); return *this;}

  private:

    int m_totalGb;
    bool m_totalGbHasBeenSet = false;

    int m_files;
    bool m_filesHasBeenSet = false;

    int m_volumes;
    bool m_volumesHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
