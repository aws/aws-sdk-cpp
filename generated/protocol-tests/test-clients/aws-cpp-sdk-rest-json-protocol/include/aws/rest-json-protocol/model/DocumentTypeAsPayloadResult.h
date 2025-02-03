/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace RestJsonProtocol
{
namespace Model
{
  class DocumentTypeAsPayloadResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API DocumentTypeAsPayloadResult();
    AWS_RESTJSONPROTOCOL_API DocumentTypeAsPayloadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API DocumentTypeAsPayloadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline Aws::Utils::DocumentView GetDocumentValue() const{ return m_documentValue; }
    inline void SetDocumentValue(const Aws::Utils::Document& value) { m_documentValue = value; }
    inline void SetDocumentValue(Aws::Utils::Document&& value) { m_documentValue = std::move(value); }
    inline DocumentTypeAsPayloadResult& WithDocumentValue(const Aws::Utils::Document& value) { SetDocumentValue(value); return *this;}
    inline DocumentTypeAsPayloadResult& WithDocumentValue(Aws::Utils::Document&& value) { SetDocumentValue(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DocumentTypeAsPayloadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DocumentTypeAsPayloadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DocumentTypeAsPayloadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_documentValue;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
