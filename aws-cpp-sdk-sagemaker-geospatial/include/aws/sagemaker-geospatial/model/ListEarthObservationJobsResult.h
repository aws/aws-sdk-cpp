/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-geospatial/model/ListEarthObservationJobOutputConfig.h>
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
namespace SageMakerGeospatial
{
namespace Model
{
  class ListEarthObservationJobsResult
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ListEarthObservationJobsResult();
    AWS_SAGEMAKERGEOSPATIAL_API ListEarthObservationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERGEOSPATIAL_API ListEarthObservationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains summary information about the Earth Observation jobs.</p>
     */
    inline const Aws::Vector<ListEarthObservationJobOutputConfig>& GetEarthObservationJobSummaries() const{ return m_earthObservationJobSummaries; }

    /**
     * <p>Contains summary information about the Earth Observation jobs.</p>
     */
    inline void SetEarthObservationJobSummaries(const Aws::Vector<ListEarthObservationJobOutputConfig>& value) { m_earthObservationJobSummaries = value; }

    /**
     * <p>Contains summary information about the Earth Observation jobs.</p>
     */
    inline void SetEarthObservationJobSummaries(Aws::Vector<ListEarthObservationJobOutputConfig>&& value) { m_earthObservationJobSummaries = std::move(value); }

    /**
     * <p>Contains summary information about the Earth Observation jobs.</p>
     */
    inline ListEarthObservationJobsResult& WithEarthObservationJobSummaries(const Aws::Vector<ListEarthObservationJobOutputConfig>& value) { SetEarthObservationJobSummaries(value); return *this;}

    /**
     * <p>Contains summary information about the Earth Observation jobs.</p>
     */
    inline ListEarthObservationJobsResult& WithEarthObservationJobSummaries(Aws::Vector<ListEarthObservationJobOutputConfig>&& value) { SetEarthObservationJobSummaries(std::move(value)); return *this;}

    /**
     * <p>Contains summary information about the Earth Observation jobs.</p>
     */
    inline ListEarthObservationJobsResult& AddEarthObservationJobSummaries(const ListEarthObservationJobOutputConfig& value) { m_earthObservationJobSummaries.push_back(value); return *this; }

    /**
     * <p>Contains summary information about the Earth Observation jobs.</p>
     */
    inline ListEarthObservationJobsResult& AddEarthObservationJobSummaries(ListEarthObservationJobOutputConfig&& value) { m_earthObservationJobSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline ListEarthObservationJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline ListEarthObservationJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline ListEarthObservationJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ListEarthObservationJobOutputConfig> m_earthObservationJobSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
