﻿/*
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
#include <aws/cloudfront/model/CachedMethods.h>
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
   * A complex type that controls which HTTP methods CloudFront processes and
   * forwards to your Amazon S3 bucket or your custom origin. There are three
   * choices: - CloudFront forwards only GET and HEAD requests. - CloudFront forwards
   * only GET, HEAD and OPTIONS requests. - CloudFront forwards GET, HEAD, OPTIONS,
   * PUT, PATCH, POST, and DELETE requests. If you pick the third choice, you may
   * need to restrict access to your Amazon S3 bucket or to your custom origin so
   * users can't perform operations that you don't want them to. For example, you may
   * not want users to have permission to delete objects from your origin.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2016-01-28/AllowedMethods">AWS
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
     * The number of HTTP methods that you want CloudFront to forward to your origin.
     * Valid values are 2 (for GET and HEAD requests), 3 (for GET, HEAD and OPTIONS
     * requests) and 7 (for GET, HEAD, OPTIONS, PUT, PATCH, POST, and DELETE requests).
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * The number of HTTP methods that you want CloudFront to forward to your origin.
     * Valid values are 2 (for GET and HEAD requests), 3 (for GET, HEAD and OPTIONS
     * requests) and 7 (for GET, HEAD, OPTIONS, PUT, PATCH, POST, and DELETE requests).
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * The number of HTTP methods that you want CloudFront to forward to your origin.
     * Valid values are 2 (for GET and HEAD requests), 3 (for GET, HEAD and OPTIONS
     * requests) and 7 (for GET, HEAD, OPTIONS, PUT, PATCH, POST, and DELETE requests).
     */
    inline AllowedMethods& WithQuantity(int value) { SetQuantity(value); return *this;}

    /**
     * A complex type that contains the HTTP methods that you want CloudFront to
     * process and forward to your origin.
     */
    inline const Aws::Vector<Method>& GetItems() const{ return m_items; }

    /**
     * A complex type that contains the HTTP methods that you want CloudFront to
     * process and forward to your origin.
     */
    inline void SetItems(const Aws::Vector<Method>& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * A complex type that contains the HTTP methods that you want CloudFront to
     * process and forward to your origin.
     */
    inline void SetItems(Aws::Vector<Method>&& value) { m_itemsHasBeenSet = true; m_items = value; }

    /**
     * A complex type that contains the HTTP methods that you want CloudFront to
     * process and forward to your origin.
     */
    inline AllowedMethods& WithItems(const Aws::Vector<Method>& value) { SetItems(value); return *this;}

    /**
     * A complex type that contains the HTTP methods that you want CloudFront to
     * process and forward to your origin.
     */
    inline AllowedMethods& WithItems(Aws::Vector<Method>&& value) { SetItems(value); return *this;}

    /**
     * A complex type that contains the HTTP methods that you want CloudFront to
     * process and forward to your origin.
     */
    inline AllowedMethods& AddItems(const Method& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    /**
     * A complex type that contains the HTTP methods that you want CloudFront to
     * process and forward to your origin.
     */
    inline AllowedMethods& AddItems(Method&& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }

    
    inline const CachedMethods& GetCachedMethods() const{ return m_cachedMethods; }

    
    inline void SetCachedMethods(const CachedMethods& value) { m_cachedMethodsHasBeenSet = true; m_cachedMethods = value; }

    
    inline void SetCachedMethods(CachedMethods&& value) { m_cachedMethodsHasBeenSet = true; m_cachedMethods = value; }

    
    inline AllowedMethods& WithCachedMethods(const CachedMethods& value) { SetCachedMethods(value); return *this;}

    
    inline AllowedMethods& WithCachedMethods(CachedMethods&& value) { SetCachedMethods(value); return *this;}

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
