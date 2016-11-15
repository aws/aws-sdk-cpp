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
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53domains/model/Tag.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{
  /**
   * <p>The ListTagsForDomain response includes the following elements.</p>
   */
  class AWS_ROUTE53DOMAINS_API ListTagsForDomainResult
  {
  public:
    ListTagsForDomainResult();
    ListTagsForDomainResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTagsForDomainResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A list of the tags that are associated with the specified domain.</p>
     * <p>Type: A complex type containing a list of tags</p> <p>Each tag includes the
     * following elements.</p> <ul> <li><p>Key</p> <p>The key (name) of a tag.</p>
     * <p>Type: String</p> </li> <li><p>Value</p> <p>The value of a tag.</p> <p>Type:
     * String</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    /**
     * <p>A list of the tags that are associated with the specified domain.</p>
     * <p>Type: A complex type containing a list of tags</p> <p>Each tag includes the
     * following elements.</p> <ul> <li><p>Key</p> <p>The key (name) of a tag.</p>
     * <p>Type: String</p> </li> <li><p>Value</p> <p>The value of a tag.</p> <p>Type:
     * String</p> </li> </ul>
     */
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagList = value; }

    /**
     * <p>A list of the tags that are associated with the specified domain.</p>
     * <p>Type: A complex type containing a list of tags</p> <p>Each tag includes the
     * following elements.</p> <ul> <li><p>Key</p> <p>The key (name) of a tag.</p>
     * <p>Type: String</p> </li> <li><p>Value</p> <p>The value of a tag.</p> <p>Type:
     * String</p> </li> </ul>
     */
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagList = value; }

    /**
     * <p>A list of the tags that are associated with the specified domain.</p>
     * <p>Type: A complex type containing a list of tags</p> <p>Each tag includes the
     * following elements.</p> <ul> <li><p>Key</p> <p>The key (name) of a tag.</p>
     * <p>Type: String</p> </li> <li><p>Value</p> <p>The value of a tag.</p> <p>Type:
     * String</p> </li> </ul>
     */
    inline ListTagsForDomainResult& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    /**
     * <p>A list of the tags that are associated with the specified domain.</p>
     * <p>Type: A complex type containing a list of tags</p> <p>Each tag includes the
     * following elements.</p> <ul> <li><p>Key</p> <p>The key (name) of a tag.</p>
     * <p>Type: String</p> </li> <li><p>Value</p> <p>The value of a tag.</p> <p>Type:
     * String</p> </li> </ul>
     */
    inline ListTagsForDomainResult& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(value); return *this;}

    /**
     * <p>A list of the tags that are associated with the specified domain.</p>
     * <p>Type: A complex type containing a list of tags</p> <p>Each tag includes the
     * following elements.</p> <ul> <li><p>Key</p> <p>The key (name) of a tag.</p>
     * <p>Type: String</p> </li> <li><p>Value</p> <p>The value of a tag.</p> <p>Type:
     * String</p> </li> </ul>
     */
    inline ListTagsForDomainResult& AddTagList(const Tag& value) { m_tagList.push_back(value); return *this; }

    /**
     * <p>A list of the tags that are associated with the specified domain.</p>
     * <p>Type: A complex type containing a list of tags</p> <p>Each tag includes the
     * following elements.</p> <ul> <li><p>Key</p> <p>The key (name) of a tag.</p>
     * <p>Type: String</p> </li> <li><p>Value</p> <p>The value of a tag.</p> <p>Type:
     * String</p> </li> </ul>
     */
    inline ListTagsForDomainResult& AddTagList(Tag&& value) { m_tagList.push_back(value); return *this; }

  private:
    Aws::Vector<Tag> m_tagList;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
