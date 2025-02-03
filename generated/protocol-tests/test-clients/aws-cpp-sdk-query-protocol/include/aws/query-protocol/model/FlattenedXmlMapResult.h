/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/query-protocol/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/query-protocol/model/FooEnum.h>
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
  class FlattenedXmlMapResult
  {
  public:
    AWS_QUERYPROTOCOL_API FlattenedXmlMapResult();
    AWS_QUERYPROTOCOL_API FlattenedXmlMapResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_QUERYPROTOCOL_API FlattenedXmlMapResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline FlattenedXmlMapResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline FlattenedXmlMapResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, FooEnum> m_myMap;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace QueryProtocol
} // namespace Aws
