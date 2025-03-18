﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace RestXmlProtocol
{
namespace Model
{

  /**
   */
  class HttpPrefixHeadersRequest : public RestXmlProtocolRequest
  {
  public:
    AWS_RESTXMLPROTOCOL_API HttpPrefixHeadersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "HttpPrefixHeaders"; }

    AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;

    AWS_RESTXMLPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    
    inline const Aws::String& GetFoo() const { return m_foo; }
    inline bool FooHasBeenSet() const { return m_fooHasBeenSet; }
    template<typename FooT = Aws::String>
    void SetFoo(FooT&& value) { m_fooHasBeenSet = true; m_foo = std::forward<FooT>(value); }
    template<typename FooT = Aws::String>
    HttpPrefixHeadersRequest& WithFoo(FooT&& value) { SetFoo(std::forward<FooT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetFooMap() const { return m_fooMap; }
    inline bool FooMapHasBeenSet() const { return m_fooMapHasBeenSet; }
    template<typename FooMapT = Aws::Map<Aws::String, Aws::String>>
    void SetFooMap(FooMapT&& value) { m_fooMapHasBeenSet = true; m_fooMap = std::forward<FooMapT>(value); }
    template<typename FooMapT = Aws::Map<Aws::String, Aws::String>>
    HttpPrefixHeadersRequest& WithFooMap(FooMapT&& value) { SetFooMap(std::forward<FooMapT>(value)); return *this;}
    template<typename FooMapKeyT = Aws::String, typename FooMapValueT = Aws::String>
    HttpPrefixHeadersRequest& AddFooMap(FooMapKeyT&& key, FooMapValueT&& value) {
      m_fooMapHasBeenSet = true; m_fooMap.emplace(std::forward<FooMapKeyT>(key), std::forward<FooMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    HttpPrefixHeadersRequest& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_foo;
    bool m_fooHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_fooMap;
    bool m_fooMapHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
