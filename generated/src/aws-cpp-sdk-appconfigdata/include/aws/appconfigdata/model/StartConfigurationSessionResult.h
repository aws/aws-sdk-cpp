/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfigdata/AppConfigData_EXPORTS.h>
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
namespace AppConfigData
{
namespace Model
{
  class StartConfigurationSessionResult
  {
  public:
    AWS_APPCONFIGDATA_API StartConfigurationSessionResult();
    AWS_APPCONFIGDATA_API StartConfigurationSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPCONFIGDATA_API StartConfigurationSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Token encapsulating state about the configuration session. Provide this token
     * to the <code>GetLatestConfiguration</code> API to retrieve configuration
     * data.</p>  <p>This token should only be used once in your first call
     * to <code>GetLatestConfiguration</code>. You <i>must</i> use the new token in the
     * <code>GetLatestConfiguration</code> response
     * (<code>NextPollConfigurationToken</code>) in each subsequent call to
     * <code>GetLatestConfiguration</code>.</p> <p>The
     * <code>InitialConfigurationToken</code> and
     * <code>NextPollConfigurationToken</code> should only be used once. To support
     * long poll use cases, the tokens are valid for up to 24 hours. If a
     * <code>GetLatestConfiguration</code> call uses an expired token, the system
     * returns <code>BadRequestException</code>.</p> 
     */
    inline const Aws::String& GetInitialConfigurationToken() const{ return m_initialConfigurationToken; }

    /**
     * <p>Token encapsulating state about the configuration session. Provide this token
     * to the <code>GetLatestConfiguration</code> API to retrieve configuration
     * data.</p>  <p>This token should only be used once in your first call
     * to <code>GetLatestConfiguration</code>. You <i>must</i> use the new token in the
     * <code>GetLatestConfiguration</code> response
     * (<code>NextPollConfigurationToken</code>) in each subsequent call to
     * <code>GetLatestConfiguration</code>.</p> <p>The
     * <code>InitialConfigurationToken</code> and
     * <code>NextPollConfigurationToken</code> should only be used once. To support
     * long poll use cases, the tokens are valid for up to 24 hours. If a
     * <code>GetLatestConfiguration</code> call uses an expired token, the system
     * returns <code>BadRequestException</code>.</p> 
     */
    inline void SetInitialConfigurationToken(const Aws::String& value) { m_initialConfigurationToken = value; }

    /**
     * <p>Token encapsulating state about the configuration session. Provide this token
     * to the <code>GetLatestConfiguration</code> API to retrieve configuration
     * data.</p>  <p>This token should only be used once in your first call
     * to <code>GetLatestConfiguration</code>. You <i>must</i> use the new token in the
     * <code>GetLatestConfiguration</code> response
     * (<code>NextPollConfigurationToken</code>) in each subsequent call to
     * <code>GetLatestConfiguration</code>.</p> <p>The
     * <code>InitialConfigurationToken</code> and
     * <code>NextPollConfigurationToken</code> should only be used once. To support
     * long poll use cases, the tokens are valid for up to 24 hours. If a
     * <code>GetLatestConfiguration</code> call uses an expired token, the system
     * returns <code>BadRequestException</code>.</p> 
     */
    inline void SetInitialConfigurationToken(Aws::String&& value) { m_initialConfigurationToken = std::move(value); }

    /**
     * <p>Token encapsulating state about the configuration session. Provide this token
     * to the <code>GetLatestConfiguration</code> API to retrieve configuration
     * data.</p>  <p>This token should only be used once in your first call
     * to <code>GetLatestConfiguration</code>. You <i>must</i> use the new token in the
     * <code>GetLatestConfiguration</code> response
     * (<code>NextPollConfigurationToken</code>) in each subsequent call to
     * <code>GetLatestConfiguration</code>.</p> <p>The
     * <code>InitialConfigurationToken</code> and
     * <code>NextPollConfigurationToken</code> should only be used once. To support
     * long poll use cases, the tokens are valid for up to 24 hours. If a
     * <code>GetLatestConfiguration</code> call uses an expired token, the system
     * returns <code>BadRequestException</code>.</p> 
     */
    inline void SetInitialConfigurationToken(const char* value) { m_initialConfigurationToken.assign(value); }

    /**
     * <p>Token encapsulating state about the configuration session. Provide this token
     * to the <code>GetLatestConfiguration</code> API to retrieve configuration
     * data.</p>  <p>This token should only be used once in your first call
     * to <code>GetLatestConfiguration</code>. You <i>must</i> use the new token in the
     * <code>GetLatestConfiguration</code> response
     * (<code>NextPollConfigurationToken</code>) in each subsequent call to
     * <code>GetLatestConfiguration</code>.</p> <p>The
     * <code>InitialConfigurationToken</code> and
     * <code>NextPollConfigurationToken</code> should only be used once. To support
     * long poll use cases, the tokens are valid for up to 24 hours. If a
     * <code>GetLatestConfiguration</code> call uses an expired token, the system
     * returns <code>BadRequestException</code>.</p> 
     */
    inline StartConfigurationSessionResult& WithInitialConfigurationToken(const Aws::String& value) { SetInitialConfigurationToken(value); return *this;}

    /**
     * <p>Token encapsulating state about the configuration session. Provide this token
     * to the <code>GetLatestConfiguration</code> API to retrieve configuration
     * data.</p>  <p>This token should only be used once in your first call
     * to <code>GetLatestConfiguration</code>. You <i>must</i> use the new token in the
     * <code>GetLatestConfiguration</code> response
     * (<code>NextPollConfigurationToken</code>) in each subsequent call to
     * <code>GetLatestConfiguration</code>.</p> <p>The
     * <code>InitialConfigurationToken</code> and
     * <code>NextPollConfigurationToken</code> should only be used once. To support
     * long poll use cases, the tokens are valid for up to 24 hours. If a
     * <code>GetLatestConfiguration</code> call uses an expired token, the system
     * returns <code>BadRequestException</code>.</p> 
     */
    inline StartConfigurationSessionResult& WithInitialConfigurationToken(Aws::String&& value) { SetInitialConfigurationToken(std::move(value)); return *this;}

    /**
     * <p>Token encapsulating state about the configuration session. Provide this token
     * to the <code>GetLatestConfiguration</code> API to retrieve configuration
     * data.</p>  <p>This token should only be used once in your first call
     * to <code>GetLatestConfiguration</code>. You <i>must</i> use the new token in the
     * <code>GetLatestConfiguration</code> response
     * (<code>NextPollConfigurationToken</code>) in each subsequent call to
     * <code>GetLatestConfiguration</code>.</p> <p>The
     * <code>InitialConfigurationToken</code> and
     * <code>NextPollConfigurationToken</code> should only be used once. To support
     * long poll use cases, the tokens are valid for up to 24 hours. If a
     * <code>GetLatestConfiguration</code> call uses an expired token, the system
     * returns <code>BadRequestException</code>.</p> 
     */
    inline StartConfigurationSessionResult& WithInitialConfigurationToken(const char* value) { SetInitialConfigurationToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartConfigurationSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartConfigurationSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartConfigurationSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_initialConfigurationToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AppConfigData
} // namespace Aws
