/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>The IDs for the distribution resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DistributionResourceId">AWS
   * API Reference</a></p>
   */
  class DistributionResourceId
  {
  public:
    AWS_CLOUDFRONT_API DistributionResourceId() = default;
    AWS_CLOUDFRONT_API DistributionResourceId(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API DistributionResourceId& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ID of the multi-tenant distribution.</p>
     */
    inline const Aws::String& GetDistributionId() const { return m_distributionId; }
    inline bool DistributionIdHasBeenSet() const { return m_distributionIdHasBeenSet; }
    template<typename DistributionIdT = Aws::String>
    void SetDistributionId(DistributionIdT&& value) { m_distributionIdHasBeenSet = true; m_distributionId = std::forward<DistributionIdT>(value); }
    template<typename DistributionIdT = Aws::String>
    DistributionResourceId& WithDistributionId(DistributionIdT&& value) { SetDistributionId(std::forward<DistributionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the distribution tenant.</p>
     */
    inline const Aws::String& GetDistributionTenantId() const { return m_distributionTenantId; }
    inline bool DistributionTenantIdHasBeenSet() const { return m_distributionTenantIdHasBeenSet; }
    template<typename DistributionTenantIdT = Aws::String>
    void SetDistributionTenantId(DistributionTenantIdT&& value) { m_distributionTenantIdHasBeenSet = true; m_distributionTenantId = std::forward<DistributionTenantIdT>(value); }
    template<typename DistributionTenantIdT = Aws::String>
    DistributionResourceId& WithDistributionTenantId(DistributionTenantIdT&& value) { SetDistributionTenantId(std::forward<DistributionTenantIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_distributionId;
    bool m_distributionIdHasBeenSet = false;

    Aws::String m_distributionTenantId;
    bool m_distributionTenantIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
