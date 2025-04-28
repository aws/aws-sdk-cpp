/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/cloudfront/CloudFrontRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudFront
{
namespace Model
{

  /**
   */
  class GetInvalidationForDistributionTenant2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API GetInvalidationForDistributionTenant2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInvalidationForDistributionTenant"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the distribution tenant.</p>
     */
    inline const Aws::String& GetDistributionTenantId() const { return m_distributionTenantId; }
    inline bool DistributionTenantIdHasBeenSet() const { return m_distributionTenantIdHasBeenSet; }
    template<typename DistributionTenantIdT = Aws::String>
    void SetDistributionTenantId(DistributionTenantIdT&& value) { m_distributionTenantIdHasBeenSet = true; m_distributionTenantId = std::forward<DistributionTenantIdT>(value); }
    template<typename DistributionTenantIdT = Aws::String>
    GetInvalidationForDistributionTenant2020_05_31Request& WithDistributionTenantId(DistributionTenantIdT&& value) { SetDistributionTenantId(std::forward<DistributionTenantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the invalidation to retrieve.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetInvalidationForDistributionTenant2020_05_31Request& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_distributionTenantId;
    bool m_distributionTenantIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
