/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/RecordingConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetRecordingConfigurationResult
  {
  public:
    AWS_IVS_API GetRecordingConfigurationResult() = default;
    AWS_IVS_API GetRecordingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVS_API GetRecordingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <zonbook></zonbook><xhtml></xhtml>
     */
    inline const RecordingConfiguration& GetRecordingConfiguration() const { return m_recordingConfiguration; }
    template<typename RecordingConfigurationT = RecordingConfiguration>
    void SetRecordingConfiguration(RecordingConfigurationT&& value) { m_recordingConfigurationHasBeenSet = true; m_recordingConfiguration = std::forward<RecordingConfigurationT>(value); }
    template<typename RecordingConfigurationT = RecordingConfiguration>
    GetRecordingConfigurationResult& WithRecordingConfiguration(RecordingConfigurationT&& value) { SetRecordingConfiguration(std::forward<RecordingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRecordingConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RecordingConfiguration m_recordingConfiguration;
    bool m_recordingConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
