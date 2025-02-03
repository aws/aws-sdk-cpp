/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RestJsonProtocol
{
namespace Model
{

  /**
   */
  class DocumentTypeAsPayloadRequest : public RestJsonProtocolRequest
  {
  public:
    AWS_RESTJSONPROTOCOL_API DocumentTypeAsPayloadRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DocumentTypeAsPayload"; }

    AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline Aws::Utils::DocumentView GetDocumentValue() const{ return m_documentValue; }
    inline bool DocumentValueHasBeenSet() const { return m_documentValueHasBeenSet; }
    inline void SetDocumentValue(const Aws::Utils::Document& value) { m_documentValueHasBeenSet = true; m_documentValue = value; }
    inline void SetDocumentValue(Aws::Utils::Document&& value) { m_documentValueHasBeenSet = true; m_documentValue = std::move(value); }
    inline DocumentTypeAsPayloadRequest& WithDocumentValue(const Aws::Utils::Document& value) { SetDocumentValue(value); return *this;}
    inline DocumentTypeAsPayloadRequest& WithDocumentValue(Aws::Utils::Document&& value) { SetDocumentValue(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline DocumentTypeAsPayloadRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DocumentTypeAsPayloadRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DocumentTypeAsPayloadRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_documentValue;
    bool m_documentValueHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
