/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
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
namespace RestJsonProtocol
{
namespace Model
{
  class JsonIntEnumsResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API JsonIntEnumsResult();
    AWS_RESTJSONPROTOCOL_API JsonIntEnumsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API JsonIntEnumsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline int GetIntegerEnum1() const{ return m_integerEnum1; }
    inline void SetIntegerEnum1(int value) { m_integerEnum1 = value; }
    inline JsonIntEnumsResult& WithIntegerEnum1(int value) { SetIntegerEnum1(value); return *this;}
    ///@}

    ///@{
    
    inline int GetIntegerEnum2() const{ return m_integerEnum2; }
    inline void SetIntegerEnum2(int value) { m_integerEnum2 = value; }
    inline JsonIntEnumsResult& WithIntegerEnum2(int value) { SetIntegerEnum2(value); return *this;}
    ///@}

    ///@{
    
    inline int GetIntegerEnum3() const{ return m_integerEnum3; }
    inline void SetIntegerEnum3(int value) { m_integerEnum3 = value; }
    inline JsonIntEnumsResult& WithIntegerEnum3(int value) { SetIntegerEnum3(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntegerEnumList() const{ return m_integerEnumList; }
    inline void SetIntegerEnumList(const Aws::Vector<int>& value) { m_integerEnumList = value; }
    inline void SetIntegerEnumList(Aws::Vector<int>&& value) { m_integerEnumList = std::move(value); }
    inline JsonIntEnumsResult& WithIntegerEnumList(const Aws::Vector<int>& value) { SetIntegerEnumList(value); return *this;}
    inline JsonIntEnumsResult& WithIntegerEnumList(Aws::Vector<int>&& value) { SetIntegerEnumList(std::move(value)); return *this;}
    inline JsonIntEnumsResult& AddIntegerEnumList(int value) { m_integerEnumList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntegerEnumSet() const{ return m_integerEnumSet; }
    inline void SetIntegerEnumSet(const Aws::Vector<int>& value) { m_integerEnumSet = value; }
    inline void SetIntegerEnumSet(Aws::Vector<int>&& value) { m_integerEnumSet = std::move(value); }
    inline JsonIntEnumsResult& WithIntegerEnumSet(const Aws::Vector<int>& value) { SetIntegerEnumSet(value); return *this;}
    inline JsonIntEnumsResult& WithIntegerEnumSet(Aws::Vector<int>&& value) { SetIntegerEnumSet(std::move(value)); return *this;}
    inline JsonIntEnumsResult& AddIntegerEnumSet(int value) { m_integerEnumSet.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, int>& GetIntegerEnumMap() const{ return m_integerEnumMap; }
    inline void SetIntegerEnumMap(const Aws::Map<Aws::String, int>& value) { m_integerEnumMap = value; }
    inline void SetIntegerEnumMap(Aws::Map<Aws::String, int>&& value) { m_integerEnumMap = std::move(value); }
    inline JsonIntEnumsResult& WithIntegerEnumMap(const Aws::Map<Aws::String, int>& value) { SetIntegerEnumMap(value); return *this;}
    inline JsonIntEnumsResult& WithIntegerEnumMap(Aws::Map<Aws::String, int>&& value) { SetIntegerEnumMap(std::move(value)); return *this;}
    inline JsonIntEnumsResult& AddIntegerEnumMap(const Aws::String& key, int value) { m_integerEnumMap.emplace(key, value); return *this; }
    inline JsonIntEnumsResult& AddIntegerEnumMap(Aws::String&& key, int value) { m_integerEnumMap.emplace(std::move(key), value); return *this; }
    inline JsonIntEnumsResult& AddIntegerEnumMap(const char* key, int value) { m_integerEnumMap.emplace(key, value); return *this; }
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

    int m_integerEnum1;

    int m_integerEnum2;

    int m_integerEnum3;

    Aws::Vector<int> m_integerEnumList;

    Aws::Vector<int> m_integerEnumSet;

    Aws::Map<Aws::String, int> m_integerEnumMap;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
