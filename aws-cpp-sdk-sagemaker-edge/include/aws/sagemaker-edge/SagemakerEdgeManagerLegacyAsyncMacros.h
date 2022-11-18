/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define GetDeploymentsAsync(...)  SubmitAsync(&SagemakerEdgeManagerClient::GetDeployments, __VA_ARGS__)
#define GetDeploymentsCallable(REQUEST)  SubmitCallable(&SagemakerEdgeManagerClient::GetDeployments, REQUEST)

#define GetDeviceRegistrationAsync(...)  SubmitAsync(&SagemakerEdgeManagerClient::GetDeviceRegistration, __VA_ARGS__)
#define GetDeviceRegistrationCallable(REQUEST)  SubmitCallable(&SagemakerEdgeManagerClient::GetDeviceRegistration, REQUEST)

#define SendHeartbeatAsync(...)  SubmitAsync(&SagemakerEdgeManagerClient::SendHeartbeat, __VA_ARGS__)
#define SendHeartbeatCallable(REQUEST)  SubmitCallable(&SagemakerEdgeManagerClient::SendHeartbeat, REQUEST)

