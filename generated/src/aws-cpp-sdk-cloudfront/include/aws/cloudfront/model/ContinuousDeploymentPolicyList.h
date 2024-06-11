﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/ContinuousDeploymentPolicySummary.h>
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
   * <p>Contains a list of continuous deployment policies.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ContinuousDeploymentPolicyList">AWS
   * API Reference</a></p>
   */
  class ContinuousDeploymentPolicyList
  {
  public:
    AWS_CLOUDFRONT_API ContinuousDeploymentPolicyList();
    AWS_CLOUDFRONT_API ContinuousDeploymentPolicyList(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ContinuousDeploymentPolicyList& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>Indicates the next page of continuous deployment policies. To get the next
     * page of the list, use this value in the <code>Marker</code> field of your
     * request.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }
    inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }
    inline void SetNextMarker(const Aws::String& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = value; }
    inline void SetNextMarker(Aws::String&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::move(value); }
    inline void SetNextMarker(const char* value) { m_nextMarkerHasBeenSet = true; m_nextMarker.assign(value); }
    inline ContinuousDeploymentPolicyList& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}
    inline ContinuousDeploymentPolicyList& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}
    inline ContinuousDeploymentPolicyList& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of continuous deployment policies that were specified in
     * your request.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }
    inline ContinuousDeploymentPolicyList& WithMaxItems(int value) { SetMaxItems(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of continuous deployment policies in your Amazon Web
     * Services account, regardless of the <code>MaxItems</code> value.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }
    inline ContinuousDeploymentPolicyList& WithQuantity(int value) { SetQuantity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of continuous deployment policy items.</p>
     */
    inline const Aws::Vector<ContinuousDeploymentPolicySummary>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<ContinuousDeploymentPolicySummary>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<ContinuousDeploymentPolicySummary>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline ContinuousDeploymentPolicyList& WithItems(const Aws::Vector<ContinuousDeploymentPolicySummary>& value) { SetItems(value); return *this;}
    inline ContinuousDeploymentPolicyList& WithItems(Aws::Vector<ContinuousDeploymentPolicySummary>&& value) { SetItems(std::move(value)); return *this;}
    inline ContinuousDeploymentPolicyList& AddItems(const ContinuousDeploymentPolicySummary& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline ContinuousDeploymentPolicyList& AddItems(ContinuousDeploymentPolicySummary&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    int m_maxItems;
    bool m_maxItemsHasBeenSet = false;

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::Vector<ContinuousDeploymentPolicySummary> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
