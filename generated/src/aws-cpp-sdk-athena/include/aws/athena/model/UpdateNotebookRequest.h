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
    AWS_ATHENA_API UpdateNotebookRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNotebook"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the notebook to update.</p>
     */
    inline const Aws::String& GetNotebookId() const { return m_notebookId; }
    inline bool NotebookIdHasBeenSet() const { return m_notebookIdHasBeenSet; }
    template<typename NotebookIdT = Aws::String>
    void SetNotebookId(NotebookIdT&& value) { m_notebookIdHasBeenSet = true; m_notebookId = std::forward<NotebookIdT>(value); }
    template<typename NotebookIdT = Aws::String>
    UpdateNotebookRequest& WithNotebookId(NotebookIdT&& value) { SetNotebookId(std::forward<NotebookIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated content for the notebook.</p>
     */
    inline const Aws::String& GetPayload() const { return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    template<typename PayloadT = Aws::String>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = Aws::String>
    UpdateNotebookRequest& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notebook content type. Currently, the only valid type is
     * <code>IPYNB</code>.</p>
     */
    inline NotebookType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(NotebookType value) { m_typeHasBeenSet = true; m_type = value; }
    inline UpdateNotebookRequest& WithType(NotebookType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The active notebook session ID. Required if the notebook has an active
     * session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    UpdateNotebookRequest& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique case-sensitive string used to ensure the request to create the
     * notebook is idempotent (executes only once).</p>  <p>This token is
     * listed as not required because Amazon Web Services SDKs (for example the Amazon
     * Web Services SDK for Java) auto-generate the token for you. If you are not using
     * the Amazon Web Services SDK or the Amazon Web Services CLI, you must provide
     * this token or the action will fail.</p> 
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    UpdateNotebookRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_notebookId;
    bool m_notebookIdHasBeenSet = false;

    Aws::String m_payload;
    bool m_payloadHasBeenSet = false;

    NotebookType m_type{NotebookType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
