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
  /**
   * <p>Response parameters for the StartConfigurationSession API.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appconfigdata-2021-11-11/StartConfigurationSessionResponse">AWS
   * API Reference</a></p>
   */
  class AWS_APPCONFIGDATA_API StartConfigurationSessionResult
  {
  public:
    StartConfigurationSessionResult();
    StartConfigurationSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartConfigurationSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Token encapsulating state about the configuration session. Provide this token
     * to the GetLatestConfiguration API to retrieve configuration data.</p>
     *  <p>This token should only be used once in your first call to
     * GetLatestConfiguration. You MUST use the new token in the GetConfiguration
     * response (NextPollConfigurationToken) in each subsequent call to
     * GetLatestConfiguration.</p> 
     */
    inline const Aws::String& GetInitialConfigurationToken() const{ return m_initialConfigurationToken; }

    /**
     * <p>Token encapsulating state about the configuration session. Provide this token
     * to the GetLatestConfiguration API to retrieve configuration data.</p>
     *  <p>This token should only be used once in your first call to
     * GetLatestConfiguration. You MUST use the new token in the GetConfiguration
     * response (NextPollConfigurationToken) in each subsequent call to
     * GetLatestConfiguration.</p> 
     */
    inline void SetInitialConfigurationToken(const Aws::String& value) { m_initialConfigurationToken = value; }

    /**
     * <p>Token encapsulating state about the configuration session. Provide this token
     * to the GetLatestConfiguration API to retrieve configuration data.</p>
     *  <p>This token should only be used once in your first call to
     * GetLatestConfiguration. You MUST use the new token in the GetConfiguration
     * response (NextPollConfigurationToken) in each subsequent call to
     * GetLatestConfiguration.</p> 
     */
    inline void SetInitialConfigurationToken(Aws::String&& value) { m_initialConfigurationToken = std::move(value); }

    /**
     * <p>Token encapsulating state about the configuration session. Provide this token
     * to the GetLatestConfiguration API to retrieve configuration data.</p>
     *  <p>This token should only be used once in your first call to
     * GetLatestConfiguration. You MUST use the new token in the GetConfiguration
     * response (NextPollConfigurationToken) in each subsequent call to
     * GetLatestConfiguration.</p> 
     */
    inline void SetInitialConfigurationToken(const char* value) { m_initialConfigurationToken.assign(value); }

    /**
     * <p>Token encapsulating state about the configuration session. Provide this token
     * to the GetLatestConfiguration API to retrieve configuration data.</p>
     *  <p>This token should only be used once in your first call to
     * GetLatestConfiguration. You MUST use the new token in the GetConfiguration
     * response (NextPollConfigurationToken) in each subsequent call to
     * GetLatestConfiguration.</p> 
     */
    inline StartConfigurationSessionResult& WithInitialConfigurationToken(const Aws::String& value) { SetInitialConfigurationToken(value); return *this;}

    /**
     * <p>Token encapsulating state about the configuration session. Provide this token
     * to the GetLatestConfiguration API to retrieve configuration data.</p>
     *  <p>This token should only be used once in your first call to
     * GetLatestConfiguration. You MUST use the new token in the GetConfiguration
     * response (NextPollConfigurationToken) in each subsequent call to
     * GetLatestConfiguration.</p> 
     */
    inline StartConfigurationSessionResult& WithInitialConfigurationToken(Aws::String&& value) { SetInitialConfigurationToken(std::move(value)); return *this;}

    /**
     * <p>Token encapsulating state about the configuration session. Provide this token
     * to the GetLatestConfiguration API to retrieve configuration data.</p>
     *  <p>This token should only be used once in your first call to
     * GetLatestConfiguration. You MUST use the new token in the GetConfiguration
     * response (NextPollConfigurationToken) in each subsequent call to
     * GetLatestConfiguration.</p> 
     */
    inline StartConfigurationSessionResult& WithInitialConfigurationToken(const char* value) { SetInitialConfigurationToken(value); return *this;}

  private:

    Aws::String m_initialConfigurationToken;
  };

} // namespace Model
} // namespace AppConfigData
} // namespace Aws
