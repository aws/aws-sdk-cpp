/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define CreateConfigurationSetAsync(...)  SubmitAsync(&PinpointSMSVoiceClient::CreateConfigurationSet, __VA_ARGS__)
#define CreateConfigurationSetCallable(REQUEST)  SubmitCallable(&PinpointSMSVoiceClient::CreateConfigurationSet, REQUEST)

#define CreateConfigurationSetEventDestinationAsync(...)  SubmitAsync(&PinpointSMSVoiceClient::CreateConfigurationSetEventDestination, __VA_ARGS__)
#define CreateConfigurationSetEventDestinationCallable(REQUEST)  SubmitCallable(&PinpointSMSVoiceClient::CreateConfigurationSetEventDestination, REQUEST)

#define DeleteConfigurationSetAsync(...)  SubmitAsync(&PinpointSMSVoiceClient::DeleteConfigurationSet, __VA_ARGS__)
#define DeleteConfigurationSetCallable(REQUEST)  SubmitCallable(&PinpointSMSVoiceClient::DeleteConfigurationSet, REQUEST)

#define DeleteConfigurationSetEventDestinationAsync(...)  SubmitAsync(&PinpointSMSVoiceClient::DeleteConfigurationSetEventDestination, __VA_ARGS__)
#define DeleteConfigurationSetEventDestinationCallable(REQUEST)  SubmitCallable(&PinpointSMSVoiceClient::DeleteConfigurationSetEventDestination, REQUEST)

#define GetConfigurationSetEventDestinationsAsync(...)  SubmitAsync(&PinpointSMSVoiceClient::GetConfigurationSetEventDestinations, __VA_ARGS__)
#define GetConfigurationSetEventDestinationsCallable(REQUEST)  SubmitCallable(&PinpointSMSVoiceClient::GetConfigurationSetEventDestinations, REQUEST)

#define ListConfigurationSetsAsync(...)  SubmitAsync(&PinpointSMSVoiceClient::ListConfigurationSets, __VA_ARGS__)
#define ListConfigurationSetsCallable(REQUEST)  SubmitCallable(&PinpointSMSVoiceClient::ListConfigurationSets, REQUEST)

#define SendVoiceMessageAsync(...)  SubmitAsync(&PinpointSMSVoiceClient::SendVoiceMessage, __VA_ARGS__)
#define SendVoiceMessageCallable(REQUEST)  SubmitCallable(&PinpointSMSVoiceClient::SendVoiceMessage, REQUEST)

#define UpdateConfigurationSetEventDestinationAsync(...)  SubmitAsync(&PinpointSMSVoiceClient::UpdateConfigurationSetEventDestination, __VA_ARGS__)
#define UpdateConfigurationSetEventDestinationCallable(REQUEST)  SubmitCallable(&PinpointSMSVoiceClient::UpdateConfigurationSetEventDestination, REQUEST)

