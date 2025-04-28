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
   * <p>Filter by the associated distribution ID or connection group
   * ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DistributionTenantAssociationFilter">AWS
   * API Reference</a></p>
   */
  class DistributionTenantAssociationFilter
  {
  public:
    AWS_CLOUDFRONT_API DistributionTenantAssociationFilter() = default;
    AWS_CLOUDFRONT_API DistributionTenantAssociationFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API DistributionTenantAssociationFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The distribution ID to filter by. You can find distribution tenants
     * associated with a specific distribution.</p>
     */
    inline const Aws::String& GetDistributionId() const { return m_distributionId; }
    inline bool DistributionIdHasBeenSet() const { return m_distributionIdHasBeenSet; }
    template<typename DistributionIdT = Aws::String>
    void SetDistributionId(DistributionIdT&& value) { m_distributionIdHasBeenSet = true; m_distributionId = std::forward<DistributionIdT>(value); }
    template<typename DistributionIdT = Aws::String>
    DistributionTenantAssociationFilter& WithDistributionId(DistributionIdT&& value) { SetDistributionId(std::forward<DistributionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the connection group to filter by. You can find distribution
     * tenants associated with a specific connection group.</p>
     */
    inline const Aws::String& GetConnectionGroupId() const { return m_connectionGroupId; }
    inline bool ConnectionGroupIdHasBeenSet() const { return m_connectionGroupIdHasBeenSet; }
    template<typename ConnectionGroupIdT = Aws::String>
    void SetConnectionGroupId(ConnectionGroupIdT&& value) { m_connectionGroupIdHasBeenSet = true; m_connectionGroupId = std::forward<ConnectionGroupIdT>(value); }
    template<typename ConnectionGroupIdT = Aws::String>
    DistributionTenantAssociationFilter& WithConnectionGroupId(ConnectionGroupIdT&& value) { SetConnectionGroupId(std::forward<ConnectionGroupIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_distributionId;
    bool m_distributionIdHasBeenSet = false;

    Aws::String m_connectionGroupId;
    bool m_connectionGroupIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
