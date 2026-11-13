/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/InvestigationEc2Instance.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

InvestigationEc2Instance::InvestigationEc2Instance(JsonView jsonValue) { *this = jsonValue; }

InvestigationEc2Instance& InvestigationEc2Instance::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("instanceId")) {
    m_instanceId = jsonValue.GetString("instanceId");
    m_instanceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("instanceType")) {
    m_instanceType = jsonValue.GetString("instanceType");
    m_instanceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("instanceState")) {
    m_instanceState = jsonValue.GetString("instanceState");
    m_instanceStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availabilityZone")) {
    m_availabilityZone = jsonValue.GetString("availabilityZone");
    m_availabilityZoneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("privateIpAddress")) {
    m_privateIpAddress = jsonValue.GetString("privateIpAddress");
    m_privateIpAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("publicIp")) {
    m_publicIp = jsonValue.GetString("publicIp");
    m_publicIpHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcId")) {
    m_vpcId = jsonValue.GetString("vpcId");
    m_vpcIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("subnetId")) {
    m_subnetId = jsonValue.GetString("subnetId");
    m_subnetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("imageId")) {
    m_imageId = jsonValue.GetString("imageId");
    m_imageIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("launchedAt")) {
    m_launchedAt = jsonValue.GetDouble("launchedAt");
    m_launchedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue InvestigationEc2Instance::Jsonize() const {
  JsonValue payload;

  if (m_instanceIdHasBeenSet) {
    payload.WithString("instanceId", m_instanceId);
  }

  if (m_instanceTypeHasBeenSet) {
    payload.WithString("instanceType", m_instanceType);
  }

  if (m_instanceStateHasBeenSet) {
    payload.WithString("instanceState", m_instanceState);
  }

  if (m_availabilityZoneHasBeenSet) {
    payload.WithString("availabilityZone", m_availabilityZone);
  }

  if (m_privateIpAddressHasBeenSet) {
    payload.WithString("privateIpAddress", m_privateIpAddress);
  }

  if (m_publicIpHasBeenSet) {
    payload.WithString("publicIp", m_publicIp);
  }

  if (m_vpcIdHasBeenSet) {
    payload.WithString("vpcId", m_vpcId);
  }

  if (m_subnetIdHasBeenSet) {
    payload.WithString("subnetId", m_subnetId);
  }

  if (m_imageIdHasBeenSet) {
    payload.WithString("imageId", m_imageId);
  }

  if (m_launchedAtHasBeenSet) {
    payload.WithDouble("launchedAt", m_launchedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
