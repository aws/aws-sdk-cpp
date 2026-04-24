/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ServerlessClientAuthentication.h>
#include <aws/kafka/model/ServerlessConnectivityInfo.h>
#include <aws/kafka/model/VpcConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kafka {
namespace Model {

/**
 *
          <p>Serverless cluster.</p>
       <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/Serverless">AWS
 * API Reference</a></p>
 */
class Serverless {
 public:
  AWS_KAFKA_API Serverless() = default;
  AWS_KAFKA_API Serverless(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Serverless& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   *
          <p>The configuration of the Amazon VPCs for the cluster.</p>

   *
   */
  inline const Aws::Vector<VpcConfig>& GetVpcConfigs() const { return m_vpcConfigs; }
  inline bool VpcConfigsHasBeenSet() const { return m_vpcConfigsHasBeenSet; }
  template <typename VpcConfigsT = Aws::Vector<VpcConfig>>
  void SetVpcConfigs(VpcConfigsT&& value) {
    m_vpcConfigsHasBeenSet = true;
    m_vpcConfigs = std::forward<VpcConfigsT>(value);
  }
  template <typename VpcConfigsT = Aws::Vector<VpcConfig>>
  Serverless& WithVpcConfigs(VpcConfigsT&& value) {
    SetVpcConfigs(std::forward<VpcConfigsT>(value));
    return *this;
  }
  template <typename VpcConfigsT = VpcConfig>
  Serverless& AddVpcConfigs(VpcConfigsT&& value) {
    m_vpcConfigsHasBeenSet = true;
    m_vpcConfigs.emplace_back(std::forward<VpcConfigsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>Includes all client authentication information.</p>

   */
  inline const ServerlessClientAuthentication& GetClientAuthentication() const { return m_clientAuthentication; }
  inline bool ClientAuthenticationHasBeenSet() const { return m_clientAuthenticationHasBeenSet; }
  template <typename ClientAuthenticationT = ServerlessClientAuthentication>
  void SetClientAuthentication(ClientAuthenticationT&& value) {
    m_clientAuthenticationHasBeenSet = true;
    m_clientAuthentication = std::forward<ClientAuthenticationT>(value);
  }
  template <typename ClientAuthenticationT = ServerlessClientAuthentication>
  Serverless& WithClientAuthentication(ClientAuthenticationT&& value) {
    SetClientAuthentication(std::forward<ClientAuthenticationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   *
          <p>Describes the cluster's connectivity information, such as its
   * network type, which is IPv4 or DUAL.</p>

   */
  inline const ServerlessConnectivityInfo& GetConnectivityInfo() const { return m_connectivityInfo; }
  inline bool ConnectivityInfoHasBeenSet() const { return m_connectivityInfoHasBeenSet; }
  template <typename ConnectivityInfoT = ServerlessConnectivityInfo>
  void SetConnectivityInfo(ConnectivityInfoT&& value) {
    m_connectivityInfoHasBeenSet = true;
    m_connectivityInfo = std::forward<ConnectivityInfoT>(value);
  }
  template <typename ConnectivityInfoT = ServerlessConnectivityInfo>
  Serverless& WithConnectivityInfo(ConnectivityInfoT&& value) {
    SetConnectivityInfo(std::forward<ConnectivityInfoT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<VpcConfig> m_vpcConfigs;

  ServerlessClientAuthentication m_clientAuthentication;

  ServerlessConnectivityInfo m_connectivityInfo;
  bool m_vpcConfigsHasBeenSet = false;
  bool m_clientAuthenticationHasBeenSet = false;
  bool m_connectivityInfoHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
