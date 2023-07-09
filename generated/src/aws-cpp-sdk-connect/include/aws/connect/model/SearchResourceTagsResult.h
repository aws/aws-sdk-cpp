/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/TagSet.h>
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
namespace Connect
{
namespace Model
{
  class SearchResourceTagsResult
  {
  public:
    AWS_CONNECT_API SearchResourceTagsResult();
    AWS_CONNECT_API SearchResourceTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchResourceTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of tags used in the Amazon Connect instance.</p>
     */
    inline const Aws::Vector<TagSet>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags used in the Amazon Connect instance.</p>
     */
    inline void SetTags(const Aws::Vector<TagSet>& value) { m_tags = value; }

    /**
     * <p>A list of tags used in the Amazon Connect instance.</p>
     */
    inline void SetTags(Aws::Vector<TagSet>&& value) { m_tags = std::move(value); }

    /**
     * <p>A list of tags used in the Amazon Connect instance.</p>
     */
    inline SearchResourceTagsResult& WithTags(const Aws::Vector<TagSet>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags used in the Amazon Connect instance.</p>
     */
    inline SearchResourceTagsResult& WithTags(Aws::Vector<TagSet>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags used in the Amazon Connect instance.</p>
     */
    inline SearchResourceTagsResult& AddTags(const TagSet& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags used in the Amazon Connect instance.</p>
     */
    inline SearchResourceTagsResult& AddTags(TagSet&& value) { m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchResourceTagsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchResourceTagsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline SearchResourceTagsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SearchResourceTagsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SearchResourceTagsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SearchResourceTagsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<TagSet> m_tags;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
