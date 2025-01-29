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
  class NestedXmlMapWithXmlNameResult
  {
  public:
    AWS_RESTXMLPROTOCOL_API NestedXmlMapWithXmlNameResult();
    AWS_RESTXMLPROTOCOL_API NestedXmlMapWithXmlNameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RESTXMLPROTOCOL_API NestedXmlMapWithXmlNameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetNestedXmlMapWithXmlNameMap() const{ return m_nestedXmlMapWithXmlNameMap; }
    inline void SetNestedXmlMapWithXmlNameMap(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { m_nestedXmlMapWithXmlNameMap = value; }
    inline void SetNestedXmlMapWithXmlNameMap(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { m_nestedXmlMapWithXmlNameMap = std::move(value); }
    inline NestedXmlMapWithXmlNameResult& WithNestedXmlMapWithXmlNameMap(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { SetNestedXmlMapWithXmlNameMap(value); return *this;}
    inline NestedXmlMapWithXmlNameResult& WithNestedXmlMapWithXmlNameMap(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { SetNestedXmlMapWithXmlNameMap(std::move(value)); return *this;}
    inline NestedXmlMapWithXmlNameResult& AddNestedXmlMapWithXmlNameMap(const Aws::String& key, const Aws::Map<Aws::String, Aws::String>& value) { m_nestedXmlMapWithXmlNameMap.emplace(key, value); return *this; }
    inline NestedXmlMapWithXmlNameResult& AddNestedXmlMapWithXmlNameMap(Aws::String&& key, const Aws::Map<Aws::String, Aws::String>& value) { m_nestedXmlMapWithXmlNameMap.emplace(std::move(key), value); return *this; }
    inline NestedXmlMapWithXmlNameResult& AddNestedXmlMapWithXmlNameMap(const Aws::String& key, Aws::Map<Aws::String, Aws::String>&& value) { m_nestedXmlMapWithXmlNameMap.emplace(key, std::move(value)); return *this; }
    inline NestedXmlMapWithXmlNameResult& AddNestedXmlMapWithXmlNameMap(Aws::String&& key, Aws::Map<Aws::String, Aws::String>&& value) { m_nestedXmlMapWithXmlNameMap.emplace(std::move(key), std::move(value)); return *this; }
    inline NestedXmlMapWithXmlNameResult& AddNestedXmlMapWithXmlNameMap(const char* key, Aws::Map<Aws::String, Aws::String>&& value) { m_nestedXmlMapWithXmlNameMap.emplace(key, std::move(value)); return *this; }
    inline NestedXmlMapWithXmlNameResult& AddNestedXmlMapWithXmlNameMap(const char* key, const Aws::Map<Aws::String, Aws::String>& value) { m_nestedXmlMapWithXmlNameMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline NestedXmlMapWithXmlNameResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline NestedXmlMapWithXmlNameResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline NestedXmlMapWithXmlNameResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_nestedXmlMapWithXmlNameMap;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
