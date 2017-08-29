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
#include <aws/clouddirectory/model/TypedLinkAttributeDefinition.h>
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
  class AWS_CLOUDDIRECTORY_API ListTypedLinkFacetAttributesResult
  {
  public:
    ListTypedLinkFacetAttributesResult();
    ListTypedLinkFacetAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTypedLinkFacetAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An ordered set of attributes associate with the typed link.</p>
     */
    inline const Aws::Vector<TypedLinkAttributeDefinition>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>An ordered set of attributes associate with the typed link.</p>
     */
    inline void SetAttributes(const Aws::Vector<TypedLinkAttributeDefinition>& value) { m_attributes = value; }

    /**
     * <p>An ordered set of attributes associate with the typed link.</p>
     */
    inline void SetAttributes(Aws::Vector<TypedLinkAttributeDefinition>&& value) { m_attributes = std::move(value); }

    /**
     * <p>An ordered set of attributes associate with the typed link.</p>
     */
    inline ListTypedLinkFacetAttributesResult& WithAttributes(const Aws::Vector<TypedLinkAttributeDefinition>& value) { SetAttributes(value); return *this;}

    /**
     * <p>An ordered set of attributes associate with the typed link.</p>
     */
    inline ListTypedLinkFacetAttributesResult& WithAttributes(Aws::Vector<TypedLinkAttributeDefinition>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>An ordered set of attributes associate with the typed link.</p>
     */
    inline ListTypedLinkFacetAttributesResult& AddAttributes(const TypedLinkAttributeDefinition& value) { m_attributes.push_back(value); return *this; }

    /**
     * <p>An ordered set of attributes associate with the typed link.</p>
     */
    inline ListTypedLinkFacetAttributesResult& AddAttributes(TypedLinkAttributeDefinition&& value) { m_attributes.push_back(std::move(value)); return *this; }


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
    inline ListTypedLinkFacetAttributesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListTypedLinkFacetAttributesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListTypedLinkFacetAttributesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TypedLinkAttributeDefinition> m_attributes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
