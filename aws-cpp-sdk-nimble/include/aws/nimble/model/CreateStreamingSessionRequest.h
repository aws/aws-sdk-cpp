﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nimble/model/StreamingInstanceType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>A collection of streaming sessions.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/CreateStreamingSessionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_NIMBLESTUDIO_API CreateStreamingSessionRequest : public NimbleStudioRequest
  {
  public:
    CreateStreamingSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStreamingSession"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>To make an idempotent API request using one of these actions, specify a
     * client token in the request. You should not reuse the same client token for
     * other API requests. If you retry a request that completed successfully using the
     * same client token and the same parameters, the retry succeeds without performing
     * any further actions. If you retry a successful request using the same client
     * token, but one or more of the parameters are different, the retry fails with a
     * ValidationException error.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>To make an idempotent API request using one of these actions, specify a
     * client token in the request. You should not reuse the same client token for
     * other API requests. If you retry a request that completed successfully using the
     * same client token and the same parameters, the retry succeeds without performing
     * any further actions. If you retry a successful request using the same client
     * token, but one or more of the parameters are different, the retry fails with a
     * ValidationException error.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>To make an idempotent API request using one of these actions, specify a
     * client token in the request. You should not reuse the same client token for
     * other API requests. If you retry a request that completed successfully using the
     * same client token and the same parameters, the retry succeeds without performing
     * any further actions. If you retry a successful request using the same client
     * token, but one or more of the parameters are different, the retry fails with a
     * ValidationException error.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>To make an idempotent API request using one of these actions, specify a
     * client token in the request. You should not reuse the same client token for
     * other API requests. If you retry a request that completed successfully using the
     * same client token and the same parameters, the retry succeeds without performing
     * any further actions. If you retry a successful request using the same client
     * token, but one or more of the parameters are different, the retry fails with a
     * ValidationException error.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>To make an idempotent API request using one of these actions, specify a
     * client token in the request. You should not reuse the same client token for
     * other API requests. If you retry a request that completed successfully using the
     * same client token and the same parameters, the retry succeeds without performing
     * any further actions. If you retry a successful request using the same client
     * token, but one or more of the parameters are different, the retry fails with a
     * ValidationException error.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>To make an idempotent API request using one of these actions, specify a
     * client token in the request. You should not reuse the same client token for
     * other API requests. If you retry a request that completed successfully using the
     * same client token and the same parameters, the retry succeeds without performing
     * any further actions. If you retry a successful request using the same client
     * token, but one or more of the parameters are different, the retry fails with a
     * ValidationException error.</p>
     */
    inline CreateStreamingSessionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>To make an idempotent API request using one of these actions, specify a
     * client token in the request. You should not reuse the same client token for
     * other API requests. If you retry a request that completed successfully using the
     * same client token and the same parameters, the retry succeeds without performing
     * any further actions. If you retry a successful request using the same client
     * token, but one or more of the parameters are different, the retry fails with a
     * ValidationException error.</p>
     */
    inline CreateStreamingSessionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>To make an idempotent API request using one of these actions, specify a
     * client token in the request. You should not reuse the same client token for
     * other API requests. If you retry a request that completed successfully using the
     * same client token and the same parameters, the retry succeeds without performing
     * any further actions. If you retry a successful request using the same client
     * token, but one or more of the parameters are different, the retry fails with a
     * ValidationException error.</p>
     */
    inline CreateStreamingSessionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The EC2 Instance type used for the streaming session.</p>
     */
    inline const StreamingInstanceType& GetEc2InstanceType() const{ return m_ec2InstanceType; }

    /**
     * <p>The EC2 Instance type used for the streaming session.</p>
     */
    inline bool Ec2InstanceTypeHasBeenSet() const { return m_ec2InstanceTypeHasBeenSet; }

    /**
     * <p>The EC2 Instance type used for the streaming session.</p>
     */
    inline void SetEc2InstanceType(const StreamingInstanceType& value) { m_ec2InstanceTypeHasBeenSet = true; m_ec2InstanceType = value; }

    /**
     * <p>The EC2 Instance type used for the streaming session.</p>
     */
    inline void SetEc2InstanceType(StreamingInstanceType&& value) { m_ec2InstanceTypeHasBeenSet = true; m_ec2InstanceType = std::move(value); }

    /**
     * <p>The EC2 Instance type used for the streaming session.</p>
     */
    inline CreateStreamingSessionRequest& WithEc2InstanceType(const StreamingInstanceType& value) { SetEc2InstanceType(value); return *this;}

    /**
     * <p>The EC2 Instance type used for the streaming session.</p>
     */
    inline CreateStreamingSessionRequest& WithEc2InstanceType(StreamingInstanceType&& value) { SetEc2InstanceType(std::move(value)); return *this;}


    /**
     * <p>The launch profile ID.</p>
     */
    inline const Aws::String& GetLaunchProfileId() const{ return m_launchProfileId; }

    /**
     * <p>The launch profile ID.</p>
     */
    inline bool LaunchProfileIdHasBeenSet() const { return m_launchProfileIdHasBeenSet; }

    /**
     * <p>The launch profile ID.</p>
     */
    inline void SetLaunchProfileId(const Aws::String& value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId = value; }

    /**
     * <p>The launch profile ID.</p>
     */
    inline void SetLaunchProfileId(Aws::String&& value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId = std::move(value); }

    /**
     * <p>The launch profile ID.</p>
     */
    inline void SetLaunchProfileId(const char* value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId.assign(value); }

    /**
     * <p>The launch profile ID.</p>
     */
    inline CreateStreamingSessionRequest& WithLaunchProfileId(const Aws::String& value) { SetLaunchProfileId(value); return *this;}

    /**
     * <p>The launch profile ID.</p>
     */
    inline CreateStreamingSessionRequest& WithLaunchProfileId(Aws::String&& value) { SetLaunchProfileId(std::move(value)); return *this;}

    /**
     * <p>The launch profile ID.</p>
     */
    inline CreateStreamingSessionRequest& WithLaunchProfileId(const char* value) { SetLaunchProfileId(value); return *this;}


    /**
     * <p>The user ID of the user that owns the streaming session.</p>
     */
    inline const Aws::String& GetOwnedBy() const{ return m_ownedBy; }

    /**
     * <p>The user ID of the user that owns the streaming session.</p>
     */
    inline bool OwnedByHasBeenSet() const { return m_ownedByHasBeenSet; }

    /**
     * <p>The user ID of the user that owns the streaming session.</p>
     */
    inline void SetOwnedBy(const Aws::String& value) { m_ownedByHasBeenSet = true; m_ownedBy = value; }

    /**
     * <p>The user ID of the user that owns the streaming session.</p>
     */
    inline void SetOwnedBy(Aws::String&& value) { m_ownedByHasBeenSet = true; m_ownedBy = std::move(value); }

    /**
     * <p>The user ID of the user that owns the streaming session.</p>
     */
    inline void SetOwnedBy(const char* value) { m_ownedByHasBeenSet = true; m_ownedBy.assign(value); }

    /**
     * <p>The user ID of the user that owns the streaming session.</p>
     */
    inline CreateStreamingSessionRequest& WithOwnedBy(const Aws::String& value) { SetOwnedBy(value); return *this;}

    /**
     * <p>The user ID of the user that owns the streaming session.</p>
     */
    inline CreateStreamingSessionRequest& WithOwnedBy(Aws::String&& value) { SetOwnedBy(std::move(value)); return *this;}

    /**
     * <p>The user ID of the user that owns the streaming session.</p>
     */
    inline CreateStreamingSessionRequest& WithOwnedBy(const char* value) { SetOwnedBy(value); return *this;}


    /**
     * <p>The ID of the streaming image.</p>
     */
    inline const Aws::String& GetStreamingImageId() const{ return m_streamingImageId; }

    /**
     * <p>The ID of the streaming image.</p>
     */
    inline bool StreamingImageIdHasBeenSet() const { return m_streamingImageIdHasBeenSet; }

    /**
     * <p>The ID of the streaming image.</p>
     */
    inline void SetStreamingImageId(const Aws::String& value) { m_streamingImageIdHasBeenSet = true; m_streamingImageId = value; }

    /**
     * <p>The ID of the streaming image.</p>
     */
    inline void SetStreamingImageId(Aws::String&& value) { m_streamingImageIdHasBeenSet = true; m_streamingImageId = std::move(value); }

    /**
     * <p>The ID of the streaming image.</p>
     */
    inline void SetStreamingImageId(const char* value) { m_streamingImageIdHasBeenSet = true; m_streamingImageId.assign(value); }

    /**
     * <p>The ID of the streaming image.</p>
     */
    inline CreateStreamingSessionRequest& WithStreamingImageId(const Aws::String& value) { SetStreamingImageId(value); return *this;}

    /**
     * <p>The ID of the streaming image.</p>
     */
    inline CreateStreamingSessionRequest& WithStreamingImageId(Aws::String&& value) { SetStreamingImageId(std::move(value)); return *this;}

    /**
     * <p>The ID of the streaming image.</p>
     */
    inline CreateStreamingSessionRequest& WithStreamingImageId(const char* value) { SetStreamingImageId(value); return *this;}


    /**
     * <p>The studio ID.</p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }

    /**
     * <p>The studio ID.</p>
     */
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }

    /**
     * <p>The studio ID.</p>
     */
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }

    /**
     * <p>The studio ID.</p>
     */
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }

    /**
     * <p>The studio ID.</p>
     */
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }

    /**
     * <p>The studio ID.</p>
     */
    inline CreateStreamingSessionRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}

    /**
     * <p>The studio ID.</p>
     */
    inline CreateStreamingSessionRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}

    /**
     * <p>The studio ID.</p>
     */
    inline CreateStreamingSessionRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}


    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline CreateStreamingSessionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline CreateStreamingSessionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline CreateStreamingSessionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline CreateStreamingSessionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline CreateStreamingSessionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline CreateStreamingSessionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline CreateStreamingSessionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline CreateStreamingSessionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of labels, in the form of key:value pairs, that apply to this
     * resource.</p>
     */
    inline CreateStreamingSessionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    StreamingInstanceType m_ec2InstanceType;
    bool m_ec2InstanceTypeHasBeenSet;

    Aws::String m_launchProfileId;
    bool m_launchProfileIdHasBeenSet;

    Aws::String m_ownedBy;
    bool m_ownedByHasBeenSet;

    Aws::String m_streamingImageId;
    bool m_streamingImageIdHasBeenSet;

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
