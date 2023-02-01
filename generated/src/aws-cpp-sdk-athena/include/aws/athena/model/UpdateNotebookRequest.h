/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/athena/AthenaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/athena/model/NotebookType.h>
#include <utility>

namespace Aws
{
namespace Athena
{
namespace Model
{

  /**
   */
  class UpdateNotebookRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API UpdateNotebookRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNotebook"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the notebook to update.</p>
     */
    inline const Aws::String& GetNotebookId() const{ return m_notebookId; }

    /**
     * <p>The ID of the notebook to update.</p>
     */
    inline bool NotebookIdHasBeenSet() const { return m_notebookIdHasBeenSet; }

    /**
     * <p>The ID of the notebook to update.</p>
     */
    inline void SetNotebookId(const Aws::String& value) { m_notebookIdHasBeenSet = true; m_notebookId = value; }

    /**
     * <p>The ID of the notebook to update.</p>
     */
    inline void SetNotebookId(Aws::String&& value) { m_notebookIdHasBeenSet = true; m_notebookId = std::move(value); }

    /**
     * <p>The ID of the notebook to update.</p>
     */
    inline void SetNotebookId(const char* value) { m_notebookIdHasBeenSet = true; m_notebookId.assign(value); }

    /**
     * <p>The ID of the notebook to update.</p>
     */
    inline UpdateNotebookRequest& WithNotebookId(const Aws::String& value) { SetNotebookId(value); return *this;}

    /**
     * <p>The ID of the notebook to update.</p>
     */
    inline UpdateNotebookRequest& WithNotebookId(Aws::String&& value) { SetNotebookId(std::move(value)); return *this;}

    /**
     * <p>The ID of the notebook to update.</p>
     */
    inline UpdateNotebookRequest& WithNotebookId(const char* value) { SetNotebookId(value); return *this;}


    /**
     * <p>The updated content for the notebook.</p>
     */
    inline const Aws::String& GetPayload() const{ return m_payload; }

    /**
     * <p>The updated content for the notebook.</p>
     */
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }

    /**
     * <p>The updated content for the notebook.</p>
     */
    inline void SetPayload(const Aws::String& value) { m_payloadHasBeenSet = true; m_payload = value; }

    /**
     * <p>The updated content for the notebook.</p>
     */
    inline void SetPayload(Aws::String&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }

    /**
     * <p>The updated content for the notebook.</p>
     */
    inline void SetPayload(const char* value) { m_payloadHasBeenSet = true; m_payload.assign(value); }

    /**
     * <p>The updated content for the notebook.</p>
     */
    inline UpdateNotebookRequest& WithPayload(const Aws::String& value) { SetPayload(value); return *this;}

    /**
     * <p>The updated content for the notebook.</p>
     */
    inline UpdateNotebookRequest& WithPayload(Aws::String&& value) { SetPayload(std::move(value)); return *this;}

    /**
     * <p>The updated content for the notebook.</p>
     */
    inline UpdateNotebookRequest& WithPayload(const char* value) { SetPayload(value); return *this;}


    /**
     * <p>The notebook content type. Currently, the only valid type is
     * <code>IPYNB</code>.</p>
     */
    inline const NotebookType& GetType() const{ return m_type; }

    /**
     * <p>The notebook content type. Currently, the only valid type is
     * <code>IPYNB</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The notebook content type. Currently, the only valid type is
     * <code>IPYNB</code>.</p>
     */
    inline void SetType(const NotebookType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The notebook content type. Currently, the only valid type is
     * <code>IPYNB</code>.</p>
     */
    inline void SetType(NotebookType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The notebook content type. Currently, the only valid type is
     * <code>IPYNB</code>.</p>
     */
    inline UpdateNotebookRequest& WithType(const NotebookType& value) { SetType(value); return *this;}

    /**
     * <p>The notebook content type. Currently, the only valid type is
     * <code>IPYNB</code>.</p>
     */
    inline UpdateNotebookRequest& WithType(NotebookType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The ID of the session in which the notebook will be updated.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }

    /**
     * <p>The ID of the session in which the notebook will be updated.</p>
     */
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }

    /**
     * <p>The ID of the session in which the notebook will be updated.</p>
     */
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }

