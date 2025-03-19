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
  class ImportNotebookRequest : public AthenaRequest
  {
  public:
    AWS_ATHENA_API ImportNotebookRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportNotebook"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Spark enabled workgroup to import the notebook to.</p>
     */
    inline const Aws::String& GetWorkGroup() const { return m_workGroup; }
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }
    template<typename WorkGroupT = Aws::String>
    void SetWorkGroup(WorkGroupT&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::forward<WorkGroupT>(value); }
    template<typename WorkGroupT = Aws::String>
    ImportNotebookRequest& WithWorkGroup(WorkGroupT&& value) { SetWorkGroup(std::forward<WorkGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the notebook to import.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ImportNotebookRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notebook content to be imported. The payload must be in
     * <code>ipynb</code> format.</p>
     */
    inline const Aws::String& GetPayload() const { return m_payload; }
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
    template<typename PayloadT = Aws::String>
    void SetPayload(PayloadT&& value) { m_payloadHasBeenSet = true; m_payload = std::forward<PayloadT>(value); }
    template<typename PayloadT = Aws::String>
    ImportNotebookRequest& WithPayload(PayloadT&& value) { SetPayload(std::forward<PayloadT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The notebook content type. Currently, the only valid type is
     * <code>IPYNB</code>.</p>
     */
    inline NotebookType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(NotebookType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ImportNotebookRequest& WithType(NotebookType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URI that specifies the Amazon S3 location of a notebook file in
     * <code>ipynb</code> format.</p>
     */
    inline const Aws::String& GetNotebookS3LocationUri() const { return m_notebookS3LocationUri; }
    inline bool NotebookS3LocationUriHasBeenSet() const { return m_notebookS3LocationUriHasBeenSet; }
    template<typename NotebookS3LocationUriT = Aws::String>
    void SetNotebookS3LocationUri(NotebookS3LocationUriT&& value) { m_notebookS3LocationUriHasBeenSet = true; m_notebookS3LocationUri = std::forward<NotebookS3LocationUriT>(value); }
    template<typename NotebookS3LocationUriT = Aws::String>
    ImportNotebookRequest& WithNotebookS3LocationUri(NotebookS3LocationUriT&& value) { SetNotebookS3LocationUri(std::forward<NotebookS3LocationUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique case-sensitive string used to ensure the request to import the
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
    ImportNotebookRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_payload;
    bool m_payloadHasBeenSet = false;

    NotebookType m_type{NotebookType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_notebookS3LocationUri;
    bool m_notebookS3LocationUriHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
