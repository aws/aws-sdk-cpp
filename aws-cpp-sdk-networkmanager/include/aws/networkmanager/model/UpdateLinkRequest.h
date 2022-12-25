/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/Bandwidth.h>
#include <utility>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class UpdateLinkRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API UpdateLinkRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLink"; }

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
    inline UpdateLinkRequest& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline UpdateLinkRequest& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline UpdateLinkRequest& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


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
    inline UpdateLinkRequest& WithLinkId(const Aws::String& value) { SetLinkId(value); return *this;}

    /**
     * <p>The ID of the link.</p>
     */
    inline UpdateLinkRequest& WithLinkId(Aws::String&& value) { SetLinkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the link.</p>
     */
    inline UpdateLinkRequest& WithLinkId(const char* value) { SetLinkId(value); return *this;}


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
    inline UpdateLinkRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the link.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline UpdateLinkRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the link.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline UpdateLinkRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of the link.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the link.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the link.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the link.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the link.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the link.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline UpdateLinkRequest& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the link.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline UpdateLinkRequest& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the link.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline UpdateLinkRequest& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The upload and download speed in Mbps. </p>
     */
    inline const Bandwidth& GetBandwidth() const{ return m_bandwidth; }

    /**
     * <p>The upload and download speed in Mbps. </p>
     */
    inline bool BandwidthHasBeenSet() const { return m_bandwidthHasBeenSet; }

    /**
     * <p>The upload and download speed in Mbps. </p>
     */
    inline void SetBandwidth(const Bandwidth& value) { m_bandwidthHasBeenSet = true; m_bandwidth = value; }

    /**
     * <p>The upload and download speed in Mbps. </p>
     */
    inline void SetBandwidth(Bandwidth&& value) { m_bandwidthHasBeenSet = true; m_bandwidth = std::move(value); }

    /**
     * <p>The upload and download speed in Mbps. </p>
     */
    inline UpdateLinkRequest& WithBandwidth(const Bandwidth& value) { SetBandwidth(value); return *this;}

    /**
     * <p>The upload and download speed in Mbps. </p>
     */
    inline UpdateLinkRequest& WithBandwidth(Bandwidth&& value) { SetBandwidth(std::move(value)); return *this;}


    /**
     * <p>The provider of the link.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }

    /**
     * <p>The provider of the link.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline bool ProviderHasBeenSet() const { return m_providerHasBeenSet; }

    /**
     * <p>The provider of the link.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline void SetProvider(const Aws::String& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The provider of the link.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline void SetProvider(Aws::String&& value) { m_providerHasBeenSet = true; m_provider = std::move(value); }

    /**
     * <p>The provider of the link.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline void SetProvider(const char* value) { m_providerHasBeenSet = true; m_provider.assign(value); }

    /**
     * <p>The provider of the link.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline UpdateLinkRequest& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}

    /**
     * <p>The provider of the link.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline UpdateLinkRequest& WithProvider(Aws::String&& value) { SetProvider(std::move(value)); return *this;}

    /**
     * <p>The provider of the link.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline UpdateLinkRequest& WithProvider(const char* value) { SetProvider(value); return *this;}

  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_linkId;
    bool m_linkIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Bandwidth m_bandwidth;
    bool m_bandwidthHasBeenSet = false;

    Aws::String m_provider;
    bool m_providerHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
