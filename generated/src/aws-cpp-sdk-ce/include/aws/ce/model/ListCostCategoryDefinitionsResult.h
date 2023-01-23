/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/CostCategoryReference.h>
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
  class ListCostCategoryDefinitionsResult
  {
  public:
    AWS_COSTEXPLORER_API ListCostCategoryDefinitionsResult();
    AWS_COSTEXPLORER_API ListCostCategoryDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API ListCostCategoryDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A reference to a Cost Category that contains enough information to identify
     * the Cost Category. </p>
     */
    inline const Aws::Vector<CostCategoryReference>& GetCostCategoryReferences() const{ return m_costCategoryReferences; }

    /**
     * <p>A reference to a Cost Category that contains enough information to identify
     * the Cost Category. </p>
     */
    inline void SetCostCategoryReferences(const Aws::Vector<CostCategoryReference>& value) { m_costCategoryReferences = value; }

    /**
     * <p>A reference to a Cost Category that contains enough information to identify
     * the Cost Category. </p>
     */
    inline void SetCostCategoryReferences(Aws::Vector<CostCategoryReference>&& value) { m_costCategoryReferences = std::move(value); }

    /**
     * <p>A reference to a Cost Category that contains enough information to identify
     * the Cost Category. </p>
     */
    inline ListCostCategoryDefinitionsResult& WithCostCategoryReferences(const Aws::Vector<CostCategoryReference>& value) { SetCostCategoryReferences(value); return *this;}

    /**
     * <p>A reference to a Cost Category that contains enough information to identify
     * the Cost Category. </p>
     */
    inline ListCostCategoryDefinitionsResult& WithCostCategoryReferences(Aws::Vector<CostCategoryReference>&& value) { SetCostCategoryReferences(std::move(value)); return *this;}

    /**
     * <p>A reference to a Cost Category that contains enough information to identify
     * the Cost Category. </p>
     */
    inline ListCostCategoryDefinitionsResult& AddCostCategoryReferences(const CostCategoryReference& value) { m_costCategoryReferences.push_back(value); return *this; }

    /**
     * <p>A reference to a Cost Category that contains enough information to identify
     * the Cost Category. </p>
     */
    inline ListCostCategoryDefinitionsResult& AddCostCategoryReferences(CostCategoryReference&& value) { m_costCategoryReferences.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline ListCostCategoryDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline ListCostCategoryDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline ListCostCategoryDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CostCategoryReference> m_costCategoryReferences;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
