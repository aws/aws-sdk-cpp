/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Transfer {
namespace Model {

/**
 * <p>Contains the configuration details for asynchronous Message Disposition
 * Notification (MDN) responses in AS2 connectors. This configuration specifies
 * where asynchronous MDN responses should be sent and which servers should handle
 * them.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/As2AsyncMdnConnectorConfig">AWS
 * API Reference</a></p>
 */
class As2AsyncMdnConnectorConfig {
 public:
  AWS_TRANSFER_API As2AsyncMdnConnectorConfig() = default;
  AWS_TRANSFER_API As2AsyncMdnConnectorConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSFER_API As2AsyncMdnConnectorConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The URL endpoint where asynchronous MDN responses should be sent.</p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  As2AsyncMdnConnectorConfig& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of server identifiers that can handle asynchronous MDN responses. You
   * can specify between 1 and 10 server IDs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetServerIds() const { return m_serverIds; }
  inline bool ServerIdsHasBeenSet() const { return m_serverIdsHasBeenSet; }
  template <typename ServerIdsT = Aws::Vector<Aws::String>>
  void SetServerIds(ServerIdsT&& value) {
    m_serverIdsHasBeenSet = true;
    m_serverIds = std::forward<ServerIdsT>(value);
  }
  template <typename ServerIdsT = Aws::Vector<Aws::String>>
  As2AsyncMdnConnectorConfig& WithServerIds(ServerIdsT&& value) {
    SetServerIds(std::forward<ServerIdsT>(value));
    return *this;
  }
  template <typename ServerIdsT = Aws::String>
  As2AsyncMdnConnectorConfig& AddServerIds(ServerIdsT&& value) {
    m_serverIdsHasBeenSet = true;
    m_serverIds.emplace_back(std::forward<ServerIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_url;

  Aws::Vector<Aws::String> m_serverIds;
  bool m_urlHasBeenSet = false;
  bool m_serverIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Transfer
}  // namespace Aws
