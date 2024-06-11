﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/DataCellsFilter.h>
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
namespace LakeFormation
{
namespace Model
{
  class ListDataCellsFilterResult
  {
  public:
    AWS_LAKEFORMATION_API ListDataCellsFilterResult();
    AWS_LAKEFORMATION_API ListDataCellsFilterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API ListDataCellsFilterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>DataCellFilter</code> structures.</p>
     */
    inline const Aws::Vector<DataCellsFilter>& GetDataCellsFilters() const{ return m_dataCellsFilters; }
    inline void SetDataCellsFilters(const Aws::Vector<DataCellsFilter>& value) { m_dataCellsFilters = value; }
    inline void SetDataCellsFilters(Aws::Vector<DataCellsFilter>&& value) { m_dataCellsFilters = std::move(value); }
    inline ListDataCellsFilterResult& WithDataCellsFilters(const Aws::Vector<DataCellsFilter>& value) { SetDataCellsFilters(value); return *this;}
    inline ListDataCellsFilterResult& WithDataCellsFilters(Aws::Vector<DataCellsFilter>&& value) { SetDataCellsFilters(std::move(value)); return *this;}
    inline ListDataCellsFilterResult& AddDataCellsFilters(const DataCellsFilter& value) { m_dataCellsFilters.push_back(value); return *this; }
    inline ListDataCellsFilterResult& AddDataCellsFilters(DataCellsFilter&& value) { m_dataCellsFilters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if not all requested data cell filters have been
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDataCellsFilterResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDataCellsFilterResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDataCellsFilterResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDataCellsFilterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDataCellsFilterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDataCellsFilterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DataCellsFilter> m_dataCellsFilters;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
