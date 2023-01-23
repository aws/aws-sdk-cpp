/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListFacetNamesResult
  {
  public:
    AWS_CLOUDDIRECTORY_API ListFacetNamesResult();
    AWS_CLOUDDIRECTORY_API ListFacetNamesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API ListFacetNamesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The names of facets that exist within the schema.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFacetNames() const{ return m_facetNames; }

    /**
     * <p>The names of facets that exist within the schema.</p>
     */
    inline void SetFacetNames(const Aws::Vector<Aws::String>& value) { m_facetNames = value; }

    /**
     * <p>The names of facets that exist within the schema.</p>
     */
    inline void SetFacetNames(Aws::Vector<Aws::String>&& value) { m_facetNames = std::move(value); }

    /**
     * <p>The names of facets that exist within the schema.</p>
     */
    inline ListFacetNamesResult& WithFacetNames(const Aws::Vector<Aws::String>& value) { SetFacetNames(value); return *this;}

    /**
     * <p>The names of facets that exist within the schema.</p>
     */
    inline ListFacetNamesResult& WithFacetNames(Aws::Vector<Aws::String>&& value) { SetFacetNames(std::move(value)); return *this;}

    /**
     * <p>The names of facets that exist within the schema.</p>
     */
    inline ListFacetNamesResult& AddFacetNames(const Aws::String& value) { m_facetNames.push_back(value); return *this; }

    /**
     * <p>The names of facets that exist within the schema.</p>
     */
    inline ListFacetNamesResult& AddFacetNames(Aws::String&& value) { m_facetNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of facets that exist within the schema.</p>
     */
    inline ListFacetNamesResult& AddFacetNames(const char* value) { m_facetNames.push_back(value); return *this; }


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
    inline ListFacetNamesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListFacetNamesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListFacetNamesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_facetNames;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
