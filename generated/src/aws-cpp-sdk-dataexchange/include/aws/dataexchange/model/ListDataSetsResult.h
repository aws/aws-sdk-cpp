/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/DataSetEntry.h>
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
namespace DataExchange
{
namespace Model
{
  class ListDataSetsResult
  {
  public:
    AWS_DATAEXCHANGE_API ListDataSetsResult();
    AWS_DATAEXCHANGE_API ListDataSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAEXCHANGE_API ListDataSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The data set objects listed by the request.</p>
     */
    inline const Aws::Vector<DataSetEntry>& GetDataSets() const{ return m_dataSets; }

    /**
     * <p>The data set objects listed by the request.</p>
     */
    inline void SetDataSets(const Aws::Vector<DataSetEntry>& value) { m_dataSets = value; }

    /**
     * <p>The data set objects listed by the request.</p>
     */
    inline void SetDataSets(Aws::Vector<DataSetEntry>&& value) { m_dataSets = std::move(value); }

    /**
     * <p>The data set objects listed by the request.</p>
     */
    inline ListDataSetsResult& WithDataSets(const Aws::Vector<DataSetEntry>& value) { SetDataSets(value); return *this;}

    /**
     * <p>The data set objects listed by the request.</p>
     */
    inline ListDataSetsResult& WithDataSets(Aws::Vector<DataSetEntry>&& value) { SetDataSets(std::move(value)); return *this;}

    /**
     * <p>The data set objects listed by the request.</p>
     */
    inline ListDataSetsResult& AddDataSets(const DataSetEntry& value) { m_dataSets.push_back(value); return *this; }

    /**
     * <p>The data set objects listed by the request.</p>
     */
    inline ListDataSetsResult& AddDataSets(DataSetEntry&& value) { m_dataSets.push_back(std::move(value)); return *this; }


    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListDataSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListDataSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListDataSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DataSetEntry> m_dataSets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
