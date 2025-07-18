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
namespace Http
{
    class URI;
} //namespace Http
namespace CloudFront
{
namespace Model
{

  /**
   */
  class AssociateAlias2020_05_31Request : public CloudFrontRequest
  {
  public:
    AWS_CLOUDFRONT_API AssociateAlias2020_05_31Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateAlias"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the standard distribution that you're associating the alias
     * with.</p>
     */
    inline const Aws::String& GetTargetDistributionId() const { return m_targetDistributionId; }
    inline bool TargetDistributionIdHasBeenSet() const { return m_targetDistributionIdHasBeenSet; }
    template<typename TargetDistributionIdT = Aws::String>
    void SetTargetDistributionId(TargetDistributionIdT&& value) { m_targetDistributionIdHasBeenSet = true; m_targetDistributionId = std::forward<TargetDistributionIdT>(value); }
    template<typename TargetDistributionIdT = Aws::String>
    AssociateAlias2020_05_31Request& WithTargetDistributionId(TargetDistributionIdT&& value) { SetTargetDistributionId(std::forward<TargetDistributionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias (also known as a CNAME) to add to the target standard
     * distribution.</p>
     */
    inline const Aws::String& GetAlias() const { return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    template<typename AliasT = Aws::String>
    void SetAlias(AliasT&& value) { m_aliasHasBeenSet = true; m_alias = std::forward<AliasT>(value); }
    template<typename AliasT = Aws::String>
    AssociateAlias2020_05_31Request& WithAlias(AliasT&& value) { SetAlias(std::forward<AliasT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetDistributionId;
    bool m_targetDistributionIdHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
