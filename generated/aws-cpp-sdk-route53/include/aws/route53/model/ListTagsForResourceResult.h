﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ResourceTagSet.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type that contains information about the health checks or hosted
   * zones for which you want to list tags.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTagsForResourceResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API ListTagsForResourceResult
  {
  public:
    ListTagsForResourceResult();
    ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A <code>ResourceTagSet</code> containing tags associated with the specified
     * resource.</p>
     */
    inline const ResourceTagSet& GetResourceTagSet() const{ return m_resourceTagSet; }

    /**
     * <p>A <code>ResourceTagSet</code> containing tags associated with the specified
     * resource.</p>
     */
    inline void SetResourceTagSet(const ResourceTagSet& value) { m_resourceTagSet = value; }

    /**
     * <p>A <code>ResourceTagSet</code> containing tags associated with the specified
     * resource.</p>
     */
    inline void SetResourceTagSet(ResourceTagSet&& value) { m_resourceTagSet = std::move(value); }

    /**
     * <p>A <code>ResourceTagSet</code> containing tags associated with the specified
     * resource.</p>
     */
    inline ListTagsForResourceResult& WithResourceTagSet(const ResourceTagSet& value) { SetResourceTagSet(value); return *this;}

    /**
     * <p>A <code>ResourceTagSet</code> containing tags associated with the specified
     * resource.</p>
     */
    inline ListTagsForResourceResult& WithResourceTagSet(ResourceTagSet&& value) { SetResourceTagSet(std::move(value)); return *this;}

  private:

    ResourceTagSet m_resourceTagSet;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
