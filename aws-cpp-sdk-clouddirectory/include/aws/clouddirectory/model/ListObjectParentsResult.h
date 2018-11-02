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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/clouddirectory/model/ObjectIdentifierAndLinkNameTuple.h>
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
  class AWS_CLOUDDIRECTORY_API ListObjectParentsResult
  {
  public:
    ListObjectParentsResult();
    ListObjectParentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListObjectParentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParents() const{ return m_parents; }

    /**
     * <p>The parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline void SetParents(const Aws::Map<Aws::String, Aws::String>& value) { m_parents = value; }

    /**
     * <p>The parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline void SetParents(Aws::Map<Aws::String, Aws::String>&& value) { m_parents = std::move(value); }

    /**
     * <p>The parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline ListObjectParentsResult& WithParents(const Aws::Map<Aws::String, Aws::String>& value) { SetParents(value); return *this;}

    /**
     * <p>The parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline ListObjectParentsResult& WithParents(Aws::Map<Aws::String, Aws::String>&& value) { SetParents(std::move(value)); return *this;}

    /**
     * <p>The parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline ListObjectParentsResult& AddParents(const Aws::String& key, const Aws::String& value) { m_parents.emplace(key, value); return *this; }

    /**
     * <p>The parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline ListObjectParentsResult& AddParents(Aws::String&& key, const Aws::String& value) { m_parents.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline ListObjectParentsResult& AddParents(const Aws::String& key, Aws::String&& value) { m_parents.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline ListObjectParentsResult& AddParents(Aws::String&& key, Aws::String&& value) { m_parents.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline ListObjectParentsResult& AddParents(const char* key, Aws::String&& value) { m_parents.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline ListObjectParentsResult& AddParents(Aws::String&& key, const char* value) { m_parents.emplace(std::move(key), value); return *this; }

    /**
     * <p>The parent structure, which is a map with key as the
     * <code>ObjectIdentifier</code> and LinkName as the value.</p>
     */
    inline ListObjectParentsResult& AddParents(const char* key, const char* value) { m_parents.emplace(key, value); return *this; }


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
    inline ListObjectParentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListObjectParentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListObjectParentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Returns a list of parent reference and LinkName Tuples.</p>
     */
    inline const Aws::Vector<ObjectIdentifierAndLinkNameTuple>& GetParentLinks() const{ return m_parentLinks; }

    /**
     * <p>Returns a list of parent reference and LinkName Tuples.</p>
     */
    inline void SetParentLinks(const Aws::Vector<ObjectIdentifierAndLinkNameTuple>& value) { m_parentLinks = value; }

    /**
     * <p>Returns a list of parent reference and LinkName Tuples.</p>
     */
    inline void SetParentLinks(Aws::Vector<ObjectIdentifierAndLinkNameTuple>&& value) { m_parentLinks = std::move(value); }

    /**
     * <p>Returns a list of parent reference and LinkName Tuples.</p>
     */
    inline ListObjectParentsResult& WithParentLinks(const Aws::Vector<ObjectIdentifierAndLinkNameTuple>& value) { SetParentLinks(value); return *this;}

    /**
     * <p>Returns a list of parent reference and LinkName Tuples.</p>
     */
    inline ListObjectParentsResult& WithParentLinks(Aws::Vector<ObjectIdentifierAndLinkNameTuple>&& value) { SetParentLinks(std::move(value)); return *this;}

    /**
     * <p>Returns a list of parent reference and LinkName Tuples.</p>
     */
    inline ListObjectParentsResult& AddParentLinks(const ObjectIdentifierAndLinkNameTuple& value) { m_parentLinks.push_back(value); return *this; }

    /**
     * <p>Returns a list of parent reference and LinkName Tuples.</p>
     */
    inline ListObjectParentsResult& AddParentLinks(ObjectIdentifierAndLinkNameTuple&& value) { m_parentLinks.push_back(std::move(value)); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_parents;

    Aws::String m_nextToken;

    Aws::Vector<ObjectIdentifierAndLinkNameTuple> m_parentLinks;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
