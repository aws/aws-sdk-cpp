/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/ModelManifestSummary.h>
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
namespace IoTFleetWise
{
namespace Model
{
  class ListModelManifestsResult
  {
  public:
    AWS_IOTFLEETWISE_API ListModelManifestsResult();
    AWS_IOTFLEETWISE_API ListModelManifestsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API ListModelManifestsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> A list of information about vehicle models.</p>
     */
    inline const Aws::Vector<ModelManifestSummary>& GetSummaries() const{ return m_summaries; }

    /**
     * <p> A list of information about vehicle models.</p>
     */
    inline void SetSummaries(const Aws::Vector<ModelManifestSummary>& value) { m_summaries = value; }

    /**
     * <p> A list of information about vehicle models.</p>
     */
    inline void SetSummaries(Aws::Vector<ModelManifestSummary>&& value) { m_summaries = std::move(value); }

    /**
     * <p> A list of information about vehicle models.</p>
     */
    inline ListModelManifestsResult& WithSummaries(const Aws::Vector<ModelManifestSummary>& value) { SetSummaries(value); return *this;}

    /**
     * <p> A list of information about vehicle models.</p>
     */
    inline ListModelManifestsResult& WithSummaries(Aws::Vector<ModelManifestSummary>&& value) { SetSummaries(std::move(value)); return *this;}

    /**
     * <p> A list of information about vehicle models.</p>
     */
    inline ListModelManifestsResult& AddSummaries(const ModelManifestSummary& value) { m_summaries.push_back(value); return *this; }

    /**
     * <p> A list of information about vehicle models.</p>
     */
    inline ListModelManifestsResult& AddSummaries(ModelManifestSummary&& value) { m_summaries.push_back(std::move(value)); return *this; }


    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline ListModelManifestsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline ListModelManifestsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline ListModelManifestsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ModelManifestSummary> m_summaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
