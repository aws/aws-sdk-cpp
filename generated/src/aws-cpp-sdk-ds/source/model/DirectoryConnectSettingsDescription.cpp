﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ds/model/DirectoryConnectSettingsDescription.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DirectoryService {
namespace Model {

DirectoryConnectSettingsDescription::DirectoryConnectSettingsDescription(JsonView jsonValue) { *this = jsonValue; }

DirectoryConnectSettingsDescription& DirectoryConnectSettingsDescription::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("VpcId")) {
    m_vpcId = jsonValue.GetString("VpcId");
    m_vpcIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubnetIds")) {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("SubnetIds");
    for (unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex) {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CustomerUserName")) {
    m_customerUserName = jsonValue.GetString("CustomerUserName");
    m_customerUserNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SecurityGroupId")) {
    m_securityGroupId = jsonValue.GetString("SecurityGroupId");
    m_securityGroupIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AvailabilityZones")) {
    Aws::Utils::Array<JsonView> availabilityZonesJsonList = jsonValue.GetArray("AvailabilityZones");
    for (unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex) {
      m_availabilityZones.push_back(availabilityZonesJsonList[availabilityZonesIndex].AsString());
    }
    m_availabilityZonesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConnectIps")) {
    Aws::Utils::Array<JsonView> connectIpsJsonList = jsonValue.GetArray("ConnectIps");
    for (unsigned connectIpsIndex = 0; connectIpsIndex < connectIpsJsonList.GetLength(); ++connectIpsIndex) {
      m_connectIps.push_back(connectIpsJsonList[connectIpsIndex].AsString());
    }
    m_connectIpsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConnectIpsV6")) {
    Aws::Utils::Array<JsonView> connectIpsV6JsonList = jsonValue.GetArray("ConnectIpsV6");
    for (unsigned connectIpsV6Index = 0; connectIpsV6Index < connectIpsV6JsonList.GetLength(); ++connectIpsV6Index) {
      m_connectIpsV6.push_back(connectIpsV6JsonList[connectIpsV6Index].AsString());
    }
    m_connectIpsV6HasBeenSet = true;
  }
  return *this;
}

JsonValue DirectoryConnectSettingsDescription::Jsonize() const {
  JsonValue payload;

  if (m_vpcIdHasBeenSet) {
    payload.WithString("VpcId", m_vpcId);
  }

  if (m_subnetIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
    for (unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex) {
      subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
    }
    payload.WithArray("SubnetIds", std::move(subnetIdsJsonList));
  }

  if (m_customerUserNameHasBeenSet) {
    payload.WithString("CustomerUserName", m_customerUserName);
  }

  if (m_securityGroupIdHasBeenSet) {
    payload.WithString("SecurityGroupId", m_securityGroupId);
  }

  if (m_availabilityZonesHasBeenSet) {
    Aws::Utils::Array<JsonValue> availabilityZonesJsonList(m_availabilityZones.size());
    for (unsigned availabilityZonesIndex = 0; availabilityZonesIndex < availabilityZonesJsonList.GetLength(); ++availabilityZonesIndex) {
      availabilityZonesJsonList[availabilityZonesIndex].AsString(m_availabilityZones[availabilityZonesIndex]);
    }
    payload.WithArray("AvailabilityZones", std::move(availabilityZonesJsonList));
  }

  if (m_connectIpsHasBeenSet) {
    Aws::Utils::Array<JsonValue> connectIpsJsonList(m_connectIps.size());
    for (unsigned connectIpsIndex = 0; connectIpsIndex < connectIpsJsonList.GetLength(); ++connectIpsIndex) {
      connectIpsJsonList[connectIpsIndex].AsString(m_connectIps[connectIpsIndex]);
    }
    payload.WithArray("ConnectIps", std::move(connectIpsJsonList));
  }

  if (m_connectIpsV6HasBeenSet) {
    Aws::Utils::Array<JsonValue> connectIpsV6JsonList(m_connectIpsV6.size());
    for (unsigned connectIpsV6Index = 0; connectIpsV6Index < connectIpsV6JsonList.GetLength(); ++connectIpsV6Index) {
      connectIpsV6JsonList[connectIpsV6Index].AsString(m_connectIpsV6[connectIpsV6Index]);
    }
    payload.WithArray("ConnectIpsV6", std::move(connectIpsV6JsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DirectoryService
}  // namespace Aws
