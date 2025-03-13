/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
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
  class CreateAppInstanceBotResult
  {
  public:
    AWS_CHIMESDKIDENTITY_API CreateAppInstanceBotResult() = default;
    AWS_CHIMESDKIDENTITY_API CreateAppInstanceBotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKIDENTITY_API CreateAppInstanceBotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the <code>AppinstanceBot</code>.</p>
     */
    inline const Aws::String& GetAppInstanceBotArn() const { return m_appInstanceBotArn; }
    template<typename AppInstanceBotArnT = Aws::String>
    void SetAppInstanceBotArn(AppInstanceBotArnT&& value) { m_appInstanceBotArnHasBeenSet = true; m_appInstanceBotArn = std::forward<AppInstanceBotArnT>(value); }
    template<typename AppInstanceBotArnT = Aws::String>
    CreateAppInstanceBotResult& WithAppInstanceBotArn(AppInstanceBotArnT&& value) { SetAppInstanceBotArn(std::forward<AppInstanceBotArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAppInstanceBotResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appInstanceBotArn;
    bool m_appInstanceBotArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
