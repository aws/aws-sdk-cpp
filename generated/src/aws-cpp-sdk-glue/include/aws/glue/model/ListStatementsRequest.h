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
  class ListStatementsRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API ListStatementsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListStatements"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Session ID of the statements.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The Session ID of the statements.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>The Session ID of the statements.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>The Session ID of the statements.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>The Session ID of the statements.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>The Session ID of the statements.</p>
     */
    inline ListStatementsRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The Session ID of the statements.</p>
     */
    inline ListStatementsRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The Session ID of the statements.</p>
     */
    inline ListStatementsRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>The origin of the request to list statements.</p>
     */
    inline const Aws::String& GetRequestOrigin() const{ return m_requestOrigin; }

    /**
     * <p>The origin of the request to list statements.</p>
     */
    inline bool RequestOriginHasBeenSet() const { return m_requestOriginHasBeenSet; }

    /**
     * <p>The origin of the request to list statements.</p>
     */
    inline void SetRequestOrigin(const Aws::String& value) { m_requestOriginHasBeenSet = true; m_requestOrigin = value; }

    /**
     * <p>The origin of the request to list statements.</p>
     */
    inline void SetRequestOrigin(Aws::String&& value) { m_requestOriginHasBeenSet = true; m_requestOrigin = std::move(value); }

    /**
     * <p>The origin of the request to list statements.</p>
     */
    inline void SetRequestOrigin(const char* value) { m_requestOriginHasBeenSet = true; m_requestOrigin.assign(value); }

    /**
     * <p>The origin of the request to list statements.</p>
     */
    inline ListStatementsRequest& WithRequestOrigin(const Aws::String& value) { SetRequestOrigin(value); return *this;}

    /**
     * <p>The origin of the request to list statements.</p>
     */
    inline ListStatementsRequest& WithRequestOrigin(Aws::String&& value) { SetRequestOrigin(std::move(value)); return *this;}

    /**
     * <p>The origin of the request to list statements.</p>
     */
    inline ListStatementsRequest& WithRequestOrigin(const char* value) { SetRequestOrigin(value); return *this;}


    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline ListStatementsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline ListStatementsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if this is a continuation call.</p>
     */
    inline ListStatementsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_requestOrigin;
    bool m_requestOriginHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
