/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/SavingsPlansCoverage.h>
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
namespace CostExplorer
{
namespace Model
{
  class GetSavingsPlansCoverageResult
  {
  public:
    AWS_COSTEXPLORER_API GetSavingsPlansCoverageResult() = default;
    AWS_COSTEXPLORER_API GetSavingsPlansCoverageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetSavingsPlansCoverageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The amount of spend that your Savings Plans covered.</p>
     */
    inline const Aws::Vector<SavingsPlansCoverage>& GetSavingsPlansCoverages() const { return m_savingsPlansCoverages; }
    template<typename SavingsPlansCoveragesT = Aws::Vector<SavingsPlansCoverage>>
    void SetSavingsPlansCoverages(SavingsPlansCoveragesT&& value) { m_savingsPlansCoveragesHasBeenSet = true; m_savingsPlansCoverages = std::forward<SavingsPlansCoveragesT>(value); }
    template<typename SavingsPlansCoveragesT = Aws::Vector<SavingsPlansCoverage>>
    GetSavingsPlansCoverageResult& WithSavingsPlansCoverages(SavingsPlansCoveragesT&& value) { SetSavingsPlansCoverages(std::forward<SavingsPlansCoveragesT>(value)); return *this;}
    template<typename SavingsPlansCoveragesT = SavingsPlansCoverage>
    GetSavingsPlansCoverageResult& AddSavingsPlansCoverages(SavingsPlansCoveragesT&& value) { m_savingsPlansCoveragesHasBeenSet = true; m_savingsPlansCoverages.emplace_back(std::forward<SavingsPlansCoveragesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetSavingsPlansCoverageResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSavingsPlansCoverageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SavingsPlansCoverage> m_savingsPlansCoverages;
    bool m_savingsPlansCoveragesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
