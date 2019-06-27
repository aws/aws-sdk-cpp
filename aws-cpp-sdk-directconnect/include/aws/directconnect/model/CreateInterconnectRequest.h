/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_DIRECTCONNECT_API CreateInterconnectRequest : public DirectConnectRequest
  {
  public:
    CreateInterconnectRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInterconnect"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the interconnect.</p>
     */
    inline const Aws::String& GetInterconnectName() const{ return m_interconnectName; }

    /**
     * <p>The name of the interconnect.</p>
     */
    inline bool InterconnectNameHasBeenSet() const { return m_interconnectNameHasBeenSet; }

    /**
     * <p>The name of the interconnect.</p>
     */
    inline void SetInterconnectName(const Aws::String& value) { m_interconnectNameHasBeenSet = true; m_interconnectName = value; }

    /**
     * <p>The name of the interconnect.</p>
     */
    inline void SetInterconnectName(Aws::String&& value) { m_interconnectNameHasBeenSet = true; m_interconnectName = std::move(value); }

    /**
     * <p>The name of the interconnect.</p>
     */
    inline void SetInterconnectName(const char* value) { m_interconnectNameHasBeenSet = true; m_interconnectName.assign(value); }

    /**
     * <p>The name of the interconnect.</p>
     */
    inline CreateInterconnectRequest& WithInterconnectName(const Aws::String& value) { SetInterconnectName(value); return *this;}

    /**
     * <p>The name of the interconnect.</p>
     */
    inline CreateInterconnectRequest& WithInterconnectName(Aws::String&& value) { SetInterconnectName(std::move(value)); return *this;}

    /**
     * <p>The name of the interconnect.</p>
     */
    inline CreateInterconnectRequest& WithInterconnectName(const char* value) { SetInterconnectName(value); return *this;}


    /**
     * <p>The port bandwidth, in Gbps. The possible values are 1 and 10.</p>
     */
    inline const Aws::String& GetBandwidth() const{ return m_bandwidth; }

    /**
     * <p>The port bandwidth, in Gbps. The possible values are 1 and 10.</p>
     */
    inline bool BandwidthHasBeenSet() const { return m_bandwidthHasBeenSet; }

    /**
     * <p>The port bandwidth, in Gbps. The possible values are 1 and 10.</p>
     */
    inline void SetBandwidth(const Aws::String& value) { m_bandwidthHasBeenSet = true; m_bandwidth = value; }

    /**
     * <p>The port bandwidth, in Gbps. The possible values are 1 and 10.</p>
     */
    inline void SetBandwidth(Aws::String&& value) { m_bandwidthHasBeenSet = true; m_bandwidth = std::move(value); }

    /**
     * <p>The port bandwidth, in Gbps. The possible values are 1 and 10.</p>
     */
    inline void SetBandwidth(const char* value) { m_bandwidthHasBeenSet = true; m_bandwidth.assign(value); }

    /**
     * <p>The port bandwidth, in Gbps. The possible values are 1 and 10.</p>
     */
    inline CreateInterconnectRequest& WithBandwidth(const Aws::String& value) { SetBandwidth(value); return *this;}

    /**
     * <p>The port bandwidth, in Gbps. The possible values are 1 and 10.</p>
     */
    inline CreateInterconnectRequest& WithBandwidth(Aws::String&& value) { SetBandwidth(std::move(value)); return *this;}

    /**
     * <p>The port bandwidth, in Gbps. The possible values are 1 and 10.</p>
     */
    inline CreateInterconnectRequest& WithBandwidth(const char* value) { SetBandwidth(value); return *this;}


    /**
     * <p>The location of the interconnect.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The location of the interconnect.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The location of the interconnect.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The location of the interconnect.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The location of the interconnect.</p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p>The location of the interconnect.</p>
     */
    inline CreateInterconnectRequest& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The location of the interconnect.</p>
     */
    inline CreateInterconnectRequest& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The location of the interconnect.</p>
     */
    inline CreateInterconnectRequest& WithLocation(const char* value) { SetLocation(value); return *this;}


    /**
     * <p>The ID of the LAG.</p>
     */
    inline const Aws::String& GetLagId() const{ return m_lagId; }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline bool LagIdHasBeenSet() const { return m_lagIdHasBeenSet; }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline void SetLagId(const Aws::String& value) { m_lagIdHasBeenSet = true; m_lagId = value; }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline void SetLagId(Aws::String&& value) { m_lagIdHasBeenSet = true; m_lagId = std::move(value); }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline void SetLagId(const char* value) { m_lagIdHasBeenSet = true; m_lagId.assign(value); }

    /**
     * <p>The ID of the LAG.</p>
     */
    inline CreateInterconnectRequest& WithLagId(const Aws::String& value) { SetLagId(value); return *this;}

    /**
     * <p>The ID of the LAG.</p>
     */
    inline CreateInterconnectRequest& WithLagId(Aws::String&& value) { SetLagId(std::move(value)); return *this;}

    /**
     * <p>The ID of the LAG.</p>
     */
    inline CreateInterconnectRequest& WithLagId(const char* value) { SetLagId(value); return *this;}


    /**
     * <p>The tags to assign to the interconnect,</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the interconnect,</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to assign to the interconnect,</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to assign to the interconnect,</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the interconnect,</p>
     */
    inline CreateInterconnectRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the interconnect,</p>
     */
    inline CreateInterconnectRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the interconnect,</p>
     */
    inline CreateInterconnectRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to assign to the interconnect,</p>
     */
    inline CreateInterconnectRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_interconnectName;
    bool m_interconnectNameHasBeenSet;

    Aws::String m_bandwidth;
    bool m_bandwidthHasBeenSet;

    Aws::String m_location;
    bool m_locationHasBeenSet;

    Aws::String m_lagId;
    bool m_lagIdHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