    /**
     * <p>The ID of the session in which the notebook will be updated.</p>
     */
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }

    /**
     * <p>The ID of the session in which the notebook will be updated.</p>
     */
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }

    /**
     * <p>The ID of the session in which the notebook will be updated.</p>
     */
    inline UpdateNotebookRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}

    /**
     * <p>The ID of the session in which the notebook will be updated.</p>
     */
    inline UpdateNotebookRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the session in which the notebook will be updated.</p>
     */
    inline UpdateNotebookRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}


    /**
     * <p>A unique case-sensitive string used to ensure the request to create the
     * notebook is idempotent (executes only once).</p>  <p>This token is
     * listed as not required because Amazon Web Services SDKs (for example the Amazon
     * Web Services SDK for Java) auto-generate the token for you. If you are not using
     * the Amazon Web Services SDK or the Amazon Web Services CLI, you must provide
     * this token or the action will fail.</p> 
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the
     * notebook is idempotent (executes only once).</p>  <p>This token is
     * listed as not required because Amazon Web Services SDKs (for example the Amazon
     * Web Services SDK for Java) auto-generate the token for you. If you are not using
     * the Amazon Web Services SDK or the Amazon Web Services CLI, you must provide
     * this token or the action will fail.</p> 
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the
     * notebook is idempotent (executes only once).</p>  <p>This token is
     * listed as not required because Amazon Web Services SDKs (for example the Amazon
     * Web Services SDK for Java) auto-generate the token for you. If you are not using
     * the Amazon Web Services SDK or the Amazon Web Services CLI, you must provide
     * this token or the action will fail.</p> 
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the
     * notebook is idempotent (executes only once).</p>  <p>This token is
     * listed as not required because Amazon Web Services SDKs (for example the Amazon
     * Web Services SDK for Java) auto-generate the token for you. If you are not using
     * the Amazon Web Services SDK or the Amazon Web Services CLI, you must provide
     * this token or the action will fail.</p> 
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the
     * notebook is idempotent (executes only once).</p>  <p>This token is
     * listed as not required because Amazon Web Services SDKs (for example the Amazon
     * Web Services SDK for Java) auto-generate the token for you. If you are not using
     * the Amazon Web Services SDK or the Amazon Web Services CLI, you must provide
     * this token or the action will fail.</p> 
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the
     * notebook is idempotent (executes only once).</p>  <p>This token is
     * listed as not required because Amazon Web Services SDKs (for example the Amazon
     * Web Services SDK for Java) auto-generate the token for you. If you are not using
     * the Amazon Web Services SDK or the Amazon Web Services CLI, you must provide
     * this token or the action will fail.</p> 
     */
    inline UpdateNotebookRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the
     * notebook is idempotent (executes only once).</p>  <p>This token is
     * listed as not required because Amazon Web Services SDKs (for example the Amazon
     * Web Services SDK for Java) auto-generate the token for you. If you are not using
     * the Amazon Web Services SDK or the Amazon Web Services CLI, you must provide
     * this token or the action will fail.</p> 
     */
    inline UpdateNotebookRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique case-sensitive string used to ensure the request to create the
     * notebook is idempotent (executes only once).</p>  <p>This token is
     * listed as not required because Amazon Web Services SDKs (for example the Amazon
     * Web Services SDK for Java) auto-generate the token for you. If you are not using
     * the Amazon Web Services SDK or the Amazon Web Services CLI, you must provide
     * this token or the action will fail.</p> 
     */
    inline UpdateNotebookRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_notebookId;
    bool m_notebookIdHasBeenSet = false;

    Aws::String m_payload;
    bool m_payloadHasBeenSet = false;

    NotebookType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
