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
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appmesh/model/TagRef.h>
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
namespace AppMesh
{
namespace Model
{
  /**
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/ListTagsForResourceOutput">AWS
   * API Reference</a></p>
   */
  class AWS_APPMESH_API ListTagsForResourceResult
  {
  public:
    ListTagsForResourceResult();
    ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTagsForResource</code>
         request. When the results of a
     * <code>ListTagsForResource</code> request exceed
            <code>limit</code>,
     * you can use this value to retrieve the next page of results. This
         value
     * is <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTagsForResource</code>
         request. When the results of a
     * <code>ListTagsForResource</code> request exceed
            <code>limit</code>,
     * you can use this value to retrieve the next page of results. This
         value
     * is <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTagsForResource</code>
         request. When the results of a
     * <code>ListTagsForResource</code> request exceed
            <code>limit</code>,
     * you can use this value to retrieve the next page of results. This
         value
     * is <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTagsForResource</code>
         request. When the results of a
     * <code>ListTagsForResource</code> request exceed
            <code>limit</code>,
     * you can use this value to retrieve the next page of results. This
         value
     * is <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTagsForResource</code>
         request. When the results of a
     * <code>ListTagsForResource</code> request exceed
            <code>limit</code>,
     * you can use this value to retrieve the next page of results. This
         value
     * is <code>null</code> when there are no more results to return.</p>
     */
    inline ListTagsForResourceResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTagsForResource</code>
         request. When the results of a
     * <code>ListTagsForResource</code> request exceed
            <code>limit</code>,
     * you can use this value to retrieve the next page of results. This
         value
     * is <code>null</code> when there are no more results to return.</p>
     */
    inline ListTagsForResourceResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListTagsForResource</code>
         request. When the results of a
     * <code>ListTagsForResource</code> request exceed
            <code>limit</code>,
     * you can use this value to retrieve the next page of results. This
         value
     * is <code>null</code> when there are no more results to return.</p>
     */
    inline ListTagsForResourceResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The tags for the resource.</p>
     */
    inline const Aws::Vector<TagRef>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags for the resource.</p>
     */
    inline void SetTags(const Aws::Vector<TagRef>& value) { m_tags = value; }

    /**
     * <p>The tags for the resource.</p>
     */
    inline void SetTags(Aws::Vector<TagRef>&& value) { m_tags = std::move(value); }

    /**
     * <p>The tags for the resource.</p>
     */
    inline ListTagsForResourceResult& WithTags(const Aws::Vector<TagRef>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags for the resource.</p>
     */
    inline ListTagsForResourceResult& WithTags(Aws::Vector<TagRef>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags for the resource.</p>
     */
    inline ListTagsForResourceResult& AddTags(const TagRef& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>The tags for the resource.</p>
     */
    inline ListTagsForResourceResult& AddTags(TagRef&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<TagRef> m_tags;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
