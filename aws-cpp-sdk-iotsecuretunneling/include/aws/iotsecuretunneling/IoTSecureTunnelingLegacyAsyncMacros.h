/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CloseTunnelAsync(...)  SubmitAsync(&IoTSecureTunnelingClient::CloseTunnel, __VA_ARGS__)
#define CloseTunnelCallable(REQUEST)  SubmitCallable(&IoTSecureTunnelingClient::CloseTunnel, REQUEST)

#define DescribeTunnelAsync(...)  SubmitAsync(&IoTSecureTunnelingClient::DescribeTunnel, __VA_ARGS__)
#define DescribeTunnelCallable(REQUEST)  SubmitCallable(&IoTSecureTunnelingClient::DescribeTunnel, REQUEST)

#define ListTagsForResourceAsync(...)  SubmitAsync(&IoTSecureTunnelingClient::ListTagsForResource, __VA_ARGS__)
#define ListTagsForResourceCallable(REQUEST)  SubmitCallable(&IoTSecureTunnelingClient::ListTagsForResource, REQUEST)

#define ListTunnelsAsync(...)  SubmitAsync(&IoTSecureTunnelingClient::ListTunnels, __VA_ARGS__)
#define ListTunnelsCallable(REQUEST)  SubmitCallable(&IoTSecureTunnelingClient::ListTunnels, REQUEST)

#define OpenTunnelAsync(...)  SubmitAsync(&IoTSecureTunnelingClient::OpenTunnel, __VA_ARGS__)
#define OpenTunnelCallable(REQUEST)  SubmitCallable(&IoTSecureTunnelingClient::OpenTunnel, REQUEST)

#define RotateTunnelAccessTokenAsync(...)  SubmitAsync(&IoTSecureTunnelingClient::RotateTunnelAccessToken, __VA_ARGS__)
#define RotateTunnelAccessTokenCallable(REQUEST)  SubmitCallable(&IoTSecureTunnelingClient::RotateTunnelAccessToken, REQUEST)

#define TagResourceAsync(...)  SubmitAsync(&IoTSecureTunnelingClient::TagResource, __VA_ARGS__)
#define TagResourceCallable(REQUEST)  SubmitCallable(&IoTSecureTunnelingClient::TagResource, REQUEST)

#define UntagResourceAsync(...)  SubmitAsync(&IoTSecureTunnelingClient::UntagResource, __VA_ARGS__)
#define UntagResourceCallable(REQUEST)  SubmitCallable(&IoTSecureTunnelingClient::UntagResource, REQUEST)

