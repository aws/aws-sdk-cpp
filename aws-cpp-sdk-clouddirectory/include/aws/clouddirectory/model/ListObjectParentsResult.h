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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
  class AWS_CLOUDDIRECTORY_API ListObjectParentsResult
  {
  public:
    ListObjectParentsResult();
    ListObjectParentsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListObjectParentsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParents() const{ return m_parents; }

    /**
     * <p>Parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline void SetParents(const Aws::Map<Aws::String, Aws::String>& value) { m_parents = value; }

    /**
     * <p>Parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline void SetParents(Aws::Map<Aws::String, Aws::String>&& value) { m_parents = value; }

    /**
     * <p>Parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline ListObjectParentsResult& WithParents(const Aws::Map<Aws::String, Aws::String>& value) { SetParents(value); return *this;}

    /**
     * <p>Parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline ListObjectParentsResult& WithParents(Aws::Map<Aws::String, Aws::String>&& value) { SetParents(value); return *this;}

    /**
     * <p>Parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline ListObjectParentsResult& AddParents(const Aws::String& key, const Aws::String& value) { m_parents[key] = value; return *this; }

    /**
     * <p>Parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline ListObjectParentsResult& AddParents(Aws::String&& key, const Aws::String& value) { m_parents[key] = value; return *this; }

    /**
     * <p>Parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline ListObjectParentsResult& AddParents(const Aws::String& key, Aws::String&& value) { m_parents[key] = value; return *this; }

    /**
     * <p>Parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline ListObjectParentsResult& AddParents(Aws::String&& key, Aws::String&& value) { m_parents[key] = value; return *this; }

    /**
     * <p>Parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline ListObjectParentsResult& AddParents(const char* key, Aws::String&& value) { m_parents[key] = value; return *this; }

    /**
     * <p>Parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline ListObjectParentsResult& AddParents(Aws::String&& key, const char* value) { m_parents[key] = value; return *this; }

    /**
     * <p>Parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline ListObjectParentsResult& AddParents(const char* key, const char* value) { m_parents[key] = value; return *this; }

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
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline ListObjectParentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListObjectParentsResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListObjectParentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Map<Aws::String, Aws::String> m_parents;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
