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
 * <p>A structure that pairs a CloudFront distribution ID with its owning Amazon
 * Web Services account ID.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DistributionIdOwner">AWS
 * API Reference</a></p>
 */
class DistributionIdOwner {
 public:
  AWS_CLOUDFRONT_API DistributionIdOwner() = default;
  AWS_CLOUDFRONT_API DistributionIdOwner(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_CLOUDFRONT_API DistributionIdOwner& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The ID of the distribution.</p>
   */
  inline const Aws::String& GetDistributionId() const { return m_distributionId; }
  inline bool DistributionIdHasBeenSet() const { return m_distributionIdHasBeenSet; }
  template <typename DistributionIdT = Aws::String>
  void SetDistributionId(DistributionIdT&& value) {
    m_distributionIdHasBeenSet = true;
    m_distributionId = std::forward<DistributionIdT>(value);
  }
  template <typename DistributionIdT = Aws::String>
  DistributionIdOwner& WithDistributionId(DistributionIdT&& value) {
    SetDistributionId(std::forward<DistributionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the Amazon Web Services account that owns the distribution. </p>
   */
  inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
  inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
  template <typename OwnerAccountIdT = Aws::String>
  void SetOwnerAccountId(OwnerAccountIdT&& value) {
    m_ownerAccountIdHasBeenSet = true;
    m_ownerAccountId = std::forward<OwnerAccountIdT>(value);
  }
  template <typename OwnerAccountIdT = Aws::String>
  DistributionIdOwner& WithOwnerAccountId(OwnerAccountIdT&& value) {
    SetOwnerAccountId(std::forward<OwnerAccountIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_distributionId;
  bool m_distributionIdHasBeenSet = false;

  Aws::String m_ownerAccountId;
  bool m_ownerAccountIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudFront
}  // namespace Aws
