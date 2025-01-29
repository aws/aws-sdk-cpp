/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/query-protocol/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/query-protocol/model/GreetingStruct.h>
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
namespace QueryProtocol
{
namespace Model
{
  class XmlMapsXmlNameResult
  {
  public:
    AWS_QUERYPROTOCOL_API XmlMapsXmlNameResult();
    AWS_QUERYPROTOCOL_API XmlMapsXmlNameResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_QUERYPROTOCOL_API XmlMapsXmlNameResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::Map<Aws::String, GreetingStruct>& GetMyMap() const{ return m_myMap; }
    inline void SetMyMap(const Aws::Map<Aws::String, GreetingStruct>& value) { m_myMap = value; }
    inline void SetMyMap(Aws::Map<Aws::String, GreetingStruct>&& value) { m_myMap = std::move(value); }
    inline XmlMapsXmlNameResult& WithMyMap(const Aws::Map<Aws::String, GreetingStruct>& value) { SetMyMap(value); return *this;}
    inline XmlMapsXmlNameResult& WithMyMap(Aws::Map<Aws::String, GreetingStruct>&& value) { SetMyMap(std::move(value)); return *this;}
    inline XmlMapsXmlNameResult& AddMyMap(const Aws::String& key, const GreetingStruct& value) { m_myMap.emplace(key, value); return *this; }
    inline XmlMapsXmlNameResult& AddMyMap(Aws::String&& key, const GreetingStruct& value) { m_myMap.emplace(std::move(key), value); return *this; }
    inline XmlMapsXmlNameResult& AddMyMap(const Aws::String& key, GreetingStruct&& value) { m_myMap.emplace(key, std::move(value)); return *this; }
    inline XmlMapsXmlNameResult& AddMyMap(Aws::String&& key, GreetingStruct&& value) { m_myMap.emplace(std::move(key), std::move(value)); return *this; }
    inline XmlMapsXmlNameResult& AddMyMap(const char* key, GreetingStruct&& value) { m_myMap.emplace(key, std::move(value)); return *this; }
    inline XmlMapsXmlNameResult& AddMyMap(const char* key, const GreetingStruct& value) { m_myMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline XmlMapsXmlNameResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline XmlMapsXmlNameResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, GreetingStruct> m_myMap;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace QueryProtocol
} // namespace Aws
