/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/Bandwidth.h>
#include <aws/core/utils/DateTime.h>
#include <aws/networkmanager/model/LinkState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/Tag.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a link.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/Link">AWS
   * API Reference</a></p>
   */
  class Link
  {
  public:
    AWS_NETWORKMANAGER_API Link();
    AWS_NETWORKMANAGER_API Link(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Link& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the link.</p>
     */
    inline const Aws::String& GetLinkId() const{ return m_linkId; }

    /**
     * <p>The ID of the link.</p>
     */
    inline bool LinkIdHasBeenSet() const { return m_linkIdHasBeenSet; }

    /**
     * <p>The ID of the link.</p>
     */
    inline void SetLinkId(const Aws::String& value) { m_linkIdHasBeenSet = true; m_linkId = value; }

    /**
     * <p>The ID of the link.</p>
     */
    inline void SetLinkId(Aws::String&& value) { m_linkIdHasBeenSet = true; m_linkId = std::move(value); }

    /**
     * <p>The ID of the link.</p>
     */
    inline void SetLinkId(const char* value) { m_linkIdHasBeenSet = true; m_linkId.assign(value); }

    /**
     * <p>The ID of the link.</p>
     */
    inline Link& WithLinkId(const Aws::String& value) { SetLinkId(value); return *this;}

    /**
     * <p>The ID of the link.</p>
     */
    inline Link& WithLinkId(Aws::String&& value) { SetLinkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the link.</p>
     */
    inline Link& WithLinkId(const char* value) { SetLinkId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the link.</p>
     */
    inline const Aws::String& GetLinkArn() const{ return m_linkArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the link.</p>
     */
    inline bool LinkArnHasBeenSet() const { return m_linkArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the link.</p>
     */
    inline void SetLinkArn(const Aws::String& value) { m_linkArnHasBeenSet = true; m_linkArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the link.</p>
     */
    inline void SetLinkArn(Aws::String&& value) { m_linkArnHasBeenSet = true; m_linkArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the link.</p>
     */
    inline void SetLinkArn(const char* value) { m_linkArnHasBeenSet = true; m_linkArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the link.</p>
     */
    inline Link& WithLinkArn(const Aws::String& value) { SetLinkArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the link.</p>
     */
    inline Link& WithLinkArn(Aws::String&& value) { SetLinkArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the link.</p>
     */
    inline Link& WithLinkArn(const char* value) { SetLinkArn(value); return *this;}


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
    inline Link& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline Link& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline Link& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


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
    inline Link& WithSiteId(const Aws::String& value) { SetSiteId(value); return *this;}

    /**
     * <p>The ID of the site.</p>
     */
    inline Link& WithSiteId(Aws::String&& value) { SetSiteId(std::move(value)); return *this;}

    /**
     * <p>The ID of the site.</p>
     */
    inline Link& WithSiteId(const char* value) { SetSiteId(value); return *this;}


    /**
     * <p>The description of the link.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the link.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the link.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the link.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the link.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the link.</p>
     */
    inline Link& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the link.</p>
     */
    inline Link& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the link.</p>
     */
    inline Link& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of the link.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the link.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the link.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the link.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the link.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the link.</p>
     */
    inline Link& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the link.</p>
     */
    inline Link& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the link.</p>
     */
    inline Link& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The bandwidth for the link.</p>
     */
    inline const Bandwidth& GetBandwidth() const{ return m_bandwidth; }

    /**
     * <p>The bandwidth for the link.</p>
     */
    inline bool BandwidthHasBeenSet() const { return m_bandwidthHasBeenSet; }

    /**
     * <p>The bandwidth for the link.</p>
     */
    inline void SetBandwidth(const Bandwidth& value) { m_bandwidthHasBeenSet = true; m_bandwidth = value; }

    /**
     * <p>The bandwidth for the link.</p>
     */
    inline void SetBandwidth(Bandwidth&& value) { m_bandwidthHasBeenSet = true; m_bandwidth = std::move(value); }

    /**
     * <p>The bandwidth for the link.</p>
     */
    inline Link& WithBandwidth(const Bandwidth& value) { SetBandwidth(value); return *this;}

    /**
     * <p>The bandwidth for the link.</p>
     */
    inline Link& WithBandwidth(Bandwidth&& value) { SetBandwidth(std::move(value)); return *this;}


    /**
     * <p>The provider of the link.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }

    /**
     * <p>The provider of the link.</p>
     */
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }

    /**
     * <p>The provider of the link.</p>
     */
    inline void SetProvider(const Aws::String& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The provider of the link.</p>
     */
    inline void SetProvider(Aws::String&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }

    /**
     * <p>The provider of the link.</p>
     */
    inline void SetProvider(const char* value) { m_providerHasBeenSet = true; m_provider.assign(value); }

    /**
     * <p>The provider of the link.</p>
     */
    inline Link& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}

    /**
     * <p>The provider of the link.</p>
     */
    inline Link& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}

    /**
     * <p>The provider of the link.</p>
     */
    inline Link& WithProvider(const char* value) { SetProvider(value); return *this;}


    /**
     * <p>The date and time that the link was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the link was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time that the link was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time that the link was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the link was created.</p>
     */
    inline Link& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the link was created.</p>
     */
    inline Link& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The state of the link.</p>
     */
    inline const LinkState& GetState() const{ return m_state; }

    /**
     * <p>The state of the link.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the link.</p>
     */
    inline void SetState(const LinkState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the link.</p>
     */
    inline void SetState(LinkState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the link.</p>
     */
    inline Link& WithState(const LinkState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the link.</p>
     */
    inline Link& WithState(LinkState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The tags for the link.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the link.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags for the link.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags for the link.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags for the link.</p>
     */
    inline Link& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the link.</p>
     */
    inline Link& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the link.</p>
     */
    inline Link& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the link.</p>
     */
    inline Link& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_linkId;
    bool m_linkIdHasBeenSet = false;

    Aws::String m_linkArn;
    bool m_linkArnHasBeenSet = false;

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Bandwidth m_bandwidth;
    bool m_bandwidthHasBeenSet = false;

    Aws::String m_provider;
    bool m_providerHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    LinkState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
