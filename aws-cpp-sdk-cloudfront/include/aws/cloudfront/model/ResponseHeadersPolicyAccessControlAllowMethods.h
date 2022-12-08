/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/ResponseHeadersPolicyAccessControlAllowMethodsValues.h>
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
   * <p>A list of HTTP methods that CloudFront includes as values for the
   * <code>Access-Control-Allow-Methods</code> HTTP response header.</p> <p>For more
   * information about the <code>Access-Control-Allow-Methods</code> HTTP response
   * header, see <a
   * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Access-Control-Allow-Methods">Access-Control-Allow-Methods</a>
   * in the MDN Web Docs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/ResponseHeadersPolicyAccessControlAllowMethods">AWS
   * API Reference</a></p>
   */
  class ResponseHeadersPolicyAccessControlAllowMethods
  {
  public:
    AWS_CLOUDFRONT_API ResponseHeadersPolicyAccessControlAllowMethods();
    AWS_CLOUDFRONT_API ResponseHeadersPolicyAccessControlAllowMethods(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API ResponseHeadersPolicyAccessControlAllowMethods& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The number of HTTP methods in the list.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of HTTP methods in the list.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of HTTP methods in the list.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of HTTP methods in the list.</p>
     */
    inline ResponseHeadersPolicyAccessControlAllowMethods& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>The list of HTTP methods. Valid values are:</p> <ul> <li> <p>
     * <code>GET</code> </p> </li> <li> <p> <code>DELETE</code> </p> </li> <li> <p>
     * <code>HEAD</code> </p> </li> <li> <p> <code>OPTIONS</code> </p> </li> <li> <p>
     * <code>PATCH</code> </p> </li> <li> <p> <code>POST</code> </p> </li> <li> <p>
     * <code>PUT</code> </p> </li> <li> <p> <code>ALL</code> </p> </li> </ul> <p>
     * <code>ALL</code> is a special value that includes all of the listed HTTP
     * methods.</p>
     */
    inline const Aws::Vector<ResponseHeadersPolicyAccessControlAllowMethodsValues>& GetItems() const{ return m_items; }

    /**
     * <p>The list of HTTP methods. Valid values are:</p> <ul> <li> <p>
     * <code>GET</code> </p> </li> <li> <p> <code>DELETE</code> </p> </li> <li> <p>
     * <code>HEAD</code> </p> </li> <li> <p> <code>OPTIONS</code> </p> </li> <li> <p>
     * <code>PATCH</code> </p> </li> <li> <p> <code>POST</code> </p> </li> <li> <p>
     * <code>PUT</code> </p> </li> <li> <p> <code>ALL</code> </p> </li> </ul> <p>
     * <code>ALL</code> is a special value that includes all of the listed HTTP
     * methods.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>The list of HTTP methods. Valid values are:</p> <ul> <li> <p>
     * <code>GET</code> </p> </li> <li> <p> <code>DELETE</code> </p> </li> <li> <p>
     * <code>HEAD</code> </p> </li> <li> <p> <code>OPTIONS</code> </p> </li> <li> <p>
     * <code>PATCH</code> </p> </li> <li> <p> <code>POST</code> </p> </li> <li> <p>
     * <code>PUT</code> </p> </li> <li> <p> <code>ALL</code> </p> </li> </ul> <p>
     * <code>ALL</code> is a special value that includes all of the listed HTTP
     * methods.</p>
     */
    inline void SetItems(const Aws::Vector<ResponseHeadersPolicyAccessControlAllowMethodsValues>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>The list of HTTP methods. Valid values are:</p> <ul> <li> <p>
     * <code>GET</code> </p> </li> <li> <p> <code>DELETE</code> </p> </li> <li> <p>
     * <code>HEAD</code> </p> </li> <li> <p> <code>OPTIONS</code> </p> </li> <li> <p>
     * <code>PATCH</code> </p> </li> <li> <p> <code>POST</code> </p> </li> <li> <p>
     * <code>PUT</code> </p> </li> <li> <p> <code>ALL</code> </p> </li> </ul> <p>
     * <code>ALL</code> is a special value that includes all of the listed HTTP
     * methods.</p>
     */
    inline void SetItems(Aws::Vector<ResponseHeadersPolicyAccessControlAllowMethodsValues>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>The list of HTTP methods. Valid values are:</p> <ul> <li> <p>
     * <code>GET</code> </p> </li> <li> <p> <code>DELETE</code> </p> </li> <li> <p>
     * <code>HEAD</code> </p> </li> <li> <p> <code>OPTIONS</code> </p> </li> <li> <p>
     * <code>PATCH</code> </p> </li> <li> <p> <code>POST</code> </p> </li> <li> <p>
     * <code>PUT</code> </p> </li> <li> <p> <code>ALL</code> </p> </li> </ul> <p>
     * <code>ALL</code> is a special value that includes all of the listed HTTP
     * methods.</p>
     */
    inline ResponseHeadersPolicyAccessControlAllowMethods& WithItems(const Aws::Vector<ResponseHeadersPolicyAccessControlAllowMethodsValues>& value) { SetItems(value); return *this;}

    /**
     * <p>The list of HTTP methods. Valid values are:</p> <ul> <li> <p>
     * <code>GET</code> </p> </li> <li> <p> <code>DELETE</code> </p> </li> <li> <p>
     * <code>HEAD</code> </p> </li> <li> <p> <code>OPTIONS</code> </p> </li> <li> <p>
     * <code>PATCH</code> </p> </li> <li> <p> <code>POST</code> </p> </li> <li> <p>
     * <code>PUT</code> </p> </li> <li> <p> <code>ALL</code> </p> </li> </ul> <p>
     * <code>ALL</code> is a special value that includes all of the listed HTTP
     * methods.</p>
     */
    inline ResponseHeadersPolicyAccessControlAllowMethods& WithItems(Aws::Vector<ResponseHeadersPolicyAccessControlAllowMethodsValues>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>The list of HTTP methods. Valid values are:</p> <ul> <li> <p>
     * <code>GET</code> </p> </li> <li> <p> <code>DELETE</code> </p> </li> <li> <p>
     * <code>HEAD</code> </p> </li> <li> <p> <code>OPTIONS</code> </p> </li> <li> <p>
     * <code>PATCH</code> </p> </li> <li> <p> <code>POST</code> </p> </li> <li> <p>
     * <code>PUT</code> </p> </li> <li> <p> <code>ALL</code> </p> </li> </ul> <p>
     * <code>ALL</code> is a special value that includes all of the listed HTTP
     * methods.</p>
     */
    inline ResponseHeadersPolicyAccessControlAllowMethods& AddItems(const ResponseHeadersPolicyAccessControlAllowMethodsValues& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>The list of HTTP methods. Valid values are:</p> <ul> <li> <p>
     * <code>GET</code> </p> </li> <li> <p> <code>DELETE</code> </p> </li> <li> <p>
     * <code>HEAD</code> </p> </li> <li> <p> <code>OPTIONS</code> </p> </li> <li> <p>
     * <code>PATCH</code> </p> </li> <li> <p> <code>POST</code> </p> </li> <li> <p>
     * <code>PUT</code> </p> </li> <li> <p> <code>ALL</code> </p> </li> </ul> <p>
     * <code>ALL</code> is a special value that includes all of the listed HTTP
     * methods.</p>
     */
    inline ResponseHeadersPolicyAccessControlAllowMethods& AddItems(ResponseHeadersPolicyAccessControlAllowMethodsValues&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

  private:

    int m_quantity;
    bool m_quantityHasBeenSet = false;

    Aws::Vector<ResponseHeadersPolicyAccessControlAllowMethodsValues> m_items;
    bool m_itemsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
