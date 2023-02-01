/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class GetCostCategoriesResult
  {
  public:
    AWS_COSTEXPLORER_API GetCostCategoriesResult();
    AWS_COSTEXPLORER_API GetCostCategoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTEXPLORER_API GetCostCategoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the number of objects that are still available for retrieval exceeds the
     * quota, Amazon Web Services returns a NextPageToken value in the response. To
     * retrieve the next batch of objects, provide the marker from the prior call in
     * your next request.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>If the number of objects that are still available for retrieval exceeds the
     * quota, Amazon Web Services returns a NextPageToken value in the response. To
     * retrieve the next batch of objects, provide the marker from the prior call in
     * your next request.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>If the number of objects that are still available for retrieval exceeds the
     * quota, Amazon Web Services returns a NextPageToken value in the response. To
     * retrieve the next batch of objects, provide the marker from the prior call in
     * your next request.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>If the number of objects that are still available for retrieval exceeds the
     * quota, Amazon Web Services returns a NextPageToken value in the response. To
     * retrieve the next batch of objects, provide the marker from the prior call in
     * your next request.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>If the number of objects that are still available for retrieval exceeds the
     * quota, Amazon Web Services returns a NextPageToken value in the response. To
     * retrieve the next batch of objects, provide the marker from the prior call in
     * your next request.</p>
     */
    inline GetCostCategoriesResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>If the number of objects that are still available for retrieval exceeds the
     * quota, Amazon Web Services returns a NextPageToken value in the response. To
     * retrieve the next batch of objects, provide the marker from the prior call in
     * your next request.</p>
     */
    inline GetCostCategoriesResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>If the number of objects that are still available for retrieval exceeds the
     * quota, Amazon Web Services returns a NextPageToken value in the response. To
     * retrieve the next batch of objects, provide the marker from the prior call in
     * your next request.</p>
     */
    inline GetCostCategoriesResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}


    /**
     * <p>The names of the Cost Categories.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCostCategoryNames() const{ return m_costCategoryNames; }

    /**
     * <p>The names of the Cost Categories.</p>
     */
    inline void SetCostCategoryNames(const Aws::Vector<Aws::String>& value) { m_costCategoryNames = value; }

    /**
     * <p>The names of the Cost Categories.</p>
     */
    inline void SetCostCategoryNames(Aws::Vector<Aws::String>&& value) { m_costCategoryNames = std::move(value); }

    /**
     * <p>The names of the Cost Categories.</p>
     */
    inline GetCostCategoriesResult& WithCostCategoryNames(const Aws::Vector<Aws::String>& value) { SetCostCategoryNames(value); return *this;}

    /**
     * <p>The names of the Cost Categories.</p>
     */
    inline GetCostCategoriesResult& WithCostCategoryNames(Aws::Vector<Aws::String>&& value) { SetCostCategoryNames(std::move(value)); return *this;}

    /**
     * <p>The names of the Cost Categories.</p>
     */
    inline GetCostCategoriesResult& AddCostCategoryNames(const Aws::String& value) { m_costCategoryNames.push_back(value); return *this; }

    /**
     * <p>The names of the Cost Categories.</p>
     */
    inline GetCostCategoriesResult& AddCostCategoryNames(Aws::String&& value) { m_costCategoryNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the Cost Categories.</p>
     */
    inline GetCostCategoriesResult& AddCostCategoryNames(const char* value) { m_costCategoryNames.push_back(value); return *this; }


    /**
     * <p>The Cost Category values.</p> <p>If the <code>CostCategoryName</code> key
     * isn't specified in the request, the <code>CostCategoryValues</code> fields
     * aren't returned. </p>
     */
    inline const Aws::Vector<Aws::String>& GetCostCategoryValues() const{ return m_costCategoryValues; }

    /**
     * <p>The Cost Category values.</p> <p>If the <code>CostCategoryName</code> key
     * isn't specified in the request, the <code>CostCategoryValues</code> fields
     * aren't returned. </p>
     */
    inline void SetCostCategoryValues(const Aws::Vector<Aws::String>& value) { m_costCategoryValues = value; }

    /**
     * <p>The Cost Category values.</p> <p>If the <code>CostCategoryName</code> key
     * isn't specified in the request, the <code>CostCategoryValues</code> fields
     * aren't returned. </p>
     */
    inline void SetCostCategoryValues(Aws::Vector<Aws::String>&& value) { m_costCategoryValues = std::move(value); }

    /**
     * <p>The Cost Category values.</p> <p>If the <code>CostCategoryName</code> key
     * isn't specified in the request, the <code>CostCategoryValues</code> fields
     * aren't returned. </p>
     */
    inline GetCostCategoriesResult& WithCostCategoryValues(const Aws::Vector<Aws::String>& value) { SetCostCategoryValues(value); return *this;}

    /**
     * <p>The Cost Category values.</p> <p>If the <code>CostCategoryName</code> key
     * isn't specified in the request, the <code>CostCategoryValues</code> fields
     * aren't returned. </p>
     */
    inline GetCostCategoriesResult& WithCostCategoryValues(Aws::Vector<Aws::String>&& value) { SetCostCategoryValues(std::move(value)); return *this;}

    /**
     * <p>The Cost Category values.</p> <p>If the <code>CostCategoryName</code> key
     * isn't specified in the request, the <code>CostCategoryValues</code> fields
     * aren't returned. </p>
     */
    inline GetCostCategoriesResult& AddCostCategoryValues(const Aws::String& value) { m_costCategoryValues.push_back(value); return *this; }

    /**
     * <p>The Cost Category values.</p> <p>If the <code>CostCategoryName</code> key
     * isn't specified in the request, the <code>CostCategoryValues</code> fields
     * aren't returned. </p>
     */
    inline GetCostCategoriesResult& AddCostCategoryValues(Aws::String&& value) { m_costCategoryValues.push_back(std::move(value)); return *this; }

    /**
     * <p>The Cost Category values.</p> <p>If the <code>CostCategoryName</code> key
     * isn't specified in the request, the <code>CostCategoryValues</code> fields
     * aren't returned. </p>
     */
    inline GetCostCategoriesResult& AddCostCategoryValues(const char* value) { m_costCategoryValues.push_back(value); return *this; }


    /**
     * <p>The number of objects that are returned.</p>
     */
    inline int GetReturnSize() const{ return m_returnSize; }

    /**
     * <p>The number of objects that are returned.</p>
     */
    inline void SetReturnSize(int value) { m_returnSize = value; }

    /**
     * <p>The number of objects that are returned.</p>
     */
    inline GetCostCategoriesResult& WithReturnSize(int value) { SetReturnSize(value); return *this;}


    /**
     * <p>The total number of objects.</p>
     */
    inline int GetTotalSize() const{ return m_totalSize; }

    /**
     * <p>The total number of objects.</p>
     */
    inline void SetTotalSize(int value) { m_totalSize = value; }

    /**
     * <p>The total number of objects.</p>
     */
    inline GetCostCategoriesResult& WithTotalSize(int value) { SetTotalSize(value); return *this;}

  private:

    Aws::String m_nextPageToken;

    Aws::Vector<Aws::String> m_costCategoryNames;

    Aws::Vector<Aws::String> m_costCategoryValues;

    int m_returnSize;

    int m_totalSize;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
