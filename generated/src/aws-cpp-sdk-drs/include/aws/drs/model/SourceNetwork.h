/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/model/RecoveryLifeCycle.h>
#include <aws/drs/model/ReplicationStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>The ARN of the Source Network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/SourceNetwork">AWS
   * API Reference</a></p>
   */
  class SourceNetwork
  {
  public:
    AWS_DRS_API SourceNetwork() = default;
    AWS_DRS_API SourceNetwork(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API SourceNetwork& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Source Network.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    SourceNetwork& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>CloudFormation stack name that was deployed for recovering the Source
     * Network.</p>
     */
    inline const Aws::String& GetCfnStackName() const { return m_cfnStackName; }
    inline bool CfnStackNameHasBeenSet() const { return m_cfnStackNameHasBeenSet; }
    template<typename CfnStackNameT = Aws::String>
    void SetCfnStackName(CfnStackNameT&& value) { m_cfnStackNameHasBeenSet = true; m_cfnStackName = std::forward<CfnStackNameT>(value); }
    template<typename CfnStackNameT = Aws::String>
    SourceNetwork& WithCfnStackName(CfnStackNameT&& value) { SetCfnStackName(std::forward<CfnStackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information regarding the last recovery of the Source
     * Network.</p>
     */
    inline const RecoveryLifeCycle& GetLastRecovery() const { return m_lastRecovery; }
    inline bool LastRecoveryHasBeenSet() const { return m_lastRecoveryHasBeenSet; }
    template<typename LastRecoveryT = RecoveryLifeCycle>
    void SetLastRecovery(LastRecoveryT&& value) { m_lastRecoveryHasBeenSet = true; m_lastRecovery = std::forward<LastRecoveryT>(value); }
    template<typename LastRecoveryT = RecoveryLifeCycle>
    SourceNetwork& WithLastRecovery(LastRecoveryT&& value) { SetLastRecovery(std::forward<LastRecoveryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the recovered VPC following Source Network recovery.</p>
     */
    inline const Aws::String& GetLaunchedVpcID() const { return m_launchedVpcID; }
    inline bool LaunchedVpcIDHasBeenSet() const { return m_launchedVpcIDHasBeenSet; }
    template<typename LaunchedVpcIDT = Aws::String>
    void SetLaunchedVpcID(LaunchedVpcIDT&& value) { m_launchedVpcIDHasBeenSet = true; m_launchedVpcID = std::forward<LaunchedVpcIDT>(value); }
    template<typename LaunchedVpcIDT = Aws::String>
    SourceNetwork& WithLaunchedVpcID(LaunchedVpcIDT&& value) { SetLaunchedVpcID(std::forward<LaunchedVpcIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of Source Network Replication. Possible values: (a) STOPPED - Source
     * Network is not replicating. (b) IN_PROGRESS - Source Network is being
     * replicated. (c) PROTECTED - Source Network was replicated successfully and is
     * being synchronized for changes. (d) ERROR - Source Network replication has
     * failed</p>
     */
    inline ReplicationStatus GetReplicationStatus() const { return m_replicationStatus; }
    inline bool ReplicationStatusHasBeenSet() const { return m_replicationStatusHasBeenSet; }
    inline void SetReplicationStatus(ReplicationStatus value) { m_replicationStatusHasBeenSet = true; m_replicationStatus = value; }
    inline SourceNetwork& WithReplicationStatus(ReplicationStatus value) { SetReplicationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error details in case Source Network replication status is ERROR.</p>
     */
    inline const Aws::String& GetReplicationStatusDetails() const { return m_replicationStatusDetails; }
    inline bool ReplicationStatusDetailsHasBeenSet() const { return m_replicationStatusDetailsHasBeenSet; }
    template<typename ReplicationStatusDetailsT = Aws::String>
    void SetReplicationStatusDetails(ReplicationStatusDetailsT&& value) { m_replicationStatusDetailsHasBeenSet = true; m_replicationStatusDetails = std::forward<ReplicationStatusDetailsT>(value); }
    template<typename ReplicationStatusDetailsT = Aws::String>
    SourceNetwork& WithReplicationStatusDetails(ReplicationStatusDetailsT&& value) { SetReplicationStatusDetails(std::forward<ReplicationStatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Account ID containing the VPC protected by the Source Network.</p>
     */
    inline const Aws::String& GetSourceAccountID() const { return m_sourceAccountID; }
    inline bool SourceAccountIDHasBeenSet() const { return m_sourceAccountIDHasBeenSet; }
    template<typename SourceAccountIDT = Aws::String>
    void SetSourceAccountID(SourceAccountIDT&& value) { m_sourceAccountIDHasBeenSet = true; m_sourceAccountID = std::forward<SourceAccountIDT>(value); }
    template<typename SourceAccountIDT = Aws::String>
    SourceNetwork& WithSourceAccountID(SourceAccountIDT&& value) { SetSourceAccountID(std::forward<SourceAccountIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source Network ID.</p>
     */
    inline const Aws::String& GetSourceNetworkID() const { return m_sourceNetworkID; }
    inline bool SourceNetworkIDHasBeenSet() const { return m_sourceNetworkIDHasBeenSet; }
    template<typename SourceNetworkIDT = Aws::String>
    void SetSourceNetworkID(SourceNetworkIDT&& value) { m_sourceNetworkIDHasBeenSet = true; m_sourceNetworkID = std::forward<SourceNetworkIDT>(value); }
    template<typename SourceNetworkIDT = Aws::String>
    SourceNetwork& WithSourceNetworkID(SourceNetworkIDT&& value) { SetSourceNetworkID(std::forward<SourceNetworkIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Region containing the VPC protected by the Source Network.</p>
     */
    inline const Aws::String& GetSourceRegion() const { return m_sourceRegion; }
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }
    template<typename SourceRegionT = Aws::String>
    void SetSourceRegion(SourceRegionT&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::forward<SourceRegionT>(value); }
    template<typename SourceRegionT = Aws::String>
    SourceNetwork& WithSourceRegion(SourceRegionT&& value) { SetSourceRegion(std::forward<SourceRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>VPC ID protected by the Source Network.</p>
     */
    inline const Aws::String& GetSourceVpcID() const { return m_sourceVpcID; }
    inline bool SourceVpcIDHasBeenSet() const { return m_sourceVpcIDHasBeenSet; }
    template<typename SourceVpcIDT = Aws::String>
    void SetSourceVpcID(SourceVpcIDT&& value) { m_sourceVpcIDHasBeenSet = true; m_sourceVpcID = std::forward<SourceVpcIDT>(value); }
    template<typename SourceVpcIDT = Aws::String>
    SourceNetwork& WithSourceVpcID(SourceVpcIDT&& value) { SetSourceVpcID(std::forward<SourceVpcIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags associated with the Source Network.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    SourceNetwork& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    SourceNetwork& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_cfnStackName;
    bool m_cfnStackNameHasBeenSet = false;

    RecoveryLifeCycle m_lastRecovery;
    bool m_lastRecoveryHasBeenSet = false;

    Aws::String m_launchedVpcID;
    bool m_launchedVpcIDHasBeenSet = false;

    ReplicationStatus m_replicationStatus{ReplicationStatus::NOT_SET};
    bool m_replicationStatusHasBeenSet = false;

    Aws::String m_replicationStatusDetails;
    bool m_replicationStatusDetailsHasBeenSet = false;

    Aws::String m_sourceAccountID;
    bool m_sourceAccountIDHasBeenSet = false;

    Aws::String m_sourceNetworkID;
    bool m_sourceNetworkIDHasBeenSet = false;

    Aws::String m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;

    Aws::String m_sourceVpcID;
    bool m_sourceVpcIDHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
