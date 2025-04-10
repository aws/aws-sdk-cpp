﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/ObservabilityConfigurationSummary.h>
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
namespace AppRunner
{
namespace Model
{
  class ListObservabilityConfigurationsResult
  {
  public:
    AWS_APPRUNNER_API ListObservabilityConfigurationsResult() = default;
    AWS_APPRUNNER_API ListObservabilityConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API ListObservabilityConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of summary information records for observability configurations. In a
     * paginated request, the request returns up to <code>MaxResults</code> records for
     * each call.</p>
     */
    inline const Aws::Vector<ObservabilityConfigurationSummary>& GetObservabilityConfigurationSummaryList() const { return m_observabilityConfigurationSummaryList; }
    template<typename ObservabilityConfigurationSummaryListT = Aws::Vector<ObservabilityConfigurationSummary>>
    void SetObservabilityConfigurationSummaryList(ObservabilityConfigurationSummaryListT&& value) { m_observabilityConfigurationSummaryListHasBeenSet = true; m_observabilityConfigurationSummaryList = std::forward<ObservabilityConfigurationSummaryListT>(value); }
    template<typename ObservabilityConfigurationSummaryListT = Aws::Vector<ObservabilityConfigurationSummary>>
    ListObservabilityConfigurationsResult& WithObservabilityConfigurationSummaryList(ObservabilityConfigurationSummaryListT&& value) { SetObservabilityConfigurationSummaryList(std::forward<ObservabilityConfigurationSummaryListT>(value)); return *this;}
    template<typename ObservabilityConfigurationSummaryListT = ObservabilityConfigurationSummary>
    ListObservabilityConfigurationsResult& AddObservabilityConfigurationSummaryList(ObservabilityConfigurationSummaryListT&& value) { m_observabilityConfigurationSummaryListHasBeenSet = true; m_observabilityConfigurationSummaryList.emplace_back(std::forward<ObservabilityConfigurationSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that you can pass in a subsequent request to get the next result
     * page. It's returned in a paginated request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListObservabilityConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListObservabilityConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ObservabilityConfigurationSummary> m_observabilityConfigurationSummaryList;
    bool m_observabilityConfigurationSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
