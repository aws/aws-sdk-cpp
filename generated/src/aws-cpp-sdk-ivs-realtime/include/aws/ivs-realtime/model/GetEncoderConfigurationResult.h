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
  class GetEncoderConfigurationResult
  {
  public:
    AWS_IVSREALTIME_API GetEncoderConfigurationResult();
    AWS_IVSREALTIME_API GetEncoderConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API GetEncoderConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The EncoderConfiguration that was returned.</p>
     */
    inline const EncoderConfiguration& GetEncoderConfiguration() const{ return m_encoderConfiguration; }

    /**
     * <p>The EncoderConfiguration that was returned.</p>
     */
    inline void SetEncoderConfiguration(const EncoderConfiguration& value) { m_encoderConfiguration = value; }

    /**
     * <p>The EncoderConfiguration that was returned.</p>
     */
    inline void SetEncoderConfiguration(EncoderConfiguration&& value) { m_encoderConfiguration = std::move(value); }

    /**
     * <p>The EncoderConfiguration that was returned.</p>
     */
    inline GetEncoderConfigurationResult& WithEncoderConfiguration(const EncoderConfiguration& value) { SetEncoderConfiguration(value); return *this;}

    /**
     * <p>The EncoderConfiguration that was returned.</p>
     */
    inline GetEncoderConfigurationResult& WithEncoderConfiguration(EncoderConfiguration&& value) { SetEncoderConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetEncoderConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetEncoderConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetEncoderConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    EncoderConfiguration m_encoderConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
