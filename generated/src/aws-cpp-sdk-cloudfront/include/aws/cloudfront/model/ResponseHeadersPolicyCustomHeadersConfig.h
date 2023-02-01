/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyCustomHeader.h>
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
   * <p>A list of HTTP response header names and their values. CloudFront includes
   * these headers in HTTP responses that it sends for requests that match a cache
   * behavior that's associated with this response headers policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ResponseHeadersPolicyCustomHeadersConfig">AWS
   * API Reference</a></p>
   */
  class ResponseHeadersPolicyCustomHeadersConfig
  {
  public:
    AWS_CLOUDFRONT_API ResponseHeadersPolicyCustomHeadersConfig();
    AWS_CLOUDFRONT_API ResponseHeadersPolicyCustomHeadersConfig(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicyCustomHeadersConfig& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The number of HTTP response headers in the list.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of HTTP response headers in the list.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of HTTP response headers in the list.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of HTTP response headers in the list.</p>
     */
    inline ResponseHeadersPolicyCustomHeadersConfig& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>The list of HTTP response headers and their values.</p>
     */
    inline const Aws::Vector<ResponseHeadersPolicyCustomHeader>& GetItems() const{ return m_items; }

    /**
     * <p>The list of HTTP response headers and their values.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>The list of HTTP response headers and their values.</p>
     */
    inline void SetItems(const Aws::Vector<ResponseHeadersPolicyCustomHeader>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>The list of HTTP response headers and their values.</p>
     */
    inline void SetItems(Aws::Vector<ResponseHeadersPolicyCustomHeader>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>The list of HTTP response headers and their values.</p>
     */
    inline ResponseHeadersPolicyCustomHeadersConfig& WithItems(const Aws::Vector<ResponseHeadersPolicyCustomHeader>& value) { SetItems(value); return *this;}

    /**
     * <p>The list of HTTP response headers and their values.</p>
     */
    inline ResponseHeadersPolicyCustomHeadersConfig& WithItems(Aws::Vector<ResponseHeadersPolicyCustomHeader>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The list of HTTP response headers and their values.</p>
     */
    inline ResponseHeadersPolicyCustomHeadersConfig& AddItems(const ResponseHeadersPolicyCustomHeader& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>The list of HTTP response headers and their values.</p>
     */
    inline ResponseHeadersPolicyCustomHeadersConfig& AddItems(ResponseHeadersPolicyCustomHeader&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::Vector<ResponseHeadersPolicyCustomHeader> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
