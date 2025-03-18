/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/drs/model/StartSourceNetworkRecoveryRequestNetworkEntry.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace drs
{
namespace Model
{

  /**
   */
  class StartSourceNetworkRecoveryRequest : public DrsRequest
  {
  public:
    AWS_DRS_API StartSourceNetworkRecoveryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSourceNetworkRecovery"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Don't update existing CloudFormation Stack, recover the network using a new
     * stack.</p>
     */
    inline bool GetDeployAsNew() const { return m_deployAsNew; }
    inline bool DeployAsNewHasBeenSet() const { return m_deployAsNewHasBeenSet; }
    inline void SetDeployAsNew(bool value) { m_deployAsNewHasBeenSet = true; m_deployAsNew = value; }
    inline StartSourceNetworkRecoveryRequest& WithDeployAsNew(bool value) { SetDeployAsNew(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Source Networks that we want to start a Recovery Job for.</p>
     */
    inline const Aws::Vector<StartSourceNetworkRecoveryRequestNetworkEntry>& GetSourceNetworks() const { return m_sourceNetworks; }
    inline bool SourceNetworksHasBeenSet() const { return m_sourceNetworksHasBeenSet; }
    template<typename SourceNetworksT = Aws::Vector<StartSourceNetworkRecoveryRequestNetworkEntry>>
    void SetSourceNetworks(SourceNetworksT&& value) { m_sourceNetworksHasBeenSet = true; m_sourceNetworks = std::forward<SourceNetworksT>(value); }
    template<typename SourceNetworksT = Aws::Vector<StartSourceNetworkRecoveryRequestNetworkEntry>>
    StartSourceNetworkRecoveryRequest& WithSourceNetworks(SourceNetworksT&& value) { SetSourceNetworks(std::forward<SourceNetworksT>(value)); return *this;}
    template<typename SourceNetworksT = StartSourceNetworkRecoveryRequestNetworkEntry>
    StartSourceNetworkRecoveryRequest& AddSourceNetworks(SourceNetworksT&& value) { m_sourceNetworksHasBeenSet = true; m_sourceNetworks.emplace_back(std::forward<SourceNetworksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags to be associated with the Source Network recovery Job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    StartSourceNetworkRecoveryRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    StartSourceNetworkRecoveryRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    bool m_deployAsNew{false};
    bool m_deployAsNewHasBeenSet = false;

    Aws::Vector<StartSourceNetworkRecoveryRequestNetworkEntry> m_sourceNetworks;
    bool m_sourceNetworksHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
