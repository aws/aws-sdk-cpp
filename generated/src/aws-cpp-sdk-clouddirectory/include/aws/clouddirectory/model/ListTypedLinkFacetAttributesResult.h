﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListTypedLinkFacetAttributesResult
  {
  public:
    AWS_CLOUDDIRECTORY_API ListTypedLinkFacetAttributesResult();
    AWS_CLOUDDIRECTORY_API ListTypedLinkFacetAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API ListTypedLinkFacetAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An ordered set of attributes associate with the typed link.</p>
     */
    inline const Aws::Vector<TypedLinkAttributeDefinition>& GetAttributes() const{ return m_attributes; }
    inline void SetAttributes(const Aws::Vector<TypedLinkAttributeDefinition>& value) { m_attributes = value; }
    inline void SetAttributes(Aws::Vector<TypedLinkAttributeDefinition>&& value) { m_attributes = std::move(value); }
    inline ListTypedLinkFacetAttributesResult& WithAttributes(const Aws::Vector<TypedLinkAttributeDefinition>& value) { SetAttributes(value); return *this;}
    inline ListTypedLinkFacetAttributesResult& WithAttributes(Aws::Vector<TypedLinkAttributeDefinition>&& value) { SetAttributes(std::move(value)); return *this;}
    inline ListTypedLinkFacetAttributesResult& AddAttributes(const TypedLinkAttributeDefinition& value) { m_attributes.push_back(value); return *this; }
    inline ListTypedLinkFacetAttributesResult& AddAttributes(TypedLinkAttributeDefinition&& value) { m_attributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTypedLinkFacetAttributesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTypedLinkFacetAttributesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTypedLinkFacetAttributesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTypedLinkFacetAttributesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTypedLinkFacetAttributesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTypedLinkFacetAttributesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TypedLinkAttributeDefinition> m_attributes;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
