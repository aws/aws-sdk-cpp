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
    AWS_APPCONFIGDATA_API StartConfigurationSessionResult() = default;
    AWS_APPCONFIGDATA_API StartConfigurationSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPCONFIGDATA_API StartConfigurationSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
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
    inline const Aws::String& GetInitialConfigurationToken() const { return m_initialConfigurationToken; }
    template<typename InitialConfigurationTokenT = Aws::String>
    void SetInitialConfigurationToken(InitialConfigurationTokenT&& value) { m_initialConfigurationTokenHasBeenSet = true; m_initialConfigurationToken = std::forward<InitialConfigurationTokenT>(value); }
    template<typename InitialConfigurationTokenT = Aws::String>
    StartConfigurationSessionResult& WithInitialConfigurationToken(InitialConfigurationTokenT&& value) { SetInitialConfigurationToken(std::forward<InitialConfigurationTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartConfigurationSessionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_initialConfigurationToken;
    bool m_initialConfigurationTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfigData
} // namespace Aws
