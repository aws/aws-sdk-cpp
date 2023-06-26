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
    AWS_DRS_API StartSourceNetworkRecoveryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSourceNetworkRecovery"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    /**
     * <p>Don't update existing CloudFormation Stack, recover the network using a new
     * stack.</p>
     */
    inline bool GetDeployAsNew() const{ return m_deployAsNew; }

    /**
     * <p>Don't update existing CloudFormation Stack, recover the network using a new
     * stack.</p>
     */
    inline bool DeployAsNewHasBeenSet() const { return m_deployAsNewHasBeenSet; }

    /**
     * <p>Don't update existing CloudFormation Stack, recover the network using a new
     * stack.</p>
     */
    inline void SetDeployAsNew(bool value) { m_deployAsNewHasBeenSet = true; m_deployAsNew = value; }

    /**
     * <p>Don't update existing CloudFormation Stack, recover the network using a new
     * stack.</p>
     */
    inline StartSourceNetworkRecoveryRequest& WithDeployAsNew(bool value) { SetDeployAsNew(value); return *this;}


    /**
     * <p>The Source Networks that we want to start a Recovery Job for.</p>
     */
    inline const Aws::Vector<StartSourceNetworkRecoveryRequestNetworkEntry>& GetSourceNetworks() const{ return m_sourceNetworks; }

    /**
     * <p>The Source Networks that we want to start a Recovery Job for.</p>
     */
    inline bool SourceNetworksHasBeenSet() const { return m_sourceNetworksHasBeenSet; }

    /**
     * <p>The Source Networks that we want to start a Recovery Job for.</p>
     */
    inline void SetSourceNetworks(const Aws::Vector<StartSourceNetworkRecoveryRequestNetworkEntry>& value) { m_sourceNetworksHasBeenSet = true; m_sourceNetworks = value; }

    /**
     * <p>The Source Networks that we want to start a Recovery Job for.</p>
     */
    inline void SetSourceNetworks(Aws::Vector<StartSourceNetworkRecoveryRequestNetworkEntry>&& value) { m_sourceNetworksHasBeenSet = true; m_sourceNetworks = std::move(value); }

    /**
     * <p>The Source Networks that we want to start a Recovery Job for.</p>
     */
    inline StartSourceNetworkRecoveryRequest& WithSourceNetworks(const Aws::Vector<StartSourceNetworkRecoveryRequestNetworkEntry>& value) { SetSourceNetworks(value); return *this;}

    /**
     * <p>The Source Networks that we want to start a Recovery Job for.</p>
     */
    inline StartSourceNetworkRecoveryRequest& WithSourceNetworks(Aws::Vector<StartSourceNetworkRecoveryRequestNetworkEntry>&& value) { SetSourceNetworks(std::move(value)); return *this;}

    /**
     * <p>The Source Networks that we want to start a Recovery Job for.</p>
     */
    inline StartSourceNetworkRecoveryRequest& AddSourceNetworks(const StartSourceNetworkRecoveryRequestNetworkEntry& value) { m_sourceNetworksHasBeenSet = true; m_sourceNetworks.push_back(value); return *this; }

    /**
     * <p>The Source Networks that we want to start a Recovery Job for.</p>
     */
    inline StartSourceNetworkRecoveryRequest& AddSourceNetworks(StartSourceNetworkRecoveryRequestNetworkEntry&& value) { m_sourceNetworksHasBeenSet = true; m_sourceNetworks.push_back(std::move(value)); return *this; }


    /**
     * <p>The tags to be associated with the Source Network recovery Job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be associated with the Source Network recovery Job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be associated with the Source Network recovery Job.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be associated with the Source Network recovery Job.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be associated with the Source Network recovery Job.</p>
     */
    inline StartSourceNetworkRecoveryRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be associated with the Source Network recovery Job.</p>
     */
    inline StartSourceNetworkRecoveryRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be associated with the Source Network recovery Job.</p>
     */
    inline StartSourceNetworkRecoveryRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to be associated with the Source Network recovery Job.</p>
     */
    inline StartSourceNetworkRecoveryRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be associated with the Source Network recovery Job.</p>
     */
    inline StartSourceNetworkRecoveryRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be associated with the Source Network recovery Job.</p>
     */
    inline StartSourceNetworkRecoveryRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to be associated with the Source Network recovery Job.</p>
     */
    inline StartSourceNetworkRecoveryRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be associated with the Source Network recovery Job.</p>
     */
    inline StartSourceNetworkRecoveryRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be associated with the Source Network recovery Job.</p>
     */
    inline StartSourceNetworkRecoveryRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    bool m_deployAsNew;
    bool m_deployAsNewHasBeenSet = false;

    Aws::Vector<StartSourceNetworkRecoveryRequestNetworkEntry> m_sourceNetworks;
    bool m_sourceNetworksHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
