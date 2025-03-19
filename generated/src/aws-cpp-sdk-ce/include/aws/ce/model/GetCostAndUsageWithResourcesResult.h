/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/GroupDefinition.h>
#include <aws/ce/model/ResultByTime.h>
#include <aws/ce/model/DimensionValuesWithAttributes.h>
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
  class GetCostAndUsageWithResourcesResult
  {
  public:
    AWS_COSTEXPLORER_API GetCostAndUsageWithResourcesResult() = default;
    AWS_COSTEXPLORER_API GetCostAndUsageWithResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetCostAndUsageWithResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetCostAndUsageWithResourcesResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The groups that are specified by the <code>Filter</code> or
     * <code>GroupBy</code> parameters in the request.</p>
     */
    inline const Aws::Vector<GroupDefinition>& GetGroupDefinitions() const { return m_groupDefinitions; }
    template<typename GroupDefinitionsT = Aws::Vector<GroupDefinition>>
    void SetGroupDefinitions(GroupDefinitionsT&& value) { m_groupDefinitionsHasBeenSet = true; m_groupDefinitions = std::forward<GroupDefinitionsT>(value); }
    template<typename GroupDefinitionsT = Aws::Vector<GroupDefinition>>
    GetCostAndUsageWithResourcesResult& WithGroupDefinitions(GroupDefinitionsT&& value) { SetGroupDefinitions(std::forward<GroupDefinitionsT>(value)); return *this;}
    template<typename GroupDefinitionsT = GroupDefinition>
    GetCostAndUsageWithResourcesResult& AddGroupDefinitions(GroupDefinitionsT&& value) { m_groupDefinitionsHasBeenSet = true; m_groupDefinitions.emplace_back(std::forward<GroupDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time period that's covered by the results in the response.</p>
     */
    inline const Aws::Vector<ResultByTime>& GetResultsByTime() const { return m_resultsByTime; }
    template<typename ResultsByTimeT = Aws::Vector<ResultByTime>>
    void SetResultsByTime(ResultsByTimeT&& value) { m_resultsByTimeHasBeenSet = true; m_resultsByTime = std::forward<ResultsByTimeT>(value); }
    template<typename ResultsByTimeT = Aws::Vector<ResultByTime>>
    GetCostAndUsageWithResourcesResult& WithResultsByTime(ResultsByTimeT&& value) { SetResultsByTime(std::forward<ResultsByTimeT>(value)); return *this;}
    template<typename ResultsByTimeT = ResultByTime>
    GetCostAndUsageWithResourcesResult& AddResultsByTime(ResultsByTimeT&& value) { m_resultsByTimeHasBeenSet = true; m_resultsByTime.emplace_back(std::forward<ResultsByTimeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The attributes that apply to a specific dimension value. For example, if the
     * value is a linked account, the attribute is that account name.</p>
     */
    inline const Aws::Vector<DimensionValuesWithAttributes>& GetDimensionValueAttributes() const { return m_dimensionValueAttributes; }
    template<typename DimensionValueAttributesT = Aws::Vector<DimensionValuesWithAttributes>>
    void SetDimensionValueAttributes(DimensionValueAttributesT&& value) { m_dimensionValueAttributesHasBeenSet = true; m_dimensionValueAttributes = std::forward<DimensionValueAttributesT>(value); }
    template<typename DimensionValueAttributesT = Aws::Vector<DimensionValuesWithAttributes>>
    GetCostAndUsageWithResourcesResult& WithDimensionValueAttributes(DimensionValueAttributesT&& value) { SetDimensionValueAttributes(std::forward<DimensionValueAttributesT>(value)); return *this;}
    template<typename DimensionValueAttributesT = DimensionValuesWithAttributes>
    GetCostAndUsageWithResourcesResult& AddDimensionValueAttributes(DimensionValueAttributesT&& value) { m_dimensionValueAttributesHasBeenSet = true; m_dimensionValueAttributes.emplace_back(std::forward<DimensionValueAttributesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCostAndUsageWithResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::Vector<GroupDefinition> m_groupDefinitions;
    bool m_groupDefinitionsHasBeenSet = false;

    Aws::Vector<ResultByTime> m_resultsByTime;
    bool m_resultsByTimeHasBeenSet = false;

    Aws::Vector<DimensionValuesWithAttributes> m_dimensionValueAttributes;
    bool m_dimensionValueAttributesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
