/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/RecordingConfiguration.h>
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
  class AWS_IVS_API CreateRecordingConfigurationResult
  {
  public:
    CreateRecordingConfigurationResult();
    CreateRecordingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateRecordingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const RecordingConfiguration& GetRecordingConfiguration() const{ return m_recordingConfiguration; }

    
    inline void SetRecordingConfiguration(const RecordingConfiguration& value) { m_recordingConfiguration = value; }

    
    inline void SetRecordingConfiguration(RecordingConfiguration&& value) { m_recordingConfiguration = std::move(value); }

    
    inline CreateRecordingConfigurationResult& WithRecordingConfiguration(const RecordingConfiguration& value) { SetRecordingConfiguration(value); return *this;}

    
    inline CreateRecordingConfigurationResult& WithRecordingConfiguration(RecordingConfiguration&& value) { SetRecordingConfiguration(std::move(value)); return *this;}

  private:

    RecordingConfiguration m_recordingConfiguration;
  };

} // namespace Model
} // namespace IVS
} // namespace Aws
