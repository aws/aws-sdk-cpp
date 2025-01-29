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
  class NestedXmlMapsRequest : public RestXmlProtocolRequest
  {
  public:
    AWS_RESTXMLPROTOCOL_API NestedXmlMapsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "NestedXmlMaps"; }

    AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>& GetNestedMap() const{ return m_nestedMap; }
    inline bool NestedMapHasBeenSet() const { return m_nestedMapHasBeenSet; }
    inline void SetNestedMap(const Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>& value) { m_nestedMapHasBeenSet = true; m_nestedMap = value; }
    inline void SetNestedMap(Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>&& value) { m_nestedMapHasBeenSet = true; m_nestedMap = std::move(value); }
    inline NestedXmlMapsRequest& WithNestedMap(const Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>& value) { SetNestedMap(value); return *this;}
    inline NestedXmlMapsRequest& WithNestedMap(Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>&& value) { SetNestedMap(std::move(value)); return *this;}
    inline NestedXmlMapsRequest& AddNestedMap(const Aws::String& key, const Aws::Map<Aws::String, FooEnum>& value) { m_nestedMapHasBeenSet = true; m_nestedMap.emplace(key, value); return *this; }
    inline NestedXmlMapsRequest& AddNestedMap(Aws::String&& key, const Aws::Map<Aws::String, FooEnum>& value) { m_nestedMapHasBeenSet = true; m_nestedMap.emplace(std::move(key), value); return *this; }
    inline NestedXmlMapsRequest& AddNestedMap(const Aws::String& key, Aws::Map<Aws::String, FooEnum>&& value) { m_nestedMapHasBeenSet = true; m_nestedMap.emplace(key, std::move(value)); return *this; }
    inline NestedXmlMapsRequest& AddNestedMap(Aws::String&& key, Aws::Map<Aws::String, FooEnum>&& value) { m_nestedMapHasBeenSet = true; m_nestedMap.emplace(std::move(key), std::move(value)); return *this; }
    inline NestedXmlMapsRequest& AddNestedMap(const char* key, Aws::Map<Aws::String, FooEnum>&& value) { m_nestedMapHasBeenSet = true; m_nestedMap.emplace(key, std::move(value)); return *this; }
    inline NestedXmlMapsRequest& AddNestedMap(const char* key, const Aws::Map<Aws::String, FooEnum>& value) { m_nestedMapHasBeenSet = true; m_nestedMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>& GetFlatNestedMap() const{ return m_flatNestedMap; }
    inline bool FlatNestedMapHasBeenSet() const { return m_flatNestedMapHasBeenSet; }
    inline void SetFlatNestedMap(const Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>& value) { m_flatNestedMapHasBeenSet = true; m_flatNestedMap = value; }
    inline void SetFlatNestedMap(Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>&& value) { m_flatNestedMapHasBeenSet = true; m_flatNestedMap = std::move(value); }
    inline NestedXmlMapsRequest& WithFlatNestedMap(const Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>& value) { SetFlatNestedMap(value); return *this;}
    inline NestedXmlMapsRequest& WithFlatNestedMap(Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>>&& value) { SetFlatNestedMap(std::move(value)); return *this;}
    inline NestedXmlMapsRequest& AddFlatNestedMap(const Aws::String& key, const Aws::Map<Aws::String, FooEnum>& value) { m_flatNestedMapHasBeenSet = true; m_flatNestedMap.emplace(key, value); return *this; }
    inline NestedXmlMapsRequest& AddFlatNestedMap(Aws::String&& key, const Aws::Map<Aws::String, FooEnum>& value) { m_flatNestedMapHasBeenSet = true; m_flatNestedMap.emplace(std::move(key), value); return *this; }
    inline NestedXmlMapsRequest& AddFlatNestedMap(const Aws::String& key, Aws::Map<Aws::String, FooEnum>&& value) { m_flatNestedMapHasBeenSet = true; m_flatNestedMap.emplace(key, std::move(value)); return *this; }
    inline NestedXmlMapsRequest& AddFlatNestedMap(Aws::String&& key, Aws::Map<Aws::String, FooEnum>&& value) { m_flatNestedMapHasBeenSet = true; m_flatNestedMap.emplace(std::move(key), std::move(value)); return *this; }
    inline NestedXmlMapsRequest& AddFlatNestedMap(const char* key, Aws::Map<Aws::String, FooEnum>&& value) { m_flatNestedMapHasBeenSet = true; m_flatNestedMap.emplace(key, std::move(value)); return *this; }
    inline NestedXmlMapsRequest& AddFlatNestedMap(const char* key, const Aws::Map<Aws::String, FooEnum>& value) { m_flatNestedMapHasBeenSet = true; m_flatNestedMap.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>> m_nestedMap;
    bool m_nestedMapHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Map<Aws::String, FooEnum>> m_flatNestedMap;
    bool m_flatNestedMapHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
