/**
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


    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline ListDatasetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline ListDatasetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> An opaque pagination token indicating where to continue the listing of
     * datasets. </p>
     */
    inline ListDatasetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Provides information about the specified dataset, including creation time,
     * dataset ARN, and status. </p>
     */
    inline const Aws::Vector<DatasetSummary>& GetDatasetSummaries() const{ return m_datasetSummaries; }

    /**
     * <p>Provides information about the specified dataset, including creation time,
     * dataset ARN, and status. </p>
     */
    inline void SetDatasetSummaries(const Aws::Vector<DatasetSummary>& value) { m_datasetSummaries = value; }

    /**
     * <p>Provides information about the specified dataset, including creation time,
     * dataset ARN, and status. </p>
     */
    inline void SetDatasetSummaries(Aws::Vector<DatasetSummary>&& value) { m_datasetSummaries = std::move(value); }

    /**
     * <p>Provides information about the specified dataset, including creation time,
     * dataset ARN, and status. </p>
     */
    inline ListDatasetsResult& WithDatasetSummaries(const Aws::Vector<DatasetSummary>& value) { SetDatasetSummaries(value); return *this;}

    /**
     * <p>Provides information about the specified dataset, including creation time,
     * dataset ARN, and status. </p>
     */
    inline ListDatasetsResult& WithDatasetSummaries(Aws::Vector<DatasetSummary>&& value) { SetDatasetSummaries(std::move(value)); return *this;}

    /**
     * <p>Provides information about the specified dataset, including creation time,
     * dataset ARN, and status. </p>
     */
    inline ListDatasetsResult& AddDatasetSummaries(const DatasetSummary& value) { m_datasetSummaries.push_back(value); return *this; }

    /**
     * <p>Provides information about the specified dataset, including creation time,
     * dataset ARN, and status. </p>
     */
    inline ListDatasetsResult& AddDatasetSummaries(DatasetSummary&& value) { m_datasetSummaries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<DatasetSummary> m_datasetSummaries;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
