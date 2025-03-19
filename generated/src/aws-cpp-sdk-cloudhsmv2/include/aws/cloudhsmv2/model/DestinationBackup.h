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
    AWS_CLOUDHSMV2_API DestinationBackup() = default;
    AWS_CLOUDHSMV2_API DestinationBackup(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSMV2_API DestinationBackup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSMV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time when both the source backup was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTimestamp() const { return m_createTimestamp; }
    inline bool CreateTimestampHasBeenSet() const { return m_createTimestampHasBeenSet; }
    template<typename CreateTimestampT = Aws::Utils::DateTime>
    void SetCreateTimestamp(CreateTimestampT&& value) { m_createTimestampHasBeenSet = true; m_createTimestamp = std::forward<CreateTimestampT>(value); }
    template<typename CreateTimestampT = Aws::Utils::DateTime>
    DestinationBackup& WithCreateTimestamp(CreateTimestampT&& value) { SetCreateTimestamp(std::forward<CreateTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS region that contains the source backup from which the new backup was
     * copied.</p>
     */
    inline const Aws::String& GetSourceRegion() const { return m_sourceRegion; }
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }
    template<typename SourceRegionT = Aws::String>
    void SetSourceRegion(SourceRegionT&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::forward<SourceRegionT>(value); }
    template<typename SourceRegionT = Aws::String>
    DestinationBackup& WithSourceRegion(SourceRegionT&& value) { SetSourceRegion(std::forward<SourceRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (ID) of the source backup from which the new backup was
     * copied.</p>
     */
    inline const Aws::String& GetSourceBackup() const { return m_sourceBackup; }
    inline bool SourceBackupHasBeenSet() const { return m_sourceBackupHasBeenSet; }
    template<typename SourceBackupT = Aws::String>
    void SetSourceBackup(SourceBackupT&& value) { m_sourceBackupHasBeenSet = true; m_sourceBackup = std::forward<SourceBackupT>(value); }
    template<typename SourceBackupT = Aws::String>
    DestinationBackup& WithSourceBackup(SourceBackupT&& value) { SetSourceBackup(std::forward<SourceBackupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier (ID) of the cluster containing the source backup from which
     * the new backup was copied.</p>
     */
    inline const Aws::String& GetSourceCluster() const { return m_sourceCluster; }
    inline bool SourceClusterHasBeenSet() const { return m_sourceClusterHasBeenSet; }
    template<typename SourceClusterT = Aws::String>
    void SetSourceCluster(SourceClusterT&& value) { m_sourceClusterHasBeenSet = true; m_sourceCluster = std::forward<SourceClusterT>(value); }
    template<typename SourceClusterT = Aws::String>
    DestinationBackup& WithSourceCluster(SourceClusterT&& value) { SetSourceCluster(std::forward<SourceClusterT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createTimestamp{};
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
