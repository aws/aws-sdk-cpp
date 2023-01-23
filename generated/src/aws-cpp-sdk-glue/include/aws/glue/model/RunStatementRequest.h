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
  class RunStatementRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API RunStatementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RunStatement"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Session Id of the statement to be run.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The Session Id of the statement to be run.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>The Session Id of the statement to be run.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>The Session Id of the statement to be run.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>The Session Id of the statement to be run.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>The Session Id of the statement to be run.</p>
     */
    inline RunStatementRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The Session Id of the statement to be run.</p>
     */
    inline RunStatementRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The Session Id of the statement to be run.</p>
     */
    inline RunStatementRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>The statement code to be run.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>The statement code to be run.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The statement code to be run.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The statement code to be run.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The statement code to be run.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>The statement code to be run.</p>
     */
    inline RunStatementRequest& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>The statement code to be run.</p>
     */
    inline RunStatementRequest& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>The statement code to be run.</p>
     */
    inline RunStatementRequest& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>The origin of the request.</p>
     */
    inline const Aws::String& GetRequestOrigin() const{ return m_requestOrigin; }

    /**
     * <p>The origin of the request.</p>
     */
    inline bool RequestOriginHasBeenSet() const { return m_requestOriginHasBeenSet; }

    /**
     * <p>The origin of the request.</p>
     */
    inline void SetRequestOrigin(const Aws::String& value) { m_requestOriginHasBeenSet = true; m_requestOrigin = value; }

    /**
     * <p>The origin of the request.</p>
     */
    inline void SetRequestOrigin(Aws::String&& value) { m_requestOriginHasBeenSet = true; m_requestOrigin = std::move(value); }

    /**
     * <p>The origin of the request.</p>
     */
    inline void SetRequestOrigin(const char* value) { m_requestOriginHasBeenSet = true; m_requestOrigin.assign(value); }

    /**
     * <p>The origin of the request.</p>
     */
    inline RunStatementRequest& WithRequestOrigin(const Aws::String& value) { SetRequestOrigin(value); return *this;}

    /**
     * <p>The origin of the request.</p>
     */
    inline RunStatementRequest& WithRequestOrigin(Aws::String&& value) { SetRequestOrigin(std::move(value)); return *this;}

    /**
     * <p>The origin of the request.</p>
     */
    inline RunStatementRequest& WithRequestOrigin(const char* value) { SetRequestOrigin(value); return *this;}

  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_requestOrigin;
    bool m_requestOriginHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
