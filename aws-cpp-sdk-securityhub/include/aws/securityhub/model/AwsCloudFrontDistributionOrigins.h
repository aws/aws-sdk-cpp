/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsCloudFrontDistributionOriginItem.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A complex type that contains information about origins and origin groups for
   * this CloudFront distribution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFrontDistributionOrigins">AWS
   * API Reference</a></p>
   */
  class AwsCloudFrontDistributionOrigins
  {
  public:
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOrigins();
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOrigins(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOrigins& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A complex type that contains origins or origin groups for this
     * distribution.</p>
     */
    inline const Aws::Vector<AwsCloudFrontDistributionOriginItem>& GetItems() const{ return m_items; }

    /**
     * <p>A complex type that contains origins or origin groups for this
     * distribution.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>A complex type that contains origins or origin groups for this
     * distribution.</p>
     */
    inline void SetItems(const Aws::Vector<AwsCloudFrontDistributionOriginItem>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>A complex type that contains origins or origin groups for this
     * distribution.</p>
     */
    inline void SetItems(Aws::Vector<AwsCloudFrontDistributionOriginItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>A complex type that contains origins or origin groups for this
     * distribution.</p>
     */
    inline AwsCloudFrontDistributionOrigins& WithItems(const Aws::Vector<AwsCloudFrontDistributionOriginItem>& value) { SetItems(value); return *this;}

    /**
     * <p>A complex type that contains origins or origin groups for this
     * distribution.</p>
     */
    inline AwsCloudFrontDistributionOrigins& WithItems(Aws::Vector<AwsCloudFrontDistributionOriginItem>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains origins or origin groups for this
     * distribution.</p>
     */
    inline AwsCloudFrontDistributionOrigins& AddItems(const AwsCloudFrontDistributionOriginItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>A complex type that contains origins or origin groups for this
     * distribution.</p>
     */
    inline AwsCloudFrontDistributionOrigins& AddItems(AwsCloudFrontDistributionOriginItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<AwsCloudFrontDistributionOriginItem> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
