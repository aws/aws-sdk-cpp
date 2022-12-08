/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The status codes that cause an origin group to fail over.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCloudFrontDistributionOriginGroupFailoverStatusCodes">AWS
   * API Reference</a></p>
   */
  class AwsCloudFrontDistributionOriginGroupFailoverStatusCodes
  {
  public:
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginGroupFailoverStatusCodes();
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginGroupFailoverStatusCodes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCloudFrontDistributionOriginGroupFailoverStatusCodes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of status code values that can cause a failover to the next
     * origin.</p>
     */
    inline const Aws::Vector<int>& GetItems() const{ return m_items; }

    /**
     * <p>The list of status code values that can cause a failover to the next
     * origin.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>The list of status code values that can cause a failover to the next
     * origin.</p>
     */
    inline void SetItems(const Aws::Vector<int>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>The list of status code values that can cause a failover to the next
     * origin.</p>
     */
    inline void SetItems(Aws::Vector<int>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>The list of status code values that can cause a failover to the next
     * origin.</p>
     */
    inline AwsCloudFrontDistributionOriginGroupFailoverStatusCodes& WithItems(const Aws::Vector<int>& value) { SetItems(value); return *this;}

    /**
     * <p>The list of status code values that can cause a failover to the next
     * origin.</p>
     */
    inline AwsCloudFrontDistributionOriginGroupFailoverStatusCodes& WithItems(Aws::Vector<int>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The list of status code values that can cause a failover to the next
     * origin.</p>
     */
    inline AwsCloudFrontDistributionOriginGroupFailoverStatusCodes& AddItems(int value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }


    /**
     * <p>The number of status codes that can cause a failover.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of status codes that can cause a failover.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of status codes that can cause a failover.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of status codes that can cause a failover.</p>
     */
    inline AwsCloudFrontDistributionOriginGroupFailoverStatusCodes& WithQuantity(int value) { SetQuantity(value); return *this;}

  private:

    Aws::Vector<int> m_items;
    bool m_itemsHasBeenSet = false;

    int m_quantity;
    bool m_quantityHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
