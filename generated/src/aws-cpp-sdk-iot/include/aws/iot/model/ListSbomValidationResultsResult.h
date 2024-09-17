/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/SbomValidationResultSummary.h>
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
namespace IoT
{
namespace Model
{
  class ListSbomValidationResultsResult
  {
  public:
    AWS_IOT_API ListSbomValidationResultsResult();
    AWS_IOT_API ListSbomValidationResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListSbomValidationResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A summary of the validation results for each software bill of materials
     * attached to a software package version.</p>
     */
    inline const Aws::Vector<SbomValidationResultSummary>& GetValidationResultSummaries() const{ return m_validationResultSummaries; }
    inline void SetValidationResultSummaries(const Aws::Vector<SbomValidationResultSummary>& value) { m_validationResultSummaries = value; }
    inline void SetValidationResultSummaries(Aws::Vector<SbomValidationResultSummary>&& value) { m_validationResultSummaries = std::move(value); }
    inline ListSbomValidationResultsResult& WithValidationResultSummaries(const Aws::Vector<SbomValidationResultSummary>& value) { SetValidationResultSummaries(value); return *this;}
    inline ListSbomValidationResultsResult& WithValidationResultSummaries(Aws::Vector<SbomValidationResultSummary>&& value) { SetValidationResultSummaries(std::move(value)); return *this;}
    inline ListSbomValidationResultsResult& AddValidationResultSummaries(const SbomValidationResultSummary& value) { m_validationResultSummaries.push_back(value); return *this; }
    inline ListSbomValidationResultsResult& AddValidationResultSummaries(SbomValidationResultSummary&& value) { m_validationResultSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that can be used to retrieve the next set of results, or null if
     * there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSbomValidationResultsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSbomValidationResultsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSbomValidationResultsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSbomValidationResultsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSbomValidationResultsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSbomValidationResultsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<SbomValidationResultSummary> m_validationResultSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
