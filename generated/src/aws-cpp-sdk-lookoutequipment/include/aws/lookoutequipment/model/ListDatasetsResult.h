﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lookoutequipment/model/DatasetSummary.h>
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
namespace LookoutEquipment
{
namespace Model
{
  class ListDatasetsResult
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API ListDatasetsResult();
    AWS_LOOKOUTEQUIPMENT_API ListDatasetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTEQUIPMENT_API ListDatasetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDatasetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDatasetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDatasetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides information about the specified dataset, including creation time,
     * dataset ARN, and status. </p>
     */
    inline const Aws::Vector<DatasetSummary>& GetDatasetSummaries() const{ return m_datasetSummaries; }
    inline void SetDatasetSummaries(const Aws::Vector<DatasetSummary>& value) { m_datasetSummaries = value; }
    inline void SetDatasetSummaries(Aws::Vector<DatasetSummary>&& value) { m_datasetSummaries = std::move(value); }
    inline ListDatasetsResult& WithDatasetSummaries(const Aws::Vector<DatasetSummary>& value) { SetDatasetSummaries(value); return *this;}
    inline ListDatasetsResult& WithDatasetSummaries(Aws::Vector<DatasetSummary>&& value) { SetDatasetSummaries(std::move(value)); return *this;}
    inline ListDatasetsResult& AddDatasetSummaries(const DatasetSummary& value) { m_datasetSummaries.push_back(value); return *this; }
    inline ListDatasetsResult& AddDatasetSummaries(DatasetSummary&& value) { m_datasetSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDatasetsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDatasetsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDatasetsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<DatasetSummary> m_datasetSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
