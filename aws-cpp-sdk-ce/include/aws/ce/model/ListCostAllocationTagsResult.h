/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/CostAllocationTag.h>
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
  class ListCostAllocationTagsResult
  {
  public:
    AWS_COSTEXPLORER_API ListCostAllocationTagsResult();
    AWS_COSTEXPLORER_API ListCostAllocationTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API ListCostAllocationTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of cost allocation tags that includes the detailed metadata for each
     * one. </p>
     */
    inline const Aws::Vector<CostAllocationTag>& GetCostAllocationTags() const{ return m_costAllocationTags; }

    /**
     * <p>A list of cost allocation tags that includes the detailed metadata for each
     * one. </p>
     */
    inline void SetCostAllocationTags(const Aws::Vector<CostAllocationTag>& value) { m_costAllocationTags = value; }

    /**
     * <p>A list of cost allocation tags that includes the detailed metadata for each
     * one. </p>
     */
    inline void SetCostAllocationTags(Aws::Vector<CostAllocationTag>&& value) { m_costAllocationTags = std::move(value); }

    /**
     * <p>A list of cost allocation tags that includes the detailed metadata for each
     * one. </p>
     */
    inline ListCostAllocationTagsResult& WithCostAllocationTags(const Aws::Vector<CostAllocationTag>& value) { SetCostAllocationTags(value); return *this;}

    /**
     * <p>A list of cost allocation tags that includes the detailed metadata for each
     * one. </p>
     */
    inline ListCostAllocationTagsResult& WithCostAllocationTags(Aws::Vector<CostAllocationTag>&& value) { SetCostAllocationTags(std::move(value)); return *this;}

    /**
     * <p>A list of cost allocation tags that includes the detailed metadata for each
     * one. </p>
     */
    inline ListCostAllocationTagsResult& AddCostAllocationTags(const CostAllocationTag& value) { m_costAllocationTags.push_back(value); return *this; }

    /**
     * <p>A list of cost allocation tags that includes the detailed metadata for each
     * one. </p>
     */
    inline ListCostAllocationTagsResult& AddCostAllocationTags(CostAllocationTag&& value) { m_costAllocationTags.push_back(std::move(value)); return *this; }


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
    inline ListCostAllocationTagsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline ListCostAllocationTagsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results. Amazon Web Services provides
     * the token when the response from a previous call has more results than the
     * maximum page size. </p>
     */
    inline ListCostAllocationTagsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CostAllocationTag> m_costAllocationTags;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
