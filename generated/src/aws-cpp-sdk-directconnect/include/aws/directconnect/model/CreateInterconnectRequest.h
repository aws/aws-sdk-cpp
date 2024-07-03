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
    AWS_DIRECTCONNECT_API CreateInterconnectRequest();

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
    inline const Aws::String& GetInterconnectName() const{ return m_interconnectName; }
    inline bool InterconnectNameHasBeenSet() const { return m_interconnectNameHasBeenSet; }
    inline void SetInterconnectName(const Aws::String& value) { m_interconnectNameHasBeenSet = true; m_interconnectName = value; }
    inline void SetInterconnectName(Aws::String&& value) { m_interconnectNameHasBeenSet = true; m_interconnectName = std::move(value); }
    inline void SetInterconnectName(const char* value) { m_interconnectNameHasBeenSet = true; m_interconnectName.assign(value); }
    inline CreateInterconnectRequest& WithInterconnectName(const Aws::String& value) { SetInterconnectName(value); return *this;}
    inline CreateInterconnectRequest& WithInterconnectName(Aws::String&& value) { SetInterconnectName(std::move(value)); return *this;}
    inline CreateInterconnectRequest& WithInterconnectName(const char* value) { SetInterconnectName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port bandwidth, in Gbps. The possible values are 1, 10, and 100.</p>
     */
    inline const Aws::String& GetBandwidth() const{ return m_bandwidth; }
    inline bool BandwidthHasBeenSet() const { return m_bandwidthHasBeenSet; }
    inline void SetBandwidth(const Aws::String& value) { m_bandwidthHasBeenSet = true; m_bandwidth = value; }
    inline void SetBandwidth(Aws::String&& value) { m_bandwidthHasBeenSet = true; m_bandwidth = std::move(value); }
    inline void SetBandwidth(const char* value) { m_bandwidthHasBeenSet = true; m_bandwidth.assign(value); }
    inline CreateInterconnectRequest& WithBandwidth(const Aws::String& value) { SetBandwidth(value); return *this;}
    inline CreateInterconnectRequest& WithBandwidth(Aws::String&& value) { SetBandwidth(std::move(value)); return *this;}
    inline CreateInterconnectRequest& WithBandwidth(const char* value) { SetBandwidth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the interconnect.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline CreateInterconnectRequest& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline CreateInterconnectRequest& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline CreateInterconnectRequest& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the LAG.</p>
     */
    inline const Aws::String& GetLagId() const{ return m_lagId; }
    inline bool LagIdHasBeenSet() const { return m_lagIdHasBeenSet; }
    inline void SetLagId(const Aws::String& value) { m_lagIdHasBeenSet = true; m_lagId = value; }
    inline void SetLagId(Aws::String&& value) { m_lagIdHasBeenSet = true; m_lagId = std::move(value); }
    inline void SetLagId(const char* value) { m_lagIdHasBeenSet = true; m_lagId.assign(value); }
    inline CreateInterconnectRequest& WithLagId(const Aws::String& value) { SetLagId(value); return *this;}
    inline CreateInterconnectRequest& WithLagId(Aws::String&& value) { SetLagId(std::move(value)); return *this;}
    inline CreateInterconnectRequest& WithLagId(const char* value) { SetLagId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to associate with the interconnect.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateInterconnectRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateInterconnectRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateInterconnectRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateInterconnectRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the service provider associated with the interconnect.</p>
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }
    inline void SetProviderName(const Aws::String& value) { m_providerNameHasBeenSet = true; m_providerName = value; }
    inline void SetProviderName(Aws::String&& value) { m_providerNameHasBeenSet = true; m_providerName = std::move(value); }
    inline void SetProviderName(const char* value) { m_providerNameHasBeenSet = true; m_providerName.assign(value); }
    inline CreateInterconnectRequest& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}
    inline CreateInterconnectRequest& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}
    inline CreateInterconnectRequest& WithProviderName(const char* value) { SetProviderName(value); return *this;}
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
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
