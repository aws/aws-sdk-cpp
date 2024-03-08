/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ivs-realtime/model/EncoderConfigurationSummary.h>
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
namespace ivsrealtime
{
namespace Model
{
  class ListEncoderConfigurationsResult
  {
  public:
    AWS_IVSREALTIME_API ListEncoderConfigurationsResult();
    AWS_IVSREALTIME_API ListEncoderConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API ListEncoderConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of the matching EncoderConfigurations (summary information only).</p>
     */
    inline const Aws::Vector<EncoderConfigurationSummary>& GetEncoderConfigurations() const{ return m_encoderConfigurations; }

    /**
     * <p>List of the matching EncoderConfigurations (summary information only).</p>
     */
    inline void SetEncoderConfigurations(const Aws::Vector<EncoderConfigurationSummary>& value) { m_encoderConfigurations = value; }

    /**
     * <p>List of the matching EncoderConfigurations (summary information only).</p>
     */
    inline void SetEncoderConfigurations(Aws::Vector<EncoderConfigurationSummary>&& value) { m_encoderConfigurations = std::move(value); }

    /**
     * <p>List of the matching EncoderConfigurations (summary information only).</p>
     */
    inline ListEncoderConfigurationsResult& WithEncoderConfigurations(const Aws::Vector<EncoderConfigurationSummary>& value) { SetEncoderConfigurations(value); return *this;}

    /**
     * <p>List of the matching EncoderConfigurations (summary information only).</p>
     */
    inline ListEncoderConfigurationsResult& WithEncoderConfigurations(Aws::Vector<EncoderConfigurationSummary>&& value) { SetEncoderConfigurations(std::move(value)); return *this;}

    /**
     * <p>List of the matching EncoderConfigurations (summary information only).</p>
     */
    inline ListEncoderConfigurationsResult& AddEncoderConfigurations(const EncoderConfigurationSummary& value) { m_encoderConfigurations.push_back(value); return *this; }

    /**
     * <p>List of the matching EncoderConfigurations (summary information only).</p>
     */
    inline ListEncoderConfigurationsResult& AddEncoderConfigurations(EncoderConfigurationSummary&& value) { m_encoderConfigurations.push_back(std::move(value)); return *this; }


    /**
     * <p>If there are more encoder configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If there are more encoder configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If there are more encoder configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If there are more encoder configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If there are more encoder configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListEncoderConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If there are more encoder configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListEncoderConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If there are more encoder configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline ListEncoderConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListEncoderConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListEncoderConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListEncoderConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<EncoderConfigurationSummary> m_encoderConfigurations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
