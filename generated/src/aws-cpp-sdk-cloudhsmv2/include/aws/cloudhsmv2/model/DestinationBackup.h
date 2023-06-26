/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudHSMV2
{
namespace Model
{

  /**
   * <p>Contains information about the backup that will be copied and created by the
   * <a>CopyBackupToRegion</a> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsmv2-2017-04-28/DestinationBackup">AWS
   * API Reference</a></p>
   */
  class DestinationBackup
  {
  public:
    AWS_CLOUDHSMV2_API DestinationBackup();
    AWS_CLOUDHSMV2_API DestinationBackup(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSMV2_API DestinationBackup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSMV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The date and time when both the source backup was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTimestamp() const{ return m_createTimestamp; }

    /**
     * <p>The date and time when both the source backup was created.</p>
     */
    inline bool CreateTimestampHasBeenSet() const { return m_createTimestampHasBeenSet; }

    /**
     * <p>The date and time when both the source backup was created.</p>
     */
    inline void SetCreateTimestamp(const Aws::Utils::DateTime& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = value; }

    /**
     * <p>The date and time when both the source backup was created.</p>
     */
    inline void SetCreateTimestamp(Aws::Utils::DateTime&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = std::move(value); }

    /**
     * <p>The date and time when both the source backup was created.</p>
     */
    inline DestinationBackup& WithCreateTimestamp(const Aws::Utils::DateTime& value) { SetCreateTimestamp(value); return *this;}

    /**
     * <p>The date and time when both the source backup was created.</p>
     */
    inline DestinationBackup& WithCreateTimestamp(Aws::Utils::DateTime&& value) { SetCreateTimestamp(std::move(value)); return *this;}


    /**
     * <p>The AWS region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline const Aws::String& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * <p>The AWS region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }

    /**
     * <p>The AWS region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline void SetSourceRegion(const Aws::String& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    /**
     * <p>The AWS region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline void SetSourceRegion(Aws::String&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }

    /**
     * <p>The AWS region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline void SetSourceRegion(const char* value) { m_sourceRegionHasBeenSet = true; m_sourceRegion.assign(value); }

    /**
     * <p>The AWS region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline DestinationBackup& WithSourceRegion(const Aws::String& value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The AWS region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline DestinationBackup& WithSourceRegion(Aws::String&& value) { SetSourceRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline DestinationBackup& WithSourceRegion(const char* value) { SetSourceRegion(value); return *this;}


    /**
     * <p>The identifier (ID) of the source backup from which the new backup was
     * copied.</p>
     */
    inline const Aws::String& GetSourceBackup() const{ return m_sourceBackup; }

    /**
     * <p>The identifier (ID) of the source backup from which the new backup was
     * copied.</p>
     */
    inline bool SourceBackupHasBeenSet() const { return m_sourceBackupHasBeenSet; }

    /**
     * <p>The identifier (ID) of the source backup from which the new backup was
     * copied.</p>
     */
    inline void SetSourceBackup(const Aws::String& value) { m_sourceBackupHasBeenSet = true; m_sourceBackup = value; }

    /**
     * <p>The identifier (ID) of the source backup from which the new backup was
     * copied.</p>
     */
    inline void SetSourceBackup(Aws::String&& value) { m_sourceBackupHasBeenSet = true; m_sourceBackup = std::move(value); }

    /**
     * <p>The identifier (ID) of the source backup from which the new backup was
     * copied.</p>
     */
    inline void SetSourceBackup(const char* value) { m_sourceBackupHasBeenSet = true; m_sourceBackup.assign(value); }

    /**
     * <p>The identifier (ID) of the source backup from which the new backup was
     * copied.</p>
     */
    inline DestinationBackup& WithSourceBackup(const Aws::String& value) { SetSourceBackup(value); return *this;}

    /**
     * <p>The identifier (ID) of the source backup from which the new backup was
     * copied.</p>
     */
    inline DestinationBackup& WithSourceBackup(Aws::String&& value) { SetSourceBackup(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the source backup from which the new backup was
     * copied.</p>
     */
    inline DestinationBackup& WithSourceBackup(const char* value) { SetSourceBackup(value); return *this;}


    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied.</p>
     */
    inline const Aws::String& GetSourceCluster() const{ return m_sourceCluster; }

    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied.</p>
     */
    inline bool SourceClusterHasBeenSet() const { return m_sourceClusterHasBeenSet; }

    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied.</p>
     */
    inline void SetSourceCluster(const Aws::String& value) { m_sourceClusterHasBeenSet = true; m_sourceCluster = value; }

    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied.</p>
     */
    inline void SetSourceCluster(Aws::String&& value) { m_sourceClusterHasBeenSet = true; m_sourceCluster = std::move(value); }

    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied.</p>
     */
    inline void SetSourceCluster(const char* value) { m_sourceClusterHasBeenSet = true; m_sourceCluster.assign(value); }

    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied.</p>
     */
    inline DestinationBackup& WithSourceCluster(const Aws::String& value) { SetSourceCluster(value); return *this;}

    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied.</p>
     */
    inline DestinationBackup& WithSourceCluster(Aws::String&& value) { SetSourceCluster(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied.</p>
     */
    inline DestinationBackup& WithSourceCluster(const char* value) { SetSourceCluster(value); return *this;}

  private:

    Aws::Utils::DateTime m_createTimestamp;
    bool m_createTimestampHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;

    Aws::String m_sourceBackup;
    bool m_sourceBackupHasBeenSet = false;

    Aws::String m_sourceCluster;
    bool m_sourceClusterHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
