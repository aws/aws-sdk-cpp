/**
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
    AWS_RESTXMLPROTOCOL_API XmlIntEnumsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "XmlIntEnums"; }

    AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;


    ///@{
    
    inline int GetIntEnum1() const{ return m_intEnum1; }
    inline bool IntEnum1HasBeenSet() const { return m_intEnum1HasBeenSet; }
    inline void SetIntEnum1(int value) { m_intEnum1HasBeenSet = true; m_intEnum1 = value; }
    inline XmlIntEnumsRequest& WithIntEnum1(int value) { SetIntEnum1(value); return *this;}
    ///@}

    ///@{
    
    inline int GetIntEnum2() const{ return m_intEnum2; }
    inline bool IntEnum2HasBeenSet() const { return m_intEnum2HasBeenSet; }
    inline void SetIntEnum2(int value) { m_intEnum2HasBeenSet = true; m_intEnum2 = value; }
    inline XmlIntEnumsRequest& WithIntEnum2(int value) { SetIntEnum2(value); return *this;}
    ///@}

    ///@{
    
    inline int GetIntEnum3() const{ return m_intEnum3; }
    inline bool IntEnum3HasBeenSet() const { return m_intEnum3HasBeenSet; }
    inline void SetIntEnum3(int value) { m_intEnum3HasBeenSet = true; m_intEnum3 = value; }
    inline XmlIntEnumsRequest& WithIntEnum3(int value) { SetIntEnum3(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntEnumList() const{ return m_intEnumList; }
    inline bool IntEnumListHasBeenSet() const { return m_intEnumListHasBeenSet; }
    inline void SetIntEnumList(const Aws::Vector<int>& value) { m_intEnumListHasBeenSet = true; m_intEnumList = value; }
    inline void SetIntEnumList(Aws::Vector<int>&& value) { m_intEnumListHasBeenSet = true; m_intEnumList = std::move(value); }
    inline XmlIntEnumsRequest& WithIntEnumList(const Aws::Vector<int>& value) { SetIntEnumList(value); return *this;}
    inline XmlIntEnumsRequest& WithIntEnumList(Aws::Vector<int>&& value) { SetIntEnumList(std::move(value)); return *this;}
    inline XmlIntEnumsRequest& AddIntEnumList(int value) { m_intEnumListHasBeenSet = true; m_intEnumList.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<int>& GetIntEnumSet() const{ return m_intEnumSet; }
    inline bool IntEnumSetHasBeenSet() const { return m_intEnumSetHasBeenSet; }
    inline void SetIntEnumSet(const Aws::Vector<int>& value) { m_intEnumSetHasBeenSet = true; m_intEnumSet = value; }
    inline void SetIntEnumSet(Aws::Vector<int>&& value) { m_intEnumSetHasBeenSet = true; m_intEnumSet = std::move(value); }
    inline XmlIntEnumsRequest& WithIntEnumSet(const Aws::Vector<int>& value) { SetIntEnumSet(value); return *this;}
    inline XmlIntEnumsRequest& WithIntEnumSet(Aws::Vector<int>&& value) { SetIntEnumSet(std::move(value)); return *this;}
    inline XmlIntEnumsRequest& AddIntEnumSet(int value) { m_intEnumSetHasBeenSet = true; m_intEnumSet.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, int>& GetIntEnumMap() const{ return m_intEnumMap; }
    inline bool IntEnumMapHasBeenSet() const { return m_intEnumMapHasBeenSet; }
    inline void SetIntEnumMap(const Aws::Map<Aws::String, int>& value) { m_intEnumMapHasBeenSet = true; m_intEnumMap = value; }
    inline void SetIntEnumMap(Aws::Map<Aws::String, int>&& value) { m_intEnumMapHasBeenSet = true; m_intEnumMap = std::move(value); }
    inline XmlIntEnumsRequest& WithIntEnumMap(const Aws::Map<Aws::String, int>& value) { SetIntEnumMap(value); return *this;}
    inline XmlIntEnumsRequest& WithIntEnumMap(Aws::Map<Aws::String, int>&& value) { SetIntEnumMap(std::move(value)); return *this;}
    inline XmlIntEnumsRequest& AddIntEnumMap(const Aws::String& key, int value) { m_intEnumMapHasBeenSet = true; m_intEnumMap.emplace(key, value); return *this; }
    inline XmlIntEnumsRequest& AddIntEnumMap(Aws::String&& key, int value) { m_intEnumMapHasBeenSet = true; m_intEnumMap.emplace(std::move(key), value); return *this; }
    inline XmlIntEnumsRequest& AddIntEnumMap(const char* key, int value) { m_intEnumMapHasBeenSet = true; m_intEnumMap.emplace(key, value); return *this; }
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
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
