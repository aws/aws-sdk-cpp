/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyRemoveHeader.h>
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
   * <p>A list of HTTP header names that CloudFront removes from HTTP responses to
   * requests that match the cache behavior that this response headers policy is
   * attached to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ResponseHeadersPolicyRemoveHeadersConfig">AWS
   * API Reference</a></p>
   */
  class ResponseHeadersPolicyRemoveHeadersConfig
  {
  public:
    AWS_CLOUDFRONT_API ResponseHeadersPolicyRemoveHeadersConfig();
    AWS_CLOUDFRONT_API ResponseHeadersPolicyRemoveHeadersConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicyRemoveHeadersConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The number of HTTP header names in the list.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of HTTP header names in the list.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of HTTP header names in the list.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of HTTP header names in the list.</p>
     */
    inline ResponseHeadersPolicyRemoveHeadersConfig& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>The list of HTTP header names.</p>
     */
    inline const Aws::Vector<ResponseHeadersPolicyRemoveHeader>& GetItems() const{ return m_items; }

    /**
     * <p>The list of HTTP header names.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>The list of HTTP header names.</p>
     */
    inline void SetItems(const Aws::Vector<ResponseHeadersPolicyRemoveHeader>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>The list of HTTP header names.</p>
     */
    inline void SetItems(Aws::Vector<ResponseHeadersPolicyRemoveHeader>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>The list of HTTP header names.</p>
     */
    inline ResponseHeadersPolicyRemoveHeadersConfig& WithItems(const Aws::Vector<ResponseHeadersPolicyRemoveHeader>& value) { SetItems(value); return *this;}

    /**
     * <p>The list of HTTP header names.</p>
     */
    inline ResponseHeadersPolicyRemoveHeadersConfig& WithItems(Aws::Vector<ResponseHeadersPolicyRemoveHeader>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The list of HTTP header names.</p>
     */
    inline ResponseHeadersPolicyRemoveHeadersConfig& AddItems(const ResponseHeadersPolicyRemoveHeader& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>The list of HTTP header names.</p>
     */
    inline ResponseHeadersPolicyRemoveHeadersConfig& AddItems(ResponseHeadersPolicyRemoveHeader&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::Vector<ResponseHeadersPolicyRemoveHeader> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
