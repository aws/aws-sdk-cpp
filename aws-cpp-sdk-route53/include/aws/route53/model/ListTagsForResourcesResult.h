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
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A complex type containing tags for the specified resources.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTagsForResourcesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_ROUTE53_API ListTagsForResourcesResult
  {
  public:
    ListTagsForResourcesResult();
    ListTagsForResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListTagsForResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of <code>ResourceTagSet</code>s containing tags associated with the
     * specified resources.</p>
     */
    inline const Aws::Vector<ResourceTagSet>& GetResourceTagSets() const{ return m_resourceTagSets; }

    /**
     * <p>A list of <code>ResourceTagSet</code>s containing tags associated with the
     * specified resources.</p>
     */
    inline void SetResourceTagSets(const Aws::Vector<ResourceTagSet>& value) { m_resourceTagSets = value; }

    /**
     * <p>A list of <code>ResourceTagSet</code>s containing tags associated with the
     * specified resources.</p>
     */
    inline void SetResourceTagSets(Aws::Vector<ResourceTagSet>&& value) { m_resourceTagSets = std::move(value); }

    /**
     * <p>A list of <code>ResourceTagSet</code>s containing tags associated with the
     * specified resources.</p>
     */
    inline ListTagsForResourcesResult& WithResourceTagSets(const Aws::Vector<ResourceTagSet>& value) { SetResourceTagSets(value); return *this;}

    /**
     * <p>A list of <code>ResourceTagSet</code>s containing tags associated with the
     * specified resources.</p>
     */
    inline ListTagsForResourcesResult& WithResourceTagSets(Aws::Vector<ResourceTagSet>&& value) { SetResourceTagSets(std::move(value)); return *this;}

    /**
     * <p>A list of <code>ResourceTagSet</code>s containing tags associated with the
     * specified resources.</p>
     */
    inline ListTagsForResourcesResult& AddResourceTagSets(const ResourceTagSet& value) { m_resourceTagSets.push_back(value); return *this; }

    /**
     * <p>A list of <code>ResourceTagSet</code>s containing tags associated with the
     * specified resources.</p>
     */
    inline ListTagsForResourcesResult& AddResourceTagSets(ResourceTagSet&& value) { m_resourceTagSets.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ResourceTagSet> m_resourceTagSets;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
