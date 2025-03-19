/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/model/EncoderConfiguration.h>
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
namespace ivsrealtime
{
namespace Model
{
  class CreateEncoderConfigurationResult
  {
  public:
    AWS_IVSREALTIME_API CreateEncoderConfigurationResult() = default;
    AWS_IVSREALTIME_API CreateEncoderConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API CreateEncoderConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The EncoderConfiguration that was created.</p>
     */
    inline const EncoderConfiguration& GetEncoderConfiguration() const { return m_encoderConfiguration; }
    template<typename EncoderConfigurationT = EncoderConfiguration>
    void SetEncoderConfiguration(EncoderConfigurationT&& value) { m_encoderConfigurationHasBeenSet = true; m_encoderConfiguration = std::forward<EncoderConfigurationT>(value); }
    template<typename EncoderConfigurationT = EncoderConfiguration>
    CreateEncoderConfigurationResult& WithEncoderConfiguration(EncoderConfigurationT&& value) { SetEncoderConfiguration(std::forward<EncoderConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateEncoderConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    EncoderConfiguration m_encoderConfiguration;
    bool m_encoderConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
