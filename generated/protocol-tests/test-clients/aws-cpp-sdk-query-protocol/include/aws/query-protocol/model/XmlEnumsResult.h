/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/query-protocol/model/FooEnum.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/query-protocol/model/ResponseMetadata.h>
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
namespace QueryProtocol
{
namespace Model
{
  class XmlEnumsResult
  {
  public:
    AWS_QUERYPROTOCOL_API XmlEnumsResult();
    AWS_QUERYPROTOCOL_API XmlEnumsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_QUERYPROTOCOL_API XmlEnumsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const FooEnum& GetFooEnum1() const{ return m_fooEnum1; }
    inline void SetFooEnum1(const FooEnum& value) { m_fooEnum1 = value; }
    inline void SetFooEnum1(FooEnum&& value) { m_fooEnum1 = std::move(value); }
    inline XmlEnumsResult& WithFooEnum1(const FooEnum& value) { SetFooEnum1(value); return *this;}
    inline XmlEnumsResult& WithFooEnum1(FooEnum&& value) { SetFooEnum1(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const FooEnum& GetFooEnum2() const{ return m_fooEnum2; }
    inline void SetFooEnum2(const FooEnum& value) { m_fooEnum2 = value; }
    inline void SetFooEnum2(FooEnum&& value) { m_fooEnum2 = std::move(value); }
    inline XmlEnumsResult& WithFooEnum2(const FooEnum& value) { SetFooEnum2(value); return *this;}
    inline XmlEnumsResult& WithFooEnum2(FooEnum&& value) { SetFooEnum2(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const FooEnum& GetFooEnum3() const{ return m_fooEnum3; }
    inline void SetFooEnum3(const FooEnum& value) { m_fooEnum3 = value; }
    inline void SetFooEnum3(FooEnum&& value) { m_fooEnum3 = std::move(value); }
    inline XmlEnumsResult& WithFooEnum3(const FooEnum& value) { SetFooEnum3(value); return *this;}
    inline XmlEnumsResult& WithFooEnum3(FooEnum&& value) { SetFooEnum3(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<FooEnum>& GetFooEnumList() const{ return m_fooEnumList; }
    inline void SetFooEnumList(const Aws::Vector<FooEnum>& value) { m_fooEnumList = value; }
    inline void SetFooEnumList(Aws::Vector<FooEnum>&& value) { m_fooEnumList = std::move(value); }
    inline XmlEnumsResult& WithFooEnumList(const Aws::Vector<FooEnum>& value) { SetFooEnumList(value); return *this;}
    inline XmlEnumsResult& WithFooEnumList(Aws::Vector<FooEnum>&& value) { SetFooEnumList(std::move(value)); return *this;}
    inline XmlEnumsResult& AddFooEnumList(const FooEnum& value) { m_fooEnumList.push_back(value); return *this; }
    inline XmlEnumsResult& AddFooEnumList(FooEnum&& value) { m_fooEnumList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<FooEnum>& GetFooEnumSet() const{ return m_fooEnumSet; }
    inline void SetFooEnumSet(const Aws::Vector<FooEnum>& value) { m_fooEnumSet = value; }
    inline void SetFooEnumSet(Aws::Vector<FooEnum>&& value) { m_fooEnumSet = std::move(value); }
    inline XmlEnumsResult& WithFooEnumSet(const Aws::Vector<FooEnum>& value) { SetFooEnumSet(value); return *this;}
    inline XmlEnumsResult& WithFooEnumSet(Aws::Vector<FooEnum>&& value) { SetFooEnumSet(std::move(value)); return *this;}
    inline XmlEnumsResult& AddFooEnumSet(const FooEnum& value) { m_fooEnumSet.push_back(value); return *this; }
    inline XmlEnumsResult& AddFooEnumSet(FooEnum&& value) { m_fooEnumSet.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, FooEnum>& GetFooEnumMap() const{ return m_fooEnumMap; }
    inline void SetFooEnumMap(const Aws::Map<Aws::String, FooEnum>& value) { m_fooEnumMap = value; }
    inline void SetFooEnumMap(Aws::Map<Aws::String, FooEnum>&& value) { m_fooEnumMap = std::move(value); }
    inline XmlEnumsResult& WithFooEnumMap(const Aws::Map<Aws::String, FooEnum>& value) { SetFooEnumMap(value); return *this;}
    inline XmlEnumsResult& WithFooEnumMap(Aws::Map<Aws::String, FooEnum>&& value) { SetFooEnumMap(std::move(value)); return *this;}
    inline XmlEnumsResult& AddFooEnumMap(const Aws::String& key, const FooEnum& value) { m_fooEnumMap.emplace(key, value); return *this; }
    inline XmlEnumsResult& AddFooEnumMap(Aws::String&& key, const FooEnum& value) { m_fooEnumMap.emplace(std::move(key), value); return *this; }
    inline XmlEnumsResult& AddFooEnumMap(const Aws::String& key, FooEnum&& value) { m_fooEnumMap.emplace(key, std::move(value)); return *this; }
    inline XmlEnumsResult& AddFooEnumMap(Aws::String&& key, FooEnum&& value) { m_fooEnumMap.emplace(std::move(key), std::move(value)); return *this; }
    inline XmlEnumsResult& AddFooEnumMap(const char* key, FooEnum&& value) { m_fooEnumMap.emplace(key, std::move(value)); return *this; }
    inline XmlEnumsResult& AddFooEnumMap(const char* key, const FooEnum& value) { m_fooEnumMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline XmlEnumsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline XmlEnumsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    FooEnum m_fooEnum1;

    FooEnum m_fooEnum2;

    FooEnum m_fooEnum3;

    Aws::Vector<FooEnum> m_fooEnumList;

    Aws::Vector<FooEnum> m_fooEnumSet;

    Aws::Map<Aws::String, FooEnum> m_fooEnumMap;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace QueryProtocol
} // namespace Aws
