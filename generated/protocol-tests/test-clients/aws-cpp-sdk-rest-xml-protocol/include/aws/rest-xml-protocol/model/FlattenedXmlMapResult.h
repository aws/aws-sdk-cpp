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
  class FlattenedXmlMapResult
  {
  public:
    AWS_RESTXMLPROTOCOL_API FlattenedXmlMapResult();
    AWS_RESTXMLPROTOCOL_API FlattenedXmlMapResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RESTXMLPROTOCOL_API FlattenedXmlMapResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::Map<Aws::String, FooEnum>& GetMyMap() const{ return m_myMap; }
    inline void SetMyMap(const Aws::Map<Aws::String, FooEnum>& value) { m_myMap = value; }
    inline void SetMyMap(Aws::Map<Aws::String, FooEnum>&& value) { m_myMap = std::move(value); }
    inline FlattenedXmlMapResult& WithMyMap(const Aws::Map<Aws::String, FooEnum>& value) { SetMyMap(value); return *this;}
    inline FlattenedXmlMapResult& WithMyMap(Aws::Map<Aws::String, FooEnum>&& value) { SetMyMap(std::move(value)); return *this;}
    inline FlattenedXmlMapResult& AddMyMap(const Aws::String& key, const FooEnum& value) { m_myMap.emplace(key, value); return *this; }
    inline FlattenedXmlMapResult& AddMyMap(Aws::String&& key, const FooEnum& value) { m_myMap.emplace(std::move(key), value); return *this; }
    inline FlattenedXmlMapResult& AddMyMap(const Aws::String& key, FooEnum&& value) { m_myMap.emplace(key, std::move(value)); return *this; }
    inline FlattenedXmlMapResult& AddMyMap(Aws::String&& key, FooEnum&& value) { m_myMap.emplace(std::move(key), std::move(value)); return *this; }
    inline FlattenedXmlMapResult& AddMyMap(const char* key, FooEnum&& value) { m_myMap.emplace(key, std::move(value)); return *this; }
    inline FlattenedXmlMapResult& AddMyMap(const char* key, const FooEnum& value) { m_myMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline FlattenedXmlMapResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline FlattenedXmlMapResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline FlattenedXmlMapResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, FooEnum> m_myMap;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
