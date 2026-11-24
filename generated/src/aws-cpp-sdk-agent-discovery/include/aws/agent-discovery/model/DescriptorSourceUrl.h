/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-discovery/AgentDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentDiscovery {
namespace Model {

/**
 * <p>A URL that hosts descriptor content.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-discovery-2022-07-26/DescriptorSourceUrl">AWS
 * API Reference</a></p>
 */
class DescriptorSourceUrl {
 public:
  AWS_AGENTDISCOVERY_API DescriptorSourceUrl() = default;
  AWS_AGENTDISCOVERY_API DescriptorSourceUrl(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTDISCOVERY_API DescriptorSourceUrl& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The URL of the externally hosted descriptor content.</p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  DescriptorSourceUrl& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_url;
  bool m_urlHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentDiscovery
}  // namespace Aws
