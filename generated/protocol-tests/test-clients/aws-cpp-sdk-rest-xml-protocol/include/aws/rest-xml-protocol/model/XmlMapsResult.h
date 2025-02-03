/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/model/GreetingStruct.h>
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
  class XmlMapsResult
  {
  public:
    AWS_RESTXMLPROTOCOL_API XmlMapsResult();
    AWS_RESTXMLPROTOCOL_API XmlMapsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RESTXMLPROTOCOL_API XmlMapsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::Map<Aws::String, GreetingStruct>& GetMyMap() const{ return m_myMap; }
    inline void SetMyMap(const Aws::Map<Aws::String, GreetingStruct>& value) { m_myMap = value; }
    inline void SetMyMap(Aws::Map<Aws::String, GreetingStruct>&& value) { m_myMap = std::move(value); }
    inline XmlMapsResult& WithMyMap(const Aws::Map<Aws::String, GreetingStruct>& value) { SetMyMap(value); return *this;}
    inline XmlMapsResult& WithMyMap(Aws::Map<Aws::String, GreetingStruct>&& value) { SetMyMap(std::move(value)); return *this;}
    inline XmlMapsResult& AddMyMap(const Aws::String& key, const GreetingStruct& value) { m_myMap.emplace(key, value); return *this; }
    inline XmlMapsResult& AddMyMap(Aws::String&& key, const GreetingStruct& value) { m_myMap.emplace(std::move(key), value); return *this; }
    inline XmlMapsResult& AddMyMap(const Aws::String& key, GreetingStruct&& value) { m_myMap.emplace(key, std::move(value)); return *this; }
    inline XmlMapsResult& AddMyMap(Aws::String&& key, GreetingStruct&& value) { m_myMap.emplace(std::move(key), std::move(value)); return *this; }
    inline XmlMapsResult& AddMyMap(const char* key, GreetingStruct&& value) { m_myMap.emplace(key, std::move(value)); return *this; }
    inline XmlMapsResult& AddMyMap(const char* key, const GreetingStruct& value) { m_myMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline XmlMapsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline XmlMapsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline XmlMapsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, GreetingStruct> m_myMap;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
