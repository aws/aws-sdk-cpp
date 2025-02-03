/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class XmlIntEnumsResult
  {
  public:
    AWS_RESTXMLPROTOCOL_API XmlIntEnumsResult();
    AWS_RESTXMLPROTOCOL_API XmlIntEnumsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RESTXMLPROTOCOL_API XmlIntEnumsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline int GetIntEnum1() const{ return m_intEnum1; }
    inline void SetIntEnum1(int value) { m_intEnum1 = value; }
    inline XmlIntEnumsResult& WithIntEnum1(int value) { SetIntEnum1(value); return *this;}
    ///@}

    ///@{
    
    inline int GetIntEnum2() const{ return m_intEnum2; }
    inline void SetIntEnum2(int value) { m_intEnum2 = value; }
    inline XmlIntEnumsResult& WithIntEnum2(int value) { SetIntEnum2(value); return *this;}
    ///@}

    ///@{
    
    inline int GetIntEnum3() const{ return m_intEnum3; }
    inline void SetIntEnum3(int value) { m_intEnum3 = value; }
    inline XmlIntEnumsResult& WithIntEnum3(int value) { SetIntEnum3(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntEnumList() const{ return m_intEnumList; }
    inline void SetIntEnumList(const Aws::Vector<int>& value) { m_intEnumList = value; }
    inline void SetIntEnumList(Aws::Vector<int>&& value) { m_intEnumList = std::move(value); }
    inline XmlIntEnumsResult& WithIntEnumList(const Aws::Vector<int>& value) { SetIntEnumList(value); return *this;}
    inline XmlIntEnumsResult& WithIntEnumList(Aws::Vector<int>&& value) { SetIntEnumList(std::move(value)); return *this;}
    inline XmlIntEnumsResult& AddIntEnumList(int value) { m_intEnumList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntEnumSet() const{ return m_intEnumSet; }
    inline void SetIntEnumSet(const Aws::Vector<int>& value) { m_intEnumSet = value; }
    inline void SetIntEnumSet(Aws::Vector<int>&& value) { m_intEnumSet = std::move(value); }
    inline XmlIntEnumsResult& WithIntEnumSet(const Aws::Vector<int>& value) { SetIntEnumSet(value); return *this;}
    inline XmlIntEnumsResult& WithIntEnumSet(Aws::Vector<int>&& value) { SetIntEnumSet(std::move(value)); return *this;}
    inline XmlIntEnumsResult& AddIntEnumSet(int value) { m_intEnumSet.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, int>& GetIntEnumMap() const{ return m_intEnumMap; }
    inline void SetIntEnumMap(const Aws::Map<Aws::String, int>& value) { m_intEnumMap = value; }
    inline void SetIntEnumMap(Aws::Map<Aws::String, int>&& value) { m_intEnumMap = std::move(value); }
    inline XmlIntEnumsResult& WithIntEnumMap(const Aws::Map<Aws::String, int>& value) { SetIntEnumMap(value); return *this;}
    inline XmlIntEnumsResult& WithIntEnumMap(Aws::Map<Aws::String, int>&& value) { SetIntEnumMap(std::move(value)); return *this;}
    inline XmlIntEnumsResult& AddIntEnumMap(const Aws::String& key, int value) { m_intEnumMap.emplace(key, value); return *this; }
    inline XmlIntEnumsResult& AddIntEnumMap(Aws::String&& key, int value) { m_intEnumMap.emplace(std::move(key), value); return *this; }
    inline XmlIntEnumsResult& AddIntEnumMap(const char* key, int value) { m_intEnumMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline XmlIntEnumsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline XmlIntEnumsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline XmlIntEnumsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_intEnum1;

    int m_intEnum2;

    int m_intEnum3;

    Aws::Vector<int> m_intEnumList;

    Aws::Vector<int> m_intEnumSet;

    Aws::Map<Aws::String, int> m_intEnumMap;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
