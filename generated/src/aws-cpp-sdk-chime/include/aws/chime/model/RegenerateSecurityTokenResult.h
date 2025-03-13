/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/Bot.h>
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
  class RegenerateSecurityTokenResult
  {
  public:
    AWS_CHIME_API RegenerateSecurityTokenResult() = default;
    AWS_CHIME_API RegenerateSecurityTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API RegenerateSecurityTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A resource that allows Enterprise account administrators to configure an
     * interface that receives events from Amazon Chime.</p>
     */
    inline const Bot& GetBot() const { return m_bot; }
    template<typename BotT = Bot>
    void SetBot(BotT&& value) { m_botHasBeenSet = true; m_bot = std::forward<BotT>(value); }
    template<typename BotT = Bot>
    RegenerateSecurityTokenResult& WithBot(BotT&& value) { SetBot(std::forward<BotT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RegenerateSecurityTokenResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Bot m_bot;
    bool m_botHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
