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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudDirectory
{
namespace Model
{
  class AWS_CLOUDDIRECTORY_API ListObjectChildrenResult
  {
  public:
    ListObjectChildrenResult();
    ListObjectChildrenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListObjectChildrenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Children structure, which is a map with key as the <code>LinkName</code> and
     * <code>ObjectIdentifier</code> as the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetChildren() const{ return m_children; }

    /**
     * <p>Children structure, which is a map with key as the <code>LinkName</code> and
     * <code>ObjectIdentifier</code> as the value.</p>
     */
    inline void SetChildren(const Aws::Map<Aws::String, Aws::String>& value) { m_children = value; }

    /**
     * <p>Children structure, which is a map with key as the <code>LinkName</code> and
     * <code>ObjectIdentifier</code> as the value.</p>
     */
    inline void SetChildren(Aws::Map<Aws::String, Aws::String>&& value) { m_children = std::move(value); }

    /**
     * <p>Children structure, which is a map with key as the <code>LinkName</code> and
     * <code>ObjectIdentifier</code> as the value.</p>
     */
    inline ListObjectChildrenResult& WithChildren(const Aws::Map<Aws::String, Aws::String>& value) { SetChildren(value); return *this;}

    /**
     * <p>Children structure, which is a map with key as the <code>LinkName</code> and
     * <code>ObjectIdentifier</code> as the value.</p>
     */
    inline ListObjectChildrenResult& WithChildren(Aws::Map<Aws::String, Aws::String>&& value) { SetChildren(std::move(value)); return *this;}

    /**
     * <p>Children structure, which is a map with key as the <code>LinkName</code> and
     * <code>ObjectIdentifier</code> as the value.</p>
     */
    inline ListObjectChildrenResult& AddChildren(const Aws::String& key, const Aws::String& value) { m_children.emplace(key, value); return *this; }

    /**
     * <p>Children structure, which is a map with key as the <code>LinkName</code> and
     * <code>ObjectIdentifier</code> as the value.</p>
     */
    inline ListObjectChildrenResult& AddChildren(Aws::String&& key, const Aws::String& value) { m_children.emplace(std::move(key), value); return *this; }

    /**
     * <p>Children structure, which is a map with key as the <code>LinkName</code> and
     * <code>ObjectIdentifier</code> as the value.</p>
     */
    inline ListObjectChildrenResult& AddChildren(const Aws::String& key, Aws::String&& value) { m_children.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Children structure, which is a map with key as the <code>LinkName</code> and
     * <code>ObjectIdentifier</code> as the value.</p>
     */
    inline ListObjectChildrenResult& AddChildren(Aws::String&& key, Aws::String&& value) { m_children.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Children structure, which is a map with key as the <code>LinkName</code> and
     * <code>ObjectIdentifier</code> as the value.</p>
     */
    inline ListObjectChildrenResult& AddChildren(const char* key, Aws::String&& value) { m_children.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Children structure, which is a map with key as the <code>LinkName</code> and
     * <code>ObjectIdentifier</code> as the value.</p>
     */
    inline ListObjectChildrenResult& AddChildren(Aws::String&& key, const char* value) { m_children.emplace(std::move(key), value); return *this; }

    /**
     * <p>Children structure, which is a map with key as the <code>LinkName</code> and
     * <code>ObjectIdentifier</code> as the value.</p>
     */
    inline ListObjectChildrenResult& AddChildren(const char* key, const char* value) { m_children.emplace(key, value); return *this; }


    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline ListObjectChildrenResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListObjectChildrenResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListObjectChildrenResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_children;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
