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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/Tag.h>

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
namespace DirectoryService
{
namespace Model
{
  class AWS_DIRECTORYSERVICE_API ListTagsForResourceResult
  {
  public:
    ListTagsForResourceResult();
    ListTagsForResourceResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTagsForResourceResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>List of tags returned by the ListTagsForResource operation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>List of tags returned by the ListTagsForResource operation.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>List of tags returned by the ListTagsForResource operation.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = value; }

    /**
     * <p>List of tags returned by the ListTagsForResource operation.</p>
     */
    inline ListTagsForResourceResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>List of tags returned by the ListTagsForResource operation.</p>
     */
    inline ListTagsForResourceResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>List of tags returned by the ListTagsForResource operation.</p>
     */
    inline ListTagsForResourceResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>List of tags returned by the ListTagsForResource operation.</p>
     */
    inline ListTagsForResourceResult& AddTags(Tag&& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline ListTagsForResourceResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline ListTagsForResourceResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline ListTagsForResourceResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Tag> m_tags;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
