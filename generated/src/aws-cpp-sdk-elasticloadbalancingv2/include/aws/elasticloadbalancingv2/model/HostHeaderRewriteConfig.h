﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/model/RewriteConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace ElasticLoadBalancingv2 {
namespace Model {

/**
 * <p>Information about a host header rewrite transform. This transform matches a
 * pattern in the host header in an HTTP request and replaces it with the specified
 * string.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/HostHeaderRewriteConfig">AWS
 * API Reference</a></p>
 */
class HostHeaderRewriteConfig {
 public:
  AWS_ELASTICLOADBALANCINGV2_API HostHeaderRewriteConfig() = default;
  AWS_ELASTICLOADBALANCINGV2_API HostHeaderRewriteConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ELASTICLOADBALANCINGV2_API HostHeaderRewriteConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index,
                                                     const char* locationValue) const;
  AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The host header rewrite transform. Each transform consists of a regular
   * expression to match and a replacement string.</p>
   */
  inline const Aws::Vector<RewriteConfig>& GetRewrites() const { return m_rewrites; }
  inline bool RewritesHasBeenSet() const { return m_rewritesHasBeenSet; }
  template <typename RewritesT = Aws::Vector<RewriteConfig>>
  void SetRewrites(RewritesT&& value) {
    m_rewritesHasBeenSet = true;
    m_rewrites = std::forward<RewritesT>(value);
  }
  template <typename RewritesT = Aws::Vector<RewriteConfig>>
  HostHeaderRewriteConfig& WithRewrites(RewritesT&& value) {
    SetRewrites(std::forward<RewritesT>(value));
    return *this;
  }
  template <typename RewritesT = RewriteConfig>
  HostHeaderRewriteConfig& AddRewrites(RewritesT&& value) {
    m_rewritesHasBeenSet = true;
    m_rewrites.emplace_back(std::forward<RewritesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RewriteConfig> m_rewrites;
  bool m_rewritesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
