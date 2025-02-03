/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/model/GreetingStruct.h>
#include <utility>

namespace Aws
{
namespace RestXmlProtocol
{
namespace Model
{

  /**
   */
  class XmlEmptyMapsRequest : public RestXmlProtocolRequest
  {
  public:
    AWS_RESTXMLPROTOCOL_API XmlEmptyMapsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "XmlEmptyMaps"; }

    AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::Map<Aws::String, GreetingStruct>& GetMyMap() const{ return m_myMap; }
    inline bool MyMapHasBeenSet() const { return m_myMapHasBeenSet; }
    inline void SetMyMap(const Aws::Map<Aws::String, GreetingStruct>& value) { m_myMapHasBeenSet = true; m_myMap = value; }
    inline void SetMyMap(Aws::Map<Aws::String, GreetingStruct>&& value) { m_myMapHasBeenSet = true; m_myMap = std::move(value); }
    inline XmlEmptyMapsRequest& WithMyMap(const Aws::Map<Aws::String, GreetingStruct>& value) { SetMyMap(value); return *this;}
    inline XmlEmptyMapsRequest& WithMyMap(Aws::Map<Aws::String, GreetingStruct>&& value) { SetMyMap(std::move(value)); return *this;}
    inline XmlEmptyMapsRequest& AddMyMap(const Aws::String& key, const GreetingStruct& value) { m_myMapHasBeenSet = true; m_myMap.emplace(key, value); return *this; }
    inline XmlEmptyMapsRequest& AddMyMap(Aws::String&& key, const GreetingStruct& value) { m_myMapHasBeenSet = true; m_myMap.emplace(std::move(key), value); return *this; }
    inline XmlEmptyMapsRequest& AddMyMap(const Aws::String& key, GreetingStruct&& value) { m_myMapHasBeenSet = true; m_myMap.emplace(key, std::move(value)); return *this; }
    inline XmlEmptyMapsRequest& AddMyMap(Aws::String&& key, GreetingStruct&& value) { m_myMapHasBeenSet = true; m_myMap.emplace(std::move(key), std::move(value)); return *this; }
    inline XmlEmptyMapsRequest& AddMyMap(const char* key, GreetingStruct&& value) { m_myMapHasBeenSet = true; m_myMap.emplace(key, std::move(value)); return *this; }
    inline XmlEmptyMapsRequest& AddMyMap(const char* key, const GreetingStruct& value) { m_myMapHasBeenSet = true; m_myMap.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, GreetingStruct> m_myMap;
    bool m_myMapHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
