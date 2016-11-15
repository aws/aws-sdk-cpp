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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/Method.h>

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
   * A complex type that controls whether CloudFront caches the response to requests
   * using the specified HTTP methods. There are two choices: - CloudFront caches
   * responses to GET and HEAD requests. - CloudFront caches responses to GET, HEAD,
   * and OPTIONS requests. If you pick the second choice for your S3 Origin, you may
   * need to forward Access-Control-Request-Method, Access-Control-Request-Headers
   * and Origin headers for the responses to be cached correctly.
   */
  class AWS_CLOUDFRONT_API CachedMethods
  {
  public:
    CachedMethods();
    CachedMethods(const Aws::Utils::Xml::XmlNode& xmlNode);
    CachedMethods& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

    /**
     * The number of HTTP methods for which you want CloudFront to cache responses.
     * Valid values are 2 (for caching responses to GET and HEAD requests) and 3 (for
     * caching responses to GET, HEAD, and OPTIONS requests).
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * The number of HTTP methods for which you want CloudFront to cache responses.
     * Valid values are 2 (for caching responses to GET and HEAD requests) and 3 (for
     * caching responses to GET, HEAD, and OPTIONS requests).
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * The number of HTTP methods for which you want CloudFront to cache responses.
     * Valid values are 2 (for caching responses to GET and HEAD requests) and 3 (for
     * caching responses to GET, HEAD, and OPTIONS requests).
     */
    inline CachedMethods& WithQuantity(int value) { SetQuantity(value); return *this;}

    /**
     * A complex type that contains the HTTP methods that you want CloudFront to cache
     * responses to.
     */
    inline const Aws::Vector<Method>& GetItems() const{ return m_items; }

    /**
     * A complex type that contains the HTTP methods that you want CloudFront to cache
     * responses to.
     */
    inline void SetItems(const Aws::Vector<Method>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * A complex type that contains the HTTP methods that you want CloudFront to cache
     * responses to.
     */
    inline void SetItems(Aws::Vector<Method>&& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * A complex type that contains the HTTP methods that you want CloudFront to cache
     * responses to.
     */
    inline CachedMethods& WithItems(const Aws::Vector<Method>& value) { SetItems(value); return *this;}

    /**
     * A complex type that contains the HTTP methods that you want CloudFront to cache
     * responses to.
     */
    inline CachedMethods& WithItems(Aws::Vector<Method>&& value) { SetItems(value); return *this;}

    /**
     * A complex type that contains the HTTP methods that you want CloudFront to cache
     * responses to.
     */
    inline CachedMethods& AddItems(const Method& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * A complex type that contains the HTTP methods that you want CloudFront to cache
     * responses to.
     */
    inline CachedMethods& AddItems(Method&& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

  private:
    int m_quantity;
    bool m_quantityHasBeenSet;
    Aws::Vector<Method> m_items;
    bool m_itemsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
