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
    AWS_CLOUDFRONT_API AssociateAlias2020_05_31Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateAlias"; }

    AWS_CLOUDFRONT_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the distribution that you're associating the alias with.</p>
     */
    inline const Aws::String& GetTargetDistributionId() const{ return m_targetDistributionId; }

    /**
     * <p>The ID of the distribution that you're associating the alias with.</p>
     */
    inline bool TargetDistributionIdHasBeenSet() const { return m_targetDistributionIdHasBeenSet; }

    /**
     * <p>The ID of the distribution that you're associating the alias with.</p>
     */
    inline void SetTargetDistributionId(const Aws::String& value) { m_targetDistributionIdHasBeenSet = true; m_targetDistributionId = value; }

    /**
     * <p>The ID of the distribution that you're associating the alias with.</p>
     */
    inline void SetTargetDistributionId(Aws::String&& value) { m_targetDistributionIdHasBeenSet = true; m_targetDistributionId = std::move(value); }

    /**
     * <p>The ID of the distribution that you're associating the alias with.</p>
     */
    inline void SetTargetDistributionId(const char* value) { m_targetDistributionIdHasBeenSet = true; m_targetDistributionId.assign(value); }

    /**
     * <p>The ID of the distribution that you're associating the alias with.</p>
     */
    inline AssociateAlias2020_05_31Request& WithTargetDistributionId(const Aws::String& value) { SetTargetDistributionId(value); return *this;}

    /**
     * <p>The ID of the distribution that you're associating the alias with.</p>
     */
    inline AssociateAlias2020_05_31Request& WithTargetDistributionId(Aws::String&& value) { SetTargetDistributionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the distribution that you're associating the alias with.</p>
     */
    inline AssociateAlias2020_05_31Request& WithTargetDistributionId(const char* value) { SetTargetDistributionId(value); return *this;}


    /**
     * <p>The alias (also known as a CNAME) to add to the target distribution.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The alias (also known as a CNAME) to add to the target distribution.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>The alias (also known as a CNAME) to add to the target distribution.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>The alias (also known as a CNAME) to add to the target distribution.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>The alias (also known as a CNAME) to add to the target distribution.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>The alias (also known as a CNAME) to add to the target distribution.</p>
     */
    inline AssociateAlias2020_05_31Request& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The alias (also known as a CNAME) to add to the target distribution.</p>
     */
    inline AssociateAlias2020_05_31Request& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The alias (also known as a CNAME) to add to the target distribution.</p>
     */
    inline AssociateAlias2020_05_31Request& WithAlias(const char* value) { SetAlias(value); return *this;}

  private:

    Aws::String m_targetDistributionId;
    bool m_targetDistributionIdHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
