/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apprunner/model/AutoScalingConfigurationSummary.h>
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
  class ListAutoScalingConfigurationsResult
  {
  public:
    AWS_APPRUNNER_API ListAutoScalingConfigurationsResult() = default;
    AWS_APPRUNNER_API ListAutoScalingConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API ListAutoScalingConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of summary information records for auto scaling configurations. In a
     * paginated request, the request returns up to <code>MaxResults</code> records for
     * each call.</p>
     */
    inline const Aws::Vector<AutoScalingConfigurationSummary>& GetAutoScalingConfigurationSummaryList() const { return m_autoScalingConfigurationSummaryList; }
    template<typename AutoScalingConfigurationSummaryListT = Aws::Vector<AutoScalingConfigurationSummary>>
    void SetAutoScalingConfigurationSummaryList(AutoScalingConfigurationSummaryListT&& value) { m_autoScalingConfigurationSummaryListHasBeenSet = true; m_autoScalingConfigurationSummaryList = std::forward<AutoScalingConfigurationSummaryListT>(value); }
    template<typename AutoScalingConfigurationSummaryListT = Aws::Vector<AutoScalingConfigurationSummary>>
    ListAutoScalingConfigurationsResult& WithAutoScalingConfigurationSummaryList(AutoScalingConfigurationSummaryListT&& value) { SetAutoScalingConfigurationSummaryList(std::forward<AutoScalingConfigurationSummaryListT>(value)); return *this;}
    template<typename AutoScalingConfigurationSummaryListT = AutoScalingConfigurationSummary>
    ListAutoScalingConfigurationsResult& AddAutoScalingConfigurationSummaryList(AutoScalingConfigurationSummaryListT&& value) { m_autoScalingConfigurationSummaryListHasBeenSet = true; m_autoScalingConfigurationSummaryList.emplace_back(std::forward<AutoScalingConfigurationSummaryListT>(value)); return *this; }
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
    ListAutoScalingConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAutoScalingConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AutoScalingConfigurationSummary> m_autoScalingConfigurationSummaryList;
    bool m_autoScalingConfigurationSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
