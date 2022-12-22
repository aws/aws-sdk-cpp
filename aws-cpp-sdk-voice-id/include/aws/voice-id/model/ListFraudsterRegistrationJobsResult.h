/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/voice-id/model/FraudsterRegistrationJobSummary.h>
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
namespace VoiceID
{
namespace Model
{
  class ListFraudsterRegistrationJobsResult
  {
  public:
    AWS_VOICEID_API ListFraudsterRegistrationJobsResult();
    AWS_VOICEID_API ListFraudsterRegistrationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API ListFraudsterRegistrationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list containing details about each specified fraudster registration
     * job.</p>
     */
    inline const Aws::Vector<FraudsterRegistrationJobSummary>& GetJobSummaries() const{ return m_jobSummaries; }

    /**
     * <p>A list containing details about each specified fraudster registration
     * job.</p>
     */
    inline void SetJobSummaries(const Aws::Vector<FraudsterRegistrationJobSummary>& value) { m_jobSummaries = value; }

    /**
     * <p>A list containing details about each specified fraudster registration
     * job.</p>
     */
    inline void SetJobSummaries(Aws::Vector<FraudsterRegistrationJobSummary>&& value) { m_jobSummaries = std::move(value); }

    /**
     * <p>A list containing details about each specified fraudster registration
     * job.</p>
     */
    inline ListFraudsterRegistrationJobsResult& WithJobSummaries(const Aws::Vector<FraudsterRegistrationJobSummary>& value) { SetJobSummaries(value); return *this;}

    /**
     * <p>A list containing details about each specified fraudster registration
     * job.</p>
     */
    inline ListFraudsterRegistrationJobsResult& WithJobSummaries(Aws::Vector<FraudsterRegistrationJobSummary>&& value) { SetJobSummaries(std::move(value)); return *this;}

    /**
     * <p>A list containing details about each specified fraudster registration
     * job.</p>
     */
    inline ListFraudsterRegistrationJobsResult& AddJobSummaries(const FraudsterRegistrationJobSummary& value) { m_jobSummaries.push_back(value); return *this; }

    /**
     * <p>A list containing details about each specified fraudster registration
     * job.</p>
     */
    inline ListFraudsterRegistrationJobsResult& AddJobSummaries(FraudsterRegistrationJobSummary&& value) { m_jobSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline ListFraudsterRegistrationJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline ListFraudsterRegistrationJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline ListFraudsterRegistrationJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<FraudsterRegistrationJobSummary> m_jobSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
