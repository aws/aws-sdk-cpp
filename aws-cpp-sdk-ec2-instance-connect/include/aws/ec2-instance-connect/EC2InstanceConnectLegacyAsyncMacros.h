/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#define SendSSHPublicKeyAsync(...)  SubmitAsync(&EC2InstanceConnectClient::SendSSHPublicKey, __VA_ARGS__)
#define SendSSHPublicKeyCallable(REQUEST)  SubmitCallable(&EC2InstanceConnectClient::SendSSHPublicKey, REQUEST)

#define SendSerialConsoleSSHPublicKeyAsync(...)  SubmitAsync(&EC2InstanceConnectClient::SendSerialConsoleSSHPublicKey, __VA_ARGS__)
#define SendSerialConsoleSSHPublicKeyCallable(REQUEST)  SubmitCallable(&EC2InstanceConnectClient::SendSerialConsoleSSHPublicKey, REQUEST)

