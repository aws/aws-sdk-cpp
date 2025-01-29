/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
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
  class FlattenedXmlMapWithXmlNameRequest : public RestXmlProtocolRequest
  {
  public:
    AWS_RESTXMLPROTOCOL_API FlattenedXmlMapWithXmlNameRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "FlattenedXmlMapWithXmlName"; }

    AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetMyMap() const{ return m_myMap; }
    inline bool MyMapHasBeenSet() const { return m_myMapHasBeenSet; }
    inline void SetMyMap(const Aws::Map<Aws::String, Aws::String>& value) { m_myMapHasBeenSet = true; m_myMap = value; }
    inline void SetMyMap(Aws::Map<Aws::String, Aws::String>&& value) { m_myMapHasBeenSet = true; m_myMap = std::move(value); }
    inline FlattenedXmlMapWithXmlNameRequest& WithMyMap(const Aws::Map<Aws::String, Aws::String>& value) { SetMyMap(value); return *this;}
    inline FlattenedXmlMapWithXmlNameRequest& WithMyMap(Aws::Map<Aws::String, Aws::String>&& value) { SetMyMap(std::move(value)); return *this;}
    inline FlattenedXmlMapWithXmlNameRequest& AddMyMap(const Aws::String& key, const Aws::String& value) { m_myMapHasBeenSet = true; m_myMap.emplace(key, value); return *this; }
    inline FlattenedXmlMapWithXmlNameRequest& AddMyMap(Aws::String&& key, const Aws::String& value) { m_myMapHasBeenSet = true; m_myMap.emplace(std::move(key), value); return *this; }
    inline FlattenedXmlMapWithXmlNameRequest& AddMyMap(const Aws::String& key, Aws::String&& value) { m_myMapHasBeenSet = true; m_myMap.emplace(key, std::move(value)); return *this; }
    inline FlattenedXmlMapWithXmlNameRequest& AddMyMap(Aws::String&& key, Aws::String&& value) { m_myMapHasBeenSet = true; m_myMap.emplace(std::move(key), std::move(value)); return *this; }
    inline FlattenedXmlMapWithXmlNameRequest& AddMyMap(const char* key, Aws::String&& value) { m_myMapHasBeenSet = true; m_myMap.emplace(key, std::move(value)); return *this; }
    inline FlattenedXmlMapWithXmlNameRequest& AddMyMap(Aws::String&& key, const char* value) { m_myMapHasBeenSet = true; m_myMap.emplace(std::move(key), value); return *this; }
    inline FlattenedXmlMapWithXmlNameRequest& AddMyMap(const char* key, const char* value) { m_myMapHasBeenSet = true; m_myMap.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_myMap;
    bool m_myMapHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
