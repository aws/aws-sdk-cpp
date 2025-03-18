﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>
#include <aws/json-protocol/model/FooEnum.h>
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
  class JsonEnumsResult
  {
  public:
    AWS_JSONPROTOCOL_API JsonEnumsResult() = default;
    AWS_JSONPROTOCOL_API JsonEnumsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_JSONPROTOCOL_API JsonEnumsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline FooEnum GetFooEnum1() const { return m_fooEnum1; }
    inline void SetFooEnum1(FooEnum value) { m_fooEnum1HasBeenSet = true; m_fooEnum1 = value; }
    inline JsonEnumsResult& WithFooEnum1(FooEnum value) { SetFooEnum1(value); return *this;}
    ///@}

    ///@{
    
    inline FooEnum GetFooEnum2() const { return m_fooEnum2; }
    inline void SetFooEnum2(FooEnum value) { m_fooEnum2HasBeenSet = true; m_fooEnum2 = value; }
    inline JsonEnumsResult& WithFooEnum2(FooEnum value) { SetFooEnum2(value); return *this;}
    ///@}

    ///@{
    
    inline FooEnum GetFooEnum3() const { return m_fooEnum3; }
    inline void SetFooEnum3(FooEnum value) { m_fooEnum3HasBeenSet = true; m_fooEnum3 = value; }
    inline JsonEnumsResult& WithFooEnum3(FooEnum value) { SetFooEnum3(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<FooEnum>& GetFooEnumList() const { return m_fooEnumList; }
    template<typename FooEnumListT = Aws::Vector<FooEnum>>
    void SetFooEnumList(FooEnumListT&& value) { m_fooEnumListHasBeenSet = true; m_fooEnumList = std::forward<FooEnumListT>(value); }
    template<typename FooEnumListT = Aws::Vector<FooEnum>>
    JsonEnumsResult& WithFooEnumList(FooEnumListT&& value) { SetFooEnumList(std::forward<FooEnumListT>(value)); return *this;}
    inline JsonEnumsResult& AddFooEnumList(FooEnum value) { m_fooEnumListHasBeenSet = true; m_fooEnumList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<FooEnum>& GetFooEnumSet() const { return m_fooEnumSet; }
    template<typename FooEnumSetT = Aws::Vector<FooEnum>>
    void SetFooEnumSet(FooEnumSetT&& value) { m_fooEnumSetHasBeenSet = true; m_fooEnumSet = std::forward<FooEnumSetT>(value); }
    template<typename FooEnumSetT = Aws::Vector<FooEnum>>
    JsonEnumsResult& WithFooEnumSet(FooEnumSetT&& value) { SetFooEnumSet(std::forward<FooEnumSetT>(value)); return *this;}
    inline JsonEnumsResult& AddFooEnumSet(FooEnum value) { m_fooEnumSetHasBeenSet = true; m_fooEnumSet.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, FooEnum>& GetFooEnumMap() const { return m_fooEnumMap; }
    template<typename FooEnumMapT = Aws::Map<Aws::String, FooEnum>>
    void SetFooEnumMap(FooEnumMapT&& value) { m_fooEnumMapHasBeenSet = true; m_fooEnumMap = std::forward<FooEnumMapT>(value); }
    template<typename FooEnumMapT = Aws::Map<Aws::String, FooEnum>>
    JsonEnumsResult& WithFooEnumMap(FooEnumMapT&& value) { SetFooEnumMap(std::forward<FooEnumMapT>(value)); return *this;}
    inline JsonEnumsResult& AddFooEnumMap(Aws::String key, FooEnum value) {
      m_fooEnumMapHasBeenSet = true; m_fooEnumMap.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    JsonEnumsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FooEnum m_fooEnum1{FooEnum::NOT_SET};
    bool m_fooEnum1HasBeenSet = false;

    FooEnum m_fooEnum2{FooEnum::NOT_SET};
    bool m_fooEnum2HasBeenSet = false;

    FooEnum m_fooEnum3{FooEnum::NOT_SET};
    bool m_fooEnum3HasBeenSet = false;

    Aws::Vector<FooEnum> m_fooEnumList;
    bool m_fooEnumListHasBeenSet = false;

    Aws::Vector<FooEnum> m_fooEnumSet;
    bool m_fooEnumSetHasBeenSet = false;

    Aws::Map<Aws::String, FooEnum> m_fooEnumMap;
    bool m_fooEnumMapHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace JsonProtocol
} // namespace Aws
