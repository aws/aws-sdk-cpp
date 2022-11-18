/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define GetIceServerConfigAsync(...)  SubmitAsync(&KinesisVideoSignalingChannelsClient::GetIceServerConfig, __VA_ARGS__)
#define GetIceServerConfigCallable(REQUEST)  SubmitCallable(&KinesisVideoSignalingChannelsClient::GetIceServerConfig, REQUEST)

#define SendAlexaOfferToMasterAsync(...)  SubmitAsync(&KinesisVideoSignalingChannelsClient::SendAlexaOfferToMaster, __VA_ARGS__)
#define SendAlexaOfferToMasterCallable(REQUEST)  SubmitCallable(&KinesisVideoSignalingChannelsClient::SendAlexaOfferToMaster, REQUEST)

