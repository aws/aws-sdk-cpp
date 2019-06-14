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
#include <aws/cloudfront/model/CachedMethods.h>
#include <aws/cloudfront/model/Method.h>
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
   * <p>A complex type that controls which HTTP methods CloudFront processes and
   * forwards to your Amazon S3 bucket or your custom origin. There are three
   * choices:</p> <ul> <li> <p>CloudFront forwards only <code>GET</code> and
   * <code>HEAD</code> requests.</p> </li> <li> <p>CloudFront forwards only
   * <code>GET</code>, <code>HEAD</code>, and <code>OPTIONS</code> requests.</p>
   * </li> <li> <p>CloudFront forwards <code>GET, HEAD, OPTIONS, PUT, PATCH,
   * POST</code>, and <code>DELETE</code> requests.</p> </li> </ul> <p>If you pick
   * the third choice, you may need to restrict access to your Amazon S3 bucket or to
   * your custom origin so users can't perform operations that you don't want them
   * to. For example, you might not want users to have permissions to delete objects
   * from your origin.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2019-03-26/AllowedMethods">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFRONT_API AllowedMethods
  {
  public:
    AllowedMethods();
    AllowedMethods(const Aws::Utils::Xml::XmlNode& xmlNode);
    AllowedMethods& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The number of HTTP methods that you want CloudFront to forward to your
     * origin. Valid values are 2 (for <code>GET</code> and <code>HEAD</code>
     * requests), 3 (for <code>GET</code>, <code>HEAD</code>, and <code>OPTIONS</code>
     * requests) and 7 (for <code>GET, HEAD, OPTIONS, PUT, PATCH, POST</code>, and
     * <code>DELETE</code> requests).</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The number of HTTP methods that you want CloudFront to forward to your
     * origin. Valid values are 2 (for <code>GET</code> and <code>HEAD</code>
     * requests), 3 (for <code>GET</code>, <code>HEAD</code>, and <code>OPTIONS</code>
     * requests) and 7 (for <code>GET, HEAD, OPTIONS, PUT, PATCH, POST</code>, and
     * <code>DELETE</code> requests).</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The number of HTTP methods that you want CloudFront to forward to your
     * origin. Valid values are 2 (for <code>GET</code> and <code>HEAD</code>
     * requests), 3 (for <code>GET</code>, <code>HEAD</code>, and <code>OPTIONS</code>
     * requests) and 7 (for <code>GET, HEAD, OPTIONS, PUT, PATCH, POST</code>, and
     * <code>DELETE</code> requests).</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The number of HTTP methods that you want CloudFront to forward to your
     * origin. Valid values are 2 (for <code>GET</code> and <code>HEAD</code>
     * requests), 3 (for <code>GET</code>, <code>HEAD</code>, and <code>OPTIONS</code>
     * requests) and 7 (for <code>GET, HEAD, OPTIONS, PUT, PATCH, POST</code>, and
     * <code>DELETE</code> requests).</p>
     */
    inline AllowedMethods& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>A complex type that contains the HTTP methods that you want CloudFront to
     * process and forward to your origin.</p>
     */
    inline const Aws::Vector<Method>& GetItems() const{ return m_items; }

    /**
     * <p>A complex type that contains the HTTP methods that you want CloudFront to
     * process and forward to your origin.</p>
     */
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }

    /**
     * <p>A complex type that contains the HTTP methods that you want CloudFront to
     * process and forward to your origin.</p>
     */
    inline void SetItems(const Aws::Vector<Method>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * <p>A complex type that contains the HTTP methods that you want CloudFront to
     * process and forward to your origin.</p>
     */
    inline void SetItems(Aws::Vector<Method>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }

    /**
     * <p>A complex type that contains the HTTP methods that you want CloudFront to
     * process and forward to your origin.</p>
     */
    inline AllowedMethods& WithItems(const Aws::Vector<Method>& value) { SetItems(value); return *this;}

    /**
     * <p>A complex type that contains the HTTP methods that you want CloudFront to
     * process and forward to your origin.</p>
     */
    inline AllowedMethods& WithItems(Aws::Vector<Method>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>A complex type that contains the HTTP methods that you want CloudFront to
     * process and forward to your origin.</p>
     */
    inline AllowedMethods& AddItems(const Method& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * <p>A complex type that contains the HTTP methods that you want CloudFront to
     * process and forward to your origin.</p>
     */
    inline AllowedMethods& AddItems(Method&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }


    
    inline const CachedMethods& GetCachedMethods() const{ return m_cachedMethods; }

    
    inline bool CachedMethodsHasBeenSet() const { return m_cachedMethodsHasBeenSet; }

    
    inline void SetCachedMethods(const CachedMethods& value) { m_cachedMethodsHasBeenSet = true; m_cachedMethods = value; }

    
    inline void SetCachedMethods(CachedMethods&& value) { m_cachedMethodsHasBeenSet = true; m_cachedMethods = std::move(value); }

    
    inline AllowedMethods& WithCachedMethods(const CachedMethods& value) { SetCachedMethods(value); return *this;}

    
    inline AllowedMethods& WithCachedMethods(CachedMethods&& value) { SetCachedMethods(std::move(value)); return *this;}

  private:

    int m_quantity;
    bool m_quantityHasBeenSet;

    Aws::Vector<Method> m_items;
    bool m_itemsHasBeenSet;

    CachedMethods m_cachedMethods;
    bool m_cachedMethodsHasBeenSet;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
