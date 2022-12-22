/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/FacetAttribute.h>
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
  class ListFacetAttributesResult
  {
  public:
    AWS_CLOUDDIRECTORY_API ListFacetAttributesResult();
    AWS_CLOUDDIRECTORY_API ListFacetAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API ListFacetAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The attributes attached to the facet.</p>
     */
    inline const Aws::Vector<FacetAttribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The attributes attached to the facet.</p>
     */
    inline void SetAttributes(const Aws::Vector<FacetAttribute>& value) { m_attributes = value; }

    /**
     * <p>The attributes attached to the facet.</p>
     */
    inline void SetAttributes(Aws::Vector<FacetAttribute>&& value) { m_attributes = std::move(value); }

    /**
     * <p>The attributes attached to the facet.</p>
     */
    inline ListFacetAttributesResult& WithAttributes(const Aws::Vector<FacetAttribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The attributes attached to the facet.</p>
     */
    inline ListFacetAttributesResult& WithAttributes(Aws::Vector<FacetAttribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes attached to the facet.</p>
     */
    inline ListFacetAttributesResult& AddAttributes(const FacetAttribute& value) { m_attributes.push_back(value); return *this; }

    /**
     * <p>The attributes attached to the facet.</p>
     */
    inline ListFacetAttributesResult& AddAttributes(FacetAttribute&& value) { m_attributes.push_back(std::move(value)); return *this; }


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
    inline ListFacetAttributesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListFacetAttributesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListFacetAttributesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<FacetAttribute> m_attributes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
