/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/InfrastructureConfigurationSummary.h>
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
namespace imagebuilder
{
namespace Model
{
  class ListInfrastructureConfigurationsResult
  {
  public:
    AWS_IMAGEBUILDER_API ListInfrastructureConfigurationsResult() = default;
    AWS_IMAGEBUILDER_API ListInfrastructureConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListInfrastructureConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListInfrastructureConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of infrastructure configurations.</p>
     */
    inline const Aws::Vector<InfrastructureConfigurationSummary>& GetInfrastructureConfigurationSummaryList() const { return m_infrastructureConfigurationSummaryList; }
    template<typename InfrastructureConfigurationSummaryListT = Aws::Vector<InfrastructureConfigurationSummary>>
    void SetInfrastructureConfigurationSummaryList(InfrastructureConfigurationSummaryListT&& value) { m_infrastructureConfigurationSummaryListHasBeenSet = true; m_infrastructureConfigurationSummaryList = std::forward<InfrastructureConfigurationSummaryListT>(value); }
    template<typename InfrastructureConfigurationSummaryListT = Aws::Vector<InfrastructureConfigurationSummary>>
    ListInfrastructureConfigurationsResult& WithInfrastructureConfigurationSummaryList(InfrastructureConfigurationSummaryListT&& value) { SetInfrastructureConfigurationSummaryList(std::forward<InfrastructureConfigurationSummaryListT>(value)); return *this;}
    template<typename InfrastructureConfigurationSummaryListT = InfrastructureConfigurationSummary>
    ListInfrastructureConfigurationsResult& AddInfrastructureConfigurationSummaryList(InfrastructureConfigurationSummaryListT&& value) { m_infrastructureConfigurationSummaryListHasBeenSet = true; m_infrastructureConfigurationSummaryList.emplace_back(std::forward<InfrastructureConfigurationSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListInfrastructureConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::Vector<InfrastructureConfigurationSummary> m_infrastructureConfigurationSummaryList;
    bool m_infrastructureConfigurationSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
