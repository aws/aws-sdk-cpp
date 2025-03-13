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
    AWS_CONNECT_API SearchPredefinedAttributesResult() = default;
    AWS_CONNECT_API SearchPredefinedAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchPredefinedAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Predefined attributes matched by the search criteria.</p>
     */
    inline const Aws::Vector<PredefinedAttribute>& GetPredefinedAttributes() const { return m_predefinedAttributes; }
    template<typename PredefinedAttributesT = Aws::Vector<PredefinedAttribute>>
    void SetPredefinedAttributes(PredefinedAttributesT&& value) { m_predefinedAttributesHasBeenSet = true; m_predefinedAttributes = std::forward<PredefinedAttributesT>(value); }
    template<typename PredefinedAttributesT = Aws::Vector<PredefinedAttribute>>
    SearchPredefinedAttributesResult& WithPredefinedAttributes(PredefinedAttributesT&& value) { SetPredefinedAttributes(std::forward<PredefinedAttributesT>(value)); return *this;}
    template<typename PredefinedAttributesT = PredefinedAttribute>
    SearchPredefinedAttributesResult& AddPredefinedAttributes(PredefinedAttributesT&& value) { m_predefinedAttributesHasBeenSet = true; m_predefinedAttributes.emplace_back(std::forward<PredefinedAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchPredefinedAttributesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate number of predefined attributes which matched your search
     * query.</p>
     */
    inline long long GetApproximateTotalCount() const { return m_approximateTotalCount; }
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCountHasBeenSet = true; m_approximateTotalCount = value; }
    inline SearchPredefinedAttributesResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchPredefinedAttributesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PredefinedAttribute> m_predefinedAttributes;
    bool m_predefinedAttributesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    long long m_approximateTotalCount{0};
    bool m_approximateTotalCountHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
