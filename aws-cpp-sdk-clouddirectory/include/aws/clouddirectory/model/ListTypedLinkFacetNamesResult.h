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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_CLOUDDIRECTORY_API ListTypedLinkFacetNamesResult
  {
  public:
    ListTypedLinkFacetNamesResult();
    ListTypedLinkFacetNamesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTypedLinkFacetNamesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The names of typed link facets that exist within the schema.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFacetNames() const{ return m_facetNames; }

    /**
     * <p>The names of typed link facets that exist within the schema.</p>
     */
    inline void SetFacetNames(const Aws::Vector<Aws::String>& value) { m_facetNames = value; }

    /**
     * <p>The names of typed link facets that exist within the schema.</p>
     */
    inline void SetFacetNames(Aws::Vector<Aws::String>&& value) { m_facetNames = std::move(value); }

    /**
     * <p>The names of typed link facets that exist within the schema.</p>
     */
    inline ListTypedLinkFacetNamesResult& WithFacetNames(const Aws::Vector<Aws::String>& value) { SetFacetNames(value); return *this;}

    /**
     * <p>The names of typed link facets that exist within the schema.</p>
     */
    inline ListTypedLinkFacetNamesResult& WithFacetNames(Aws::Vector<Aws::String>&& value) { SetFacetNames(std::move(value)); return *this;}

    /**
     * <p>The names of typed link facets that exist within the schema.</p>
     */
    inline ListTypedLinkFacetNamesResult& AddFacetNames(const Aws::String& value) { m_facetNames.push_back(value); return *this; }

    /**
     * <p>The names of typed link facets that exist within the schema.</p>
     */
    inline ListTypedLinkFacetNamesResult& AddFacetNames(Aws::String&& value) { m_facetNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of typed link facets that exist within the schema.</p>
     */
    inline ListTypedLinkFacetNamesResult& AddFacetNames(const char* value) { m_facetNames.push_back(value); return *this; }


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
    inline ListTypedLinkFacetNamesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListTypedLinkFacetNamesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListTypedLinkFacetNamesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_facetNames;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
