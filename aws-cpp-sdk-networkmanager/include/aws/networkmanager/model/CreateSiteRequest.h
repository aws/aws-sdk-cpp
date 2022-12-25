/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/Location.h>
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
  class CreateSiteRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API CreateSiteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSite"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


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
    inline CreateSiteRequest& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline CreateSiteRequest& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline CreateSiteRequest& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


    /**
     * <p>A description of your site.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of your site.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of your site.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of your site.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of your site.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of your site.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline CreateSiteRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of your site.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline CreateSiteRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of your site.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline CreateSiteRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The site location. This information is used for visualization in the Network
     * Manager console. If you specify the address, the latitude and longitude are
     * automatically calculated.</p> <ul> <li> <p> <code>Address</code>: The physical
     * address of the site.</p> </li> <li> <p> <code>Latitude</code>: The latitude of
     * the site. </p> </li> <li> <p> <code>Longitude</code>: The longitude of the
     * site.</p> </li> </ul>
     */
    inline const Location& GetLocation() const{ return m_location; }

    /**
     * <p>The site location. This information is used for visualization in the Network
     * Manager console. If you specify the address, the latitude and longitude are
     * automatically calculated.</p> <ul> <li> <p> <code>Address</code>: The physical
     * address of the site.</p> </li> <li> <p> <code>Latitude</code>: The latitude of
     * the site. </p> </li> <li> <p> <code>Longitude</code>: The longitude of the
     * site.</p> </li> </ul>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The site location. This information is used for visualization in the Network
     * Manager console. If you specify the address, the latitude and longitude are
     * automatically calculated.</p> <ul> <li> <p> <code>Address</code>: The physical
     * address of the site.</p> </li> <li> <p> <code>Latitude</code>: The latitude of
     * the site. </p> </li> <li> <p> <code>Longitude</code>: The longitude of the
     * site.</p> </li> </ul>
     */
    inline void SetLocation(const Location& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The site location. This information is used for visualization in the Network
     * Manager console. If you specify the address, the latitude and longitude are
     * automatically calculated.</p> <ul> <li> <p> <code>Address</code>: The physical
     * address of the site.</p> </li> <li> <p> <code>Latitude</code>: The latitude of
     * the site. </p> </li> <li> <p> <code>Longitude</code>: The longitude of the
     * site.</p> </li> </ul>
     */
    inline void SetLocation(Location&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The site location. This information is used for visualization in the Network
     * Manager console. If you specify the address, the latitude and longitude are
     * automatically calculated.</p> <ul> <li> <p> <code>Address</code>: The physical
     * address of the site.</p> </li> <li> <p> <code>Latitude</code>: The latitude of
     * the site. </p> </li> <li> <p> <code>Longitude</code>: The longitude of the
     * site.</p> </li> </ul>
     */
    inline CreateSiteRequest& WithLocation(const Location& value) { SetLocation(value); return *this;}

    /**
     * <p>The site location. This information is used for visualization in the Network
     * Manager console. If you specify the address, the latitude and longitude are
     * automatically calculated.</p> <ul> <li> <p> <code>Address</code>: The physical
     * address of the site.</p> </li> <li> <p> <code>Latitude</code>: The latitude of
     * the site. </p> </li> <li> <p> <code>Longitude</code>: The longitude of the
     * site.</p> </li> </ul>
     */
    inline CreateSiteRequest& WithLocation(Location&& value) { SetLocation(std::move(value)); return *this;}


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
    inline CreateSiteRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline CreateSiteRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline CreateSiteRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline CreateSiteRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Location m_location;
    bool m_locationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
