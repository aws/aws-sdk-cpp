/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/PredefinedAttribute.h>
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
  class SearchPredefinedAttributesResult
  {
  public:
    AWS_CONNECT_API SearchPredefinedAttributesResult();
    AWS_CONNECT_API SearchPredefinedAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchPredefinedAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Predefined attributes matched by the search criteria.</p>
     */
    inline const Aws::Vector<PredefinedAttribute>& GetPredefinedAttributes() const{ return m_predefinedAttributes; }

    /**
     * <p>Predefined attributes matched by the search criteria.</p>
     */
    inline void SetPredefinedAttributes(const Aws::Vector<PredefinedAttribute>& value) { m_predefinedAttributes = value; }

    /**
     * <p>Predefined attributes matched by the search criteria.</p>
     */
    inline void SetPredefinedAttributes(Aws::Vector<PredefinedAttribute>&& value) { m_predefinedAttributes = std::move(value); }

    /**
     * <p>Predefined attributes matched by the search criteria.</p>
     */
    inline SearchPredefinedAttributesResult& WithPredefinedAttributes(const Aws::Vector<PredefinedAttribute>& value) { SetPredefinedAttributes(value); return *this;}

    /**
     * <p>Predefined attributes matched by the search criteria.</p>
     */
    inline SearchPredefinedAttributesResult& WithPredefinedAttributes(Aws::Vector<PredefinedAttribute>&& value) { SetPredefinedAttributes(std::move(value)); return *this;}

    /**
     * <p>Predefined attributes matched by the search criteria.</p>
     */
    inline SearchPredefinedAttributesResult& AddPredefinedAttributes(const PredefinedAttribute& value) { m_predefinedAttributes.push_back(value); return *this; }

    /**
     * <p>Predefined attributes matched by the search criteria.</p>
     */
    inline SearchPredefinedAttributesResult& AddPredefinedAttributes(PredefinedAttribute&& value) { m_predefinedAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline SearchPredefinedAttributesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline SearchPredefinedAttributesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline SearchPredefinedAttributesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The approximate number of predefined attributes which matched your search
     * query.</p>
     */
    inline long long GetApproximateTotalCount() const{ return m_approximateTotalCount; }

    /**
     * <p>The approximate number of predefined attributes which matched your search
     * query.</p>
     */
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCount = value; }

    /**
     * <p>The approximate number of predefined attributes which matched your search
     * query.</p>
     */
    inline SearchPredefinedAttributesResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SearchPredefinedAttributesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SearchPredefinedAttributesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SearchPredefinedAttributesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<PredefinedAttribute> m_predefinedAttributes;

    Aws::String m_nextToken;

    long long m_approximateTotalCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
