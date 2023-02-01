/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/TagListEntry.h>
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
namespace DataSync
{
namespace Model
{
  /**
   * <p>ListTagsForResourceResponse</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/ListTagsForResourceResponse">AWS
   * API Reference</a></p>
   */
  class ListTagsForResourceResult
  {
  public:
    AWS_DATASYNC_API ListTagsForResourceResult();
    AWS_DATASYNC_API ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of tags applied to the specified resource.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of tags applied to the specified resource.</p>
     */
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tags = value; }

    /**
     * <p>An array of tags applied to the specified resource.</p>
     */
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tags = std::move(value); }

    /**
     * <p>An array of tags applied to the specified resource.</p>
     */
    inline ListTagsForResourceResult& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of tags applied to the specified resource.</p>
     */
    inline ListTagsForResourceResult& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of tags applied to the specified resource.</p>
     */
    inline ListTagsForResourceResult& AddTags(const TagListEntry& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>An array of tags applied to the specified resource.</p>
     */
    inline ListTagsForResourceResult& AddTags(TagListEntry&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline ListTagsForResourceResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline ListTagsForResourceResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline ListTagsForResourceResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TagListEntry> m_tags;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
