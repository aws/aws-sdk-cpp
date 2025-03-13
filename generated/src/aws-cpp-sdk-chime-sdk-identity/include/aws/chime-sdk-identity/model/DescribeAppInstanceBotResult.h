/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/model/AppInstanceBot.h>
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
namespace ChimeSDKIdentity
{
namespace Model
{
  class DescribeAppInstanceBotResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceBotResult() = default;
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceBotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API DescribeAppInstanceBotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The detials of the <code>AppInstanceBot</code>.</p>
     */
    inline const AppInstanceBot& GetAppInstanceBot() const { return m_appInstanceBot; }
    template<typename AppInstanceBotT = AppInstanceBot>
    void SetAppInstanceBot(AppInstanceBotT&& value) { m_appInstanceBotHasBeenSet = true; m_appInstanceBot = std::forward<AppInstanceBotT>(value); }
    template<typename AppInstanceBotT = AppInstanceBot>
    DescribeAppInstanceBotResult& WithAppInstanceBot(AppInstanceBotT&& value) { SetAppInstanceBot(std::forward<AppInstanceBotT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAppInstanceBotResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AppInstanceBot m_appInstanceBot;
    bool m_appInstanceBotHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
