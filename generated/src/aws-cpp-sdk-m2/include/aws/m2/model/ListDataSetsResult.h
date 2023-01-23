/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/DataSetSummary.h>
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
namespace MainframeModernization
{
namespace Model
{
  class ListDataSetsResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ListDataSetsResult();
    AWS_MAINFRAMEMODERNIZATION_API ListDataSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API ListDataSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of data sets, containing information including the creation time,
     * the data set name, the data set organization, the data set format, and the last
     * time the data set was referenced or updated.</p>
     */
    inline const Aws::Vector<DataSetSummary>& GetDataSets() const{ return m_dataSets; }

    /**
     * <p>The list of data sets, containing information including the creation time,
     * the data set name, the data set organization, the data set format, and the last
     * time the data set was referenced or updated.</p>
     */
    inline void SetDataSets(const Aws::Vector<DataSetSummary>& value) { m_dataSets = value; }

    /**
     * <p>The list of data sets, containing information including the creation time,
     * the data set name, the data set organization, the data set format, and the last
     * time the data set was referenced or updated.</p>
     */
    inline void SetDataSets(Aws::Vector<DataSetSummary>&& value) { m_dataSets = std::move(value); }

    /**
     * <p>The list of data sets, containing information including the creation time,
     * the data set name, the data set organization, the data set format, and the last
     * time the data set was referenced or updated.</p>
     */
    inline ListDataSetsResult& WithDataSets(const Aws::Vector<DataSetSummary>& value) { SetDataSets(value); return *this;}

    /**
     * <p>The list of data sets, containing information including the creation time,
     * the data set name, the data set organization, the data set format, and the last
     * time the data set was referenced or updated.</p>
     */
    inline ListDataSetsResult& WithDataSets(Aws::Vector<DataSetSummary>&& value) { SetDataSets(std::move(value)); return *this;}

    /**
     * <p>The list of data sets, containing information including the creation time,
     * the data set name, the data set organization, the data set format, and the last
     * time the data set was referenced or updated.</p>
     */
    inline ListDataSetsResult& AddDataSets(const DataSetSummary& value) { m_dataSets.push_back(value); return *this; }

    /**
     * <p>The list of data sets, containing information including the creation time,
     * the data set name, the data set organization, the data set format, and the last
     * time the data set was referenced or updated.</p>
     */
    inline ListDataSetsResult& AddDataSets(DataSetSummary&& value) { m_dataSets.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline ListDataSetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline ListDataSetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline ListDataSetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DataSetSummary> m_dataSets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
