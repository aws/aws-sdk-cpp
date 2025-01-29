/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/model/GreetingStruct.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class JsonMapsResult
  {
  public:
    AWS_RESTJSONPROTOCOL_API JsonMapsResult();
    AWS_RESTJSONPROTOCOL_API JsonMapsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESTJSONPROTOCOL_API JsonMapsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::Map<Aws::String, GreetingStruct>& GetDenseStructMap() const{ return m_denseStructMap; }
    inline void SetDenseStructMap(const Aws::Map<Aws::String, GreetingStruct>& value) { m_denseStructMap = value; }
    inline void SetDenseStructMap(Aws::Map<Aws::String, GreetingStruct>&& value) { m_denseStructMap = std::move(value); }
    inline JsonMapsResult& WithDenseStructMap(const Aws::Map<Aws::String, GreetingStruct>& value) { SetDenseStructMap(value); return *this;}
    inline JsonMapsResult& WithDenseStructMap(Aws::Map<Aws::String, GreetingStruct>&& value) { SetDenseStructMap(std::move(value)); return *this;}
    inline JsonMapsResult& AddDenseStructMap(const Aws::String& key, const GreetingStruct& value) { m_denseStructMap.emplace(key, value); return *this; }
    inline JsonMapsResult& AddDenseStructMap(Aws::String&& key, const GreetingStruct& value) { m_denseStructMap.emplace(std::move(key), value); return *this; }
    inline JsonMapsResult& AddDenseStructMap(const Aws::String& key, GreetingStruct&& value) { m_denseStructMap.emplace(key, std::move(value)); return *this; }
    inline JsonMapsResult& AddDenseStructMap(Aws::String&& key, GreetingStruct&& value) { m_denseStructMap.emplace(std::move(key), std::move(value)); return *this; }
    inline JsonMapsResult& AddDenseStructMap(const char* key, GreetingStruct&& value) { m_denseStructMap.emplace(key, std::move(value)); return *this; }
    inline JsonMapsResult& AddDenseStructMap(const char* key, const GreetingStruct& value) { m_denseStructMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, int>& GetDenseNumberMap() const{ return m_denseNumberMap; }
    inline void SetDenseNumberMap(const Aws::Map<Aws::String, int>& value) { m_denseNumberMap = value; }
    inline void SetDenseNumberMap(Aws::Map<Aws::String, int>&& value) { m_denseNumberMap = std::move(value); }
    inline JsonMapsResult& WithDenseNumberMap(const Aws::Map<Aws::String, int>& value) { SetDenseNumberMap(value); return *this;}
    inline JsonMapsResult& WithDenseNumberMap(Aws::Map<Aws::String, int>&& value) { SetDenseNumberMap(std::move(value)); return *this;}
    inline JsonMapsResult& AddDenseNumberMap(const Aws::String& key, int value) { m_denseNumberMap.emplace(key, value); return *this; }
    inline JsonMapsResult& AddDenseNumberMap(Aws::String&& key, int value) { m_denseNumberMap.emplace(std::move(key), value); return *this; }
    inline JsonMapsResult& AddDenseNumberMap(const char* key, int value) { m_denseNumberMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, bool>& GetDenseBooleanMap() const{ return m_denseBooleanMap; }
    inline void SetDenseBooleanMap(const Aws::Map<Aws::String, bool>& value) { m_denseBooleanMap = value; }
    inline void SetDenseBooleanMap(Aws::Map<Aws::String, bool>&& value) { m_denseBooleanMap = std::move(value); }
    inline JsonMapsResult& WithDenseBooleanMap(const Aws::Map<Aws::String, bool>& value) { SetDenseBooleanMap(value); return *this;}
    inline JsonMapsResult& WithDenseBooleanMap(Aws::Map<Aws::String, bool>&& value) { SetDenseBooleanMap(std::move(value)); return *this;}
    inline JsonMapsResult& AddDenseBooleanMap(const Aws::String& key, bool value) { m_denseBooleanMap.emplace(key, value); return *this; }
    inline JsonMapsResult& AddDenseBooleanMap(Aws::String&& key, bool value) { m_denseBooleanMap.emplace(std::move(key), value); return *this; }
    inline JsonMapsResult& AddDenseBooleanMap(const char* key, bool value) { m_denseBooleanMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetDenseStringMap() const{ return m_denseStringMap; }
    inline void SetDenseStringMap(const Aws::Map<Aws::String, Aws::String>& value) { m_denseStringMap = value; }
    inline void SetDenseStringMap(Aws::Map<Aws::String, Aws::String>&& value) { m_denseStringMap = std::move(value); }
    inline JsonMapsResult& WithDenseStringMap(const Aws::Map<Aws::String, Aws::String>& value) { SetDenseStringMap(value); return *this;}
    inline JsonMapsResult& WithDenseStringMap(Aws::Map<Aws::String, Aws::String>&& value) { SetDenseStringMap(std::move(value)); return *this;}
    inline JsonMapsResult& AddDenseStringMap(const Aws::String& key, const Aws::String& value) { m_denseStringMap.emplace(key, value); return *this; }
    inline JsonMapsResult& AddDenseStringMap(Aws::String&& key, const Aws::String& value) { m_denseStringMap.emplace(std::move(key), value); return *this; }
    inline JsonMapsResult& AddDenseStringMap(const Aws::String& key, Aws::String&& value) { m_denseStringMap.emplace(key, std::move(value)); return *this; }
    inline JsonMapsResult& AddDenseStringMap(Aws::String&& key, Aws::String&& value) { m_denseStringMap.emplace(std::move(key), std::move(value)); return *this; }
    inline JsonMapsResult& AddDenseStringMap(const char* key, Aws::String&& value) { m_denseStringMap.emplace(key, std::move(value)); return *this; }
    inline JsonMapsResult& AddDenseStringMap(Aws::String&& key, const char* value) { m_denseStringMap.emplace(std::move(key), value); return *this; }
    inline JsonMapsResult& AddDenseStringMap(const char* key, const char* value) { m_denseStringMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetDenseSetMap() const{ return m_denseSetMap; }
    inline void SetDenseSetMap(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_denseSetMap = value; }
    inline void SetDenseSetMap(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_denseSetMap = std::move(value); }
    inline JsonMapsResult& WithDenseSetMap(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetDenseSetMap(value); return *this;}
    inline JsonMapsResult& WithDenseSetMap(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetDenseSetMap(std::move(value)); return *this;}
    inline JsonMapsResult& AddDenseSetMap(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_denseSetMap.emplace(key, value); return *this; }
    inline JsonMapsResult& AddDenseSetMap(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_denseSetMap.emplace(std::move(key), value); return *this; }
    inline JsonMapsResult& AddDenseSetMap(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_denseSetMap.emplace(key, std::move(value)); return *this; }
    inline JsonMapsResult& AddDenseSetMap(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_denseSetMap.emplace(std::move(key), std::move(value)); return *this; }
    inline JsonMapsResult& AddDenseSetMap(const char* key, Aws::Vector<Aws::String>&& value) { m_denseSetMap.emplace(key, std::move(value)); return *this; }
    inline JsonMapsResult& AddDenseSetMap(const char* key, const Aws::Vector<Aws::String>& value) { m_denseSetMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline JsonMapsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline JsonMapsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline JsonMapsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, GreetingStruct> m_denseStructMap;

    Aws::Map<Aws::String, int> m_denseNumberMap;

    Aws::Map<Aws::String, bool> m_denseBooleanMap;

    Aws::Map<Aws::String, Aws::String> m_denseStringMap;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_denseSetMap;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestJsonProtocol
} // namespace Aws
