/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-signals/model/ServiceLevelObjectiveSummary.h>
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
namespace ApplicationSignals
{
namespace Model
{
  class ListServiceLevelObjectivesResult
  {
  public:
    AWS_APPLICATIONSIGNALS_API ListServiceLevelObjectivesResult();
    AWS_APPLICATIONSIGNALS_API ListServiceLevelObjectivesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONSIGNALS_API ListServiceLevelObjectivesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of structures, where each structure contains information about one
     * SLO.</p>
     */
    inline const Aws::Vector<ServiceLevelObjectiveSummary>& GetSloSummaries() const{ return m_sloSummaries; }
    inline void SetSloSummaries(const Aws::Vector<ServiceLevelObjectiveSummary>& value) { m_sloSummaries = value; }
    inline void SetSloSummaries(Aws::Vector<ServiceLevelObjectiveSummary>&& value) { m_sloSummaries = std::move(value); }
    inline ListServiceLevelObjectivesResult& WithSloSummaries(const Aws::Vector<ServiceLevelObjectiveSummary>& value) { SetSloSummaries(value); return *this;}
    inline ListServiceLevelObjectivesResult& WithSloSummaries(Aws::Vector<ServiceLevelObjectiveSummary>&& value) { SetSloSummaries(std::move(value)); return *this;}
    inline ListServiceLevelObjectivesResult& AddSloSummaries(const ServiceLevelObjectiveSummary& value) { m_sloSummaries.push_back(value); return *this; }
    inline ListServiceLevelObjectivesResult& AddSloSummaries(ServiceLevelObjectiveSummary&& value) { m_sloSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Include this value in your next use of this API to get next set of service
     * level objectives.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListServiceLevelObjectivesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListServiceLevelObjectivesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListServiceLevelObjectivesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListServiceLevelObjectivesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListServiceLevelObjectivesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListServiceLevelObjectivesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ServiceLevelObjectiveSummary> m_sloSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
