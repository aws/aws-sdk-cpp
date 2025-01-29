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
  class NestedXmlMapWithXmlNameRequest : public RestXmlProtocolRequest
  {
  public:
    AWS_RESTXMLPROTOCOL_API NestedXmlMapWithXmlNameRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "NestedXmlMapWithXmlName"; }

    AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTXMLPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetNestedXmlMapWithXmlNameMap() const{ return m_nestedXmlMapWithXmlNameMap; }
    inline bool NestedXmlMapWithXmlNameMapHasBeenSet() const { return m_nestedXmlMapWithXmlNameMapHasBeenSet; }
    inline void SetNestedXmlMapWithXmlNameMap(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { m_nestedXmlMapWithXmlNameMapHasBeenSet = true; m_nestedXmlMapWithXmlNameMap = value; }
    inline void SetNestedXmlMapWithXmlNameMap(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { m_nestedXmlMapWithXmlNameMapHasBeenSet = true; m_nestedXmlMapWithXmlNameMap = std::move(value); }
    inline NestedXmlMapWithXmlNameRequest& WithNestedXmlMapWithXmlNameMap(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { SetNestedXmlMapWithXmlNameMap(value); return *this;}
    inline NestedXmlMapWithXmlNameRequest& WithNestedXmlMapWithXmlNameMap(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { SetNestedXmlMapWithXmlNameMap(std::move(value)); return *this;}
    inline NestedXmlMapWithXmlNameRequest& AddNestedXmlMapWithXmlNameMap(const Aws::String& key, const Aws::Map<Aws::String, Aws::String>& value) { m_nestedXmlMapWithXmlNameMapHasBeenSet = true; m_nestedXmlMapWithXmlNameMap.emplace(key, value); return *this; }
    inline NestedXmlMapWithXmlNameRequest& AddNestedXmlMapWithXmlNameMap(Aws::String&& key, const Aws::Map<Aws::String, Aws::String>& value) { m_nestedXmlMapWithXmlNameMapHasBeenSet = true; m_nestedXmlMapWithXmlNameMap.emplace(std::move(key), value); return *this; }
    inline NestedXmlMapWithXmlNameRequest& AddNestedXmlMapWithXmlNameMap(const Aws::String& key, Aws::Map<Aws::String, Aws::String>&& value) { m_nestedXmlMapWithXmlNameMapHasBeenSet = true; m_nestedXmlMapWithXmlNameMap.emplace(key, std::move(value)); return *this; }
    inline NestedXmlMapWithXmlNameRequest& AddNestedXmlMapWithXmlNameMap(Aws::String&& key, Aws::Map<Aws::String, Aws::String>&& value) { m_nestedXmlMapWithXmlNameMapHasBeenSet = true; m_nestedXmlMapWithXmlNameMap.emplace(std::move(key), std::move(value)); return *this; }
    inline NestedXmlMapWithXmlNameRequest& AddNestedXmlMapWithXmlNameMap(const char* key, Aws::Map<Aws::String, Aws::String>&& value) { m_nestedXmlMapWithXmlNameMapHasBeenSet = true; m_nestedXmlMapWithXmlNameMap.emplace(key, std::move(value)); return *this; }
    inline NestedXmlMapWithXmlNameRequest& AddNestedXmlMapWithXmlNameMap(const char* key, const Aws::Map<Aws::String, Aws::String>& value) { m_nestedXmlMapWithXmlNameMapHasBeenSet = true; m_nestedXmlMapWithXmlNameMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline NestedXmlMapWithXmlNameRequest& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline NestedXmlMapWithXmlNameRequest& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline NestedXmlMapWithXmlNameRequest& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_nestedXmlMapWithXmlNameMap;
    bool m_nestedXmlMapWithXmlNameMapHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
