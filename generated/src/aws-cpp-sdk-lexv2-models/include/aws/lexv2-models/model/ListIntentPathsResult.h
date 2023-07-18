/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/AnalyticsIntentNodeSummary.h>
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
namespace LexModelsV2
{
namespace Model
{
  class ListIntentPathsResult
  {
  public:
    AWS_LEXMODELSV2_API ListIntentPathsResult();
    AWS_LEXMODELSV2_API ListIntentPathsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API ListIntentPathsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of objects, each of which contains information about a node in the
     * intent path for which you requested metrics.</p>
     */
    inline const Aws::Vector<AnalyticsIntentNodeSummary>& GetNodeSummaries() const{ return m_nodeSummaries; }

    /**
     * <p>A list of objects, each of which contains information about a node in the
     * intent path for which you requested metrics.</p>
     */
    inline void SetNodeSummaries(const Aws::Vector<AnalyticsIntentNodeSummary>& value) { m_nodeSummaries = value; }

    /**
     * <p>A list of objects, each of which contains information about a node in the
     * intent path for which you requested metrics.</p>
     */
    inline void SetNodeSummaries(Aws::Vector<AnalyticsIntentNodeSummary>&& value) { m_nodeSummaries = std::move(value); }

    /**
     * <p>A list of objects, each of which contains information about a node in the
     * intent path for which you requested metrics.</p>
     */
    inline ListIntentPathsResult& WithNodeSummaries(const Aws::Vector<AnalyticsIntentNodeSummary>& value) { SetNodeSummaries(value); return *this;}

    /**
     * <p>A list of objects, each of which contains information about a node in the
     * intent path for which you requested metrics.</p>
     */
    inline ListIntentPathsResult& WithNodeSummaries(Aws::Vector<AnalyticsIntentNodeSummary>&& value) { SetNodeSummaries(std::move(value)); return *this;}

    /**
     * <p>A list of objects, each of which contains information about a node in the
     * intent path for which you requested metrics.</p>
     */
    inline ListIntentPathsResult& AddNodeSummaries(const AnalyticsIntentNodeSummary& value) { m_nodeSummaries.push_back(value); return *this; }

    /**
     * <p>A list of objects, each of which contains information about a node in the
     * intent path for which you requested metrics.</p>
     */
    inline ListIntentPathsResult& AddNodeSummaries(AnalyticsIntentNodeSummary&& value) { m_nodeSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListIntentPathsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListIntentPathsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListIntentPathsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AnalyticsIntentNodeSummary> m_nodeSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
