﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/Bandwidth.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/Tag.h>
#include <utility>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class AWS_NETWORKMANAGER_API CreateLinkRequest : public NetworkManagerRequest
  {
  public:
    CreateLinkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLink"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline CreateLinkRequest& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline CreateLinkRequest& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline CreateLinkRequest& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


    /**
     * <p>A description of the link.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the link.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the link.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the link.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the link.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the link.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline CreateLinkRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the link.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline CreateLinkRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the link.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline CreateLinkRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of the link.</p> <p>Constraints: Maximum length of 128 characters.
     * Cannot include the following characters: | \ ^</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the link.</p> <p>Constraints: Maximum length of 128 characters.
     * Cannot include the following characters: | \ ^</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the link.</p> <p>Constraints: Maximum length of 128 characters.
     * Cannot include the following characters: | \ ^</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the link.</p> <p>Constraints: Maximum length of 128 characters.
     * Cannot include the following characters: | \ ^</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the link.</p> <p>Constraints: Maximum length of 128 characters.
     * Cannot include the following characters: | \ ^</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the link.</p> <p>Constraints: Maximum length of 128 characters.
     * Cannot include the following characters: | \ ^</p>
     */
    inline CreateLinkRequest& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the link.</p> <p>Constraints: Maximum length of 128 characters.
     * Cannot include the following characters: | \ ^</p>
     */
    inline CreateLinkRequest& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the link.</p> <p>Constraints: Maximum length of 128 characters.
     * Cannot include the following characters: | \ ^</p>
     */
    inline CreateLinkRequest& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p> The upload speed and download speed in Mbps. </p>
     */
    inline const Bandwidth& GetBandwidth() const{ return m_bandwidth; }

    /**
     * <p> The upload speed and download speed in Mbps. </p>
     */
    inline bool BandwidthHasBeenSet() const { return m_bandwidthHasBeenSet; }

    /**
     * <p> The upload speed and download speed in Mbps. </p>
     */
    inline void SetBandwidth(const Bandwidth& value) { m_bandwidthHasBeenSet = true; m_bandwidth = value; }

    /**
     * <p> The upload speed and download speed in Mbps. </p>
     */
    inline void SetBandwidth(Bandwidth&& value) { m_bandwidthHasBeenSet = true; m_bandwidth = std::move(value); }

    /**
     * <p> The upload speed and download speed in Mbps. </p>
     */
    inline CreateLinkRequest& WithBandwidth(const Bandwidth& value) { SetBandwidth(value); return *this;}

    /**
     * <p> The upload speed and download speed in Mbps. </p>
     */
    inline CreateLinkRequest& WithBandwidth(Bandwidth&& value) { SetBandwidth(std::move(value)); return *this;}


    /**
     * <p>The provider of the link.</p> <p>Constraints: Maximum length of 128
     * characters. Cannot include the following characters: | \ ^</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }

    /**
     * <p>The provider of the link.</p> <p>Constraints: Maximum length of 128
     * characters. Cannot include the following characters: | \ ^</p>
     */
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }

    /**
     * <p>The provider of the link.</p> <p>Constraints: Maximum length of 128
     * characters. Cannot include the following characters: | \ ^</p>
     */
    inline void SetProvider(const Aws::String& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The provider of the link.</p> <p>Constraints: Maximum length of 128
     * characters. Cannot include the following characters: | \ ^</p>
     */
    inline void SetProvider(Aws::String&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }

    /**
     * <p>The provider of the link.</p> <p>Constraints: Maximum length of 128
     * characters. Cannot include the following characters: | \ ^</p>
     */
    inline void SetProvider(const char* value) { m_providerHasBeenSet = true; m_provider.assign(value); }

    /**
     * <p>The provider of the link.</p> <p>Constraints: Maximum length of 128
     * characters. Cannot include the following characters: | \ ^</p>
     */
    inline CreateLinkRequest& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}

    /**
     * <p>The provider of the link.</p> <p>Constraints: Maximum length of 128
     * characters. Cannot include the following characters: | \ ^</p>
     */
    inline CreateLinkRequest& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}

    /**
     * <p>The provider of the link.</p> <p>Constraints: Maximum length of 128
     * characters. Cannot include the following characters: | \ ^</p>
     */
    inline CreateLinkRequest& WithProvider(const char* value) { SetProvider(value); return *this;}


    /**
     * <p>The ID of the site.</p>
     */
    inline const Aws::String& GetSiteId() const{ return m_siteId; }

    /**
     * <p>The ID of the site.</p>
     */
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }

    /**
     * <p>The ID of the site.</p>
     */
    inline void SetSiteId(const Aws::String& value) { m_siteIdHasBeenSet = true; m_siteId = value; }

    /**
     * <p>The ID of the site.</p>
     */
    inline void SetSiteId(Aws::String&& value) { m_siteIdHasBeenSet = true; m_siteId = std::move(value); }

    /**
     * <p>The ID of the site.</p>
     */
    inline void SetSiteId(const char* value) { m_siteIdHasBeenSet = true; m_siteId.assign(value); }

    /**
     * <p>The ID of the site.</p>
     */
    inline CreateLinkRequest& WithSiteId(const Aws::String& value) { SetSiteId(value); return *this;}

    /**
     * <p>The ID of the site.</p>
     */
    inline CreateLinkRequest& WithSiteId(Aws::String&& value) { SetSiteId(std::move(value)); return *this;}

    /**
     * <p>The ID of the site.</p>
     */
    inline CreateLinkRequest& WithSiteId(const char* value) { SetSiteId(value); return *this;}


    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline CreateLinkRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline CreateLinkRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline CreateLinkRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline CreateLinkRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Bandwidth m_bandwidth;
    bool m_bandwidthHasBeenSet;

    Aws::String m_provider;
    bool m_providerHasBeenSet;

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
