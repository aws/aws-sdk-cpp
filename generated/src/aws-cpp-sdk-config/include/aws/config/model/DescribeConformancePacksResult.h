/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConformancePackDetail.h>
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
namespace ConfigService
{
namespace Model
{
  class DescribeConformancePacksResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConformancePacksResult() = default;
    AWS_CONFIGSERVICE_API DescribeConformancePacksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeConformancePacksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns a list of <code>ConformancePackDetail</code> objects.</p>
     */
    inline const Aws::Vector<ConformancePackDetail>& GetConformancePackDetails() const { return m_conformancePackDetails; }
    template<typename ConformancePackDetailsT = Aws::Vector<ConformancePackDetail>>
    void SetConformancePackDetails(ConformancePackDetailsT&& value) { m_conformancePackDetailsHasBeenSet = true; m_conformancePackDetails = std::forward<ConformancePackDetailsT>(value); }
    template<typename ConformancePackDetailsT = Aws::Vector<ConformancePackDetail>>
    DescribeConformancePacksResult& WithConformancePackDetails(ConformancePackDetailsT&& value) { SetConformancePackDetails(std::forward<ConformancePackDetailsT>(value)); return *this;}
    template<typename ConformancePackDetailsT = ConformancePackDetail>
    DescribeConformancePacksResult& AddConformancePackDetails(ConformancePackDetailsT&& value) { m_conformancePackDetailsHasBeenSet = true; m_conformancePackDetails.emplace_back(std::forward<ConformancePackDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> string returned in a previous request that you use
     * to request the next page of results in a paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeConformancePacksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConformancePacksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConformancePackDetail> m_conformancePackDetails;
    bool m_conformancePackDetailsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
