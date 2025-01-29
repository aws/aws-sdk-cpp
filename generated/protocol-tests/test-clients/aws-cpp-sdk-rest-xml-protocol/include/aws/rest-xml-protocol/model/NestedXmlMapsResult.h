/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/model/FooEnum.h>
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
  class NestedXmlMapsResult
  {
  public:
    AWS_RESTXMLPROTOCOL_API NestedXmlMapsResult();
    AWS_RESTXMLPROTOCOL_API NestedXmlMapsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RESTXMLPROTOCOL_API NestedXmlMapsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>& GetNestedMap() const{ return m_nestedMap; }
    inline void SetNestedMap(const Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>& value) { m_nestedMap = value; }
    inline void SetNestedMap(Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>&& value) { m_nestedMap = std::move(value); }
    inline NestedXmlMapsResult& WithNestedMap(const Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>& value) { SetNestedMap(value); return *this;}
    inline NestedXmlMapsResult& WithNestedMap(Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>&& value) { SetNestedMap(std::move(value)); return *this;}
    inline NestedXmlMapsResult& AddNestedMap(const Aws::String& key, const Aws::Map<Aws::String, FooEnum>& value) { m_nestedMap.emplace(key, value); return *this; }
    inline NestedXmlMapsResult& AddNestedMap(Aws::String&& key, const Aws::Map<Aws::String, FooEnum>& value) { m_nestedMap.emplace(std::move(key), value); return *this; }
    inline NestedXmlMapsResult& AddNestedMap(const Aws::String& key, Aws::Map<Aws::String, FooEnum>&& value) { m_nestedMap.emplace(key, std::move(value)); return *this; }
    inline NestedXmlMapsResult& AddNestedMap(Aws::String&& key, Aws::Map<Aws::String, FooEnum>&& value) { m_nestedMap.emplace(std::move(key), std::move(value)); return *this; }
    inline NestedXmlMapsResult& AddNestedMap(const char* key, Aws::Map<Aws::String, FooEnum>&& value) { m_nestedMap.emplace(key, std::move(value)); return *this; }
    inline NestedXmlMapsResult& AddNestedMap(const char* key, const Aws::Map<Aws::String, FooEnum>& value) { m_nestedMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>& GetFlatNestedMap() const{ return m_flatNestedMap; }
    inline void SetFlatNestedMap(const Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>& value) { m_flatNestedMap = value; }
    inline void SetFlatNestedMap(Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>&& value) { m_flatNestedMap = std::move(value); }
    inline NestedXmlMapsResult& WithFlatNestedMap(const Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>& value) { SetFlatNestedMap(value); return *this;}
    inline NestedXmlMapsResult& WithFlatNestedMap(Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>&& value) { SetFlatNestedMap(std::move(value)); return *this;}
    inline NestedXmlMapsResult& AddFlatNestedMap(const Aws::String& key, const Aws::Map<Aws::String, FooEnum>& value) { m_flatNestedMap.emplace(key, value); return *this; }
    inline NestedXmlMapsResult& AddFlatNestedMap(Aws::String&& key, const Aws::Map<Aws::String, FooEnum>& value) { m_flatNestedMap.emplace(std::move(key), value); return *this; }
    inline NestedXmlMapsResult& AddFlatNestedMap(const Aws::String& key, Aws::Map<Aws::String, FooEnum>&& value) { m_flatNestedMap.emplace(key, std::move(value)); return *this; }
    inline NestedXmlMapsResult& AddFlatNestedMap(Aws::String&& key, Aws::Map<Aws::String, FooEnum>&& value) { m_flatNestedMap.emplace(std::move(key), std::move(value)); return *this; }
    inline NestedXmlMapsResult& AddFlatNestedMap(const char* key, Aws::Map<Aws::String, FooEnum>&& value) { m_flatNestedMap.emplace(key, std::move(value)); return *this; }
    inline NestedXmlMapsResult& AddFlatNestedMap(const char* key, const Aws::Map<Aws::String, FooEnum>& value) { m_flatNestedMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline NestedXmlMapsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline NestedXmlMapsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline NestedXmlMapsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>> m_nestedMap;

    Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>> m_flatNestedMap;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
