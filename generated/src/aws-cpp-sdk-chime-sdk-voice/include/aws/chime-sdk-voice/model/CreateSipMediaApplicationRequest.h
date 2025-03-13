/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/ChimeSDKVoiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-voice/model/SipMediaApplicationEndpoint.h>
#include <aws/chime-sdk-voice/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ChimeSDKVoice
{
namespace Model
{

  /**
   */
  class CreateSipMediaApplicationRequest : public ChimeSDKVoiceRequest
  {
  public:
    AWS_CHIMESDKVOICE_API CreateSipMediaApplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSipMediaApplication"; }

    AWS_CHIMESDKVOICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The AWS Region assigned to the SIP media application.</p>
     */
    inline const Aws::String& GetAwsRegion() const { return m_awsRegion; }
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }
    template<typename AwsRegionT = Aws::String>
    void SetAwsRegion(AwsRegionT&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::forward<AwsRegionT>(value); }
    template<typename AwsRegionT = Aws::String>
    CreateSipMediaApplicationRequest& WithAwsRegion(AwsRegionT&& value) { SetAwsRegion(std::forward<AwsRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SIP media application's name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateSipMediaApplicationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of endpoints (Lambda ARNs) specified for the SIP media application.</p>
     */
    inline const Aws::Vector<SipMediaApplicationEndpoint>& GetEndpoints() const { return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    template<typename EndpointsT = Aws::Vector<SipMediaApplicationEndpoint>>
    void SetEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::forward<EndpointsT>(value); }
    template<typename EndpointsT = Aws::Vector<SipMediaApplicationEndpoint>>
    CreateSipMediaApplicationRequest& WithEndpoints(EndpointsT&& value) { SetEndpoints(std::forward<EndpointsT>(value)); return *this;}
    template<typename EndpointsT = SipMediaApplicationEndpoint>
    CreateSipMediaApplicationRequest& AddEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace_back(std::forward<EndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the SIP media application.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateSipMediaApplicationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateSipMediaApplicationRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<SipMediaApplicationEndpoint> m_endpoints;
    bool m_endpointsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
