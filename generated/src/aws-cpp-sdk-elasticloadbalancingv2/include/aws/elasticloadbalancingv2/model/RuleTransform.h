/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/model/HostHeaderRewriteConfig.h>
#include <aws/elasticloadbalancingv2/model/TransformTypeEnum.h>
#include <aws/elasticloadbalancingv2/model/UrlRewriteConfig.h>

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
 * <p>Information about a transform to apply to requests that match a rule.
 * Transforms are applied to requests before they are sent to
 * targets.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/RuleTransform">AWS
 * API Reference</a></p>
 */
class RuleTransform {
 public:
  AWS_ELASTICLOADBALANCINGV2_API RuleTransform() = default;
  AWS_ELASTICLOADBALANCINGV2_API RuleTransform(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ELASTICLOADBALANCINGV2_API RuleTransform& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index,
                                                     const char* locationValue) const;
  AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;

  ///@{
  /**
   * <p>The type of transform. </p> <ul> <li> <p> <code>host-header-rewrite</code> -
   * Rewrite the host header.</p> </li> <li> <p> <code>url-rewrite</code> - Rewrite
   * the request URL.</p> </li> </ul>
   */
  inline TransformTypeEnum GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(TransformTypeEnum value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline RuleTransform& WithType(TransformTypeEnum value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about a host header rewrite transform. This transform modifies
   * the host header in an HTTP request. Specify only when <code>Type</code> is
   * <code>host-header-rewrite</code>.</p>
   */
  inline const HostHeaderRewriteConfig& GetHostHeaderRewriteConfig() const { return m_hostHeaderRewriteConfig; }
  inline bool HostHeaderRewriteConfigHasBeenSet() const { return m_hostHeaderRewriteConfigHasBeenSet; }
  template <typename HostHeaderRewriteConfigT = HostHeaderRewriteConfig>
  void SetHostHeaderRewriteConfig(HostHeaderRewriteConfigT&& value) {
    m_hostHeaderRewriteConfigHasBeenSet = true;
    m_hostHeaderRewriteConfig = std::forward<HostHeaderRewriteConfigT>(value);
  }
  template <typename HostHeaderRewriteConfigT = HostHeaderRewriteConfig>
  RuleTransform& WithHostHeaderRewriteConfig(HostHeaderRewriteConfigT&& value) {
    SetHostHeaderRewriteConfig(std::forward<HostHeaderRewriteConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about a URL rewrite transform. This transform modifies the
   * request URL. Specify only when <code>Type</code> is
   * <code>url-rewrite</code>.</p>
   */
  inline const UrlRewriteConfig& GetUrlRewriteConfig() const { return m_urlRewriteConfig; }
  inline bool UrlRewriteConfigHasBeenSet() const { return m_urlRewriteConfigHasBeenSet; }
  template <typename UrlRewriteConfigT = UrlRewriteConfig>
  void SetUrlRewriteConfig(UrlRewriteConfigT&& value) {
    m_urlRewriteConfigHasBeenSet = true;
    m_urlRewriteConfig = std::forward<UrlRewriteConfigT>(value);
  }
  template <typename UrlRewriteConfigT = UrlRewriteConfig>
  RuleTransform& WithUrlRewriteConfig(UrlRewriteConfigT&& value) {
    SetUrlRewriteConfig(std::forward<UrlRewriteConfigT>(value));
    return *this;
  }
  ///@}
 private:
  TransformTypeEnum m_type{TransformTypeEnum::NOT_SET};

  HostHeaderRewriteConfig m_hostHeaderRewriteConfig;

  UrlRewriteConfig m_urlRewriteConfig;
  bool m_typeHasBeenSet = false;
  bool m_hostHeaderRewriteConfigHasBeenSet = false;
  bool m_urlRewriteConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElasticLoadBalancingv2
}  // namespace Aws
