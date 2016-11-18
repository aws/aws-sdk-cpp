/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/DistributionSummary.h>

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
   * A distribution list.
   */
  class AWS_CLOUDFRONT_API DistributionList
  {
  public:
    DistributionList();
    DistributionList(const Aws::Utils::Xml::XmlNode& xmlNode);
    DistributionList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * The value you provided for the Marker request parameter.
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * The value you provided for the Marker request parameter.
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * The value you provided for the Marker request parameter.
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * The value you provided for the Marker request parameter.
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * The value you provided for the Marker request parameter.
     */
    inline DistributionList& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * The value you provided for the Marker request parameter.
     */
    inline DistributionList& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * The value you provided for the Marker request parameter.
     */
    inline DistributionList& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * If IsTruncated is true, this element is present and contains the value you can
     * use for the Marker request parameter to continue listing your distributions
     * where they left off.
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * If IsTruncated is true, this element is present and contains the value you can
     * use for the Marker request parameter to continue listing your distributions
     * where they left off.
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }

    /**
     * If IsTruncated is true, this element is present and contains the value you can
     * use for the Marker request parameter to continue listing your distributions
     * where they left off.
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }

    /**
     * If IsTruncated is true, this element is present and contains the value you can
     * use for the Marker request parameter to continue listing your distributions
     * where they left off.
     */
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }

    /**
     * If IsTruncated is true, this element is present and contains the value you can
     * use for the Marker request parameter to continue listing your distributions
     * where they left off.
     */
    inline DistributionList& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * If IsTruncated is true, this element is present and contains the value you can
     * use for the Marker request parameter to continue listing your distributions
     * where they left off.
     */
    inline DistributionList& WithNextMarker(Aws::String&& value) { SetNextMarker(value); return *this;}

    /**
     * If IsTruncated is true, this element is present and contains the value you can
     * use for the Marker request parameter to continue listing your distributions
     * where they left off.
     */
    inline DistributionList& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}

    /**
     * The value you provided for the MaxItems request parameter.
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * The value you provided for the MaxItems request parameter.
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * The value you provided for the MaxItems request parameter.
     */
    inline DistributionList& WithMaxItems(int value) { SetMaxItems(value); return *this;}

    /**
     * A flag that indicates whether more distributions remain to be listed. If your
     * results were truncated, you can make a follow-up pagination request using the
     * Marker request parameter to retrieve more distributions in the list.
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * A flag that indicates whether more distributions remain to be listed. If your
     * results were truncated, you can make a follow-up pagination request using the
     * Marker request parameter to retrieve more distributions in the list.
     */
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }

    /**
     * A flag that indicates whether more distributions remain to be listed. If your
     * results were truncated, you can make a follow-up pagination request using the
     * Marker request parameter to retrieve more distributions in the list.
     */
    inline DistributionList& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}

    /**
     * The number of distributions that were created by the current AWS account.
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * The number of distributions that were created by the current AWS account.
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * The number of distributions that were created by the current AWS account.
     */
    inline DistributionList& WithQuantity(int value) { SetQuantity(value); return *this;}

    /**
     * A complex type that contains one DistributionSummary element for each
     * distribution that was created by the current AWS account.
     */
    inline const Aws::Vector<DistributionSummary>& GetItems() const{ return m_items; }

    /**
     * A complex type that contains one DistributionSummary element for each
     * distribution that was created by the current AWS account.
     */
    inline void SetItems(const Aws::Vector<DistributionSummary>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * A complex type that contains one DistributionSummary element for each
     * distribution that was created by the current AWS account.
     */
    inline void SetItems(Aws::Vector<DistributionSummary>&& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * A complex type that contains one DistributionSummary element for each
     * distribution that was created by the current AWS account.
     */
    inline DistributionList& WithItems(const Aws::Vector<DistributionSummary>& value) { SetItems(value); return *this;}

    /**
     * A complex type that contains one DistributionSummary element for each
     * distribution that was created by the current AWS account.
     */
    inline DistributionList& WithItems(Aws::Vector<DistributionSummary>&& value) { SetItems(value); return *this;}

    /**
     * A complex type that contains one DistributionSummary element for each
     * distribution that was created by the current AWS account.
     */
    inline DistributionList& AddItems(const DistributionSummary& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * A complex type that contains one DistributionSummary element for each
     * distribution that was created by the current AWS account.
     */
    inline DistributionList& AddItems(DistributionSummary&& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

  private:
    Aws::String m_marker;
    bool m_markerHasBeenSet;
    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet;
    int m_maxItems;
    bool m_maxItemsHasBeenSet;
    bool m_isTruncated;
    bool m_isTruncatedHasBeenSet;
    int m_quantity;
    bool m_quantityHasBeenSet;
    Aws::Vector<DistributionSummary> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
