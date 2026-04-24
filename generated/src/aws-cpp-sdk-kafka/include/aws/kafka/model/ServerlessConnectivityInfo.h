/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/NetworkType.h>

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
          <p>Describes the cluster's connectivity information, such as its
 * network type, which is IPv4 or DUAL.</p>
       <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/ServerlessConnectivityInfo">AWS
 * API Reference</a></p>
 */
class ServerlessConnectivityInfo {
 public:
  AWS_KAFKA_API ServerlessConnectivityInfo() = default;
  AWS_KAFKA_API ServerlessConnectivityInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API ServerlessConnectivityInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   *
          <p>The network type of the cluster, which is IPv4 or DUAL. The DUAL
   * network type uses both IPv4 and IPv6 addresses for your cluster and its
   * resources.</p><p>By default, a cluster uses the IPv4 network type.</p>

   */
  inline NetworkType GetNetworkType() const { return m_networkType; }
  inline bool NetworkTypeHasBeenSet() const { return m_networkTypeHasBeenSet; }
  inline void SetNetworkType(NetworkType value) {
    m_networkTypeHasBeenSet = true;
    m_networkType = value;
  }
  inline ServerlessConnectivityInfo& WithNetworkType(NetworkType value) {
    SetNetworkType(value);
    return *this;
  }
  ///@}
 private:
  NetworkType m_networkType{NetworkType::NOT_SET};
  bool m_networkTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
