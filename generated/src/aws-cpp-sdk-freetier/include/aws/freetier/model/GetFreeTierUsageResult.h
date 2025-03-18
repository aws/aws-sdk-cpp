/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/freetier/FreeTier_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/freetier/model/FreeTierUsage.h>
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
namespace FreeTier
{
namespace Model
{
  class GetFreeTierUsageResult
  {
  public:
    AWS_FREETIER_API GetFreeTierUsageResult() = default;
    AWS_FREETIER_API GetFreeTierUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FREETIER_API GetFreeTierUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of Free Tier usage objects that meet your filter expression.</p>
     */
    inline const Aws::Vector<FreeTierUsage>& GetFreeTierUsages() const { return m_freeTierUsages; }
    template<typename FreeTierUsagesT = Aws::Vector<FreeTierUsage>>
    void SetFreeTierUsages(FreeTierUsagesT&& value) { m_freeTierUsagesHasBeenSet = true; m_freeTierUsages = std::forward<FreeTierUsagesT>(value); }
    template<typename FreeTierUsagesT = Aws::Vector<FreeTierUsage>>
    GetFreeTierUsageResult& WithFreeTierUsages(FreeTierUsagesT&& value) { SetFreeTierUsages(std::forward<FreeTierUsagesT>(value)); return *this;}
    template<typename FreeTierUsagesT = FreeTierUsage>
    GetFreeTierUsageResult& AddFreeTierUsages(FreeTierUsagesT&& value) { m_freeTierUsagesHasBeenSet = true; m_freeTierUsages.emplace_back(std::forward<FreeTierUsagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetFreeTierUsageResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFreeTierUsageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FreeTierUsage> m_freeTierUsages;
    bool m_freeTierUsagesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FreeTier
} // namespace Aws
