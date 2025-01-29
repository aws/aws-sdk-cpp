/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>
#include <aws/json-protocol/JsonProtocolRequest.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace JsonProtocol
{
namespace Model
{

  /**
   */
  class PutAndGetInlineDocumentsRequest : public JsonProtocolRequest
  {
  public:
    AWS_JSONPROTOCOL_API PutAndGetInlineDocumentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAndGetInlineDocuments"; }

    AWS_JSONPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_JSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline Aws::Utils::DocumentView GetInlineDocument() const{ return m_inlineDocument; }
    inline bool InlineDocumentHasBeenSet() const { return m_inlineDocumentHasBeenSet; }
    inline void SetInlineDocument(const Aws::Utils::Document& value) { m_inlineDocumentHasBeenSet = true; m_inlineDocument = value; }
    inline void SetInlineDocument(Aws::Utils::Document&& value) { m_inlineDocumentHasBeenSet = true; m_inlineDocument = std::move(value); }
    inline PutAndGetInlineDocumentsRequest& WithInlineDocument(const Aws::Utils::Document& value) { SetInlineDocument(value); return *this;}
    inline PutAndGetInlineDocumentsRequest& WithInlineDocument(Aws::Utils::Document&& value) { SetInlineDocument(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline PutAndGetInlineDocumentsRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutAndGetInlineDocumentsRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutAndGetInlineDocumentsRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_inlineDocument;
    bool m_inlineDocumentHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace JsonProtocol
} // namespace Aws
