/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/InfluxDBSecretType.h>
#include <aws/iot/model/InfluxDBVersion.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoT {
namespace Model {

/**
 * <p>The configuration of an InfluxDB topic rule destination.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/InfluxDBDestinationConfiguration">AWS
 * API Reference</a></p>
 */
class InfluxDBDestinationConfiguration {
 public:
  AWS_IOT_API InfluxDBDestinationConfiguration() = default;
  AWS_IOT_API InfluxDBDestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API InfluxDBDestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The URL of the InfluxDB instance to write to.</p>
   */
  inline const Aws::String& GetEndpoint() const { return m_endpoint; }
  inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
  template <typename EndpointT = Aws::String>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = Aws::String>
  InfluxDBDestinationConfiguration& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The major version of the InfluxDB instance. Valid values are <code>V2</code>
   * and <code>V3</code>.</p>
   */
  inline InfluxDBVersion GetInfluxDBVersion() const { return m_influxDBVersion; }
  inline bool InfluxDBVersionHasBeenSet() const { return m_influxDBVersionHasBeenSet; }
  inline void SetInfluxDBVersion(InfluxDBVersion value) {
    m_influxDBVersionHasBeenSet = true;
    m_influxDBVersion = value;
  }
  inline InfluxDBDestinationConfiguration& WithInfluxDBVersion(InfluxDBVersion value) {
    SetInfluxDBVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN or name of the Amazon Web Services Secrets Manager secret that
   * contains the InfluxDB API token.</p>
   */
  inline const Aws::String& GetSecretId() const { return m_secretId; }
  inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }
  template <typename SecretIdT = Aws::String>
  void SetSecretId(SecretIdT&& value) {
    m_secretIdHasBeenSet = true;
    m_secretId = std::forward<SecretIdT>(value);
  }
  template <typename SecretIdT = Aws::String>
  InfluxDBDestinationConfiguration& WithSecretId(SecretIdT&& value) {
    SetSecretId(std::forward<SecretIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the secret that contains the InfluxDB API token. Valid values are
   * <code>SecretString</code> and <code>SecretBinary</code>.</p> <p>If omitted, IoT
   * reads the secret as a string.</p>
   */
  inline InfluxDBSecretType GetSecretType() const { return m_secretType; }
  inline bool SecretTypeHasBeenSet() const { return m_secretTypeHasBeenSet; }
  inline void SetSecretType(InfluxDBSecretType value) {
    m_secretTypeHasBeenSet = true;
    m_secretType = value;
  }
  inline InfluxDBDestinationConfiguration& WithSecretType(InfluxDBSecretType value) {
    SetSecretType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key to read from the secret value when the secret contains a JSON object.
   * If omitted, IoT uses the entire secret value as the InfluxDB API token.</p>
   */
  inline const Aws::String& GetSecretKey() const { return m_secretKey; }
  inline bool SecretKeyHasBeenSet() const { return m_secretKeyHasBeenSet; }
  template <typename SecretKeyT = Aws::String>
  void SetSecretKey(SecretKeyT&& value) {
    m_secretKeyHasBeenSet = true;
    m_secretKey = std::forward<SecretKeyT>(value);
  }
  template <typename SecretKeyT = Aws::String>
  InfluxDBDestinationConfiguration& WithSecretKey(SecretKeyT&& value) {
    SetSecretKey(std::forward<SecretKeyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_endpoint;

  InfluxDBVersion m_influxDBVersion{InfluxDBVersion::NOT_SET};

  Aws::String m_secretId;

  InfluxDBSecretType m_secretType{InfluxDBSecretType::NOT_SET};

  Aws::String m_secretKey;
  bool m_endpointHasBeenSet = false;
  bool m_influxDBVersionHasBeenSet = false;
  bool m_secretIdHasBeenSet = false;
  bool m_secretTypeHasBeenSet = false;
  bool m_secretKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
