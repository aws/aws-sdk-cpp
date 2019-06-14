/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A complex type that specifies the request headers, if any, that you want
   * CloudFront to base caching on for this cache behavior. </p> <p>For the headers
   * that you specify, CloudFront caches separate versions of a specified object
   * based on the header values in viewer requests. For example, suppose viewer
   * requests for <code>logo.jpg</code> contain a custom <code>product</code> header
   * that has a value of either <code>acme</code> or <code>apex</code>, and you
   * configure CloudFront to cache your content based on values in the
   * <code>product</code> header. CloudFront forwards the <code>product</code> header
   * to the origin and caches the response from the origin once for each header
   * value. For more information about caching based on header values, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/header-caching.html">How
   * CloudFront Forwards and Caches Headers</a> in the <i>Amazon CloudFront Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/Headers">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API Headers
  {
  public:
    Headers();
    Headers(const Aws::Utils::Xml::XmlNode& xmlNode);
    Headers& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The number of different headers that you want CloudFront to base caching on
     * for this cache behavior. You can configure each cache behavior in a web
     * distribution to do one of the following:</p> <ul> <li> <p> <b>Forward all
     * headers to your origin</b>: Specify <code>1</code> for <code>Quantity</code> and
     * <code>*</code> for <code>Name</code>.</p> <important> <p>CloudFront doesn't
     * cache the objects that are associated with this cache behavior. Instead,
     * CloudFront sends every request to the origin. </p> </important> </li> <li> <p>
     * <b>Forward a whitelist of headers you specify</b>: Specify the number of headers
     * that you want CloudFront to base caching on. Then specify the header names in
     * <code>Name</code> elements. CloudFront caches your objects based on the values
     * in the specified headers.</p> </li> <li> <p> <b>Forward only the default
     * headers</b>: Specify <code>0</code> for <code>Quantity</code> and omit
     * <code>Items</code>. In this configuration, CloudFront doesn't cache based on the
     * values in the request headers.</p> </li> </ul> <p>Regardless of which option you
     * choose, CloudFront forwards headers to your origin based on whether the origin
     * is an S3 bucket or a custom origin. See the following documentation:</p> <ul>
     * <li> <p> <b>S3 bucket</b>: See <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/RequestAndResponseBehaviorS3Origin.html#request-s3-removed-headers">HTTP
     * Request Headers That CloudFront Removes or Updates</a> </p> </li> <li> <p>
     * <b>Custom origin</b>: See <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/RequestAndResponseBehaviorCustomOrigin.html#request-custom-headers-behavior">HTTP
     * Request Headers and CloudFront Behavior</a> </p> </li> </ul>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of different headers that you want CloudFront to base caching on
     * for this cache behavior. You can configure each cache behavior in a web
     * distribution to do one of the following:</p> <ul> <li> <p> <b>Forward all
     * headers to your origin</b>: Specify <code>1</code> for <code>Quantity</code> and
     * <code>*</code> for <code>Name</code>.</p> <important> <p>CloudFront doesn't
     * cache the objects that are associated with this cache behavior. Instead,
     * CloudFront sends every request to the origin. </p> </important> </li> <li> <p>
     * <b>Forward a whitelist of headers you specify</b>: Specify the number of headers
     * that you want CloudFront to base caching on. Then specify the header names in
     * <code>Name</code> elements. CloudFront caches your objects based on the values
     * in the specified headers.</p> </li> <li> <p> <b>Forward only the default
     * headers</b>: Specify <code>0</code> for <code>Quantity</code> and omit
     * <code>Items</code>. In this configuration, CloudFront doesn't cache based on the
     * values in the request headers.</p> </li> </ul> <p>Regardless of which option you
     * choose, CloudFront forwards headers to your origin based on whether the origin
     * is an S3 bucket or a custom origin. See the following documentation:</p> <ul>
     * <li> <p> <b>S3 bucket</b>: See <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/RequestAndResponseBehaviorS3Origin.html#request-s3-removed-headers">HTTP
     * Request Headers That CloudFront Removes or Updates</a> </p> </li> <li> <p>
     * <b>Custom origin</b>: See <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/RequestAndResponseBehaviorCustomOrigin.html#request-custom-headers-behavior">HTTP
     * Request Headers and CloudFront Behavior</a> </p> </li> </ul>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of different headers that you want CloudFront to base caching on
     * for this cache behavior. You can configure each cache behavior in a web
     * distribution to do one of the following:</p> <ul> <li> <p> <b>Forward all
     * headers to your origin</b>: Specify <code>1</code> for <code>Quantity</code> and
     * <code>*</code> for <code>Name</code>.</p> <important> <p>CloudFront doesn't
     * cache the objects that are associated with this cache behavior. Instead,
     * CloudFront sends every request to the origin. </p> </important> </li> <li> <p>
     * <b>Forward a whitelist of headers you specify</b>: Specify the number of headers
     * that you want CloudFront to base caching on. Then specify the header names in
     * <code>Name</code> elements. CloudFront caches your objects based on the values
     * in the specified headers.</p> </li> <li> <p> <b>Forward only the default
     * headers</b>: Specify <code>0</code> for <code>Quantity</code> and omit
     * <code>Items</code>. In this configuration, CloudFront doesn't cache based on the
     * values in the request headers.</p> </li> </ul> <p>Regardless of which option you
     * choose, CloudFront forwards headers to your origin based on whether the origin
     * is an S3 bucket or a custom origin. See the following documentation:</p> <ul>
     * <li> <p> <b>S3 bucket</b>: See <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/RequestAndResponseBehaviorS3Origin.html#request-s3-removed-headers">HTTP
     * Request Headers That CloudFront Removes or Updates</a> </p> </li> <li> <p>
     * <b>Custom origin</b>: See <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/RequestAndResponseBehaviorCustomOrigin.html#request-custom-headers-behavior">HTTP
     * Request Headers and CloudFront Behavior</a> </p> </li> </ul>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of different headers that you want CloudFront to base caching on
     * for this cache behavior. You can configure each cache behavior in a web
     * distribution to do one of the following:</p> <ul> <li> <p> <b>Forward all
     * headers to your origin</b>: Specify <code>1</code> for <code>Quantity</code> and
     * <code>*</code> for <code>Name</code>.</p> <important> <p>CloudFront doesn't
     * cache the objects that are associated with this cache behavior. Instead,
     * CloudFront sends every request to the origin. </p> </important> </li> <li> <p>
     * <b>Forward a whitelist of headers you specify</b>: Specify the number of headers
     * that you want CloudFront to base caching on. Then specify the header names in
     * <code>Name</code> elements. CloudFront caches your objects based on the values
     * in the specified headers.</p> </li> <li> <p> <b>Forward only the default
     * headers</b>: Specify <code>0</code> for <code>Quantity</code> and omit
     * <code>Items</code>. In this configuration, CloudFront doesn't cache based on the
     * values in the request headers.</p> </li> </ul> <p>Regardless of which option you
     * choose, CloudFront forwards headers to your origin based on whether the origin
     * is an S3 bucket or a custom origin. See the following documentation:</p> <ul>
     * <li> <p> <b>S3 bucket</b>: See <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/RequestAndResponseBehaviorS3Origin.html#request-s3-removed-headers">HTTP
     * Request Headers That CloudFront Removes or Updates</a> </p> </li> <li> <p>
     * <b>Custom origin</b>: See <a
     * href="https://docs.aws.amazon.com/AmazonCloudFront/latest/DeveloperGuide/RequestAndResponseBehaviorCustomOrigin.html#request-custom-headers-behavior">HTTP
     * Request Headers and CloudFront Behavior</a> </p> </li> </ul>
     */
    inline Headers& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>A list that contains one <code>Name</code> element for each header that you
     * want CloudFront to use for caching in this cache behavior. If
     * <code>Quantity</code> is <code>0</code>, omit <code>Items</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetItems() const{ return m_items; }

    /**
     * <p>A list that contains one <code>Name</code> element for each header that you
     * want CloudFront to use for caching in this cache behavior. If
     * <code>Quantity</code> is <code>0</code>, omit <code>Items</code>.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>A list that contains one <code>Name</code> element for each header that you
     * want CloudFront to use for caching in this cache behavior. If
     * <code>Quantity</code> is <code>0</code>, omit <code>Items</code>.</p>
     */
    inline void SetItems(const Aws::Vector<Aws::String>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>A list that contains one <code>Name</code> element for each header that you
     * want CloudFront to use for caching in this cache behavior. If
     * <code>Quantity</code> is <code>0</code>, omit <code>Items</code>.</p>
     */
    inline void SetItems(Aws::Vector<Aws::String>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>A list that contains one <code>Name</code> element for each header that you
     * want CloudFront to use for caching in this cache behavior. If
     * <code>Quantity</code> is <code>0</code>, omit <code>Items</code>.</p>
     */
    inline Headers& WithItems(const Aws::Vector<Aws::String>& value) { SetItems(value); return *this;}

    /**
     * <p>A list that contains one <code>Name</code> element for each header that you
     * want CloudFront to use for caching in this cache behavior. If
     * <code>Quantity</code> is <code>0</code>, omit <code>Items</code>.</p>
     */
    inline Headers& WithItems(Aws::Vector<Aws::String>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A list that contains one <code>Name</code> element for each header that you
     * want CloudFront to use for caching in this cache behavior. If
     * <code>Quantity</code> is <code>0</code>, omit <code>Items</code>.</p>
     */
    inline Headers& AddItems(const Aws::String& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>A list that contains one <code>Name</code> element for each header that you
     * want CloudFront to use for caching in this cache behavior. If
     * <code>Quantity</code> is <code>0</code>, omit <code>Items</code>.</p>
     */
    inline Headers& AddItems(Aws::String&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }

    /**
     * <p>A list that contains one <code>Name</code> element for each header that you
     * want CloudFront to use for caching in this cache behavior. If
     * <code>Quantity</code> is <code>0</code>, omit <code>Items</code>.</p>
     */
    inline Headers& AddItems(const char* value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

  private:

    int m_quantity;
    bool m_quantityHasBeenSet;

    Aws::Vector<Aws::String> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
