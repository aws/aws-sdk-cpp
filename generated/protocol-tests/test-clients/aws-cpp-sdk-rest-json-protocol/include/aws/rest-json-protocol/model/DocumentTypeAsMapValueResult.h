/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class DocumentTypeAsMapValueResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API DocumentTypeAsMapValueResult();
    AWS_RESTJSONPROTOCOL_API DocumentTypeAsMapValueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API DocumentTypeAsMapValueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Map<Aws::String, Aws::Utils::Document>& GetDocValuedMap() const{ return m_docValuedMap; }
    inline void SetDocValuedMap(const Aws::Map<Aws::String, Aws::Utils::Document>& value) { m_docValuedMap = value; }
    inline void SetDocValuedMap(Aws::Map<Aws::String, Aws::Utils::Document>&& value) { m_docValuedMap = std::move(value); }
    inline DocumentTypeAsMapValueResult& WithDocValuedMap(const Aws::Map<Aws::String, Aws::Utils::Document>& value) { SetDocValuedMap(value); return *this;}
    inline DocumentTypeAsMapValueResult& WithDocValuedMap(Aws::Map<Aws::String, Aws::Utils::Document>&& value) { SetDocValuedMap(std::move(value)); return *this;}
    inline DocumentTypeAsMapValueResult& AddDocValuedMap(const Aws::String& key, const Aws::Utils::Document& value) { m_docValuedMap.emplace(key, value); return *this; }
    inline DocumentTypeAsMapValueResult& AddDocValuedMap(Aws::String&& key, const Aws::Utils::Document& value) { m_docValuedMap.emplace(std::move(key), value); return *this; }
    inline DocumentTypeAsMapValueResult& AddDocValuedMap(const Aws::String& key, Aws::Utils::Document&& value) { m_docValuedMap.emplace(key, std::move(value)); return *this; }
    inline DocumentTypeAsMapValueResult& AddDocValuedMap(Aws::String&& key, Aws::Utils::Document&& value) { m_docValuedMap.emplace(std::move(key), std::move(value)); return *this; }
    inline DocumentTypeAsMapValueResult& AddDocValuedMap(const char* key, Aws::Utils::Document&& value) { m_docValuedMap.emplace(key, std::move(value)); return *this; }
    inline DocumentTypeAsMapValueResult& AddDocValuedMap(const char* key, const Aws::Utils::Document& value) { m_docValuedMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DocumentTypeAsMapValueResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DocumentTypeAsMapValueResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DocumentTypeAsMapValueResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Utils::Document> m_docValuedMap;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
