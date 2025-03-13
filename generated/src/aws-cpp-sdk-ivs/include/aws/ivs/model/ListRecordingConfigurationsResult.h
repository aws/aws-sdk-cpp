/**
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
    AWS_IVS_API ListRecordingConfigurationsResult() = default;
    AWS_IVS_API ListRecordingConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API ListRecordingConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are more recording configurations than <code>maxResults</code>, use
     * <code>nextToken</code> in the request to get the next set.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRecordingConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of the matching recording configurations.</p>
     */
    inline const Aws::Vector<RecordingConfigurationSummary>& GetRecordingConfigurations() const { return m_recordingConfigurations; }
    template<typename RecordingConfigurationsT = Aws::Vector<RecordingConfigurationSummary>>
    void SetRecordingConfigurations(RecordingConfigurationsT&& value) { m_recordingConfigurationsHasBeenSet = true; m_recordingConfigurations = std::forward<RecordingConfigurationsT>(value); }
    template<typename RecordingConfigurationsT = Aws::Vector<RecordingConfigurationSummary>>
    ListRecordingConfigurationsResult& WithRecordingConfigurations(RecordingConfigurationsT&& value) { SetRecordingConfigurations(std::forward<RecordingConfigurationsT>(value)); return *this;}
    template<typename RecordingConfigurationsT = RecordingConfigurationSummary>
    ListRecordingConfigurationsResult& AddRecordingConfigurations(RecordingConfigurationsT&& value) { m_recordingConfigurationsHasBeenSet = true; m_recordingConfigurations.emplace_back(std::forward<RecordingConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRecordingConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RecordingConfigurationSummary> m_recordingConfigurations;
    bool m_recordingConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
