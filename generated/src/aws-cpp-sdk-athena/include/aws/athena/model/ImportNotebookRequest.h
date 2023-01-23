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
    AWS_ATHENA_API ImportNotebookRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportNotebook"; }

    AWS_ATHENA_API Aws::String SerializePayload() const override;

    AWS_ATHENA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Spark enabled workgroup to import the notebook to.</p>
     */
    inline const Aws::String& GetWorkGroup() const{ return m_workGroup; }

    /**
     * <p>The name of the Spark enabled workgroup to import the notebook to.</p>
     */
    inline bool WorkGroupHasBeenSet() const { return m_workGroupHasBeenSet; }

    /**
     * <p>The name of the Spark enabled workgroup to import the notebook to.</p>
     */
    inline void SetWorkGroup(const Aws::String& value) { m_workGroupHasBeenSet = true; m_workGroup = value; }

    /**
     * <p>The name of the Spark enabled workgroup to import the notebook to.</p>
     */
    inline void SetWorkGroup(Aws::String&& value) { m_workGroupHasBeenSet = true; m_workGroup = std::move(value); }

    /**
     * <p>The name of the Spark enabled workgroup to import the notebook to.</p>
     */
    inline void SetWorkGroup(const char* value) { m_workGroupHasBeenSet = true; m_workGroup.assign(value); }

    /**
     * <p>The name of the Spark enabled workgroup to import the notebook to.</p>
     */
    inline ImportNotebookRequest& WithWorkGroup(const Aws::String& value) { SetWorkGroup(value); return *this;}

    /**
     * <p>The name of the Spark enabled workgroup to import the notebook to.</p>
     */
    inline ImportNotebookRequest& WithWorkGroup(Aws::String&& value) { SetWorkGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the Spark enabled workgroup to import the notebook to.</p>
     */
    inline ImportNotebookRequest& WithWorkGroup(const char* value) { SetWorkGroup(value); return *this;}


    /**
     * <p>The name of the notebook to import.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the notebook to import.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the notebook to import.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the notebook to import.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the notebook to import.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the notebook to import.</p>
     */
    inline ImportNotebookRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the notebook to import.</p>
     */
    inline ImportNotebookRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the notebook to import.</p>
     */
    inline ImportNotebookRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The notebook content to be imported.</p>
     */
    inline const Aws::String& GetPayload() const{ return m_payload; }

    /**
     * <p>The notebook content to be imported.</p>
     */
    inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }

    /**
     * <p>The notebook content to be imported.</p>
     */
    inline void SetPayload(const Aws::String& value) { m_payloadHasBeenSet = true; m_payload = value; }

    /**
     * <p>The notebook content to be imported.</p>
     */
    inline void SetPayload(Aws::String&& value) { m_payloadHasBeenSet = true; m_payload = std::move(value); }

    /**
     * <p>The notebook content to be imported.</p>
     */
    inline void SetPayload(const char* value) { m_payloadHasBeenSet = true; m_payload.assign(value); }

    /**
     * <p>The notebook content to be imported.</p>
     */
    inline ImportNotebookRequest& WithPayload(const Aws::String& value) { SetPayload(value); return *this;}

    /**
     * <p>The notebook content to be imported.</p>
     */
    inline ImportNotebookRequest& WithPayload(Aws::String&& value) { SetPayload(std::move(value)); return *this;}

    /**
     * <p>The notebook content to be imported.</p>
     */
    inline ImportNotebookRequest& WithPayload(const char* value) { SetPayload(value); return *this;}


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
    inline ImportNotebookRequest& WithType(const NotebookType& value) { SetType(value); return *this;}

    /**
     * <p>The notebook content type. Currently, the only valid type is
     * <code>IPYNB</code>.</p>
     */
    inline ImportNotebookRequest& WithType(NotebookType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A unique case-sensitive string used to ensure the request to import the
     * notebook is idempotent (executes only once).</p>  <p>This token is
     * listed as not required because Amazon Web Services SDKs (for example the Amazon
     * Web Services SDK for Java) auto-generate the token for you. If you are not using
     * the Amazon Web Services SDK or the Amazon Web Services CLI, you must provide
     * this token or the action will fail.</p> 
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique case-sensitive string used to ensure the request to import the
     * notebook is idempotent (executes only once).</p>  <p>This token is
     * listed as not required because Amazon Web Services SDKs (for example the Amazon
     * Web Services SDK for Java) auto-generate the token for you. If you are not using
     * the Amazon Web Services SDK or the Amazon Web Services CLI, you must provide
     * this token or the action will fail.</p> 
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique case-sensitive string used to ensure the request to import the
     * notebook is idempotent (executes only once).</p>  <p>This token is
     * listed as not required because Amazon Web Services SDKs (for example the Amazon
     * Web Services SDK for Java) auto-generate the token for you. If you are not using
     * the Amazon Web Services SDK or the Amazon Web Services CLI, you must provide
     * this token or the action will fail.</p> 
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique case-sensitive string used to ensure the request to import the
     * notebook is idempotent (executes only once).</p>  <p>This token is
     * listed as not required because Amazon Web Services SDKs (for example the Amazon
     * Web Services SDK for Java) auto-generate the token for you. If you are not using
     * the Amazon Web Services SDK or the Amazon Web Services CLI, you must provide
     * this token or the action will fail.</p> 
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique case-sensitive string used to ensure the request to import the
     * notebook is idempotent (executes only once).</p>  <p>This token is
     * listed as not required because Amazon Web Services SDKs (for example the Amazon
     * Web Services SDK for Java) auto-generate the token for you. If you are not using
     * the Amazon Web Services SDK or the Amazon Web Services CLI, you must provide
     * this token or the action will fail.</p> 
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique case-sensitive string used to ensure the request to import the
     * notebook is idempotent (executes only once).</p>  <p>This token is
     * listed as not required because Amazon Web Services SDKs (for example the Amazon
     * Web Services SDK for Java) auto-generate the token for you. If you are not using
     * the Amazon Web Services SDK or the Amazon Web Services CLI, you must provide
     * this token or the action will fail.</p> 
     */
    inline ImportNotebookRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique case-sensitive string used to ensure the request to import the
     * notebook is idempotent (executes only once).</p>  <p>This token is
     * listed as not required because Amazon Web Services SDKs (for example the Amazon
     * Web Services SDK for Java) auto-generate the token for you. If you are not using
     * the Amazon Web Services SDK or the Amazon Web Services CLI, you must provide
     * this token or the action will fail.</p> 
     */
    inline ImportNotebookRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique case-sensitive string used to ensure the request to import the
     * notebook is idempotent (executes only once).</p>  <p>This token is
     * listed as not required because Amazon Web Services SDKs (for example the Amazon
     * Web Services SDK for Java) auto-generate the token for you. If you are not using
     * the Amazon Web Services SDK or the Amazon Web Services CLI, you must provide
     * this token or the action will fail.</p> 
     */
    inline ImportNotebookRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}

  private:

    Aws::String m_workGroup;
    bool m_workGroupHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_payload;
    bool m_payloadHasBeenSet = false;

    NotebookType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws
