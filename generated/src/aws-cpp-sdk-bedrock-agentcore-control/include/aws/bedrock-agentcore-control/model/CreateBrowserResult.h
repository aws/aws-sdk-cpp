/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agentcore-control/model/BrowserStatus.h>
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
  class CreateBrowserResult
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API CreateBrowserResult() = default;
    AWS_BEDROCKAGENTCORECONTROL_API CreateBrowserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORECONTROL_API CreateBrowserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier of the created browser.</p>
     */
    inline const Aws::String& GetBrowserId() const { return m_browserId; }
    template<typename BrowserIdT = Aws::String>
    void SetBrowserId(BrowserIdT&& value) { m_browserIdHasBeenSet = true; m_browserId = std::forward<BrowserIdT>(value); }
    template<typename BrowserIdT = Aws::String>
    CreateBrowserResult& WithBrowserId(BrowserIdT&& value) { SetBrowserId(std::forward<BrowserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the created browser.</p>
     */
    inline const Aws::String& GetBrowserArn() const { return m_browserArn; }
    template<typename BrowserArnT = Aws::String>
    void SetBrowserArn(BrowserArnT&& value) { m_browserArnHasBeenSet = true; m_browserArn = std::forward<BrowserArnT>(value); }
    template<typename BrowserArnT = Aws::String>
    CreateBrowserResult& WithBrowserArn(BrowserArnT&& value) { SetBrowserArn(std::forward<BrowserArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the browser was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreateBrowserResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the browser.</p>
     */
    inline BrowserStatus GetStatus() const { return m_status; }
    inline void SetStatus(BrowserStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateBrowserResult& WithStatus(BrowserStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateBrowserResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_browserId;
    bool m_browserIdHasBeenSet = false;

    Aws::String m_browserArn;
    bool m_browserArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    BrowserStatus m_status{BrowserStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
