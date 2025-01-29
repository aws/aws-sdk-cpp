/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>
#include <aws/json-protocol/JsonProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace JsonProtocol
{
namespace Model
{

  /**
   */
  class JsonIntEnumsRequest : public JsonProtocolRequest
  {
  public:
    AWS_JSONPROTOCOL_API JsonIntEnumsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "JsonIntEnums"; }

    AWS_JSONPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_JSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline int GetIntEnum1() const{ return m_intEnum1; }
    inline bool IntEnum1HasBeenSet() const { return m_intEnum1HasBeenSet; }
    inline void SetIntEnum1(int value) { m_intEnum1HasBeenSet = true; m_intEnum1 = value; }
    inline JsonIntEnumsRequest& WithIntEnum1(int value) { SetIntEnum1(value); return *this;}
    ///@}

    ///@{
    
    inline int GetIntEnum2() const{ return m_intEnum2; }
    inline bool IntEnum2HasBeenSet() const { return m_intEnum2HasBeenSet; }
    inline void SetIntEnum2(int value) { m_intEnum2HasBeenSet = true; m_intEnum2 = value; }
    inline JsonIntEnumsRequest& WithIntEnum2(int value) { SetIntEnum2(value); return *this;}
    ///@}

    ///@{
    
    inline int GetIntEnum3() const{ return m_intEnum3; }
    inline bool IntEnum3HasBeenSet() const { return m_intEnum3HasBeenSet; }
    inline void SetIntEnum3(int value) { m_intEnum3HasBeenSet = true; m_intEnum3 = value; }
    inline JsonIntEnumsRequest& WithIntEnum3(int value) { SetIntEnum3(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntEnumList() const{ return m_intEnumList; }
    inline bool IntEnumListHasBeenSet() const { return m_intEnumListHasBeenSet; }
    inline void SetIntEnumList(const Aws::Vector<int>& value) { m_intEnumListHasBeenSet = true; m_intEnumList = value; }
    inline void SetIntEnumList(Aws::Vector<int>&& value) { m_intEnumListHasBeenSet = true; m_intEnumList = std::move(value); }
    inline JsonIntEnumsRequest& WithIntEnumList(const Aws::Vector<int>& value) { SetIntEnumList(value); return *this;}
    inline JsonIntEnumsRequest& WithIntEnumList(Aws::Vector<int>&& value) { SetIntEnumList(std::move(value)); return *this;}
    inline JsonIntEnumsRequest& AddIntEnumList(int value) { m_intEnumListHasBeenSet = true; m_intEnumList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntEnumSet() const{ return m_intEnumSet; }
    inline bool IntEnumSetHasBeenSet() const { return m_intEnumSetHasBeenSet; }
    inline void SetIntEnumSet(const Aws::Vector<int>& value) { m_intEnumSetHasBeenSet = true; m_intEnumSet = value; }
    inline void SetIntEnumSet(Aws::Vector<int>&& value) { m_intEnumSetHasBeenSet = true; m_intEnumSet = std::move(value); }
    inline JsonIntEnumsRequest& WithIntEnumSet(const Aws::Vector<int>& value) { SetIntEnumSet(value); return *this;}
    inline JsonIntEnumsRequest& WithIntEnumSet(Aws::Vector<int>&& value) { SetIntEnumSet(std::move(value)); return *this;}
    inline JsonIntEnumsRequest& AddIntEnumSet(int value) { m_intEnumSetHasBeenSet = true; m_intEnumSet.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, int>& GetIntEnumMap() const{ return m_intEnumMap; }
    inline bool IntEnumMapHasBeenSet() const { return m_intEnumMapHasBeenSet; }
    inline void SetIntEnumMap(const Aws::Map<Aws::String, int>& value) { m_intEnumMapHasBeenSet = true; m_intEnumMap = value; }
    inline void SetIntEnumMap(Aws::Map<Aws::String, int>&& value) { m_intEnumMapHasBeenSet = true; m_intEnumMap = std::move(value); }
    inline JsonIntEnumsRequest& WithIntEnumMap(const Aws::Map<Aws::String, int>& value) { SetIntEnumMap(value); return *this;}
    inline JsonIntEnumsRequest& WithIntEnumMap(Aws::Map<Aws::String, int>&& value) { SetIntEnumMap(std::move(value)); return *this;}
    inline JsonIntEnumsRequest& AddIntEnumMap(const Aws::String& key, int value) { m_intEnumMapHasBeenSet = true; m_intEnumMap.emplace(key, value); return *this; }
    inline JsonIntEnumsRequest& AddIntEnumMap(Aws::String&& key, int value) { m_intEnumMapHasBeenSet = true; m_intEnumMap.emplace(std::move(key), value); return *this; }
    inline JsonIntEnumsRequest& AddIntEnumMap(const char* key, int value) { m_intEnumMapHasBeenSet = true; m_intEnumMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline JsonIntEnumsRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline JsonIntEnumsRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline JsonIntEnumsRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_intEnum1;
    bool m_intEnum1HasBeenSet = false;

    int m_intEnum2;
    bool m_intEnum2HasBeenSet = false;

    int m_intEnum3;
    bool m_intEnum3HasBeenSet = false;

    Aws::Vector<int> m_intEnumList;
    bool m_intEnumListHasBeenSet = false;

    Aws::Vector<int> m_intEnumSet;
    bool m_intEnumSetHasBeenSet = false;

    Aws::Map<Aws::String, int> m_intEnumMap;
    bool m_intEnumMapHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace JsonProtocol
} // namespace Aws
