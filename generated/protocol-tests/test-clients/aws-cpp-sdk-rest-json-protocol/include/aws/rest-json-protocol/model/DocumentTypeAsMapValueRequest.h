/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
#include <utility>

namespace Aws
{
namespace RestJsonProtocol
{
namespace Model
{

  /**
   */
  class DocumentTypeAsMapValueRequest : public RestJsonProtocolRequest
  {
  public:
    AWS_RESTJSONPROTOCOL_API DocumentTypeAsMapValueRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DocumentTypeAsMapValue"; }

    AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetDocValuedMap() const{ return m_docValuedMap; }
    inline bool DocValuedMapHasBeenSet() const { return m_docValuedMapHasBeenSet; }
    inline void SetDocValuedMap(const Aws::Map<Aws::String, Aws::Utils::Document>& value) { m_docValuedMapHasBeenSet = true; m_docValuedMap = value; }
    inline void SetDocValuedMap(Aws::Map<Aws::String, Aws::Utils::Document>&& value) { m_docValuedMapHasBeenSet = true; m_docValuedMap = std::move(value); }
    inline DocumentTypeAsMapValueRequest& WithDocValuedMap(const Aws::Map<Aws::String, Aws::Utils::Document>& value) { SetDocValuedMap(value); return *this;}
    inline DocumentTypeAsMapValueRequest& WithDocValuedMap(Aws::Map<Aws::String, Aws::Utils::Document>&& value) { SetDocValuedMap(std::move(value)); return *this;}
    inline DocumentTypeAsMapValueRequest& AddDocValuedMap(const Aws::String& key, const Aws::Utils::Document& value) { m_docValuedMapHasBeenSet = true; m_docValuedMap.emplace(key, value); return *this; }
    inline DocumentTypeAsMapValueRequest& AddDocValuedMap(Aws::String&& key, const Aws::Utils::Document& value) { m_docValuedMapHasBeenSet = true; m_docValuedMap.emplace(std::move(key), value); return *this; }
    inline DocumentTypeAsMapValueRequest& AddDocValuedMap(const Aws::String& key, Aws::Utils::Document&& value) { m_docValuedMapHasBeenSet = true; m_docValuedMap.emplace(key, std::move(value)); return *this; }
    inline DocumentTypeAsMapValueRequest& AddDocValuedMap(Aws::String&& key, Aws::Utils::Document&& value) { m_docValuedMapHasBeenSet = true; m_docValuedMap.emplace(std::move(key), std::move(value)); return *this; }
    inline DocumentTypeAsMapValueRequest& AddDocValuedMap(const char* key, Aws::Utils::Document&& value) { m_docValuedMapHasBeenSet = true; m_docValuedMap.emplace(key, std::move(value)); return *this; }
    inline DocumentTypeAsMapValueRequest& AddDocValuedMap(const char* key, const Aws::Utils::Document& value) { m_docValuedMapHasBeenSet = true; m_docValuedMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline DocumentTypeAsMapValueRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DocumentTypeAsMapValueRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DocumentTypeAsMapValueRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Utils::Document> m_docValuedMap;
    bool m_docValuedMapHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
