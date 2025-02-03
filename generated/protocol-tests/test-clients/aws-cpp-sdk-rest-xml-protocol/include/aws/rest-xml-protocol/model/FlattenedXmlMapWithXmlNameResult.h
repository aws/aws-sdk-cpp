/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RestXmlProtocol
{
namespace Model
{
  class FlattenedXmlMapWithXmlNameResult
  {
  public:
    AWS_RESTXMLPROTOCOL_API FlattenedXmlMapWithXmlNameResult();
    AWS_RESTXMLPROTOCOL_API FlattenedXmlMapWithXmlNameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RESTXMLPROTOCOL_API FlattenedXmlMapWithXmlNameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetMyMap() const{ return m_myMap; }
    inline void SetMyMap(const Aws::Map<Aws::String, Aws::String>& value) { m_myMap = value; }
    inline void SetMyMap(Aws::Map<Aws::String, Aws::String>&& value) { m_myMap = std::move(value); }
    inline FlattenedXmlMapWithXmlNameResult& WithMyMap(const Aws::Map<Aws::String, Aws::String>& value) { SetMyMap(value); return *this;}
    inline FlattenedXmlMapWithXmlNameResult& WithMyMap(Aws::Map<Aws::String, Aws::String>&& value) { SetMyMap(std::move(value)); return *this;}
    inline FlattenedXmlMapWithXmlNameResult& AddMyMap(const Aws::String& key, const Aws::String& value) { m_myMap.emplace(key, value); return *this; }
    inline FlattenedXmlMapWithXmlNameResult& AddMyMap(Aws::String&& key, const Aws::String& value) { m_myMap.emplace(std::move(key), value); return *this; }
    inline FlattenedXmlMapWithXmlNameResult& AddMyMap(const Aws::String& key, Aws::String&& value) { m_myMap.emplace(key, std::move(value)); return *this; }
    inline FlattenedXmlMapWithXmlNameResult& AddMyMap(Aws::String&& key, Aws::String&& value) { m_myMap.emplace(std::move(key), std::move(value)); return *this; }
    inline FlattenedXmlMapWithXmlNameResult& AddMyMap(const char* key, Aws::String&& value) { m_myMap.emplace(key, std::move(value)); return *this; }
    inline FlattenedXmlMapWithXmlNameResult& AddMyMap(Aws::String&& key, const char* value) { m_myMap.emplace(std::move(key), value); return *this; }
    inline FlattenedXmlMapWithXmlNameResult& AddMyMap(const char* key, const char* value) { m_myMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline FlattenedXmlMapWithXmlNameResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline FlattenedXmlMapWithXmlNameResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline FlattenedXmlMapWithXmlNameResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_myMap;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
