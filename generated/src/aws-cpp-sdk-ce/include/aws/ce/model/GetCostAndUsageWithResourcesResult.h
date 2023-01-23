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
    AWS_COSTEXPLORER_API GetCostAndUsageWithResourcesResult();
    AWS_COSTEXPLORER_API GetCostAndUsageWithResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetCostAndUsageWithResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline GetCostAndUsageWithResourcesResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline GetCostAndUsageWithResourcesResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of retrievable results. Amazon Web Services
     * provides the token when the response from a previous call has more results than
     * the maximum page size.</p>
     */
    inline GetCostAndUsageWithResourcesResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}


    /**
     * <p>The groups that are specified by the <code>Filter</code> or
     * <code>GroupBy</code> parameters in the request.</p>
     */
    inline const Aws::Vector<GroupDefinition>& GetGroupDefinitions() const{ return m_groupDefinitions; }

    /**
     * <p>The groups that are specified by the <code>Filter</code> or
     * <code>GroupBy</code> parameters in the request.</p>
     */
    inline void SetGroupDefinitions(const Aws::Vector<GroupDefinition>& value) { m_groupDefinitions = value; }

    /**
     * <p>The groups that are specified by the <code>Filter</code> or
     * <code>GroupBy</code> parameters in the request.</p>
     */
    inline void SetGroupDefinitions(Aws::Vector<GroupDefinition>&& value) { m_groupDefinitions = std::move(value); }

    /**
     * <p>The groups that are specified by the <code>Filter</code> or
     * <code>GroupBy</code> parameters in the request.</p>
     */
    inline GetCostAndUsageWithResourcesResult& WithGroupDefinitions(const Aws::Vector<GroupDefinition>& value) { SetGroupDefinitions(value); return *this;}

    /**
     * <p>The groups that are specified by the <code>Filter</code> or
     * <code>GroupBy</code> parameters in the request.</p>
     */
    inline GetCostAndUsageWithResourcesResult& WithGroupDefinitions(Aws::Vector<GroupDefinition>&& value) { SetGroupDefinitions(std::move(value)); return *this;}

    /**
     * <p>The groups that are specified by the <code>Filter</code> or
     * <code>GroupBy</code> parameters in the request.</p>
     */
    inline GetCostAndUsageWithResourcesResult& AddGroupDefinitions(const GroupDefinition& value) { m_groupDefinitions.push_back(value); return *this; }

    /**
     * <p>The groups that are specified by the <code>Filter</code> or
     * <code>GroupBy</code> parameters in the request.</p>
     */
    inline GetCostAndUsageWithResourcesResult& AddGroupDefinitions(GroupDefinition&& value) { m_groupDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>The time period that's covered by the results in the response.</p>
     */
    inline const Aws::Vector<ResultByTime>& GetResultsByTime() const{ return m_resultsByTime; }

    /**
     * <p>The time period that's covered by the results in the response.</p>
     */
    inline void SetResultsByTime(const Aws::Vector<ResultByTime>& value) { m_resultsByTime = value; }

    /**
     * <p>The time period that's covered by the results in the response.</p>
     */
    inline void SetResultsByTime(Aws::Vector<ResultByTime>&& value) { m_resultsByTime = std::move(value); }

    /**
     * <p>The time period that's covered by the results in the response.</p>
     */
    inline GetCostAndUsageWithResourcesResult& WithResultsByTime(const Aws::Vector<ResultByTime>& value) { SetResultsByTime(value); return *this;}

    /**
     * <p>The time period that's covered by the results in the response.</p>
     */
    inline GetCostAndUsageWithResourcesResult& WithResultsByTime(Aws::Vector<ResultByTime>&& value) { SetResultsByTime(std::move(value)); return *this;}

    /**
     * <p>The time period that's covered by the results in the response.</p>
     */
    inline GetCostAndUsageWithResourcesResult& AddResultsByTime(const ResultByTime& value) { m_resultsByTime.push_back(value); return *this; }

    /**
     * <p>The time period that's covered by the results in the response.</p>
     */
    inline GetCostAndUsageWithResourcesResult& AddResultsByTime(ResultByTime&& value) { m_resultsByTime.push_back(std::move(value)); return *this; }


    /**
     * <p>The attributes that apply to a specific dimension value. For example, if the
     * value is a linked account, the attribute is that account name.</p>
     */
    inline const Aws::Vector<DimensionValuesWithAttributes>& GetDimensionValueAttributes() const{ return m_dimensionValueAttributes; }

    /**
     * <p>The attributes that apply to a specific dimension value. For example, if the
     * value is a linked account, the attribute is that account name.</p>
     */
    inline void SetDimensionValueAttributes(const Aws::Vector<DimensionValuesWithAttributes>& value) { m_dimensionValueAttributes = value; }

    /**
     * <p>The attributes that apply to a specific dimension value. For example, if the
     * value is a linked account, the attribute is that account name.</p>
     */
    inline void SetDimensionValueAttributes(Aws::Vector<DimensionValuesWithAttributes>&& value) { m_dimensionValueAttributes = std::move(value); }

    /**
     * <p>The attributes that apply to a specific dimension value. For example, if the
     * value is a linked account, the attribute is that account name.</p>
     */
    inline GetCostAndUsageWithResourcesResult& WithDimensionValueAttributes(const Aws::Vector<DimensionValuesWithAttributes>& value) { SetDimensionValueAttributes(value); return *this;}

    /**
     * <p>The attributes that apply to a specific dimension value. For example, if the
     * value is a linked account, the attribute is that account name.</p>
     */
    inline GetCostAndUsageWithResourcesResult& WithDimensionValueAttributes(Aws::Vector<DimensionValuesWithAttributes>&& value) { SetDimensionValueAttributes(std::move(value)); return *this;}

    /**
     * <p>The attributes that apply to a specific dimension value. For example, if the
     * value is a linked account, the attribute is that account name.</p>
     */
    inline GetCostAndUsageWithResourcesResult& AddDimensionValueAttributes(const DimensionValuesWithAttributes& value) { m_dimensionValueAttributes.push_back(value); return *this; }

    /**
     * <p>The attributes that apply to a specific dimension value. For example, if the
     * value is a linked account, the attribute is that account name.</p>
     */
    inline GetCostAndUsageWithResourcesResult& AddDimensionValueAttributes(DimensionValuesWithAttributes&& value) { m_dimensionValueAttributes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextPageToken;

    Aws::Vector<GroupDefinition> m_groupDefinitions;

    Aws::Vector<ResultByTime> m_resultsByTime;

    Aws::Vector<DimensionValuesWithAttributes> m_dimensionValueAttributes;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
