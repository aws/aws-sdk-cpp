/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/Origination.h>
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
namespace ChimeSDKVoice
{
namespace Model
{
  class PutVoiceConnectorOriginationResult
  {
  public:
    AWS_CHIMESDKVOICE_API PutVoiceConnectorOriginationResult();
    AWS_CHIMESDKVOICE_API PutVoiceConnectorOriginationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API PutVoiceConnectorOriginationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Origination& GetOrigination() const{ return m_origination; }

    
    inline void SetOrigination(const Origination& value) { m_origination = value; }

    
    inline void SetOrigination(Origination&& value) { m_origination = std::move(value); }

    
    inline PutVoiceConnectorOriginationResult& WithOrigination(const Origination& value) { SetOrigination(value); return *this;}

    
    inline PutVoiceConnectorOriginationResult& WithOrigination(Origination&& value) { SetOrigination(std::move(value)); return *this;}

  private:

    Origination m_origination;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
