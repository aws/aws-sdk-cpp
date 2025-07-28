/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class CreateInterconnectRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API CreateInterconnectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInterconnect"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the interconnect.</p>
     */
    inline const Aws::String& GetInterconnectName() const { return m_interconnectName; }
    inline bool InterconnectNameHasBeenSet() const { return m_interconnectNameHasBeenSet; }
    template<typename InterconnectNameT = Aws::String>
    void SetInterconnectName(InterconnectNameT&& value) { m_interconnectNameHasBeenSet = true; m_interconnectName = std::forward<InterconnectNameT>(value); }
    template<typename InterconnectNameT = Aws::String>
    CreateInterconnectRequest& WithInterconnectName(InterconnectNameT&& value) { SetInterconnectName(std::forward<InterconnectNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port bandwidth, in Gbps. The possible values are 1, 10, and 100.</p>
     */
    inline const Aws::String& GetBandwidth() const { return m_bandwidth; }
    inline bool BandwidthHasBeenSet() const { return m_bandwidthHasBeenSet; }
    template<typename BandwidthT = Aws::String>
    void SetBandwidth(BandwidthT&& value) { m_bandwidthHasBeenSet = true; m_bandwidth = std::forward<BandwidthT>(value); }
    template<typename BandwidthT = Aws::String>
    CreateInterconnectRequest& WithBandwidth(BandwidthT&& value) { SetBandwidth(std::forward<BandwidthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the interconnect.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    CreateInterconnectRequest& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the LAG.</p>
     */
    inline const Aws::String& GetLagId() const { return m_lagId; }
    inline bool LagIdHasBeenSet() const { return m_lagIdHasBeenSet; }
    template<typename LagIdT = Aws::String>
    void SetLagId(LagIdT&& value) { m_lagIdHasBeenSet = true; m_lagId = std::forward<LagIdT>(value); }
    template<typename LagIdT = Aws::String>
    CreateInterconnectRequest& WithLagId(LagIdT&& value) { SetLagId(std::forward<LagIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to associate with the interconnect.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateInterconnectRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateInterconnectRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the service provider associated with the interconnect.</p>
     */
    inline const Aws::String& GetProviderName() const { return m_providerName; }
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }
    template<typename ProviderNameT = Aws::String>
    void SetProviderName(ProviderNameT&& value) { m_providerNameHasBeenSet = true; m_providerName = std::forward<ProviderNameT>(value); }
    template<typename ProviderNameT = Aws::String>
    CreateInterconnectRequest& WithProviderName(ProviderNameT&& value) { SetProviderName(std::forward<ProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether you want the interconnect to support MAC Security
     * (MACsec).</p>
     */
    inline bool GetRequestMACSec() const { return m_requestMACSec; }
    inline bool RequestMACSecHasBeenSet() const { return m_requestMACSecHasBeenSet; }
    inline void SetRequestMACSec(bool value) { m_requestMACSecHasBeenSet = true; m_requestMACSec = value; }
    inline CreateInterconnectRequest& WithRequestMACSec(bool value) { SetRequestMACSec(value); return *this;}
    ///@}
  private:

    Aws::String m_interconnectName;
    bool m_interconnectNameHasBeenSet = false;

    Aws::String m_bandwidth;
    bool m_bandwidthHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_lagId;
    bool m_lagIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet = false;

    bool m_requestMACSec{false};
    bool m_requestMACSecHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
