/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
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
  class DocumentTypeResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API DocumentTypeResult();
    AWS_RESTJSONPROTOCOL_API DocumentTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API DocumentTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetStringValue() const{ return m_stringValue; }
    inline void SetStringValue(const Aws::String& value) { m_stringValue = value; }
    inline void SetStringValue(Aws::String&& value) { m_stringValue = std::move(value); }
    inline void SetStringValue(const char* value) { m_stringValue.assign(value); }
    inline DocumentTypeResult& WithStringValue(const Aws::String& value) { SetStringValue(value); return *this;}
    inline DocumentTypeResult& WithStringValue(Aws::String&& value) { SetStringValue(std::move(value)); return *this;}
    inline DocumentTypeResult& WithStringValue(const char* value) { SetStringValue(value); return *this;}
    ///@}

    ///@{
    
    inline Aws::Utils::DocumentView GetDocumentValue() const{ return m_documentValue; }
    inline void SetDocumentValue(const Aws::Utils::Document& value) { m_documentValue = value; }
    inline void SetDocumentValue(Aws::Utils::Document&& value) { m_documentValue = std::move(value); }
    inline DocumentTypeResult& WithDocumentValue(const Aws::Utils::Document& value) { SetDocumentValue(value); return *this;}
    inline DocumentTypeResult& WithDocumentValue(Aws::Utils::Document&& value) { SetDocumentValue(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DocumentTypeResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DocumentTypeResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DocumentTypeResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_stringValue;

    Aws::Utils::Document m_documentValue;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
