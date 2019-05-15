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
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/Tag.h>
#include <utility>

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
namespace CodePipeline
{
namespace Model
{
  class AWS_CODEPIPELINE_API ListTagsForResourceResult
  {
  public:
    ListTagsForResourceResult();
    ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The tags for the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>The tags for the resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags for the resource.</p>
     */
    inline ListTagsForResourceResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the resource.</p>
     */
    inline ListTagsForResourceResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the resource.</p>
     */
    inline ListTagsForResourceResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the resource.</p>
     */
    inline ListTagsForResourceResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent API call to return the next
     * page of the list. However, the ListTagsforResource call lists all available tags
     * in one call and does not use pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent API call to return the next
     * page of the list. However, the ListTagsforResource call lists all available tags
     * in one call and does not use pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent API call to return the next
     * page of the list. However, the ListTagsforResource call lists all available tags
     * in one call and does not use pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent API call to return the next
     * page of the list. However, the ListTagsforResource call lists all available tags
     * in one call and does not use pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent API call to return the next
     * page of the list. However, the ListTagsforResource call lists all available tags
     * in one call and does not use pagination.</p>
     */
    inline ListTagsForResourceResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent API call to return the next
     * page of the list. However, the ListTagsforResource call lists all available tags
     * in one call and does not use pagination.</p>
     */
    inline ListTagsForResourceResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent API call to return the next
     * page of the list. However, the ListTagsforResource call lists all available tags
     * in one call and does not use pagination.</p>
     */
    inline ListTagsForResourceResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Tag> m_tags;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
