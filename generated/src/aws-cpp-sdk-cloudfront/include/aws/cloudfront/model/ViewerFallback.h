/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace CloudFront {
namespace Model {

/**
 * <p>The distribution whose certificate CloudFront uses for viewer requests that
 * arrive on the connection group's Anycast static IPs without Server Name
 * Indication (SNI). You can specify one distribution per Anycast static IP
 * list.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ViewerFallback">AWS
 * API Reference</a></p>
 */
class ViewerFallback {
 public:
  AWS_CLOUDFRONT_API ViewerFallback() = default;
  AWS_CLOUDFRONT_API ViewerFallback(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFRONT_API ViewerFallback& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The ID of the distribution whose certificate CloudFront uses to establish TLS
   * connections for viewer requests that don't include SNI.</p>
   */
  inline const Aws::String& GetDistributionId() const { return m_distributionId; }
  inline bool DistributionIdHasBeenSet() const { return m_distributionIdHasBeenSet; }
  template <typename DistributionIdT = Aws::String>
  void SetDistributionId(DistributionIdT&& value) {
    m_distributionIdHasBeenSet = true;
    m_distributionId = std::forward<DistributionIdT>(value);
  }
  template <typename DistributionIdT = Aws::String>
  ViewerFallback& WithDistributionId(DistributionIdT&& value) {
    SetDistributionId(std::forward<DistributionIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_distributionId;
  bool m_distributionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
