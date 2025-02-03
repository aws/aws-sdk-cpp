/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-xml-protocol/model/FooEnum.h>
#include <utility>

namespace Aws
{
namespace RestXmlProtocol
{
namespace Model
{

  /**
   */
  class FlattenedXmlMapRequest : public RestXmlProtocolRequest
  {
  public:
    AWS_RESTXMLPROTOCOL_API FlattenedXmlMapRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "FlattenedXmlMap"; }

    AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::Map<Aws::String, FooEnum>& GetMyMap() const{ return m_myMap; }
    inline bool MyMapHasBeenSet() const { return m_myMapHasBeenSet; }
    inline void SetMyMap(const Aws::Map<Aws::String, FooEnum>& value) { m_myMapHasBeenSet = true; m_myMap = value; }
    inline void SetMyMap(Aws::Map<Aws::String, FooEnum>&& value) { m_myMapHasBeenSet = true; m_myMap = std::move(value); }
    inline FlattenedXmlMapRequest& WithMyMap(const Aws::Map<Aws::String, FooEnum>& value) { SetMyMap(value); return *this;}
    inline FlattenedXmlMapRequest& WithMyMap(Aws::Map<Aws::String, FooEnum>&& value) { SetMyMap(std::move(value)); return *this;}
    inline FlattenedXmlMapRequest& AddMyMap(const Aws::String& key, const FooEnum& value) { m_myMapHasBeenSet = true; m_myMap.emplace(key, value); return *this; }
    inline FlattenedXmlMapRequest& AddMyMap(Aws::String&& key, const FooEnum& value) { m_myMapHasBeenSet = true; m_myMap.emplace(std::move(key), value); return *this; }
    inline FlattenedXmlMapRequest& AddMyMap(const Aws::String& key, FooEnum&& value) { m_myMapHasBeenSet = true; m_myMap.emplace(key, std::move(value)); return *this; }
    inline FlattenedXmlMapRequest& AddMyMap(Aws::String&& key, FooEnum&& value) { m_myMapHasBeenSet = true; m_myMap.emplace(std::move(key), std::move(value)); return *this; }
    inline FlattenedXmlMapRequest& AddMyMap(const char* key, FooEnum&& value) { m_myMapHasBeenSet = true; m_myMap.emplace(key, std::move(value)); return *this; }
    inline FlattenedXmlMapRequest& AddMyMap(const char* key, const FooEnum& value) { m_myMapHasBeenSet = true; m_myMap.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, FooEnum> m_myMap;
    bool m_myMapHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
