/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/BrowserStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{
  class DeleteBrowserResult
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API DeleteBrowserResult() = default;
    AWS_BEDROCKAGENTCORECONTROL_API DeleteBrowserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORECONTROL_API DeleteBrowserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the deleted browser.</p>
     */
    inline const Aws::String& GetBrowserId() const { return m_browserId; }
    template<typename BrowserIdT = Aws::String>
    void SetBrowserId(BrowserIdT&& value) { m_browserIdHasBeenSet = true; m_browserId = std::forward<BrowserIdT>(value); }
    template<typename BrowserIdT = Aws::String>
    DeleteBrowserResult& WithBrowserId(BrowserIdT&& value) { SetBrowserId(std::forward<BrowserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the browser deletion.</p>
     */
    inline BrowserStatus GetStatus() const { return m_status; }
    inline void SetStatus(BrowserStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DeleteBrowserResult& WithStatus(BrowserStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the browser was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    DeleteBrowserResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteBrowserResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_browserId;
    bool m_browserIdHasBeenSet = false;

    BrowserStatus m_status{BrowserStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
