/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fis/FIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fis/model/ExperimentTargetAccountConfigurationSummary.h>
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
namespace FIS
{
namespace Model
{
  class ListExperimentTargetAccountConfigurationsResult
  {
  public:
    AWS_FIS_API ListExperimentTargetAccountConfigurationsResult() = default;
    AWS_FIS_API ListExperimentTargetAccountConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FIS_API ListExperimentTargetAccountConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The target account configurations.</p>
     */
    inline const Aws::Vector<ExperimentTargetAccountConfigurationSummary>& GetTargetAccountConfigurations() const { return m_targetAccountConfigurations; }
    template<typename TargetAccountConfigurationsT = Aws::Vector<ExperimentTargetAccountConfigurationSummary>>
    void SetTargetAccountConfigurations(TargetAccountConfigurationsT&& value) { m_targetAccountConfigurationsHasBeenSet = true; m_targetAccountConfigurations = std::forward<TargetAccountConfigurationsT>(value); }
    template<typename TargetAccountConfigurationsT = Aws::Vector<ExperimentTargetAccountConfigurationSummary>>
    ListExperimentTargetAccountConfigurationsResult& WithTargetAccountConfigurations(TargetAccountConfigurationsT&& value) { SetTargetAccountConfigurations(std::forward<TargetAccountConfigurationsT>(value)); return *this;}
    template<typename TargetAccountConfigurationsT = ExperimentTargetAccountConfigurationSummary>
    ListExperimentTargetAccountConfigurationsResult& AddTargetAccountConfigurations(TargetAccountConfigurationsT&& value) { m_targetAccountConfigurationsHasBeenSet = true; m_targetAccountConfigurations.emplace_back(std::forward<TargetAccountConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListExperimentTargetAccountConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListExperimentTargetAccountConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ExperimentTargetAccountConfigurationSummary> m_targetAccountConfigurations;
    bool m_targetAccountConfigurationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace FIS
} // namespace Aws
