/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>
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
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace JsonProtocol
{
namespace Model
{
  class JsonIntEnumsResult
  {
  public:
    AWS_JSONPROTOCOL_API JsonIntEnumsResult();
    AWS_JSONPROTOCOL_API JsonIntEnumsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_JSONPROTOCOL_API JsonIntEnumsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline int GetIntEnum1() const{ return m_intEnum1; }
    inline void SetIntEnum1(int value) { m_intEnum1 = value; }
    inline JsonIntEnumsResult& WithIntEnum1(int value) { SetIntEnum1(value); return *this;}
    ///@}

    ///@{
    
    inline int GetIntEnum2() const{ return m_intEnum2; }
    inline void SetIntEnum2(int value) { m_intEnum2 = value; }
    inline JsonIntEnumsResult& WithIntEnum2(int value) { SetIntEnum2(value); return *this;}
    ///@}

    ///@{
    
    inline int GetIntEnum3() const{ return m_intEnum3; }
    inline void SetIntEnum3(int value) { m_intEnum3 = value; }
    inline JsonIntEnumsResult& WithIntEnum3(int value) { SetIntEnum3(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntEnumList() const{ return m_intEnumList; }
    inline void SetIntEnumList(const Aws::Vector<int>& value) { m_intEnumList = value; }
    inline void SetIntEnumList(Aws::Vector<int>&& value) { m_intEnumList = std::move(value); }
    inline JsonIntEnumsResult& WithIntEnumList(const Aws::Vector<int>& value) { SetIntEnumList(value); return *this;}
    inline JsonIntEnumsResult& WithIntEnumList(Aws::Vector<int>&& value) { SetIntEnumList(std::move(value)); return *this;}
    inline JsonIntEnumsResult& AddIntEnumList(int value) { m_intEnumList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntEnumSet() const{ return m_intEnumSet; }
    inline void SetIntEnumSet(const Aws::Vector<int>& value) { m_intEnumSet = value; }
    inline void SetIntEnumSet(Aws::Vector<int>&& value) { m_intEnumSet = std::move(value); }
    inline JsonIntEnumsResult& WithIntEnumSet(const Aws::Vector<int>& value) { SetIntEnumSet(value); return *this;}
    inline JsonIntEnumsResult& WithIntEnumSet(Aws::Vector<int>&& value) { SetIntEnumSet(std::move(value)); return *this;}
    inline JsonIntEnumsResult& AddIntEnumSet(int value) { m_intEnumSet.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, int>& GetIntEnumMap() const{ return m_intEnumMap; }
    inline void SetIntEnumMap(const Aws::Map<Aws::String, int>& value) { m_intEnumMap = value; }
    inline void SetIntEnumMap(Aws::Map<Aws::String, int>&& value) { m_intEnumMap = std::move(value); }
    inline JsonIntEnumsResult& WithIntEnumMap(const Aws::Map<Aws::String, int>& value) { SetIntEnumMap(value); return *this;}
    inline JsonIntEnumsResult& WithIntEnumMap(Aws::Map<Aws::String, int>&& value) { SetIntEnumMap(std::move(value)); return *this;}
    inline JsonIntEnumsResult& AddIntEnumMap(const Aws::String& key, int value) { m_intEnumMap.emplace(key, value); return *this; }
    inline JsonIntEnumsResult& AddIntEnumMap(Aws::String&& key, int value) { m_intEnumMap.emplace(std::move(key), value); return *this; }
    inline JsonIntEnumsResult& AddIntEnumMap(const char* key, int value) { m_intEnumMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline JsonIntEnumsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline JsonIntEnumsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline JsonIntEnumsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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
} // namespace JsonProtocol
} // namespace Aws
