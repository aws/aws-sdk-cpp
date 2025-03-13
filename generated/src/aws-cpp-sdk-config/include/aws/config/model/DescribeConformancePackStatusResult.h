/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/ConformancePackStatusDetail.h>
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
  class DescribeConformancePackStatusResult
  {
  public:
    AWS_CONFIGSERVICE_API DescribeConformancePackStatusResult() = default;
    AWS_CONFIGSERVICE_API DescribeConformancePackStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONFIGSERVICE_API DescribeConformancePackStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>ConformancePackStatusDetail</code> objects.</p>
     */
    inline const Aws::Vector<ConformancePackStatusDetail>& GetConformancePackStatusDetails() const { return m_conformancePackStatusDetails; }
    template<typename ConformancePackStatusDetailsT = Aws::Vector<ConformancePackStatusDetail>>
    void SetConformancePackStatusDetails(ConformancePackStatusDetailsT&& value) { m_conformancePackStatusDetailsHasBeenSet = true; m_conformancePackStatusDetails = std::forward<ConformancePackStatusDetailsT>(value); }
    template<typename ConformancePackStatusDetailsT = Aws::Vector<ConformancePackStatusDetail>>
    DescribeConformancePackStatusResult& WithConformancePackStatusDetails(ConformancePackStatusDetailsT&& value) { SetConformancePackStatusDetails(std::forward<ConformancePackStatusDetailsT>(value)); return *this;}
    template<typename ConformancePackStatusDetailsT = ConformancePackStatusDetail>
    DescribeConformancePackStatusResult& AddConformancePackStatusDetails(ConformancePackStatusDetailsT&& value) { m_conformancePackStatusDetailsHasBeenSet = true; m_conformancePackStatusDetails.emplace_back(std::forward<ConformancePackStatusDetailsT>(value)); return *this; }
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
    DescribeConformancePackStatusResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConformancePackStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConformancePackStatusDetail> m_conformancePackStatusDetails;
    bool m_conformancePackStatusDetailsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
