/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/SipMediaApplicationLoggingConfiguration.h>
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
namespace Chime
{
namespace Model
{
  class PutSipMediaApplicationLoggingConfigurationResult
  {
  public:
    AWS_CHIME_API PutSipMediaApplicationLoggingConfigurationResult();
    AWS_CHIME_API PutSipMediaApplicationLoggingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API PutSipMediaApplicationLoggingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The logging configuration of the SIP media application.</p>
     */
    inline const SipMediaApplicationLoggingConfiguration& GetSipMediaApplicationLoggingConfiguration() const{ return m_sipMediaApplicationLoggingConfiguration; }

    /**
     * <p>The logging configuration of the SIP media application.</p>
     */
    inline void SetSipMediaApplicationLoggingConfiguration(const SipMediaApplicationLoggingConfiguration& value) { m_sipMediaApplicationLoggingConfiguration = value; }

    /**
     * <p>The logging configuration of the SIP media application.</p>
     */
    inline void SetSipMediaApplicationLoggingConfiguration(SipMediaApplicationLoggingConfiguration&& value) { m_sipMediaApplicationLoggingConfiguration = std::move(value); }

    /**
     * <p>The logging configuration of the SIP media application.</p>
     */
    inline PutSipMediaApplicationLoggingConfigurationResult& WithSipMediaApplicationLoggingConfiguration(const SipMediaApplicationLoggingConfiguration& value) { SetSipMediaApplicationLoggingConfiguration(value); return *this;}

    /**
     * <p>The logging configuration of the SIP media application.</p>
     */
    inline PutSipMediaApplicationLoggingConfigurationResult& WithSipMediaApplicationLoggingConfiguration(SipMediaApplicationLoggingConfiguration&& value) { SetSipMediaApplicationLoggingConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutSipMediaApplicationLoggingConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutSipMediaApplicationLoggingConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutSipMediaApplicationLoggingConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    SipMediaApplicationLoggingConfiguration m_sipMediaApplicationLoggingConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
