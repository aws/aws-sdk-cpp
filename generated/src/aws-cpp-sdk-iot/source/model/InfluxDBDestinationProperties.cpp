/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot/model/InfluxDBDestinationProperties.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoT {
namespace Model {

InfluxDBDestinationProperties::InfluxDBDestinationProperties(JsonView jsonValue) { *this = jsonValue; }

InfluxDBDestinationProperties& InfluxDBDestinationProperties::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("endpoint")) {
    m_endpoint = jsonValue.GetString("endpoint");
    m_endpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("influxDBVersion")) {
    m_influxDBVersion = InfluxDBVersionMapper::GetInfluxDBVersionForName(jsonValue.GetString("influxDBVersion"));
    m_influxDBVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("secretId")) {
    m_secretId = jsonValue.GetString("secretId");
    m_secretIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("secretType")) {
    m_secretType = InfluxDBSecretTypeMapper::GetInfluxDBSecretTypeForName(jsonValue.GetString("secretType"));
    m_secretTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("secretKey")) {
    m_secretKey = jsonValue.GetString("secretKey");
    m_secretKeyHasBeenSet = true;
  }
  return *this;
}

JsonValue InfluxDBDestinationProperties::Jsonize() const {
  JsonValue payload;

  if (m_endpointHasBeenSet) {
    payload.WithString("endpoint", m_endpoint);
  }

  if (m_influxDBVersionHasBeenSet) {
    payload.WithString("influxDBVersion", InfluxDBVersionMapper::GetNameForInfluxDBVersion(m_influxDBVersion));
  }

  if (m_secretIdHasBeenSet) {
    payload.WithString("secretId", m_secretId);
  }

  if (m_secretTypeHasBeenSet) {
    payload.WithString("secretType", InfluxDBSecretTypeMapper::GetNameForInfluxDBSecretType(m_secretType));
  }

  if (m_secretKeyHasBeenSet) {
    payload.WithString("secretKey", m_secretKey);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
