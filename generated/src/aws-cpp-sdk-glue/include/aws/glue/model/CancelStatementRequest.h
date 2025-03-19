/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CancelStatementRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CancelStatementRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelStatement"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Session ID of the statement to be cancelled.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    CancelStatementRequest& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the statement to be cancelled.</p>
     */
    inline int GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(int value) { m_idHasBeenSet = true; m_id = value; }
    inline CancelStatementRequest& WithId(int value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The origin of the request to cancel the statement.</p>
     */
    inline const Aws::String& GetRequestOrigin() const { return m_requestOrigin; }
    inline bool RequestOriginHasBeenSet() const { return m_requestOriginHasBeenSet; }
    template<typename RequestOriginT = Aws::String>
    void SetRequestOrigin(RequestOriginT&& value) { m_requestOriginHasBeenSet = true; m_requestOrigin = std::forward<RequestOriginT>(value); }
    template<typename RequestOriginT = Aws::String>
    CancelStatementRequest& WithRequestOrigin(RequestOriginT&& value) { SetRequestOrigin(std::forward<RequestOriginT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    int m_id{0};
    bool m_idHasBeenSet = false;

    Aws::String m_requestOrigin;
    bool m_requestOriginHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
