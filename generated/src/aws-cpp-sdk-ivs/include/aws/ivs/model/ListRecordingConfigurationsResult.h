﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs/model/RecordingConfigurationSummary.h>
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
namespace IVS
{
namespace Model
{
  class ListRecordingConfigurationsResult
  {
  public:
    AWS_IVS_API ListRecordingConfigurationsResult();
    AWS_IVS_API ListRecordingConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API ListRecordingConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are more recording configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListRecordingConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRecordingConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRecordingConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of the matching recording configurations.</p>
     */
    inline const Aws::Vector<RecordingConfigurationSummary>& GetRecordingConfigurations() const{ return m_recordingConfigurations; }
    inline void SetRecordingConfigurations(const Aws::Vector<RecordingConfigurationSummary>& value) { m_recordingConfigurations = value; }
    inline void SetRecordingConfigurations(Aws::Vector<RecordingConfigurationSummary>&& value) { m_recordingConfigurations = std::move(value); }
    inline ListRecordingConfigurationsResult& WithRecordingConfigurations(const Aws::Vector<RecordingConfigurationSummary>& value) { SetRecordingConfigurations(value); return *this;}
    inline ListRecordingConfigurationsResult& WithRecordingConfigurations(Aws::Vector<RecordingConfigurationSummary>&& value) { SetRecordingConfigurations(std::move(value)); return *this;}
    inline ListRecordingConfigurationsResult& AddRecordingConfigurations(const RecordingConfigurationSummary& value) { m_recordingConfigurations.push_back(value); return *this; }
    inline ListRecordingConfigurationsResult& AddRecordingConfigurations(RecordingConfigurationSummary&& value) { m_recordingConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListRecordingConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListRecordingConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListRecordingConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<RecordingConfigurationSummary> m_recordingConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
