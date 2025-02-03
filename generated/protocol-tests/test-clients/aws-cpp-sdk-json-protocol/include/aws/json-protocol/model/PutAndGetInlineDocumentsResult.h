/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>
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
namespace JsonProtocol
{
namespace Model
{
  class PutAndGetInlineDocumentsResult
  {
  public:
    AWS_JSONPROTOCOL_API PutAndGetInlineDocumentsResult();
    AWS_JSONPROTOCOL_API PutAndGetInlineDocumentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_JSONPROTOCOL_API PutAndGetInlineDocumentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline Aws::Utils::DocumentView GetInlineDocument() const{ return m_inlineDocument; }
    inline void SetInlineDocument(const Aws::Utils::Document& value) { m_inlineDocument = value; }
    inline void SetInlineDocument(Aws::Utils::Document&& value) { m_inlineDocument = std::move(value); }
    inline PutAndGetInlineDocumentsResult& WithInlineDocument(const Aws::Utils::Document& value) { SetInlineDocument(value); return *this;}
    inline PutAndGetInlineDocumentsResult& WithInlineDocument(Aws::Utils::Document&& value) { SetInlineDocument(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutAndGetInlineDocumentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutAndGetInlineDocumentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutAndGetInlineDocumentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_inlineDocument;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace JsonProtocol
} // namespace Aws
