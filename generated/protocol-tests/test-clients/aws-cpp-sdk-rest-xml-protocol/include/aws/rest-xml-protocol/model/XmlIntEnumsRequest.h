﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RestXmlProtocol
{
namespace Model
{

  /**
   */
  class XmlIntEnumsRequest : public RestXmlProtocolRequest
  {
  public:
    AWS_RESTXMLPROTOCOL_API XmlIntEnumsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "XmlIntEnums"; }

    AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;


    ///@{
    
    inline int GetIntEnum1() const { return m_intEnum1; }
    inline bool IntEnum1HasBeenSet() const { return m_intEnum1HasBeenSet; }
    inline void SetIntEnum1(int value) { m_intEnum1HasBeenSet = true; m_intEnum1 = value; }
    inline XmlIntEnumsRequest& WithIntEnum1(int value) { SetIntEnum1(value); return *this;}
    ///@}

    ///@{
    
    inline int GetIntEnum2() const { return m_intEnum2; }
    inline bool IntEnum2HasBeenSet() const { return m_intEnum2HasBeenSet; }
    inline void SetIntEnum2(int value) { m_intEnum2HasBeenSet = true; m_intEnum2 = value; }
    inline XmlIntEnumsRequest& WithIntEnum2(int value) { SetIntEnum2(value); return *this;}
    ///@}

    ///@{
    
    inline int GetIntEnum3() const { return m_intEnum3; }
    inline bool IntEnum3HasBeenSet() const { return m_intEnum3HasBeenSet; }
    inline void SetIntEnum3(int value) { m_intEnum3HasBeenSet = true; m_intEnum3 = value; }
    inline XmlIntEnumsRequest& WithIntEnum3(int value) { SetIntEnum3(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntEnumList() const { return m_intEnumList; }
    inline bool IntEnumListHasBeenSet() const { return m_intEnumListHasBeenSet; }
    template<typename IntEnumListT = Aws::Vector<int>>
    void SetIntEnumList(IntEnumListT&& value) { m_intEnumListHasBeenSet = true; m_intEnumList = std::forward<IntEnumListT>(value); }
    template<typename IntEnumListT = Aws::Vector<int>>
    XmlIntEnumsRequest& WithIntEnumList(IntEnumListT&& value) { SetIntEnumList(std::forward<IntEnumListT>(value)); return *this;}
    inline XmlIntEnumsRequest& AddIntEnumList(int value) { m_intEnumListHasBeenSet = true; m_intEnumList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntEnumSet() const { return m_intEnumSet; }
    inline bool IntEnumSetHasBeenSet() const { return m_intEnumSetHasBeenSet; }
    template<typename IntEnumSetT = Aws::Vector<int>>
    void SetIntEnumSet(IntEnumSetT&& value) { m_intEnumSetHasBeenSet = true; m_intEnumSet = std::forward<IntEnumSetT>(value); }
    template<typename IntEnumSetT = Aws::Vector<int>>
    XmlIntEnumsRequest& WithIntEnumSet(IntEnumSetT&& value) { SetIntEnumSet(std::forward<IntEnumSetT>(value)); return *this;}
    inline XmlIntEnumsRequest& AddIntEnumSet(int value) { m_intEnumSetHasBeenSet = true; m_intEnumSet.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, int>& GetIntEnumMap() const { return m_intEnumMap; }
    inline bool IntEnumMapHasBeenSet() const { return m_intEnumMapHasBeenSet; }
    template<typename IntEnumMapT = Aws::Map<Aws::String, int>>
    void SetIntEnumMap(IntEnumMapT&& value) { m_intEnumMapHasBeenSet = true; m_intEnumMap = std::forward<IntEnumMapT>(value); }
    template<typename IntEnumMapT = Aws::Map<Aws::String, int>>
    XmlIntEnumsRequest& WithIntEnumMap(IntEnumMapT&& value) { SetIntEnumMap(std::forward<IntEnumMapT>(value)); return *this;}
    inline XmlIntEnumsRequest& AddIntEnumMap(Aws::String key, int value) {
      m_intEnumMapHasBeenSet = true; m_intEnumMap.emplace(key, value); return *this;
    }
    ///@}
  private:

    int m_intEnum1{0};
    bool m_intEnum1HasBeenSet = false;

    int m_intEnum2{0};
    bool m_intEnum2HasBeenSet = false;

    int m_intEnum3{0};
    bool m_intEnum3HasBeenSet = false;

    Aws::Vector<int> m_intEnumList;
    bool m_intEnumListHasBeenSet = false;

    Aws::Vector<int> m_intEnumSet;
    bool m_intEnumSetHasBeenSet = false;

    Aws::Map<Aws::String, int> m_intEnumMap;
    bool m_intEnumMapHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
