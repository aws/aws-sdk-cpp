/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2-protocol/EC2Protocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ec2-protocol/model/ResponseMetadata.h>
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
namespace EC2Protocol
{
namespace Model
{
  class XmlIntEnumsResponse
  {
  public:
    AWS_EC2PROTOCOL_API XmlIntEnumsResponse();
    AWS_EC2PROTOCOL_API XmlIntEnumsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2PROTOCOL_API XmlIntEnumsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline int GetIntEnum1() const{ return m_intEnum1; }
    inline void SetIntEnum1(int value) { m_intEnum1 = value; }
    inline XmlIntEnumsResponse& WithIntEnum1(int value) { SetIntEnum1(value); return *this;}
    ///@}

    ///@{
    
    inline int GetIntEnum2() const{ return m_intEnum2; }
    inline void SetIntEnum2(int value) { m_intEnum2 = value; }
    inline XmlIntEnumsResponse& WithIntEnum2(int value) { SetIntEnum2(value); return *this;}
    ///@}

    ///@{
    
    inline int GetIntEnum3() const{ return m_intEnum3; }
    inline void SetIntEnum3(int value) { m_intEnum3 = value; }
    inline XmlIntEnumsResponse& WithIntEnum3(int value) { SetIntEnum3(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntEnumList() const{ return m_intEnumList; }
    inline void SetIntEnumList(const Aws::Vector<int>& value) { m_intEnumList = value; }
    inline void SetIntEnumList(Aws::Vector<int>&& value) { m_intEnumList = std::move(value); }
    inline XmlIntEnumsResponse& WithIntEnumList(const Aws::Vector<int>& value) { SetIntEnumList(value); return *this;}
    inline XmlIntEnumsResponse& WithIntEnumList(Aws::Vector<int>&& value) { SetIntEnumList(std::move(value)); return *this;}
    inline XmlIntEnumsResponse& AddIntEnumList(int value) { m_intEnumList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntEnumSet() const{ return m_intEnumSet; }
    inline void SetIntEnumSet(const Aws::Vector<int>& value) { m_intEnumSet = value; }
    inline void SetIntEnumSet(Aws::Vector<int>&& value) { m_intEnumSet = std::move(value); }
    inline XmlIntEnumsResponse& WithIntEnumSet(const Aws::Vector<int>& value) { SetIntEnumSet(value); return *this;}
    inline XmlIntEnumsResponse& WithIntEnumSet(Aws::Vector<int>&& value) { SetIntEnumSet(std::move(value)); return *this;}
    inline XmlIntEnumsResponse& AddIntEnumSet(int value) { m_intEnumSet.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, int>& GetIntEnumMap() const{ return m_intEnumMap; }
    inline void SetIntEnumMap(const Aws::Map<Aws::String, int>& value) { m_intEnumMap = value; }
    inline void SetIntEnumMap(Aws::Map<Aws::String, int>&& value) { m_intEnumMap = std::move(value); }
    inline XmlIntEnumsResponse& WithIntEnumMap(const Aws::Map<Aws::String, int>& value) { SetIntEnumMap(value); return *this;}
    inline XmlIntEnumsResponse& WithIntEnumMap(Aws::Map<Aws::String, int>&& value) { SetIntEnumMap(std::move(value)); return *this;}
    inline XmlIntEnumsResponse& AddIntEnumMap(const Aws::String& key, int value) { m_intEnumMap.emplace(key, value); return *this; }
    inline XmlIntEnumsResponse& AddIntEnumMap(Aws::String&& key, int value) { m_intEnumMap.emplace(std::move(key), value); return *this; }
    inline XmlIntEnumsResponse& AddIntEnumMap(const char* key, int value) { m_intEnumMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline XmlIntEnumsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline XmlIntEnumsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    int m_intEnum1;

    int m_intEnum2;

    int m_intEnum3;

    Aws::Vector<int> m_intEnumList;

    Aws::Vector<int> m_intEnumSet;

    Aws::Map<Aws::String, int> m_intEnumMap;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2Protocol
} // namespace Aws
